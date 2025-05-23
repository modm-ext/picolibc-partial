/* memcpy for the Visium processor.

   Copyright (c) 2015 Rolls-Royce Controls and Data Services Limited.
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

     * Redistributions of source code must retain the above copyright notice,
       this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of Rolls-Royce Controls and Data Services Limited nor
       the names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
   THE POSSIBILITY OF SUCH DAMAGE.  */

/* This file must be kept in sync with libgcc/config/visium/memcpy.c  */

#include <picolibc.h>

#include <stddef.h>
#include "memcpy.h"
#include "../../string/local.h"

#define INST_BARRIER   __asm__ __volatile__ ("":::"memory");

#define MOVE_32_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  INST_BARRIER			\
  m0 = in [4];			\
  m1 = in [5];			\
  m2 = in [6];			\
  m3 = in [7];			\
  out [4] = m0;			\
  out [5] = m1;			\
  out [6] = m2;			\
  out [7] = m3;			\
  INST_BARRIER			\
  m0 = in [8];			\
  m1 = in [9];			\
  m2 = in [10];			\
  m3 = in [11];			\
  out [8] = m0;			\
  out [9] = m1;			\
  out [10] = m2;		\
  out [11] = m3;		\
  INST_BARRIER			\
  m0 = in [12];			\
  m1 = in [13];			\
  m2 = in [14];			\
  m3 = in [15];			\
  out [12] = m0;		\
  out [13] = m1;		\
  out [14] = m2;		\
  out [15] = m3;		\
  INST_BARRIER			\
  m0 = in [16];			\
  m1 = in [17];			\
  m2 = in [18];			\
  m3 = in [19];			\
  out [16] = m0;		\
  out [17] = m1;		\
  out [18] = m2;		\
  out [19] = m3;		\
  INST_BARRIER			\
  m0 = in [20];			\
  m1 = in [21];			\
  m2 = in [22];			\
  m3 = in [23];			\
  out [20] = m0;		\
  out [21] = m1;		\
  out [22] = m2;		\
  out [23] = m3;		\
  INST_BARRIER			\
  m0 = in [24];			\
  m1 = in [25];			\
  m2 = in [26];			\
  m3 = in [27];			\
  out [24] = m0;		\
  out [25] = m1;		\
  out [26] = m2;		\
  out [27] = m3;		\
  INST_BARRIER			\
  m0 =	in [28];		\
  m1 = in [29];			\
  m2 = in [30];			\
  m3 = in [31];			\
  out [28] = m0;		\
  out [29] = m1;		\
  out [30] = m2;		\
  out [31] = m3;		\
  INST_BARRIER			\
  in += 32;			\
  out += 32;			\
} while(0)

#define MOVE_16_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  INST_BARRIER			\
  m0 = in [4];			\
  m1 = in [5];			\
  m2 = in [6];			\
  m3 = in [7];			\
  out [4] = m0;			\
  out [5] = m1;			\
  out [6] = m2;			\
  out [7] = m3;			\
  INST_BARRIER			\
  m0 = in [8];			\
  m1 = in [9];			\
  m2 = in [10];			\
  m3 = in [11];			\
  out [8] = m0;			\
  out [9] = m1;			\
  out [10] = m2;		\
  out [11] = m3;		\
  INST_BARRIER			\
  m0 = in [12];			\
  m1 = in [13];			\
  m2 = in [14];			\
  m3 = in [15];			\
  out [12] = m0;		\
  out [13] = m1;		\
  out [14] = m2;		\
  out [15] = m3;		\
  INST_BARRIER			\
  in += 16;			\
  out += 16;			\
} while(0)

#define MOVE_12_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  INST_BARRIER			\
  m0 = in [4];			\
  m1 = in [5];			\
  m2 = in [6];			\
  m3 = in [7];			\
  out [4] = m0;			\
  out [5] = m1;			\
  out [6] = m2;			\
  out [7] = m3;			\
  INST_BARRIER			\
  m0 = in [8];			\
  m1 = in [9];			\
  m2 = in [10];			\
  m3 = in [11];			\
  out [8] = m0;			\
  out [9] = m1;			\
  out [10] = m2;		\
  out [11] = m3;		\
  INST_BARRIER			\
  in += 12;			\
  out += 12;			\
} while(0)

