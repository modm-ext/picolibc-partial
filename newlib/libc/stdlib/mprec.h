/****************************************************************
 *
 * The author of this software is David M. Gay.
 *
 * Copyright (c) 1991 by AT&T.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software and in all copies of the supporting
 * documentation for such software.
 *
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, NEITHER THE AUTHOR NOR AT&T MAKES ANY
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 ***************************************************************/

/* Please send bug reports to
	David M. Gay
	AT&T Bell Laboratories, Room 2C-463
	600 Mountain Avenue
	Murray Hill, NJ 07974-2070
	U.S.A.
	dmg@research.att.com or research!dmg
 */

#include <machine/ieeefp.h>
#include <math.h>
#include <float.h>
#include <errno.h>
#include <assert.h>
#include <sys/types.h>
#include "local.h"

#ifdef __IEEE_LITTLE_ENDIAN
#define IEEE_8087
#endif

#ifdef __IEEE_BIG_ENDIAN
#define IEEE_MC68k
#endif

#ifdef __Z8000__
#define Just_16
#endif

#ifdef DEBUG
#include "stdio.h"
#define Bug(x) {fprintf(stderr, "%s\n", x); exit(1);}
#endif

#ifdef Unsigned_Shifts
#define Sign_Extend(a,b) if (b < 0) a |= (__uint32_t)0xffff0000;
#else
#define Sign_Extend(a,b) /*no-op*/
#endif

#if defined(IEEE_8087) + defined(IEEE_MC68k) + defined(VAX) + defined(IBM) != 1
Exactly one of IEEE_8087, IEEE_MC68k, VAX, or IBM should be defined.
#endif

/* If we are going to examine or modify specific bits in a double using
   the word0 and/or word1 macros, then we must wrap the double inside
   a union.  This is necessary to avoid undefined behavior according to
   the ANSI C spec.  */
union double_union
{
  double d;
  __uint32_t i[2];
};

#ifdef IEEE_8087
#define word0(x) (x.i[1])
#define word1(x) (x.i[0])
#else
#define word0(x) (x.i[0])
#define word1(x) (x.i[1])
#endif

/* The following is taken from gdtoaimp.h for use with new strtod, but
   adjusted to avoid invalid type-punning.  */
typedef __int32_t Long;

/* Unfortunately, because __ULong might be a different type than
   __uint32_t, we can't re-use union double_union as-is without
   further edits in strtod.c.  */
typedef union { double d; __ULong i[2]; } U;

#define dword0(x) word0(x)
#define dword1(x) word1(x)
#define dval(x) (x.d)

#undef SI
#ifdef Sudden_Underflow
#define SI 1
#else
#define SI 0
#endif

#define Storeinc(a,b,c) (*(a)++ = ((b) << 16) | ((c) & 0xffff))

/* #define P DBL_MANT_DIG */
/* Ten_pmax = floor(P*log(2)/log(5)) */
/* Bletch = (highest power of 2 < DBL_MAX_10_EXP) / 16 */
/* Quick_max = floor((P-1)*log(FLT_RADIX)/log(10) - 1) */
/* Int_max = floor(P*log(FLT_RADIX)/log(10) - 1) */

#if defined(IEEE_8087) + defined(IEEE_MC68k)
#if defined (_DOUBLE_IS_32BITS)
#define Exp_shift   23
#define Exp_shift1  23
#define Exp_msk1    ((__uint32_t)0x00800000L)
#define Exp_msk11   ((__uint32_t)0x00800000L)
#define Exp_mask    ((__uint32_t)0x7f800000L)
#define P    	    24
#define Bias 	    127
#define NO_HEX_FP   /* not supported in this case */
#define IEEE_Arith
#define Emin        (-126)
#define Exp_1       ((__uint32_t)0x3f800000L)
#define Exp_11      ((__uint32_t)0x3f800000L)
#define Ebits 	    8
#define Frac_mask   ((__uint32_t)0x007fffffL)
#define Frac_mask1  ((__uint32_t)0x007fffffL)
#define Ten_pmax    10
#define Sign_bit    ((__uint32_t)0x80000000L)
#define Ten_pmax    10
#define Bletch	    2
#define Bndry_mask  ((__uint32_t)0x007fffffL)
#define Bndry_mask1 ((__uint32_t)0x007fffffL)
#define LSB 1
#define Sign_bit    ((__uint32_t)0x80000000L)
#define Log2P 	    1
#define Tiny0 	    0
#define Tiny1 	    1
#define Quick_max   5
#define Int_max     6
#define Infinite(x) (word0(x) == ((__uint32_t)0x7f800000L))
#undef word0
#undef word1
#undef dword0
#undef dword1

#define word0(x) (x.i[0])
#define word1(x) 0
#define dword0(x) word0(x)
#define dword1(x) 0
#else

