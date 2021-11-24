/*
 * Copyright (c) 1994 Cygnus Support.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * and/or other materials related to such
 * distribution and use acknowledge that the software was developed
 * at Cygnus Support, Inc.  Cygnus Support, Inc. may not be used to
 * endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
#include "test.h"
 one_line_type acosh_vec[] = {
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff33333, 0x33333333},	/* -nan=f(-1.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff30a3d, 0x70a3d70a},	/* -nan=f(-1.19)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff2e147, 0xae147ae1},	/* -nan=f(-1.18)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff2b851, 0xeb851eb8},	/* -nan=f(-1.17)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff28f5c, 0x28f5c28f},	/* -nan=f(-1.16)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff26666, 0x66666666},	/* -nan=f(-1.15)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff23d70, 0xa3d70a3d},	/* -nan=f(-1.14)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff2147a, 0xe147ae14},	/* -nan=f(-1.13)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff1eb85, 0x1eb851eb},	/* -nan=f(-1.12)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff1c28f, 0x5c28f5c2},	/* -nan=f(-1.11)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff19999, 0x99999999},	/* -nan=f(-1.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff170a3, 0xd70a3d70},	/* -nan=f(-1.09)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff147ae, 0x147ae147},	/* -nan=f(-1.08)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff11eb8, 0x51eb851e},	/* -nan=f(-1.07)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff0f5c2, 0x8f5c28f5},	/* -nan=f(-1.06)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff0cccc, 0xcccccccc},	/* -nan=f(-1.05)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff0a3d7, 0x0a3d70a3},	/* -nan=f(-1.04)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff07ae1, 0x47ae147a},	/* -nan=f(-1.03)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff051eb, 0x851eb851},	/* -nan=f(-1.02)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff028f5, 0xc28f5c28},	/* -nan=f(-1.01)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfefffff, 0xfffffffe},	/* -nan=f(-1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfefae14, 0x7ae147ac},	/* -nan=f(-0.99)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfef5c28, 0xf5c28f5a},	/* -nan=f(-0.98)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfef0a3d, 0x70a3d708},	/* -nan=f(-0.97)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeeb851, 0xeb851eb6},	/* -nan=f(-0.96)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfee6666, 0x66666664},	/* -nan=f(-0.95)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfee147a, 0xe147ae12},	/* -nan=f(-0.94)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfedc28f, 0x5c28f5c0},	/* -nan=f(-0.93)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfed70a3, 0xd70a3d6e},	/* -nan=f(-0.92)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfed1eb8, 0x51eb851c},	/* -nan=f(-0.91)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeccccc, 0xccccccca},	/* -nan=f(-0.9)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfec7ae1, 0x47ae1478},	/* -nan=f(-0.89)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfec28f5, 0xc28f5c26},	/* -nan=f(-0.88)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfebd70a, 0x3d70a3d4},	/* -nan=f(-0.87)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeb851e, 0xb851eb82},	/* -nan=f(-0.86)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeb3333, 0x33333330},	/* -nan=f(-0.85)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeae147, 0xae147ade},	/* -nan=f(-0.84)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfea8f5c, 0x28f5c28c},	/* -nan=f(-0.83)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfea3d70, 0xa3d70a3a},	/* -nan=f(-0.82)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe9eb85, 0x1eb851e8},	/* -nan=f(-0.81)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe99999, 0x99999996},	/* -nan=f(-0.8)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe947ae, 0x147ae144},	/* -nan=f(-0.79)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe8f5c2, 0x8f5c28f2},	/* -nan=f(-0.78)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe8a3d7, 0x0a3d70a0},	/* -nan=f(-0.77)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe851eb, 0x851eb84e},	/* -nan=f(-0.76)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe7ffff, 0xfffffffc},	/* -nan=f(-0.75)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe7ae14, 0x7ae147aa},	/* -nan=f(-0.74)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe75c28, 0xf5c28f58},	/* -nan=f(-0.73)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe70a3d, 0x70a3d706},	/* -nan=f(-0.72)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe6b851, 0xeb851eb4},	/* -nan=f(-0.71)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe66666, 0x66666662},	/* -nan=f(-0.7)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe6147a, 0xe147ae10},	/* -nan=f(-0.69)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe5c28f, 0x5c28f5be},	/* -nan=f(-0.68)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe570a3, 0xd70a3d6c},	/* -nan=f(-0.67)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe51eb8, 0x51eb851a},	/* -nan=f(-0.66)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe4cccc, 0xccccccc8},	/* -nan=f(-0.65)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe47ae1, 0x47ae1476},	/* -nan=f(-0.64)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe428f5, 0xc28f5c24},	/* -nan=f(-0.63)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe3d70a, 0x3d70a3d2},	/* -nan=f(-0.62)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe3851e, 0xb851eb80},	/* -nan=f(-0.61)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe33333, 0x3333332e},	/* -nan=f(-0.6)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe2e147, 0xae147adc},	/* -nan=f(-0.59)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe28f5c, 0x28f5c28a},	/* -nan=f(-0.58)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe23d70, 0xa3d70a38},	/* -nan=f(-0.57)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe1eb85, 0x1eb851e6},	/* -nan=f(-0.56)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe19999, 0x99999994},	/* -nan=f(-0.55)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe147ae, 0x147ae142},	/* -nan=f(-0.54)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe0f5c2, 0x8f5c28f0},	/* -nan=f(-0.53)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe0a3d7, 0x0a3d709e},	/* -nan=f(-0.52)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe051eb, 0x851eb84c},	/* -nan=f(-0.51)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdfffff, 0xfffffff4},	/* -nan=f(-0.5)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdf5c28, 0xf5c28f50},	/* -nan=f(-0.49)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdeb851, 0xeb851eac},	/* -nan=f(-0.48)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfde147a, 0xe147ae08},	/* -nan=f(-0.47)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdd70a3, 0xd70a3d64},	/* -nan=f(-0.46)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdccccc, 0xccccccc0},	/* -nan=f(-0.45)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdc28f5, 0xc28f5c1c},	/* -nan=f(-0.44)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdb851e, 0xb851eb78},	/* -nan=f(-0.43)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdae147, 0xae147ad4},	/* -nan=f(-0.42)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfda3d70, 0xa3d70a30},	/* -nan=f(-0.41)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd99999, 0x9999998c},	/* -nan=f(-0.4)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd8f5c2, 0x8f5c28e8},	/* -nan=f(-0.39)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd851eb, 0x851eb844},	/* -nan=f(-0.38)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd7ae14, 0x7ae147a0},	/* -nan=f(-0.37)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd70a3d, 0x70a3d6fc},	/* -nan=f(-0.36)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd66666, 0x66666658},	/* -nan=f(-0.35)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd5c28f, 0x5c28f5b4},	/* -nan=f(-0.34)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd51eb8, 0x51eb8510},	/* -nan=f(-0.33)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd47ae1, 0x47ae146c},	/* -nan=f(-0.32)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd3d70a, 0x3d70a3c8},	/* -nan=f(-0.31)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd33333, 0x33333324},	/* -nan=f(-0.3)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd28f5c, 0x28f5c280},	/* -nan=f(-0.29)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd1eb85, 0x1eb851dc},	/* -nan=f(-0.28)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd147ae, 0x147ae138},	/* -nan=f(-0.27)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd0a3d7, 0x0a3d7094},	/* -nan=f(-0.26)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfcfffff, 0xffffffe0},	/* -nan=f(-0.25)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfceb851, 0xeb851e98},	/* -nan=f(-0.24)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfcd70a3, 0xd70a3d50},	/* -nan=f(-0.23)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfcc28f5, 0xc28f5c08},	/* -nan=f(-0.22)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfcae147, 0xae147ac0},	/* -nan=f(-0.21)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc99999, 0x99999978},	/* -nan=f(-0.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc851eb, 0x851eb830},	/* -nan=f(-0.19)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc70a3d, 0x70a3d6e8},	/* -nan=f(-0.18)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc5c28f, 0x5c28f5a0},	/* -nan=f(-0.17)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc47ae1, 0x47ae1458},	/* -nan=f(-0.16)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc33333, 0x33333310},	/* -nan=f(-0.15)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc1eb85, 0x1eb851c8},	/* -nan=f(-0.14)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc0a3d7, 0x0a3d7080},	/* -nan=f(-0.13)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfbeb851, 0xeb851e71},	/* -nan=f(-0.12)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfbc28f5, 0xc28f5be2},	/* -nan=f(-0.11)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfb99999, 0x99999953},	/* -nan=f(-0.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfb70a3d, 0x70a3d6c4},	/* -nan=f(-0.09)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfb47ae1, 0x47ae1435},	/* -nan=f(-0.08)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfb1eb85, 0x1eb851a6},	/* -nan=f(-0.07)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfaeb851, 0xeb851e2d},	/* -nan=f(-0.06)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfa99999, 0x9999990e},	/* -nan=f(-0.05)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfa47ae1, 0x47ae13ef},	/* -nan=f(-0.04)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbf9eb851, 0xeb851da0},	/* -nan=f(-0.03)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbf947ae1, 0x47ae1362},	/* -nan=f(-0.02)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbf847ae1, 0x47ae1249},	/* -nan=f(-0.01)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3cd19000, 0x00000000},	/* -nan=f(9.74915e-16)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3f847ae1, 0x47ae16ad},	/* -nan=f(0.01)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3f947ae1, 0x47ae1594},	/* -nan=f(0.02)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3f9eb851, 0xeb851fd2},	/* -nan=f(0.03)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fa47ae1, 0x47ae1508},	/* -nan=f(0.04)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fa99999, 0x99999a27},	/* -nan=f(0.05)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3faeb851, 0xeb851f46},	/* -nan=f(0.06)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fb1eb85, 0x1eb85232},	/* -nan=f(0.07)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fb47ae1, 0x47ae14c1},	/* -nan=f(0.08)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fb70a3d, 0x70a3d750},	/* -nan=f(0.09)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fb99999, 0x999999df},	/* -nan=f(0.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fbc28f5, 0xc28f5c6e},	/* -nan=f(0.11)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fbeb851, 0xeb851efd},	/* -nan=f(0.12)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fc0a3d7, 0x0a3d70c6},	/* -nan=f(0.13)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fc1eb85, 0x1eb8520e},	/* -nan=f(0.14)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fc33333, 0x33333356},	/* -nan=f(0.15)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fc47ae1, 0x47ae149e},	/* -nan=f(0.16)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fc5c28f, 0x5c28f5e6},	/* -nan=f(0.17)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fc70a3d, 0x70a3d72e},	/* -nan=f(0.18)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fc851eb, 0x851eb876},	/* -nan=f(0.19)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fc99999, 0x999999be},	/* -nan=f(0.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fcae147, 0xae147b06},	/* -nan=f(0.21)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fcc28f5, 0xc28f5c4e},	/* -nan=f(0.22)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fcd70a3, 0xd70a3d96},	/* -nan=f(0.23)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fceb851, 0xeb851ede},	/* -nan=f(0.24)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd00000, 0x00000013},	/* -nan=f(0.25)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd0a3d7, 0x0a3d70b7},	/* -nan=f(0.26)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd147ae, 0x147ae15b},	/* -nan=f(0.27)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd1eb85, 0x1eb851ff},	/* -nan=f(0.28)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd28f5c, 0x28f5c2a3},	/* -nan=f(0.29)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd33333, 0x33333347},	/* -nan=f(0.3)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd3d70a, 0x3d70a3eb},	/* -nan=f(0.31)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd47ae1, 0x47ae148f},	/* -nan=f(0.32)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd51eb8, 0x51eb8533},	/* -nan=f(0.33)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd5c28f, 0x5c28f5d7},	/* -nan=f(0.34)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd66666, 0x6666667b},	/* -nan=f(0.35)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd70a3d, 0x70a3d71f},	/* -nan=f(0.36)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd7ae14, 0x7ae147c3},	/* -nan=f(0.37)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd851eb, 0x851eb867},	/* -nan=f(0.38)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd8f5c2, 0x8f5c290b},	/* -nan=f(0.39)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fd99999, 0x999999af},	/* -nan=f(0.4)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fda3d70, 0xa3d70a53},	/* -nan=f(0.41)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fdae147, 0xae147af7},	/* -nan=f(0.42)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fdb851e, 0xb851eb9b},	/* -nan=f(0.43)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fdc28f5, 0xc28f5c3f},	/* -nan=f(0.44)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fdccccc, 0xcccccce3},	/* -nan=f(0.45)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fdd70a3, 0xd70a3d87},	/* -nan=f(0.46)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fde147a, 0xe147ae2b},	/* -nan=f(0.47)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fdeb851, 0xeb851ecf},	/* -nan=f(0.48)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fdf5c28, 0xf5c28f73},	/* -nan=f(0.49)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe00000, 0x0000000b},	/* -nan=f(0.5)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe051eb, 0x851eb85d},	/* -nan=f(0.51)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe0a3d7, 0x0a3d70af},	/* -nan=f(0.52)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe0f5c2, 0x8f5c2901},	/* -nan=f(0.53)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe147ae, 0x147ae153},	/* -nan=f(0.54)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe19999, 0x999999a5},	/* -nan=f(0.55)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe1eb85, 0x1eb851f7},	/* -nan=f(0.56)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe23d70, 0xa3d70a49},	/* -nan=f(0.57)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe28f5c, 0x28f5c29b},	/* -nan=f(0.58)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe2e147, 0xae147aed},	/* -nan=f(0.59)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe33333, 0x3333333f},	/* -nan=f(0.6)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe3851e, 0xb851eb91},	/* -nan=f(0.61)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe3d70a, 0x3d70a3e3},	/* -nan=f(0.62)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe428f5, 0xc28f5c35},	/* -nan=f(0.63)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe47ae1, 0x47ae1487},	/* -nan=f(0.64)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe4cccc, 0xccccccd9},	/* -nan=f(0.65)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe51eb8, 0x51eb852b},	/* -nan=f(0.66)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe570a3, 0xd70a3d7d},	/* -nan=f(0.67)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe5c28f, 0x5c28f5cf},	/* -nan=f(0.68)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe6147a, 0xe147ae21},	/* -nan=f(0.69)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe66666, 0x66666673},	/* -nan=f(0.7)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe6b851, 0xeb851ec5},	/* -nan=f(0.71)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe70a3d, 0x70a3d717},	/* -nan=f(0.72)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe75c28, 0xf5c28f69},	/* -nan=f(0.73)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe7ae14, 0x7ae147bb},	/* -nan=f(0.74)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe80000, 0x0000000d},	/* -nan=f(0.75)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe851eb, 0x851eb85f},	/* -nan=f(0.76)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe8a3d7, 0x0a3d70b1},	/* -nan=f(0.77)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe8f5c2, 0x8f5c2903},	/* -nan=f(0.78)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe947ae, 0x147ae155},	/* -nan=f(0.79)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe99999, 0x999999a7},	/* -nan=f(0.8)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe9eb85, 0x1eb851f9},	/* -nan=f(0.81)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fea3d70, 0xa3d70a4b},	/* -nan=f(0.82)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fea8f5c, 0x28f5c29d},	/* -nan=f(0.83)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3feae147, 0xae147aef},	/* -nan=f(0.84)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3feb3333, 0x33333341},	/* -nan=f(0.85)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3feb851e, 0xb851eb93},	/* -nan=f(0.86)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3febd70a, 0x3d70a3e5},	/* -nan=f(0.87)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fec28f5, 0xc28f5c37},	/* -nan=f(0.88)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fec7ae1, 0x47ae1489},	/* -nan=f(0.89)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3feccccc, 0xccccccdb},	/* -nan=f(0.9)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fed1eb8, 0x51eb852d},	/* -nan=f(0.91)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fed70a3, 0xd70a3d7f},	/* -nan=f(0.92)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fedc28f, 0x5c28f5d1},	/* -nan=f(0.93)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fee147a, 0xe147ae23},	/* -nan=f(0.94)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fee6666, 0x66666675},	/* -nan=f(0.95)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3feeb851, 0xeb851ec7},	/* -nan=f(0.96)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fef0a3d, 0x70a3d719},	/* -nan=f(0.97)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fef5c28, 0xf5c28f6b},	/* -nan=f(0.98)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fefae14, 0x7ae147bd},	/* -nan=f(0.99)*/
{62, 0,123,__LINE__, 0x3e6deeea, 0x11683f48, 0x3ff00000, 0x00000007},	/* 5.5755e-08=f(1)*/
{63, 0,123,__LINE__, 0x3fc2163d, 0xee5f07f8, 0x3ff028f5, 0xc28f5c30},	/* 0.141304=f(1.01)*/
{64, 0,123,__LINE__, 0x3fc98eb9, 0xe7e5fd58, 0x3ff051eb, 0x851eb859},	/* 0.199668=f(1.02)*/
{64, 0,123,__LINE__, 0x3fcf468e, 0x57434f4b, 0x3ff07ae1, 0x47ae1482},	/* 0.244341=f(1.03)*/
{64, 0,123,__LINE__, 0x3fd20ac9, 0x107d5e9a, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.281908=f(1.04)*/
{63, 0,123,__LINE__, 0x3fd427ba, 0x2a941da0, 0x3ff0cccc, 0xccccccd4},	/* 0.314925=f(1.05)*/
{64, 0,123,__LINE__, 0x3fd60f95, 0x22de1cc2, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.344701=f(1.06)*/
{63, 0,123,__LINE__, 0x3fd7cf1f, 0x7a34d793, 0x3ff11eb8, 0x51eb8526},	/* 0.372017=f(1.07)*/
{63, 0,123,__LINE__, 0x3fd96ead, 0x72fe8b7a, 0x3ff147ae, 0x147ae14f},	/* 0.39738=f(1.08)*/
{63, 0,123,__LINE__, 0x3fdaf409, 0x85d31cf9, 0x3ff170a3, 0xd70a3d78},	/* 0.421145=f(1.09)*/
{64, 0,123,__LINE__, 0x3fdc636c, 0x1a882f69, 0x3ff19999, 0x999999a1},	/* 0.443568=f(1.1)*/
{63, 0,123,__LINE__, 0x3fddc005, 0x97e5fb4e, 0x3ff1c28f, 0x5c28f5ca},	/* 0.464845=f(1.11)*/
{64, 0,123,__LINE__, 0x3fdf0c50, 0xde26552c, 0x3ff1eb85, 0x1eb851f3},	/* 0.485127=f(1.12)*/
{64, 0,123,__LINE__, 0x3fe02523, 0xa6a3357e, 0x3ff2147a, 0xe147ae1c},	/* 0.504534=f(1.13)*/
{64, 0,123,__LINE__, 0x3fe0bdc1, 0x86cd1a78, 0x3ff23d70, 0xa3d70a45},	/* 0.523164=f(1.14)*/
{63, 0,123,__LINE__, 0x3fe150ab, 0x3dddd7d1, 0x3ff26666, 0x6666666e},	/* 0.541097=f(1.15)*/
{64, 0,123,__LINE__, 0x3fe1de6e, 0x5347350c, 0x3ff28f5c, 0x28f5c297},	/* 0.558402=f(1.16)*/
{63, 0,123,__LINE__, 0x3fe26782, 0x9cd65ec4, 0x3ff2b851, 0xeb851ec0},	/* 0.575136=f(1.17)*/
{64, 0,123,__LINE__, 0x3fe2ec4e, 0xa565fcda, 0x3ff2e147, 0xae147ae9},	/* 0.591346=f(1.18)*/
{64, 0,123,__LINE__, 0x3fe36d2a, 0xfd6a7945, 0x3ff30a3d, 0x70a3d712},	/* 0.607076=f(1.19)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc01921fb, 0x54442d18},	/* -nan=f(-6.28319)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc012d97c, 0x7f3321d2},	/* -nan=f(-4.71239)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc00921fb, 0x54442d18},	/* -nan=f(-3.14159)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff921fb, 0x54442d18},	/* -nan=f(-1.5708)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x00000000, 0x00000000},	/* -nan=f(0)*/
{64, 0,123,__LINE__, 0x3ff05f23, 0xc6cbaf31, 0x3ff921fb, 0x54442d18},	/* 1.02323=f(1.5708)*/
{63, 0,123,__LINE__, 0x3ffcfc02, 0xf90106c1, 0x400921fb, 0x54442d18},	/* 1.81153=f(3.14159)*/
{64, 0,123,__LINE__, 0x4001dae8, 0xc0b16d3a, 0x4012d97c, 0x7f3321d2},	/* 2.23189=f(4.71239)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc03e0000, 0x00000000},	/* -nan=f(-30)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc03c4ccc, 0xcccccccd},	/* -nan=f(-28.3)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc03a9999, 0x9999999a},	/* -nan=f(-26.6)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc038e666, 0x66666667},	/* -nan=f(-24.9)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0373333, 0x33333334},	/* -nan=f(-23.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0358000, 0x00000001},	/* -nan=f(-21.5)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc033cccc, 0xccccccce},	/* -nan=f(-19.8)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0321999, 0x9999999b},	/* -nan=f(-18.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0306666, 0x66666668},	/* -nan=f(-16.4)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc02d6666, 0x6666666a},	/* -nan=f(-14.7)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc02a0000, 0x00000004},	/* -nan=f(-13)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0269999, 0x9999999e},	/* -nan=f(-11.3)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0233333, 0x33333338},	/* -nan=f(-9.6)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc01f9999, 0x999999a3},	/* -nan=f(-7.9)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc018cccc, 0xccccccd6},	/* -nan=f(-6.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0120000, 0x00000009},	/* -nan=f(-4.5)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0066666, 0x66666678},	/* -nan=f(-2.8)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff19999, 0x999999bd},	/* -nan=f(-1.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3fe33333, 0x333332ec},	/* -nan=f(0.6)*/
{64, 0,123,__LINE__, 0x3ff799c8, 0x8e7913fb, 0x40026666, 0x66666654},	/* 1.47504=f(2.3)*/
{64, 0,123,__LINE__, 0x400081eb, 0x4b42158d, 0x400fffff, 0xffffffee},	/* 2.06344=f(4)*/
{64, 0,123,__LINE__, 0x40036818, 0xad5efded, 0x4016cccc, 0xccccccc4},	/* 2.42583=f(5.7)*/
{64, 0,123,__LINE__, 0x4005852e, 0x905215c9, 0x401d9999, 0x99999991},	/* 2.69003=f(7.4)*/
{64, 0,123,__LINE__, 0x40072fe6, 0x812dfbf7, 0x40223333, 0x3333332f},	/* 2.89839=f(9.1)*/
{64, 0,123,__LINE__, 0x40089078, 0xdf0e2775, 0x40259999, 0x99999995},	/* 3.07054=f(10.8)*/
{64, 0,123,__LINE__, 0x4009bcf9, 0x1653a9ba, 0x4028ffff, 0xfffffffb},	/* 3.21727=f(12.5)*/
{64, 0,123,__LINE__, 0x400ac2dc, 0x6e1e5efd, 0x402c6666, 0x66666661},	/* 3.34515=f(14.2)*/
{64, 0,123,__LINE__, 0x400baaf5, 0x6e4f1835, 0x402fcccc, 0xccccccc7},	/* 3.45848=f(15.9)*/
{63, 0,123,__LINE__, 0x400c7b5e, 0x132b5045, 0x40319999, 0x99999997},	/* 3.56024=f(17.6)*/
{64, 0,123,__LINE__, 0x400d387c, 0x181abbba, 0x40334ccc, 0xccccccca},	/* 3.65258=f(19.3)*/
{64, 0,123,__LINE__, 0x400de595, 0xdc406bd2, 0x4034ffff, 0xfffffffd},	/* 3.7371=f(21)*/
{64, 0,123,__LINE__, 0x400e852c, 0xa8e313ce, 0x4036b333, 0x33333330},	/* 3.81503=f(22.7)*/
{64, 0,123,__LINE__, 0x400f1936, 0x0e3b986c, 0x40386666, 0x66666663},	/* 3.88731=f(24.4)*/
{63, 0,123,__LINE__, 0x400fa341, 0xc64646d8, 0x403a1999, 0x99999996},	/* 3.95472=f(26.1)*/
{64, 0,123,__LINE__, 0x40101249, 0xc6ea2cbb, 0x403bcccc, 0xccccccc9},	/* 4.01786=f(27.8)*/
{64, 0,123,__LINE__, 0x40104f1a, 0xa2d94c29, 0x403d7fff, 0xfffffffc},	/* 4.07725=f(29.5)*/
{0}
};
void test_acosh(int m)   {run_vector_1(m,acosh_vec,(char *)(acosh),"acosh","dd");   }