#define MOVE_11_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  INST_BARRIER			\
  m0 = in [4];			\
  m1 = in [5];			\
  m2 = in [6];			\
  m3 = in [7];			\
  out [4] = m0;			\
  out [5] = m1;			\
  out [6] = m2;			\
  out [7] = m3;			\
  INST_BARRIER			\
  m0 = in [8];			\
  m1 = in [9];			\
  m2 = in [10];			\
  out [8] = m0;			\
  out [9] = m1;			\
  out [10] = m2;		\
  INST_BARRIER			\
  in += 11;			\
  out += 11;			\
} while(0)

#define MOVE_10_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  INST_BARRIER			\
  m0 = in [4];			\
  m1 = in [5];			\
  m2 = in [6];			\
  m3 = in [7];			\
  out [4] = m0;			\
  m0 = in [8];			\
  out [5] = m1;			\
  m1 = in [9];			\
  out [6] = m2;			\
  out [7] = m3;			\
  out [8] = m0;			\
  out [9] = m1;			\
  INST_BARRIER			\
  in += 10;			\
  out += 10;			\
} while(0)

#define MOVE_9_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  INST_BARRIER			\
  m0 = in [4];			\
  m1 = in [5];			\
  m2 = in [6];			\
  m3 = in [7];			\
  out [4] = m0;			\
  out [5] = m1;			\
  out [6] = m2;			\
  out [7] = m3;			\
  INST_BARRIER			\
  m0 = in [8];			\
  out [8] = m0;			\
  in += 9;			\
  out += 9;			\
} while(0)

#define MOVE_8_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  INST_BARRIER			\
  m0 = in [4];			\
  m1 = in [5];			\
  m2 = in [6];			\
  m3 = in [7];			\
  out [4] = m0;			\
  out [5] = m1;			\
  out [6] = m2;			\
  out [7] = m3;			\
  INST_BARRIER			\
  in += 8;			\
  out += 8;			\
} while(0)

#define MOVE_7_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  INST_BARRIER			\
  m0 = in [4];			\
  m1 = in [5];			\
  m2 = in [6];			\
  out [4] = m0;			\
  out [5] = m1;			\
  out [6] = m2;			\
  INST_BARRIER			\
  in += 7;			\
  out += 7;			\
} while(0)

#define MOVE_6_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  INST_BARRIER			\
  m0 = in [4];			\
  out [1] = m1;			\
  INST_BARRIER			\
  m1 = in [5];			\
  out [2] = m2;			\
  out [3] = m3;			\
  out [4] = m0;			\
  out [5] = m1;			\
  INST_BARRIER			\
  in += 6;			\
  out += 6;			\
} while(0)

#define MOVE_5_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  INST_BARRIER			\
  out [0] = m0;			\
  m0 = in [4];			\
  INST_BARRIER			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  out [4] = m0;			\
  INST_BARRIER			\
  in += 5;			\
  out += 5;			\
} while(0)

#define MOVE_4_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  m3 = in [3];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  out [3] = m3;			\
  INST_BARRIER			\
  in += 4;			\
  out += 4;			\
} while(0)

#define MOVE_3_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  m2 = in [2];			\
  out [0] = m0;			\
  out [1] = m1;			\
  out [2] = m2;			\
  INST_BARRIER			\
  in += 3;			\
  out += 3;			\
} while(0)

#define MOVE_2_OBJECTS(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  m1 = in [1];			\
  out [0] = m0;			\
  out [1] = m1;			\
  INST_BARRIER			\
  in += 2;			\
  out += 2;			\
} while(0)

#define MOVE_1_OBJECT(in,out)	\
do {				\
  INST_BARRIER			\
  m0 = in [0];			\
  out [0] = m0;			\
  INST_BARRIER			\
  in += 1;			\
  out += 1;			\
} while(0)