#define Exp_shift  20
#define Exp_shift1 20
#define Exp_msk1    ((__uint32_t)0x100000L)
#define Exp_msk11   ((__uint32_t)0x100000L)
#define Exp_mask  ((__uint32_t)0x7ff00000L)
#define P 53
#define Bias 1023
#define IEEE_Arith
#define Emin (-1022)
#define Exp_1  ((__uint32_t)0x3ff00000L)
#define Exp_11 ((__uint32_t)0x3ff00000L)
#define Ebits 11
#define Frac_mask  ((__uint32_t)0xfffffL)
#define Frac_mask1 ((__uint32_t)0xfffffL)
#define Ten_pmax 22
#define Bletch 0x10
#define Bndry_mask  ((__uint32_t)0xfffffL)
#define Bndry_mask1 ((__uint32_t)0xfffffL)
#define LSB 1
#define Sign_bit ((__uint32_t)0x80000000L)
#define Log2P 1
#define Tiny0 0
#define Tiny1 1
#define Quick_max 14
#define Int_max 14
#define Infinite(x) (word0(x) == ((__uint32_t)0x7ff00000L)) /* sufficient test for here */

#endif /* !_DOUBLE_IS_32BITS */

#ifndef Flt_Rounds
#ifdef FLT_ROUNDS
#define Flt_Rounds FLT_ROUNDS
#else
#define Flt_Rounds 1
#endif
#endif /*Flt_Rounds*/

#else /* !IEEE_8087 && !IEEE_MC68k */
#undef  Sudden_Underflow
#define Sudden_Underflow
#ifdef IBM
#define Flt_Rounds 0
#define Exp_shift  24
#define Exp_shift1 24
#define Exp_msk1   ((__uint32_t)0x1000000L)
#define Exp_msk11  ((__uint32_t)0x1000000L)
#define Exp_mask  ((__uint32_t)0x7f000000L)
#define P 14
#define Bias 65
#define Exp_1  ((__uint32_t)0x41000000L)
#define Exp_11 ((__uint32_t)0x41000000L)
#define Ebits 8	/* exponent has 7 bits, but 8 is the right value in b2d */
#define Frac_mask  ((__uint32_t)0xffffffL)
#define Frac_mask1 ((__uint32_t)0xffffffL)
#define Bletch 4
#define Ten_pmax 22
#define Bndry_mask  ((__uint32_t)0xefffffL)
#define Bndry_mask1 ((__uint32_t)0xffffffL)
#define LSB 1
#define Sign_bit ((__uint32_t)0x80000000L)
#define Log2P 4
#define Tiny0 ((__uint32_t)0x100000L)
#define Tiny1 0
#define Quick_max 14
#define Int_max 15
#else /* VAX */
#define Flt_Rounds 1
#define Exp_shift  23
#define Exp_shift1 7
#define Exp_msk1    0x80
#define Exp_msk11   ((__uint32_t)0x800000L)
#define Exp_mask  ((__uint32_t)0x7f80L)
#define P 56
#define Bias 129
#define Exp_1  ((__uint32_t)0x40800000L)
#define Exp_11 ((__uint32_t)0x4080L)
#define Ebits 8
#define Frac_mask  ((__uint32_t)0x7fffffL)
#define Frac_mask1 ((__uint32_t)0xffff007fL)
#define Ten_pmax 24
#define Bletch 2
#define Bndry_mask  ((__uint32_t)0xffff007fL)
#define Bndry_mask1 ((__uint32_t)0xffff007fL)
#define LSB ((__uint32_t)0x10000L)
#define Sign_bit ((__uint32_t)0x8000L)
#define Log2P 1
#define Tiny0 0x80
#define Tiny1 0
#define Quick_max 15
#define Int_max 15
#endif
#endif

#ifndef IEEE_Arith
#define ROUND_BIASED
#else
#define Scale_Bit 0x10
#if defined(_DOUBLE_IS_32BITS) && defined(__v800)
#define n_bigtens 2
#else
#define n_bigtens 5
#endif
#endif

#ifdef IBM
#define n_bigtens 3
#endif

#ifdef VAX
#define n_bigtens 2
#endif

#ifndef __NO_INFNAN_CHECK
#define INFNAN_CHECK
#endif

#ifdef RND_PRODQUOT
#define rounded_product(a,b) a = rnd_prod(a, b)
#define rounded_quotient(a,b) a = rnd_quot(a, b)
#ifdef KR_headers
extern double rnd_prod(), rnd_quot();
#else
extern double rnd_prod(double, double), rnd_quot(double, double);
#endif
#else
#define rounded_product(a,b) a *= b
#define rounded_quotient(a,b) a /= b
#endif

#define Big0 (Frac_mask1 | Exp_msk1*(DBL_MAX_EXP+Bias-1))
#define Big1 ((__uint32_t)0xffffffffL)

#ifndef Just_16
/* When Pack_32 is not defined, we store 16 bits per 32-bit long.
 * This makes some inner loops simpler and sometimes saves work
 * during multiplications, but it often seems to make things slightly
 * slower.  Hence the default is now to store 32 bits per long.
 */

 #ifndef Pack_32
  #define Pack_32
 #endif
