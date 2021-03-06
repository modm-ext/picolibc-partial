/*
Copyright (c) 1994 Cygnus Support.
All rights reserved.

Redistribution and use in source and binary forms are permitted
provided that the above copyright notice and this paragraph are
duplicated in all such forms and that any documentation,
and/or other materials related to such
distribution and use acknowledge that the software was developed
at Cygnus Support, Inc.  Cygnus Support, Inc. may not be used to
endorse or promote products derived from this software without
specific prior written permission.
THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
/* NetWare can not use this implementation of clock, since it does not
   have times or any similar function.  It provides its own version of
   clock in clib.nlm.  If we can not use clib.nlm, then we must write
   clock in sys/netware.  */

#ifdef CLOCK_PROVIDED

int _dummy_clock = 1;

#else

/*
 * clock.c
 * Original Author:	G. Haley
 *
 * Determines the processor time used by the program since invocation. The time
 * in seconds is the value returned divided by the value of the macro CLK_TCK.
 * If the processor time used is not available, (clock_t) -1 is returned.
 */

/*
FUNCTION
<<clock>>---cumulative processor time

INDEX
	clock

SYNOPSIS
	#include <time.h>
	clock_t clock(void);

DESCRIPTION
Calculates the best available approximation of the cumulative amount
of time used by your program since it started.  To convert the result
into seconds, divide by the macro <<CLOCKS_PER_SEC>>.

RETURNS
The amount of processor time used so far by your program, in units
defined by the machine-dependent macro <<CLOCKS_PER_SEC>>.  If no
measurement is available, the result is (clock_t)<<-1>>.

PORTABILITY
ANSI C requires <<clock>> and <<CLOCKS_PER_SEC>>.

Supporting OS subroutine required: <<times>>.
*/

#include <time.h>
#include <sys/times.h>

clock_t
clock (void)
{
  struct tms tim_s;
  clock_t res;

  if ((res = (clock_t) times (&tim_s)) != (clock_t) -1)
    res = (clock_t) (tim_s.tms_utime + tim_s.tms_stime +
		     tim_s.tms_cutime + tim_s.tms_cstime);

  return res;
}

#endif /* CLOCK_PROVIDED */