static inline void
__no_builtin
__int_memcpy (void *__restrict s1, const void *__restrict s2, size_t n)
{
  int value = n;
  int loop_var;
  const int *in = s2;
  int *out = s1;
  int count;
  int m0,m1,m2,m3;

  /* This code currently give a stall for any value with a 1->2 in the low 5
     bits, i.e.  1,2, 33,34 ? not acceptable!  */
  switch (value & 0x1f)
    {
    case 0:
      break;
    case 1:
      MOVE_1_OBJECT (in, out);
      break;
    case 2:
      MOVE_2_OBJECTS (in, out);
      break;
    case 3:
      MOVE_3_OBJECTS (in, out);
      break;
    case 4:
      MOVE_4_OBJECTS (in, out);
      break;
    case 5:
      MOVE_5_OBJECTS (in, out);
      break;
    case 6:
      MOVE_6_OBJECTS (in, out);
      break;
    case 7:
      MOVE_7_OBJECTS (in, out);
      break;
    case 8:
      MOVE_8_OBJECTS (in, out);
      break;
    case 9:
      MOVE_9_OBJECTS (in, out);
      break;
    case 10:
      MOVE_10_OBJECTS (in, out);
      break;
    case 11:
      MOVE_11_OBJECTS (in, out);
      break;
    case 12:
      MOVE_12_OBJECTS (in, out);
      break;
    case 13:
      MOVE_9_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 14:
      MOVE_12_OBJECTS (in, out);
      MOVE_2_OBJECTS (in, out);
      break;
    case 15:
      MOVE_11_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 16:
      MOVE_16_OBJECTS (in, out);
      break;
    case 17:
      MOVE_11_OBJECTS (in, out);
      MOVE_6_OBJECTS (in, out);
      break;
    case 18:
      MOVE_9_OBJECTS (in, out);
      MOVE_9_OBJECTS (in, out);
      break;
    case 19:
      MOVE_16_OBJECTS (in, out);
      MOVE_3_OBJECTS (in, out);
      break;
    case 20:
      MOVE_16_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 21:
      MOVE_16_OBJECTS (in, out);
      MOVE_5_OBJECTS (in, out);
      break;
    case 22:
      MOVE_16_OBJECTS (in, out);
      MOVE_6_OBJECTS (in, out);
      break;
    case 23:
      MOVE_16_OBJECTS (in, out);
      MOVE_7_OBJECTS (in, out);
      break;
    case 24:
      MOVE_16_OBJECTS (in, out);
      MOVE_8_OBJECTS (in, out);
      break;
    case 25:
      MOVE_16_OBJECTS (in, out);
      MOVE_9_OBJECTS (in, out);
      break;
    case 26:
      MOVE_16_OBJECTS (in, out);
      MOVE_10_OBJECTS (in, out);
      break;
    case 27:
      MOVE_16_OBJECTS (in, out);
      MOVE_11_OBJECTS (in, out);
      break;
    case 28:
      MOVE_16_OBJECTS (in, out);
      MOVE_8_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 29:
      MOVE_16_OBJECTS (in, out);
      MOVE_9_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 30:
      MOVE_16_OBJECTS (in, out);
      MOVE_12_OBJECTS (in, out);
      MOVE_2_OBJECTS (in, out);
      break;
    case 31:
      MOVE_16_OBJECTS (in, out);
      MOVE_11_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    }

  /* This loop governs the asmptoptic behaviour of this algorithm, for long
     word copies.  */
  count = value >> 5;
  for (loop_var = 0; loop_var < count; loop_var++)
    MOVE_32_OBJECTS (in, out);
}

