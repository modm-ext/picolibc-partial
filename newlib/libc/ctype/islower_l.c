/*
Copyright (c) 2016 Corinna Vinschen <corinna@vinschen.de>
Modified (m) 2017 Thomas Wolff: revise Unicode and locale/wchar handling
 */
#define _DEFAULT_SOURCE
#include <_ansi.h>
#include <ctype.h>

#undef islower_l
int
islower_l (int c, struct __locale_t *locale)
{
#if _PICOLIBC_CTYPE_SMALL
    (void) locale;
    return islower(c);
#else
    return (__locale_ctype_ptr_l (locale)[c+1] & (_U|_L)) == _L;
#endif
}
