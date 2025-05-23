/* lrint adapted to be llrint for Newlib, 2009 by Craig Howland.  */
/* @(#)s_lrint.c 5.1 93/09/24 */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */

/*
 * llrint(x)
 * Return x rounded to integral value according to the prevailing
 * rounding mode.
 * Method:
 *	Using floating addition.
 * Exception:
 *	Inexact flag raised if x not equal to llrint(x).
 */

#include "fdlibm.h"
#include <limits.h>

#ifdef _NEED_FLOAT64

static const double
/* Adding a double, x, to 2^52 will cause the result to be rounded based on
   the fractional part of x, according to the implementation's current rounding
   mode.  2^52 is the smallest double that can be represented using all 52 significant
   digits. */
TWO52[2]={
  _F_64(4.50359962737049600000e+15), /* 0x43300000, 0x00000000 */
 _F_64(-4.50359962737049600000e+15), /* 0xC3300000, 0x00000000 */
};

long long int
llrint64(__float64 x)
{
  __int32_t i0,j0,sx;
  __uint32_t i1;
  __float64 t;
  volatile __float64 w;
  long long int result;

  EXTRACT_WORDS(i0,i1,x);

  /* Extract sign bit. */
  sx = (i0>>31)&1;

  /* Extract exponent field. */
  j0 = ((i0 & 0x7ff00000) >> 20) - 1023;
  /* j0 in [-1023,1024] */

  if(j0 < 20)
    {
      /* j0 in [-1023,19] */
      w = TWO52[sx] + x;
      t = w - TWO52[sx];
      GET_HIGH_WORD(i0, t);
      /* Detect the all-zeros representation of plus and
         minus zero, which fails the calculation below. */
      if ((i0 & ~lsl((__int32_t) 1, 31)) == 0)
          return 0;
      j0 = ((i0 & 0x7ff00000) >> 20) - 1023;
      i0 &= 0x000fffff;
      i0 |= 0x00100000;
      result = (j0 < 0 ? 0 : i0 >> (20 - j0));
    }
  else if (j0 < (int)(8 * sizeof (long long int)) - 1)
    {
      /* 64bit return: j0 in [20,62] */
      if (j0 >= 52)
	/* 64bit return: j0 in [52,62] */
	/* 64bit return: left shift amt in [32,42] */
        result = lsl((long long int) ((i0 & 0x000fffff) | 0x00100000), (j0 - 20)) |
		/* 64bit return: right shift amt in [0,10] */
                   lsl((long long int) i1, (j0 - 52));
      else
        {
	  /* 64bit return: j0 in [20,51] */
          w = TWO52[sx] + x;
          t = w - TWO52[sx];
          EXTRACT_WORDS (i0, i1, t);
          j0 = ((i0 & 0x7ff00000) >> 20) - 1023;
          i0 &= 0x000fffff;
          i0 |= 0x00100000;
          /* After round:
	   * 64bit return: j0 in [20,52] */
	  /* 64bit return: left shift amt in [0,32] */
          /* ***64bit return: right shift amt in [32,0] */
          result = lsl((long long int) i0, (j0 - 20))
			| SAFE_RIGHT_SHIFT (i1, (52 - j0));
        }
    }
  else
    {
      if (sizeof (long long) == 4 && (__float64) LLONG_MIN - _F_64(1.0) < x && x < (__float64) LLONG_MIN) {
        if (nearbyint(x) == LLONG_MIN)
          __math_set_inexact64();
        else
          __math_set_invalid();
        return LLONG_MIN;
      }
      else if (x != LLONG_MIN)
      {
        __math_set_invalid();
        return sx ? LLONG_MIN : LLONG_MAX;
      }
      return (long long) x;
    }


  return sx ? -result : result;
}

_MATH_ALIAS_k_d(llrint)

#endif /* _NEED_FLOAT64 */