static inline void
__no_builtin
__shrt_int_memcpy (void *__restrict s1, const void *__restrict s2, size_t n)
{
  int value = n;
  int loop_var;
  const short int *in = s2;
  int short *out = s1;
  int count;
  int m0,m1,m2,m3;

 /* This code currently give a stall for any value with a 1->2 in the low 5
    bits, i.e.  1,2, 33,34 ? not acceptable!  */
  switch (value & 0x1f)
    {
    case 0:
      break;
    case 1:
      MOVE_1_OBJECT (in, out);
      break;
    case 2:
      MOVE_2_OBJECTS (in, out);
      break;
    case 3:
      MOVE_3_OBJECTS (in, out);
      break;
    case 4:
      MOVE_4_OBJECTS (in, out);
      break;
    case 5:
      MOVE_5_OBJECTS (in, out);
      break;
    case 6:
      MOVE_6_OBJECTS (in, out);
      break;
    case 7:
      MOVE_7_OBJECTS (in, out);
      break;
    case 8:
      MOVE_8_OBJECTS (in, out);
      break;
    case 9:
      MOVE_9_OBJECTS (in, out);
      break;
    case 10:
      MOVE_10_OBJECTS (in, out);
      break;
    case 11:
      MOVE_11_OBJECTS (in, out);
      break;
    case 12:
      MOVE_12_OBJECTS (in, out);
      break;
    case 13:
      MOVE_9_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 14:
      MOVE_12_OBJECTS (in, out);
      MOVE_2_OBJECTS (in, out);
      break;
    case 15:
      MOVE_11_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 16:
      MOVE_16_OBJECTS (in, out);
      break;
    case 17:
      MOVE_11_OBJECTS (in, out);
      MOVE_6_OBJECTS (in, out);
      break;
    case 18:
      MOVE_9_OBJECTS (in, out);
      MOVE_9_OBJECTS (in, out);
      break;
    case 19:
      MOVE_16_OBJECTS (in, out);
      MOVE_3_OBJECTS (in, out);
      break;
    case 20:
      MOVE_16_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 21:
      MOVE_16_OBJECTS (in, out);
      MOVE_5_OBJECTS (in, out);
      break;
    case 22:
      MOVE_16_OBJECTS (in, out);
      MOVE_6_OBJECTS (in, out);
      break;
    case 23:
      MOVE_16_OBJECTS (in, out);
      MOVE_7_OBJECTS (in, out);
      break;
    case 24:
      MOVE_16_OBJECTS (in, out);
      MOVE_8_OBJECTS (in, out);
      break;
    case 25:
      MOVE_16_OBJECTS (in, out);
      MOVE_9_OBJECTS (in, out);
      break;
    case 26:
      MOVE_16_OBJECTS (in, out);
      MOVE_10_OBJECTS (in, out);
      break;
    case 27:
      MOVE_16_OBJECTS (in, out);
      MOVE_11_OBJECTS (in, out);
      break;
    case 28:
      MOVE_16_OBJECTS (in, out);
      MOVE_8_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 29:
      MOVE_16_OBJECTS (in, out);
      MOVE_9_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 30:
      MOVE_16_OBJECTS (in, out);
      MOVE_12_OBJECTS (in, out);
      MOVE_2_OBJECTS (in, out);
      break;
    case 31:
      MOVE_16_OBJECTS (in, out);
      MOVE_11_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    }

  /* This loop governs the asmptoptic behaviour of this algorithm, for long
     word copies.  */
  count = value >> 5;
  for (loop_var = 0; loop_var < count; loop_var++)
    MOVE_32_OBJECTS (in, out);
}


