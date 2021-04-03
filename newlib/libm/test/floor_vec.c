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
 one_line_type floor_vec[] = {
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff33333, 0x33333333},	/* -2=f(-1.2)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff30a3d, 0x70a3d70a},	/* -2=f(-1.19)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff2e147, 0xae147ae1},	/* -2=f(-1.18)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff2b851, 0xeb851eb8},	/* -2=f(-1.17)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff28f5c, 0x28f5c28f},	/* -2=f(-1.16)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff26666, 0x66666666},	/* -2=f(-1.15)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff23d70, 0xa3d70a3d},	/* -2=f(-1.14)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff2147a, 0xe147ae14},	/* -2=f(-1.13)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff1eb85, 0x1eb851eb},	/* -2=f(-1.12)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff1c28f, 0x5c28f5c2},	/* -2=f(-1.11)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff19999, 0x99999999},	/* -2=f(-1.1)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff170a3, 0xd70a3d70},	/* -2=f(-1.09)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff147ae, 0x147ae147},	/* -2=f(-1.08)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff11eb8, 0x51eb851e},	/* -2=f(-1.07)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff0f5c2, 0x8f5c28f5},	/* -2=f(-1.06)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff0cccc, 0xcccccccc},	/* -2=f(-1.05)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff0a3d7, 0x0a3d70a3},	/* -2=f(-1.04)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff07ae1, 0x47ae147a},	/* -2=f(-1.03)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff051eb, 0x851eb851},	/* -2=f(-1.02)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff028f5, 0xc28f5c28},	/* -2=f(-1.01)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfefffff, 0xfffffffe},	/* -1=f(-1)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfefae14, 0x7ae147ac},	/* -1=f(-0.99)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfef5c28, 0xf5c28f5a},	/* -1=f(-0.98)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfef0a3d, 0x70a3d708},	/* -1=f(-0.97)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfeeb851, 0xeb851eb6},	/* -1=f(-0.96)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfee6666, 0x66666664},	/* -1=f(-0.95)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfee147a, 0xe147ae12},	/* -1=f(-0.94)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfedc28f, 0x5c28f5c0},	/* -1=f(-0.93)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfed70a3, 0xd70a3d6e},	/* -1=f(-0.92)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfed1eb8, 0x51eb851c},	/* -1=f(-0.91)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfeccccc, 0xccccccca},	/* -1=f(-0.9)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfec7ae1, 0x47ae1478},	/* -1=f(-0.89)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfec28f5, 0xc28f5c26},	/* -1=f(-0.88)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfebd70a, 0x3d70a3d4},	/* -1=f(-0.87)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfeb851e, 0xb851eb82},	/* -1=f(-0.86)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfeb3333, 0x33333330},	/* -1=f(-0.85)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfeae147, 0xae147ade},	/* -1=f(-0.84)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfea8f5c, 0x28f5c28c},	/* -1=f(-0.83)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfea3d70, 0xa3d70a3a},	/* -1=f(-0.82)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe9eb85, 0x1eb851e8},	/* -1=f(-0.81)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe99999, 0x99999996},	/* -1=f(-0.8)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe947ae, 0x147ae144},	/* -1=f(-0.79)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe8f5c2, 0x8f5c28f2},	/* -1=f(-0.78)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe8a3d7, 0x0a3d70a0},	/* -1=f(-0.77)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe851eb, 0x851eb84e},	/* -1=f(-0.76)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe7ffff, 0xfffffffc},	/* -1=f(-0.75)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe7ae14, 0x7ae147aa},	/* -1=f(-0.74)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe75c28, 0xf5c28f58},	/* -1=f(-0.73)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe70a3d, 0x70a3d706},	/* -1=f(-0.72)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe6b851, 0xeb851eb4},	/* -1=f(-0.71)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe66666, 0x66666662},	/* -1=f(-0.7)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe6147a, 0xe147ae10},	/* -1=f(-0.69)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe5c28f, 0x5c28f5be},	/* -1=f(-0.68)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe570a3, 0xd70a3d6c},	/* -1=f(-0.67)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe51eb8, 0x51eb851a},	/* -1=f(-0.66)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe4cccc, 0xccccccc8},	/* -1=f(-0.65)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe47ae1, 0x47ae1476},	/* -1=f(-0.64)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe428f5, 0xc28f5c24},	/* -1=f(-0.63)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe3d70a, 0x3d70a3d2},	/* -1=f(-0.62)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe3851e, 0xb851eb80},	/* -1=f(-0.61)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe33333, 0x3333332e},	/* -1=f(-0.6)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe2e147, 0xae147adc},	/* -1=f(-0.59)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe28f5c, 0x28f5c28a},	/* -1=f(-0.58)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe23d70, 0xa3d70a38},	/* -1=f(-0.57)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe1eb85, 0x1eb851e6},	/* -1=f(-0.56)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe19999, 0x99999994},	/* -1=f(-0.55)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe147ae, 0x147ae142},	/* -1=f(-0.54)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe0f5c2, 0x8f5c28f0},	/* -1=f(-0.53)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe0a3d7, 0x0a3d709e},	/* -1=f(-0.52)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfe051eb, 0x851eb84c},	/* -1=f(-0.51)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfdfffff, 0xfffffff4},	/* -1=f(-0.5)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfdf5c28, 0xf5c28f50},	/* -1=f(-0.49)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfdeb851, 0xeb851eac},	/* -1=f(-0.48)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfde147a, 0xe147ae08},	/* -1=f(-0.47)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfdd70a3, 0xd70a3d64},	/* -1=f(-0.46)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfdccccc, 0xccccccc0},	/* -1=f(-0.45)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfdc28f5, 0xc28f5c1c},	/* -1=f(-0.44)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfdb851e, 0xb851eb78},	/* -1=f(-0.43)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfdae147, 0xae147ad4},	/* -1=f(-0.42)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfda3d70, 0xa3d70a30},	/* -1=f(-0.41)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd99999, 0x9999998c},	/* -1=f(-0.4)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd8f5c2, 0x8f5c28e8},	/* -1=f(-0.39)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd851eb, 0x851eb844},	/* -1=f(-0.38)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd7ae14, 0x7ae147a0},	/* -1=f(-0.37)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd70a3d, 0x70a3d6fc},	/* -1=f(-0.36)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd66666, 0x66666658},	/* -1=f(-0.35)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd5c28f, 0x5c28f5b4},	/* -1=f(-0.34)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd51eb8, 0x51eb8510},	/* -1=f(-0.33)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd47ae1, 0x47ae146c},	/* -1=f(-0.32)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd3d70a, 0x3d70a3c8},	/* -1=f(-0.31)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd33333, 0x33333324},	/* -1=f(-0.3)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd28f5c, 0x28f5c280},	/* -1=f(-0.29)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd1eb85, 0x1eb851dc},	/* -1=f(-0.28)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd147ae, 0x147ae138},	/* -1=f(-0.27)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfd0a3d7, 0x0a3d7094},	/* -1=f(-0.26)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfcfffff, 0xffffffe0},	/* -1=f(-0.25)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfceb851, 0xeb851e98},	/* -1=f(-0.24)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfcd70a3, 0xd70a3d50},	/* -1=f(-0.23)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfcc28f5, 0xc28f5c08},	/* -1=f(-0.22)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfcae147, 0xae147ac0},	/* -1=f(-0.21)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfc99999, 0x99999978},	/* -1=f(-0.2)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfc851eb, 0x851eb830},	/* -1=f(-0.19)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfc70a3d, 0x70a3d6e8},	/* -1=f(-0.18)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfc5c28f, 0x5c28f5a0},	/* -1=f(-0.17)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfc47ae1, 0x47ae1458},	/* -1=f(-0.16)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfc33333, 0x33333310},	/* -1=f(-0.15)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfc1eb85, 0x1eb851c8},	/* -1=f(-0.14)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfc0a3d7, 0x0a3d7080},	/* -1=f(-0.13)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfbeb851, 0xeb851e71},	/* -1=f(-0.12)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfbc28f5, 0xc28f5be2},	/* -1=f(-0.11)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfb99999, 0x99999953},	/* -1=f(-0.1)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfb70a3d, 0x70a3d6c4},	/* -1=f(-0.09)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfb47ae1, 0x47ae1435},	/* -1=f(-0.08)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfb1eb85, 0x1eb851a6},	/* -1=f(-0.07)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfaeb851, 0xeb851e2d},	/* -1=f(-0.06)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfa99999, 0x9999990e},	/* -1=f(-0.05)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbfa47ae1, 0x47ae13ef},	/* -1=f(-0.04)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbf9eb851, 0xeb851da0},	/* -1=f(-0.03)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbf947ae1, 0x47ae1362},	/* -1=f(-0.02)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xbf847ae1, 0x47ae1249},	/* -1=f(-0.01)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3cd19000, 0x00000000},	/* 0=f(9.74915e-16)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3f847ae1, 0x47ae16ad},	/* 0=f(0.01)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3f947ae1, 0x47ae1594},	/* 0=f(0.02)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3f9eb851, 0xeb851fd2},	/* 0=f(0.03)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fa47ae1, 0x47ae1508},	/* 0=f(0.04)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fa99999, 0x99999a27},	/* 0=f(0.05)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3faeb851, 0xeb851f46},	/* 0=f(0.06)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fb1eb85, 0x1eb85232},	/* 0=f(0.07)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fb47ae1, 0x47ae14c1},	/* 0=f(0.08)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fb70a3d, 0x70a3d750},	/* 0=f(0.09)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fb99999, 0x999999df},	/* 0=f(0.1)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fbc28f5, 0xc28f5c6e},	/* 0=f(0.11)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fbeb851, 0xeb851efd},	/* 0=f(0.12)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fc0a3d7, 0x0a3d70c6},	/* 0=f(0.13)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fc1eb85, 0x1eb8520e},	/* 0=f(0.14)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fc33333, 0x33333356},	/* 0=f(0.15)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fc47ae1, 0x47ae149e},	/* 0=f(0.16)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fc5c28f, 0x5c28f5e6},	/* 0=f(0.17)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fc70a3d, 0x70a3d72e},	/* 0=f(0.18)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fc851eb, 0x851eb876},	/* 0=f(0.19)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fc99999, 0x999999be},	/* 0=f(0.2)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fcae147, 0xae147b06},	/* 0=f(0.21)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fcc28f5, 0xc28f5c4e},	/* 0=f(0.22)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fcd70a3, 0xd70a3d96},	/* 0=f(0.23)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fceb851, 0xeb851ede},	/* 0=f(0.24)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd00000, 0x00000013},	/* 0=f(0.25)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd0a3d7, 0x0a3d70b7},	/* 0=f(0.26)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd147ae, 0x147ae15b},	/* 0=f(0.27)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd1eb85, 0x1eb851ff},	/* 0=f(0.28)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd28f5c, 0x28f5c2a3},	/* 0=f(0.29)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd33333, 0x33333347},	/* 0=f(0.3)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd3d70a, 0x3d70a3eb},	/* 0=f(0.31)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd47ae1, 0x47ae148f},	/* 0=f(0.32)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd51eb8, 0x51eb8533},	/* 0=f(0.33)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd5c28f, 0x5c28f5d7},	/* 0=f(0.34)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd66666, 0x6666667b},	/* 0=f(0.35)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd70a3d, 0x70a3d71f},	/* 0=f(0.36)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd7ae14, 0x7ae147c3},	/* 0=f(0.37)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd851eb, 0x851eb867},	/* 0=f(0.38)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd8f5c2, 0x8f5c290b},	/* 0=f(0.39)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fd99999, 0x999999af},	/* 0=f(0.4)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fda3d70, 0xa3d70a53},	/* 0=f(0.41)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fdae147, 0xae147af7},	/* 0=f(0.42)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fdb851e, 0xb851eb9b},	/* 0=f(0.43)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fdc28f5, 0xc28f5c3f},	/* 0=f(0.44)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fdccccc, 0xcccccce3},	/* 0=f(0.45)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fdd70a3, 0xd70a3d87},	/* 0=f(0.46)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fde147a, 0xe147ae2b},	/* 0=f(0.47)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fdeb851, 0xeb851ecf},	/* 0=f(0.48)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fdf5c28, 0xf5c28f73},	/* 0=f(0.49)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe00000, 0x0000000b},	/* 0=f(0.5)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe051eb, 0x851eb85d},	/* 0=f(0.51)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe0a3d7, 0x0a3d70af},	/* 0=f(0.52)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe0f5c2, 0x8f5c2901},	/* 0=f(0.53)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe147ae, 0x147ae153},	/* 0=f(0.54)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe19999, 0x999999a5},	/* 0=f(0.55)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe1eb85, 0x1eb851f7},	/* 0=f(0.56)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe23d70, 0xa3d70a49},	/* 0=f(0.57)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe28f5c, 0x28f5c29b},	/* 0=f(0.58)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe2e147, 0xae147aed},	/* 0=f(0.59)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe33333, 0x3333333f},	/* 0=f(0.6)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe3851e, 0xb851eb91},	/* 0=f(0.61)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe3d70a, 0x3d70a3e3},	/* 0=f(0.62)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe428f5, 0xc28f5c35},	/* 0=f(0.63)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe47ae1, 0x47ae1487},	/* 0=f(0.64)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe4cccc, 0xccccccd9},	/* 0=f(0.65)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe51eb8, 0x51eb852b},	/* 0=f(0.66)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe570a3, 0xd70a3d7d},	/* 0=f(0.67)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe5c28f, 0x5c28f5cf},	/* 0=f(0.68)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe6147a, 0xe147ae21},	/* 0=f(0.69)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe66666, 0x66666673},	/* 0=f(0.7)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe6b851, 0xeb851ec5},	/* 0=f(0.71)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe70a3d, 0x70a3d717},	/* 0=f(0.72)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe75c28, 0xf5c28f69},	/* 0=f(0.73)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe7ae14, 0x7ae147bb},	/* 0=f(0.74)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe80000, 0x0000000d},	/* 0=f(0.75)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe851eb, 0x851eb85f},	/* 0=f(0.76)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe8a3d7, 0x0a3d70b1},	/* 0=f(0.77)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe8f5c2, 0x8f5c2903},	/* 0=f(0.78)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe947ae, 0x147ae155},	/* 0=f(0.79)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe99999, 0x999999a7},	/* 0=f(0.8)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe9eb85, 0x1eb851f9},	/* 0=f(0.81)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fea3d70, 0xa3d70a4b},	/* 0=f(0.82)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fea8f5c, 0x28f5c29d},	/* 0=f(0.83)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3feae147, 0xae147aef},	/* 0=f(0.84)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3feb3333, 0x33333341},	/* 0=f(0.85)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3feb851e, 0xb851eb93},	/* 0=f(0.86)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3febd70a, 0x3d70a3e5},	/* 0=f(0.87)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fec28f5, 0xc28f5c37},	/* 0=f(0.88)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fec7ae1, 0x47ae1489},	/* 0=f(0.89)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3feccccc, 0xccccccdb},	/* 0=f(0.9)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fed1eb8, 0x51eb852d},	/* 0=f(0.91)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fed70a3, 0xd70a3d7f},	/* 0=f(0.92)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fedc28f, 0x5c28f5d1},	/* 0=f(0.93)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fee147a, 0xe147ae23},	/* 0=f(0.94)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fee6666, 0x66666675},	/* 0=f(0.95)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3feeb851, 0xeb851ec7},	/* 0=f(0.96)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fef0a3d, 0x70a3d719},	/* 0=f(0.97)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fef5c28, 0xf5c28f6b},	/* 0=f(0.98)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fefae14, 0x7ae147bd},	/* 0=f(0.99)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff00000, 0x00000007},	/* 1=f(1)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff028f5, 0xc28f5c30},	/* 1=f(1.01)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff051eb, 0x851eb859},	/* 1=f(1.02)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff07ae1, 0x47ae1482},	/* 1=f(1.03)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff0a3d7, 0x0a3d70ab},	/* 1=f(1.04)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff0cccc, 0xccccccd4},	/* 1=f(1.05)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff0f5c2, 0x8f5c28fd},	/* 1=f(1.06)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff11eb8, 0x51eb8526},	/* 1=f(1.07)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff147ae, 0x147ae14f},	/* 1=f(1.08)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff170a3, 0xd70a3d78},	/* 1=f(1.09)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff19999, 0x999999a1},	/* 1=f(1.1)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff1c28f, 0x5c28f5ca},	/* 1=f(1.11)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff1eb85, 0x1eb851f3},	/* 1=f(1.12)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff2147a, 0xe147ae1c},	/* 1=f(1.13)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff23d70, 0xa3d70a45},	/* 1=f(1.14)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff26666, 0x6666666e},	/* 1=f(1.15)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff28f5c, 0x28f5c297},	/* 1=f(1.16)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff2b851, 0xeb851ec0},	/* 1=f(1.17)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff2e147, 0xae147ae9},	/* 1=f(1.18)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff30a3d, 0x70a3d712},	/* 1=f(1.19)*/
{64, 0,123,__LINE__, 0xc01c0000, 0x00000000, 0xc01921fb, 0x54442d18},	/* -7=f(-6.28319)*/
{64, 0,123,__LINE__, 0xc0140000, 0x00000000, 0xc012d97c, 0x7f3321d2},	/* -5=f(-4.71239)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc00921fb, 0x54442d18},	/* -4=f(-3.14159)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff921fb, 0x54442d18},	/* -2=f(-1.5708)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff921fb, 0x54442d18},	/* 1=f(1.5708)*/
{64, 0,123,__LINE__, 0x40080000, 0x00000000, 0x400921fb, 0x54442d18},	/* 3=f(3.14159)*/
{64, 0,123,__LINE__, 0x40100000, 0x00000000, 0x4012d97c, 0x7f3321d2},	/* 4=f(4.71239)*/
{64, 0,123,__LINE__, 0xc03e0000, 0x00000000, 0xc03e0000, 0x00000000},	/* -30=f(-30)*/
{64, 0,123,__LINE__, 0xc03d0000, 0x00000000, 0xc03c4ccc, 0xcccccccd},	/* -29=f(-28.3)*/
{64, 0,123,__LINE__, 0xc03b0000, 0x00000000, 0xc03a9999, 0x9999999a},	/* -27=f(-26.6)*/
{64, 0,123,__LINE__, 0xc0390000, 0x00000000, 0xc038e666, 0x66666667},	/* -25=f(-24.9)*/
{64, 0,123,__LINE__, 0xc0380000, 0x00000000, 0xc0373333, 0x33333334},	/* -24=f(-23.2)*/
{64, 0,123,__LINE__, 0xc0360000, 0x00000000, 0xc0358000, 0x00000001},	/* -22=f(-21.5)*/
{64, 0,123,__LINE__, 0xc0340000, 0x00000000, 0xc033cccc, 0xccccccce},	/* -20=f(-19.8)*/
{64, 0,123,__LINE__, 0xc0330000, 0x00000000, 0xc0321999, 0x9999999b},	/* -19=f(-18.1)*/
{64, 0,123,__LINE__, 0xc0310000, 0x00000000, 0xc0306666, 0x66666668},	/* -17=f(-16.4)*/
{64, 0,123,__LINE__, 0xc02e0000, 0x00000000, 0xc02d6666, 0x6666666a},	/* -15=f(-14.7)*/
{64, 0,123,__LINE__, 0xc02c0000, 0x00000000, 0xc02a0000, 0x00000004},	/* -14=f(-13)*/
{64, 0,123,__LINE__, 0xc0280000, 0x00000000, 0xc0269999, 0x9999999e},	/* -12=f(-11.3)*/
{64, 0,123,__LINE__, 0xc0240000, 0x00000000, 0xc0233333, 0x33333338},	/* -10=f(-9.6)*/
{64, 0,123,__LINE__, 0xc0200000, 0x00000000, 0xc01f9999, 0x999999a3},	/* -8=f(-7.9)*/
{64, 0,123,__LINE__, 0xc01c0000, 0x00000000, 0xc018cccc, 0xccccccd6},	/* -7=f(-6.2)*/
{64, 0,123,__LINE__, 0xc0140000, 0x00000000, 0xc0120000, 0x00000009},	/* -5=f(-4.5)*/
{64, 0,123,__LINE__, 0xc0080000, 0x00000000, 0xc0066666, 0x66666678},	/* -3=f(-2.8)*/
{64, 0,123,__LINE__, 0xc0000000, 0x00000000, 0xbff19999, 0x999999bd},	/* -2=f(-1.1)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3fe33333, 0x333332ec},	/* 0=f(0.6)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0x40026666, 0x66666654},	/* 2=f(2.3)*/
{64, 0,123,__LINE__, 0x40080000, 0x00000000, 0x400fffff, 0xffffffee},	/* 3=f(4)*/
{64, 0,123,__LINE__, 0x40140000, 0x00000000, 0x4016cccc, 0xccccccc4},	/* 5=f(5.7)*/
{64, 0,123,__LINE__, 0x401c0000, 0x00000000, 0x401d9999, 0x99999991},	/* 7=f(7.4)*/
{64, 0,123,__LINE__, 0x40220000, 0x00000000, 0x40223333, 0x3333332f},	/* 9=f(9.1)*/
{64, 0,123,__LINE__, 0x40240000, 0x00000000, 0x40259999, 0x99999995},	/* 10=f(10.8)*/
{64, 0,123,__LINE__, 0x40280000, 0x00000000, 0x4028ffff, 0xfffffffb},	/* 12=f(12.5)*/
{64, 0,123,__LINE__, 0x402c0000, 0x00000000, 0x402c6666, 0x66666661},	/* 14=f(14.2)*/
{64, 0,123,__LINE__, 0x402e0000, 0x00000000, 0x402fcccc, 0xccccccc7},	/* 15=f(15.9)*/
{64, 0,123,__LINE__, 0x40310000, 0x00000000, 0x40319999, 0x99999997},	/* 17=f(17.6)*/
{64, 0,123,__LINE__, 0x40330000, 0x00000000, 0x40334ccc, 0xccccccca},	/* 19=f(19.3)*/
{64, 0,123,__LINE__, 0x40340000, 0x00000000, 0x4034ffff, 0xfffffffd},	/* 20=f(21)*/
{64, 0,123,__LINE__, 0x40360000, 0x00000000, 0x4036b333, 0x33333330},	/* 22=f(22.7)*/
{64, 0,123,__LINE__, 0x40380000, 0x00000000, 0x40386666, 0x66666663},	/* 24=f(24.4)*/
{64, 0,123,__LINE__, 0x403a0000, 0x00000000, 0x403a1999, 0x99999996},	/* 26=f(26.1)*/
{64, 0,123,__LINE__, 0x403b0000, 0x00000000, 0x403bcccc, 0xccccccc9},	/* 27=f(27.8)*/
{64, 0,123,__LINE__, 0x403d0000, 0x00000000, 0x403d7fff, 0xfffffffc},	/* 29=f(29.5)*/
{64, 0,123,__LINE__, 0x7ff80000, 0x00000000, 0x7ff80000, 0x00000000},   /* qnan=f(qnan)*/
{64, 0,123,__LINE__, 0x7ff80000, 0x00000000, 0x7ff40000, 0x00000000},   /* qnan=f(snan)*/
{64, 0,123,__LINE__, 0x7ff00000, 0x00000000, 0x7ff00000, 0x00000000},   /* +inf=f(+inf)*/
{64, 0,123,__LINE__, 0xfff00000, 0x00000000, 0xfff00000, 0x00000000},   /* -inf=f(-inf)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},   /* +0=f(+0)*/
{64, 0,123,__LINE__, 0x80000000, 0x00000000, 0x80000000, 0x00000000},   /* -0=f(-0)*/
0,};
void test_floor(m)   {run_vector_1(m,floor_vec,(char *)(floor),"floor","dd");   }
