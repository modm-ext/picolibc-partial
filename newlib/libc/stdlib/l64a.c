/* Copyright (c) 2002 Jeff Johnston <jjohnstn@redhat.com> */
/* l64a - convert long to radix-64 ascii string
 *
 * Conversion is performed on at most 32-bits of input value starting
 * from least significant bits to the most significant bits.
 *
 * The routine splits the input value into groups of 6 bits for up to
 * 32 bits of input.  This means that the last group may be 2 bits
 * (bits 30 and 31).
 *
 * Each group of 6 bits forms a value from 0-63 which is converted into
 * a character as follows:
 *         0 = '.'
 *         1 = '/'
 *         2-11 = '0' to '9'
 *        12-37 = 'A' to 'Z'
 *        38-63 = 'a' to 'z'
 *
 * When the remaining bits are zero or all 32 bits have been translated,
 * a nul terminator is appended to the resulting string.  An input value of
 * 0 results in an empty string.
 */

#define _DEFAULT_SOURCE
#include <stdlib.h>

static const char R64_ARRAY[] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char *
l64a (long value)
{
  char *ptr;
  char *result;
  int i, index;
  unsigned long tmp = (unsigned long)value & 0xffffffff;
  static __THREAD_LOCAL char _l64a_buf[8];

  result = _l64a_buf;
  ptr = result;

  for (i = 0; i < 6; ++i)
    {
      if (tmp == 0)
	{
	  *ptr = '\0';
	  break;
	}

      index = tmp & (64 - 1);
      *ptr++ = R64_ARRAY[index];
      tmp >>= 6;
    }

  return result;
}