static inline void
__no_builtin
__byte_memcpy (void *__restrict s1, const void *__restrict s2, size_t n)
{
  int value = n;
  int loop_var;
  const char *in = s2;
  char *out = s1;
  int count;
  int m0,m1,m2,m3;

 /* This code currently give a stall for any value with a 1->2 in the low 5
    bits, i.e.  1,2, 33,34 ? not acceptable!  */
  switch (value & 0x1f)
    {
    case 0:
      break;
    case 1:
      MOVE_1_OBJECT (in, out);
      break;
    case 2:
      MOVE_2_OBJECTS (in, out);
      break;
    case 3:
      MOVE_3_OBJECTS (in, out);
      break;
    case 4:
      MOVE_4_OBJECTS (in, out);
      break;
    case 5:
      MOVE_5_OBJECTS (in, out);
      break;
    case 6:
      MOVE_6_OBJECTS (in, out);
      break;
    case 7:
      MOVE_7_OBJECTS (in, out);
      break;
    case 8:
      MOVE_8_OBJECTS (in, out);
      break;
    case 9:
      MOVE_9_OBJECTS (in, out);
      break;
    case 10:
      MOVE_10_OBJECTS (in, out);
      break;
    case 11:
      MOVE_11_OBJECTS (in, out);
      break;
    case 12:
      MOVE_12_OBJECTS (in, out);
      break;
    case 13:
      MOVE_9_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 14:
      MOVE_12_OBJECTS (in, out);
      MOVE_2_OBJECTS (in, out);
      break;
    case 15:
      MOVE_11_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 16:
      MOVE_16_OBJECTS (in, out);
      break;
    case 17:
      MOVE_11_OBJECTS (in, out);
      MOVE_6_OBJECTS (in, out);
      break;
    case 18:
      MOVE_9_OBJECTS (in, out);
      MOVE_9_OBJECTS (in, out);
      break;
    case 19:
      MOVE_16_OBJECTS (in, out);
      MOVE_3_OBJECTS (in, out);
      break;
    case 20:
      MOVE_16_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 21:
      MOVE_16_OBJECTS (in, out);
      MOVE_5_OBJECTS (in, out);
      break;
    case 22:
      MOVE_16_OBJECTS (in, out);
      MOVE_6_OBJECTS (in, out);
      break;
    case 23:
      MOVE_16_OBJECTS (in, out);
      MOVE_7_OBJECTS (in, out);
      break;
    case 24:
      MOVE_16_OBJECTS (in, out);
      MOVE_8_OBJECTS (in, out);
      break;
    case 25:
      MOVE_16_OBJECTS (in, out);
      MOVE_9_OBJECTS (in, out);
      break;
    case 26:
      MOVE_16_OBJECTS (in, out);
      MOVE_10_OBJECTS (in, out);
      break;
    case 27:
      MOVE_16_OBJECTS (in, out);
      MOVE_11_OBJECTS (in, out);
      break;
    case 28:
      MOVE_16_OBJECTS (in, out);
      MOVE_8_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 29:
      MOVE_16_OBJECTS (in, out);
      MOVE_9_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    case 30:
      MOVE_16_OBJECTS (in, out);
      MOVE_12_OBJECTS (in, out);
      MOVE_2_OBJECTS (in, out);
      break;
    case 31:
      MOVE_16_OBJECTS (in, out);
      MOVE_11_OBJECTS (in, out);
      MOVE_4_OBJECTS (in, out);
      break;
    }

  /* This loop governs the asmptoptic behaviour of this algorithm, for long
     word copies.  */
  count = value >> 5;
  for (loop_var = 0; loop_var < count; loop_var++)
    MOVE_32_OBJECTS (in, out);
}


/* Exposed interface.  */

void *
__no_builtin
memcpy (void *__restrict s1, const void *__restrict s2, size_t n)
{
  void *result = s1;

  /* None of the following handles copying zero bytes.  */
  if (n != 0)
    {
      unsigned test = (unsigned) s2 | (unsigned) s1 | (unsigned) n;

      if (test & 1)
	__byte_memcpy (s1, s2, n);
      else if (test & 2)
	__shrt_int_memcpy (s1, s2, n >> 1);
      else
#ifdef __VISIUM_ARCH_BMI__
	__asm__ __volatile__ ("bmd     %0,%1,%2"
			      : "+t" (s1), "+u" (s2), "+v" (n)
			      :
			      : "r4", "r5", "r6", "memory");
#else
	__int_memcpy (s1, s2, n >> 2);
#endif /* __VISIUM_ARCH_BMI__ */
    }

  return result;
}