#else  /* Just_16 */
 #ifndef Pack_16
  #define Pack_16
 #endif
#endif /* Just_16 */

#ifdef Pack_32
#define ULbits 32
#define kshift 5
#define kmask 31
#define ALL_ON 0xffffffff
#else
#define ULbits 16
#define kshift 4
#define kmask 15
#define ALL_ON 0xffff
#endif

typedef struct _Bigint _Bigint;

#define Balloc	_Balloc
#define Bfree	_Bfree
#define multadd __multadd
#define s2b	__s2b
#define lo0bits __lo0bits
#define hi0bits __hi0bits
#define i2b	__i2b
#define mult	__multiply
#define pow5mult	__pow5mult
#define lshift	__lshift
#define match   __match
#define cmp	__mcmp
#define diff	__mdiff
#define ulp 	__ulp
#define b2d	__b2d
#define d2b	__d2b
#define ratio	__ratio
#define any_on	__any_on
#define gethex  __gethex
#define copybits 	__copybits
#define hexnan	__hexnan

#if !defined(__PREFER_SIZE_OVER_SPEED) && !defined(__OPTIMIZE_SIZE__) && !defined(_SMALL_HEXDIG)
#define __get_hexdig(x) __hexdig[x] /* NOTE: must evaluate arg only once */
#else /* !defined(__PREFER_SIZE_OVER_SPEED) && !defined(__OPTIMIZE_SIZE__) && !defined(_SMALL_HEXDIG) */
#define __get_hexdig(x) __hexdig_fun(x)
#endif /* !defined(__PREFER_SIZE_OVER_SPEED) && !defined(__OPTIMIZE_SIZE__) && !defined(_SMALL_HEXDIG) */

#define tens __mprec_tens
#define bigtens __mprec_bigtens
#define tinytens __mprec_tinytens

char *__alloc_dtoa_result(int len);

int __mprec_register_exit(void);

struct _Bigint
{
  int _k, _maxwds, _sign, _wds;
  uint32_t _x[];
};

struct FPI;
double 		ulp (double x);
double		b2d (_Bigint *a , int *e);
_Bigint *	Balloc (int k);
void 		Bfree (_Bigint *v);
_Bigint *	multadd (_Bigint *, int, int);
_Bigint *	s2b (const char*, int, int, __ULong);
_Bigint	*	i2b (int);
_Bigint *	mult (_Bigint *, _Bigint *);
_Bigint *	pow5mult (_Bigint *, int k);
int 		hi0bits (__ULong);
int 		lo0bits (__ULong *);
_Bigint *	d2b (double d, int *e, int *bits);
_Bigint *	lshift (_Bigint *b, int k);
int		match (const char**, char*);
_Bigint *	diff (_Bigint *a, _Bigint *b);
int		cmp (_Bigint *a, _Bigint *b);
int		gethex (const char **sp, const struct FPI *fpi, Long *exp, _Bigint **bp, int sign, locale_t loc);
double		ratio (_Bigint *a, _Bigint *b);
__ULong		any_on (_Bigint *b, int k);
void		copybits (__ULong *c, int n, _Bigint *b);
double		_strtod_l (const char *__restrict s00,
			   char **__restrict se, locale_t loc);
#if defined(__HAVE_LONG_DOUBLE) && !defined (_LDBL_EQ_DBL) || 1
int		_strtorx_l (const char *, char **, int,
			    void *, locale_t);
int		_strtodg_l (const char *s00, char **se,
			    struct FPI *fpi, Long *exp, __ULong *bits,
			    locale_t);
#endif /* __HAVE_LONG_DOUBLE && !_LDBL_EQ_DBL */

#if defined(__PREFER_SIZE_OVER_SPEED) || defined(__OPTIMIZE_SIZE__) || defined(_SMALL_HEXDIG)
unsigned char __hexdig_fun (unsigned char);
#endif /* !defined(__PREFER_SIZE_OVER_SPEED) && !defined(__OPTIMIZE_SIZE__) && !defined(_SMALL_HEXDIG) */
#ifdef INFNAN_CHECK
int		hexnan (const char **sp, const struct FPI *fpi, __ULong *x0);
#endif

#define Bcopy(x,y) memcpy((char *)&x->_sign, (char *)&y->_sign, y->_wds*sizeof(__Long) + 2*sizeof(int))

extern const double tinytens[];
extern const double bigtens[];
extern const double tens[];
#if !defined(__PREFER_SIZE_OVER_SPEED) && !defined(__OPTIMIZE_SIZE__) && !defined(_SMALL_HEXDIG)
extern const unsigned char __hexdig[];
#endif /* !defined(__PREFER_SIZE_OVER_SPEED) && !defined(__OPTIMIZE_SIZE__) && !defined(_SMALL_HEXDIG) */


double _mprec_log10 (int);
