/* Copyright (c) 2002 Red Hat Incorporated.
   All rights reserved.
   Modified (m) 2017 Thomas Wolff to refer to generated Unicode data tables.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

     Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

     Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.

     The name of Red Hat Incorporated may not be used to endorse
     or promote products derived from this software without specific
     prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED.  IN NO EVENT SHALL RED HAT INCORPORATED BE LIABLE FOR ANY
   DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
   ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
FUNCTION
	<<towlower>>, <<towlower_l>>---translate wide characters to lowercase

INDEX
	towlower

INDEX
	towlower_l

SYNOPSIS
	#include <wctype.h>
	wint_t towlower(wint_t <[c]>);

	#include <wctype.h>
	wint_t towlower_l(wint_t <[c]>, locale_t <[locale]>);


DESCRIPTION
<<towlower>> is a function which converts uppercase wide characters to
lowercase, leaving all other characters unchanged.

<<towlower_l>> is like <<towlower>> but performs the function based on the
locale specified by the locale object locale.  If <[locale]> is
LC_GLOBAL_LOCALE or not a valid locale object, the behaviour is undefined.

RETURNS
<<towlower>>, <<towlower_l>> return the lowercase equivalent of <[c]> when it is a
uppercase wide character; otherwise, it returns the input character.

PORTABILITY
<<towlower>> is C99.
<<towlower_l>> is POSIX-1.2008.

No supporting OS subroutines are required.
*/

#define _DEFAULT_SOURCE
#include <ctype.h>
#include <wctype.h>
#include "local.h"

wint_t
towlower (wint_t c)
{
#ifdef __MB_CAPABLE
  return towlower_l(c, 0);
#else
  return c < 0x00ff ? (wint_t)(tolower ((int)c)) : c;
#endif /* __MB_CAPABLE */
}
