/*
Copyright (c) 2003 Corinna Vinschen <corinna@vinschen.de>
 */
/*
FUNCTION
	<<wcswidth>>---number of column positions of a wide-character string

INDEX
	wcswidth

SYNOPSIS
	#include <wchar.h>
	int wcswidth(const wchar_t *<[pwcs]>, size_t <[n]>);

DESCRIPTION
	The <<wcswidth>> function shall determine the number of column
	positions required for <[n]> wide-character codes (or fewer than <[n]>
	wide-character codes if a null wide-character code is encountered
	before <[n]> wide-character codes are exhausted) in the string pointed
	to by <[pwcs]>.

RETURNS
	The <<wcswidth>> function either shall return 0 (if <[pwcs]> points to a
	null wide-character code), or return the number of column positions
	to be occupied by the wide-character string pointed to by <[pwcs]>, or
	return -1 (if any of the first <[n]> wide-character codes in the
	wide-character string pointed to by <[pwcs]> is not a printable
	wide-character code).

PORTABILITY
<<wcswidth>> has been introduced in the Single UNIX Specification Volume 2.
<<wcswidth>> has been marked as an extension in the Single UNIX Specification Volume 3.
*/

#define _XOPEN_SOURCE
#include <wchar.h>
#include <stdint.h>
#include "local.h"

int
wcswidth (const wchar_t *pwcs,
	size_t n)

{
  int w, len = 0;
  if (!pwcs || n == 0)
    return 0;
  do {
    uint32_t wi = (uint32_t) *pwcs;

#ifdef __MB_CAPABLE
  /* First half of a surrogate pair? */
  if (sizeof (wchar_t) == 2 && wi >= (uint32_t) 0xd800 && wi <= (uint32_t) 0xdbff)
    {
      uint32_t wi2;

      /* Extract second half and check for validity. */
      if (--n == 0 || (wi2 = *++pwcs) < (uint32_t) 0xdc00 || wi2 > (uint32_t) 0xdfff)
	return -1;
      /* Compute actual unicode value to use in call to __wcwidth. */
      wi = (((wi & 0x3ff) << 10) | (wi2 & 0x3ff)) + 0x10000;
    }
#endif /* __MB_CAPABLE */
    if ((w = __wcwidth (wi)) < 0)
      return -1;
    len += w;
  } while (*pwcs++ && --n > 0);
  return len;
}
