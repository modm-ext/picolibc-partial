/*
Copyright (c) 2016 Corinna Vinschen <corinna@vinschen.de>
Modified (m) 2017 Thomas Wolff: revise Unicode and locale/wchar handling
 */
#define _DEFAULT_SOURCE
#include <ctype.h>

#undef toascii_l

int
toascii_l (int c, locale_t locale)
{
  (void) locale;
  return c & 0177;
}
