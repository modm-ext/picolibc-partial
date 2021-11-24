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
 one_line_type fabsf_vec[] = {
{64, 0,123,__LINE__, 0x3ff33333, 0x40000000, 0xbff33333, 0x33333333},	/* 1.2=f(-1.2)*/
{64, 0,123,__LINE__, 0x3ff30a3d, 0x80000000, 0xbff30a3d, 0x70a3d70a},	/* 1.19=f(-1.19)*/
{64, 0,123,__LINE__, 0x3ff2e147, 0xa0000000, 0xbff2e147, 0xae147ae1},	/* 1.18=f(-1.18)*/
{64, 0,123,__LINE__, 0x3ff2b851, 0xe0000000, 0xbff2b851, 0xeb851eb8},	/* 1.17=f(-1.17)*/
{64, 0,123,__LINE__, 0x3ff28f5c, 0x20000000, 0xbff28f5c, 0x28f5c28f},	/* 1.16=f(-1.16)*/
{64, 0,123,__LINE__, 0x3ff26666, 0x60000000, 0xbff26666, 0x66666666},	/* 1.15=f(-1.15)*/
{64, 0,123,__LINE__, 0x3ff23d70, 0xa0000000, 0xbff23d70, 0xa3d70a3d},	/* 1.14=f(-1.14)*/
{64, 0,123,__LINE__, 0x3ff2147a, 0xe0000000, 0xbff2147a, 0xe147ae14},	/* 1.13=f(-1.13)*/
{64, 0,123,__LINE__, 0x3ff1eb85, 0x20000000, 0xbff1eb85, 0x1eb851eb},	/* 1.12=f(-1.12)*/
{64, 0,123,__LINE__, 0x3ff1c28f, 0x60000000, 0xbff1c28f, 0x5c28f5c2},	/* 1.11=f(-1.11)*/
{64, 0,123,__LINE__, 0x3ff19999, 0xa0000000, 0xbff19999, 0x99999999},	/* 1.1=f(-1.1)*/
{64, 0,123,__LINE__, 0x3ff170a3, 0xe0000000, 0xbff170a3, 0xd70a3d70},	/* 1.09=f(-1.09)*/
{64, 0,123,__LINE__, 0x3ff147ae, 0x20000000, 0xbff147ae, 0x147ae147},	/* 1.08=f(-1.08)*/
{64, 0,123,__LINE__, 0x3ff11eb8, 0x60000000, 0xbff11eb8, 0x51eb851e},	/* 1.07=f(-1.07)*/
{64, 0,123,__LINE__, 0x3ff0f5c2, 0x80000000, 0xbff0f5c2, 0x8f5c28f5},	/* 1.06=f(-1.06)*/
{64, 0,123,__LINE__, 0x3ff0cccc, 0xc0000000, 0xbff0cccc, 0xcccccccc},	/* 1.05=f(-1.05)*/
{64, 0,123,__LINE__, 0x3ff0a3d7, 0x00000000, 0xbff0a3d7, 0x0a3d70a3},	/* 1.04=f(-1.04)*/
{64, 0,123,__LINE__, 0x3ff07ae1, 0x40000000, 0xbff07ae1, 0x47ae147a},	/* 1.03=f(-1.03)*/
{64, 0,123,__LINE__, 0x3ff051eb, 0x80000000, 0xbff051eb, 0x851eb851},	/* 1.02=f(-1.02)*/
{64, 0,123,__LINE__, 0x3ff028f5, 0xc0000000, 0xbff028f5, 0xc28f5c28},	/* 1.01=f(-1.01)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0xbfefffff, 0xfffffffe},	/* 1=f(-1)*/
{64, 0,123,__LINE__, 0x3fefae14, 0x80000000, 0xbfefae14, 0x7ae147ac},	/* 0.99=f(-0.99)*/
{64, 0,123,__LINE__, 0x3fef5c29, 0x00000000, 0xbfef5c28, 0xf5c28f5a},	/* 0.98=f(-0.98)*/
{64, 0,123,__LINE__, 0x3fef0a3d, 0x80000000, 0xbfef0a3d, 0x70a3d708},	/* 0.97=f(-0.97)*/
{64, 0,123,__LINE__, 0x3feeb851, 0xe0000000, 0xbfeeb851, 0xeb851eb6},	/* 0.96=f(-0.96)*/
{64, 0,123,__LINE__, 0x3fee6666, 0x60000000, 0xbfee6666, 0x66666664},	/* 0.95=f(-0.95)*/
{64, 0,123,__LINE__, 0x3fee147a, 0xe0000000, 0xbfee147a, 0xe147ae12},	/* 0.94=f(-0.94)*/
{64, 0,123,__LINE__, 0x3fedc28f, 0x60000000, 0xbfedc28f, 0x5c28f5c0},	/* 0.93=f(-0.93)*/
{64, 0,123,__LINE__, 0x3fed70a3, 0xe0000000, 0xbfed70a3, 0xd70a3d6e},	/* 0.92=f(-0.92)*/
{64, 0,123,__LINE__, 0x3fed1eb8, 0x60000000, 0xbfed1eb8, 0x51eb851c},	/* 0.91=f(-0.91)*/
{64, 0,123,__LINE__, 0x3feccccc, 0xc0000000, 0xbfeccccc, 0xccccccca},	/* 0.9=f(-0.9)*/
{64, 0,123,__LINE__, 0x3fec7ae1, 0x40000000, 0xbfec7ae1, 0x47ae1478},	/* 0.89=f(-0.89)*/
{64, 0,123,__LINE__, 0x3fec28f5, 0xc0000000, 0xbfec28f5, 0xc28f5c26},	/* 0.88=f(-0.88)*/
{64, 0,123,__LINE__, 0x3febd70a, 0x40000000, 0xbfebd70a, 0x3d70a3d4},	/* 0.87=f(-0.87)*/
{64, 0,123,__LINE__, 0x3feb851e, 0xc0000000, 0xbfeb851e, 0xb851eb82},	/* 0.86=f(-0.86)*/
{64, 0,123,__LINE__, 0x3feb3333, 0x40000000, 0xbfeb3333, 0x33333330},	/* 0.85=f(-0.85)*/
{64, 0,123,__LINE__, 0x3feae147, 0xa0000000, 0xbfeae147, 0xae147ade},	/* 0.84=f(-0.84)*/
{64, 0,123,__LINE__, 0x3fea8f5c, 0x20000000, 0xbfea8f5c, 0x28f5c28c},	/* 0.83=f(-0.83)*/
{64, 0,123,__LINE__, 0x3fea3d70, 0xa0000000, 0xbfea3d70, 0xa3d70a3a},	/* 0.82=f(-0.82)*/
{64, 0,123,__LINE__, 0x3fe9eb85, 0x20000000, 0xbfe9eb85, 0x1eb851e8},	/* 0.81=f(-0.81)*/
{64, 0,123,__LINE__, 0x3fe99999, 0xa0000000, 0xbfe99999, 0x99999996},	/* 0.8=f(-0.8)*/
{64, 0,123,__LINE__, 0x3fe947ae, 0x20000000, 0xbfe947ae, 0x147ae144},	/* 0.79=f(-0.79)*/
{64, 0,123,__LINE__, 0x3fe8f5c2, 0x80000000, 0xbfe8f5c2, 0x8f5c28f2},	/* 0.78=f(-0.78)*/
{64, 0,123,__LINE__, 0x3fe8a3d7, 0x00000000, 0xbfe8a3d7, 0x0a3d70a0},	/* 0.77=f(-0.77)*/
{64, 0,123,__LINE__, 0x3fe851eb, 0x80000000, 0xbfe851eb, 0x851eb84e},	/* 0.76=f(-0.76)*/
{64, 0,123,__LINE__, 0x3fe80000, 0x00000000, 0xbfe7ffff, 0xfffffffc},	/* 0.75=f(-0.75)*/
{64, 0,123,__LINE__, 0x3fe7ae14, 0x80000000, 0xbfe7ae14, 0x7ae147aa},	/* 0.74=f(-0.74)*/
{64, 0,123,__LINE__, 0x3fe75c29, 0x00000000, 0xbfe75c28, 0xf5c28f58},	/* 0.73=f(-0.73)*/
{64, 0,123,__LINE__, 0x3fe70a3d, 0x80000000, 0xbfe70a3d, 0x70a3d706},	/* 0.72=f(-0.72)*/
{64, 0,123,__LINE__, 0x3fe6b851, 0xe0000000, 0xbfe6b851, 0xeb851eb4},	/* 0.71=f(-0.71)*/
{64, 0,123,__LINE__, 0x3fe66666, 0x60000000, 0xbfe66666, 0x66666662},	/* 0.7=f(-0.7)*/
{64, 0,123,__LINE__, 0x3fe6147a, 0xe0000000, 0xbfe6147a, 0xe147ae10},	/* 0.69=f(-0.69)*/
{64, 0,123,__LINE__, 0x3fe5c28f, 0x60000000, 0xbfe5c28f, 0x5c28f5be},	/* 0.68=f(-0.68)*/
{64, 0,123,__LINE__, 0x3fe570a3, 0xe0000000, 0xbfe570a3, 0xd70a3d6c},	/* 0.67=f(-0.67)*/
{64, 0,123,__LINE__, 0x3fe51eb8, 0x60000000, 0xbfe51eb8, 0x51eb851a},	/* 0.66=f(-0.66)*/
{64, 0,123,__LINE__, 0x3fe4cccc, 0xc0000000, 0xbfe4cccc, 0xccccccc8},	/* 0.65=f(-0.65)*/
{64, 0,123,__LINE__, 0x3fe47ae1, 0x40000000, 0xbfe47ae1, 0x47ae1476},	/* 0.64=f(-0.64)*/
{64, 0,123,__LINE__, 0x3fe428f5, 0xc0000000, 0xbfe428f5, 0xc28f5c24},	/* 0.63=f(-0.63)*/
{64, 0,123,__LINE__, 0x3fe3d70a, 0x40000000, 0xbfe3d70a, 0x3d70a3d2},	/* 0.62=f(-0.62)*/
{64, 0,123,__LINE__, 0x3fe3851e, 0xc0000000, 0xbfe3851e, 0xb851eb80},	/* 0.61=f(-0.61)*/
{64, 0,123,__LINE__, 0x3fe33333, 0x40000000, 0xbfe33333, 0x3333332e},	/* 0.6=f(-0.6)*/
{64, 0,123,__LINE__, 0x3fe2e147, 0xa0000000, 0xbfe2e147, 0xae147adc},	/* 0.59=f(-0.59)*/
{64, 0,123,__LINE__, 0x3fe28f5c, 0x20000000, 0xbfe28f5c, 0x28f5c28a},	/* 0.58=f(-0.58)*/
{64, 0,123,__LINE__, 0x3fe23d70, 0xa0000000, 0xbfe23d70, 0xa3d70a38},	/* 0.57=f(-0.57)*/
{64, 0,123,__LINE__, 0x3fe1eb85, 0x20000000, 0xbfe1eb85, 0x1eb851e6},	/* 0.56=f(-0.56)*/
{64, 0,123,__LINE__, 0x3fe19999, 0xa0000000, 0xbfe19999, 0x99999994},	/* 0.55=f(-0.55)*/
{64, 0,123,__LINE__, 0x3fe147ae, 0x20000000, 0xbfe147ae, 0x147ae142},	/* 0.54=f(-0.54)*/
{64, 0,123,__LINE__, 0x3fe0f5c2, 0x80000000, 0xbfe0f5c2, 0x8f5c28f0},	/* 0.53=f(-0.53)*/
{64, 0,123,__LINE__, 0x3fe0a3d7, 0x00000000, 0xbfe0a3d7, 0x0a3d709e},	/* 0.52=f(-0.52)*/
{64, 0,123,__LINE__, 0x3fe051eb, 0x80000000, 0xbfe051eb, 0x851eb84c},	/* 0.51=f(-0.51)*/
{64, 0,123,__LINE__, 0x3fe00000, 0x00000000, 0xbfdfffff, 0xfffffff4},	/* 0.5=f(-0.5)*/
{64, 0,123,__LINE__, 0x3fdf5c29, 0x00000000, 0xbfdf5c28, 0xf5c28f50},	/* 0.49=f(-0.49)*/
{64, 0,123,__LINE__, 0x3fdeb851, 0xe0000000, 0xbfdeb851, 0xeb851eac},	/* 0.48=f(-0.48)*/
{64, 0,123,__LINE__, 0x3fde147a, 0xe0000000, 0xbfde147a, 0xe147ae08},	/* 0.47=f(-0.47)*/
{64, 0,123,__LINE__, 0x3fdd70a3, 0xe0000000, 0xbfdd70a3, 0xd70a3d64},	/* 0.46=f(-0.46)*/
{64, 0,123,__LINE__, 0x3fdccccc, 0xc0000000, 0xbfdccccc, 0xccccccc0},	/* 0.45=f(-0.45)*/
{64, 0,123,__LINE__, 0x3fdc28f5, 0xc0000000, 0xbfdc28f5, 0xc28f5c1c},	/* 0.44=f(-0.44)*/
{64, 0,123,__LINE__, 0x3fdb851e, 0xc0000000, 0xbfdb851e, 0xb851eb78},	/* 0.43=f(-0.43)*/
{64, 0,123,__LINE__, 0x3fdae147, 0xa0000000, 0xbfdae147, 0xae147ad4},	/* 0.42=f(-0.42)*/
{64, 0,123,__LINE__, 0x3fda3d70, 0xa0000000, 0xbfda3d70, 0xa3d70a30},	/* 0.41=f(-0.41)*/
{64, 0,123,__LINE__, 0x3fd99999, 0xa0000000, 0xbfd99999, 0x9999998c},	/* 0.4=f(-0.4)*/
{64, 0,123,__LINE__, 0x3fd8f5c2, 0x80000000, 0xbfd8f5c2, 0x8f5c28e8},	/* 0.39=f(-0.39)*/
{64, 0,123,__LINE__, 0x3fd851eb, 0x80000000, 0xbfd851eb, 0x851eb844},	/* 0.38=f(-0.38)*/
{64, 0,123,__LINE__, 0x3fd7ae14, 0x80000000, 0xbfd7ae14, 0x7ae147a0},	/* 0.37=f(-0.37)*/
{64, 0,123,__LINE__, 0x3fd70a3d, 0x80000000, 0xbfd70a3d, 0x70a3d6fc},	/* 0.36=f(-0.36)*/
{64, 0,123,__LINE__, 0x3fd66666, 0x60000000, 0xbfd66666, 0x66666658},	/* 0.35=f(-0.35)*/
{64, 0,123,__LINE__, 0x3fd5c28f, 0x60000000, 0xbfd5c28f, 0x5c28f5b4},	/* 0.34=f(-0.34)*/
{64, 0,123,__LINE__, 0x3fd51eb8, 0x60000000, 0xbfd51eb8, 0x51eb8510},	/* 0.33=f(-0.33)*/
{64, 0,123,__LINE__, 0x3fd47ae1, 0x40000000, 0xbfd47ae1, 0x47ae146c},	/* 0.32=f(-0.32)*/
{64, 0,123,__LINE__, 0x3fd3d70a, 0x40000000, 0xbfd3d70a, 0x3d70a3c8},	/* 0.31=f(-0.31)*/
{64, 0,123,__LINE__, 0x3fd33333, 0x40000000, 0xbfd33333, 0x33333324},	/* 0.3=f(-0.3)*/
{64, 0,123,__LINE__, 0x3fd28f5c, 0x20000000, 0xbfd28f5c, 0x28f5c280},	/* 0.29=f(-0.29)*/
{64, 0,123,__LINE__, 0x3fd1eb85, 0x20000000, 0xbfd1eb85, 0x1eb851dc},	/* 0.28=f(-0.28)*/
{64, 0,123,__LINE__, 0x3fd147ae, 0x20000000, 0xbfd147ae, 0x147ae138},	/* 0.27=f(-0.27)*/
{64, 0,123,__LINE__, 0x3fd0a3d7, 0x00000000, 0xbfd0a3d7, 0x0a3d7094},	/* 0.26=f(-0.26)*/
{64, 0,123,__LINE__, 0x3fd00000, 0x00000000, 0xbfcfffff, 0xffffffe0},	/* 0.25=f(-0.25)*/
{64, 0,123,__LINE__, 0x3fceb851, 0xe0000000, 0xbfceb851, 0xeb851e98},	/* 0.24=f(-0.24)*/
{64, 0,123,__LINE__, 0x3fcd70a3, 0xe0000000, 0xbfcd70a3, 0xd70a3d50},	/* 0.23=f(-0.23)*/
{64, 0,123,__LINE__, 0x3fcc28f5, 0xc0000000, 0xbfcc28f5, 0xc28f5c08},	/* 0.22=f(-0.22)*/
{64, 0,123,__LINE__, 0x3fcae147, 0xa0000000, 0xbfcae147, 0xae147ac0},	/* 0.21=f(-0.21)*/
{64, 0,123,__LINE__, 0x3fc99999, 0xa0000000, 0xbfc99999, 0x99999978},	/* 0.2=f(-0.2)*/
{64, 0,123,__LINE__, 0x3fc851eb, 0x80000000, 0xbfc851eb, 0x851eb830},	/* 0.19=f(-0.19)*/
{64, 0,123,__LINE__, 0x3fc70a3d, 0x80000000, 0xbfc70a3d, 0x70a3d6e8},	/* 0.18=f(-0.18)*/
{64, 0,123,__LINE__, 0x3fc5c28f, 0x60000000, 0xbfc5c28f, 0x5c28f5a0},	/* 0.17=f(-0.17)*/
{64, 0,123,__LINE__, 0x3fc47ae1, 0x40000000, 0xbfc47ae1, 0x47ae1458},	/* 0.16=f(-0.16)*/
{64, 0,123,__LINE__, 0x3fc33333, 0x40000000, 0xbfc33333, 0x33333310},	/* 0.15=f(-0.15)*/
{64, 0,123,__LINE__, 0x3fc1eb85, 0x20000000, 0xbfc1eb85, 0x1eb851c8},	/* 0.14=f(-0.14)*/
{64, 0,123,__LINE__, 0x3fc0a3d7, 0x00000000, 0xbfc0a3d7, 0x0a3d7080},	/* 0.13=f(-0.13)*/
{64, 0,123,__LINE__, 0x3fbeb851, 0xe0000000, 0xbfbeb851, 0xeb851e71},	/* 0.12=f(-0.12)*/
{64, 0,123,__LINE__, 0x3fbc28f5, 0xc0000000, 0xbfbc28f5, 0xc28f5be2},	/* 0.11=f(-0.11)*/
{64, 0,123,__LINE__, 0x3fb99999, 0xa0000000, 0xbfb99999, 0x99999953},	/* 0.1=f(-0.1)*/
{64, 0,123,__LINE__, 0x3fb70a3d, 0x80000000, 0xbfb70a3d, 0x70a3d6c4},	/* 0.09=f(-0.09)*/
{64, 0,123,__LINE__, 0x3fb47ae1, 0x40000000, 0xbfb47ae1, 0x47ae1435},	/* 0.08=f(-0.08)*/
{64, 0,123,__LINE__, 0x3fb1eb85, 0x20000000, 0xbfb1eb85, 0x1eb851a6},	/* 0.07=f(-0.07)*/
{64, 0,123,__LINE__, 0x3faeb851, 0xe0000000, 0xbfaeb851, 0xeb851e2d},	/* 0.06=f(-0.06)*/
{64, 0,123,__LINE__, 0x3fa99999, 0xa0000000, 0xbfa99999, 0x9999990e},	/* 0.05=f(-0.05)*/
{64, 0,123,__LINE__, 0x3fa47ae1, 0x40000000, 0xbfa47ae1, 0x47ae13ef},	/* 0.04=f(-0.04)*/
{64, 0,123,__LINE__, 0x3f9eb851, 0xe0000000, 0xbf9eb851, 0xeb851da0},	/* 0.03=f(-0.03)*/
{64, 0,123,__LINE__, 0x3f947ae1, 0x40000000, 0xbf947ae1, 0x47ae1362},	/* 0.02=f(-0.02)*/
{64, 0,123,__LINE__, 0x3f847ae1, 0x40000000, 0xbf847ae1, 0x47ae1249},	/* 0.01=f(-0.01)*/
{64, 0,123,__LINE__, 0x3cd19000, 0x00000000, 0x3cd19000, 0x00000000},	/* 9.74915e-16=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0x3f847ae1, 0x40000000, 0x3f847ae1, 0x47ae16ad},	/* 0.01=f(0.01)*/
{64, 0,123,__LINE__, 0x3f947ae1, 0x40000000, 0x3f947ae1, 0x47ae1594},	/* 0.02=f(0.02)*/
{64, 0,123,__LINE__, 0x3f9eb851, 0xe0000000, 0x3f9eb851, 0xeb851fd2},	/* 0.03=f(0.03)*/
{64, 0,123,__LINE__, 0x3fa47ae1, 0x40000000, 0x3fa47ae1, 0x47ae1508},	/* 0.04=f(0.04)*/
{64, 0,123,__LINE__, 0x3fa99999, 0xa0000000, 0x3fa99999, 0x99999a27},	/* 0.05=f(0.05)*/
{64, 0,123,__LINE__, 0x3faeb851, 0xe0000000, 0x3faeb851, 0xeb851f46},	/* 0.06=f(0.06)*/
{64, 0,123,__LINE__, 0x3fb1eb85, 0x20000000, 0x3fb1eb85, 0x1eb85232},	/* 0.07=f(0.07)*/
{64, 0,123,__LINE__, 0x3fb47ae1, 0x40000000, 0x3fb47ae1, 0x47ae14c1},	/* 0.08=f(0.08)*/
{64, 0,123,__LINE__, 0x3fb70a3d, 0x80000000, 0x3fb70a3d, 0x70a3d750},	/* 0.09=f(0.09)*/
{64, 0,123,__LINE__, 0x3fb99999, 0xa0000000, 0x3fb99999, 0x999999df},	/* 0.1=f(0.1)*/
{64, 0,123,__LINE__, 0x3fbc28f5, 0xc0000000, 0x3fbc28f5, 0xc28f5c6e},	/* 0.11=f(0.11)*/
{64, 0,123,__LINE__, 0x3fbeb851, 0xe0000000, 0x3fbeb851, 0xeb851efd},	/* 0.12=f(0.12)*/
{64, 0,123,__LINE__, 0x3fc0a3d7, 0x00000000, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.13=f(0.13)*/
{64, 0,123,__LINE__, 0x3fc1eb85, 0x20000000, 0x3fc1eb85, 0x1eb8520e},	/* 0.14=f(0.14)*/
{64, 0,123,__LINE__, 0x3fc33333, 0x40000000, 0x3fc33333, 0x33333356},	/* 0.15=f(0.15)*/
{64, 0,123,__LINE__, 0x3fc47ae1, 0x40000000, 0x3fc47ae1, 0x47ae149e},	/* 0.16=f(0.16)*/
{64, 0,123,__LINE__, 0x3fc5c28f, 0x60000000, 0x3fc5c28f, 0x5c28f5e6},	/* 0.17=f(0.17)*/
{64, 0,123,__LINE__, 0x3fc70a3d, 0x80000000, 0x3fc70a3d, 0x70a3d72e},	/* 0.18=f(0.18)*/
{64, 0,123,__LINE__, 0x3fc851eb, 0x80000000, 0x3fc851eb, 0x851eb876},	/* 0.19=f(0.19)*/
{64, 0,123,__LINE__, 0x3fc99999, 0xa0000000, 0x3fc99999, 0x999999be},	/* 0.2=f(0.2)*/
{64, 0,123,__LINE__, 0x3fcae147, 0xa0000000, 0x3fcae147, 0xae147b06},	/* 0.21=f(0.21)*/
{64, 0,123,__LINE__, 0x3fcc28f5, 0xc0000000, 0x3fcc28f5, 0xc28f5c4e},	/* 0.22=f(0.22)*/
{64, 0,123,__LINE__, 0x3fcd70a3, 0xe0000000, 0x3fcd70a3, 0xd70a3d96},	/* 0.23=f(0.23)*/
{64, 0,123,__LINE__, 0x3fceb851, 0xe0000000, 0x3fceb851, 0xeb851ede},	/* 0.24=f(0.24)*/
{64, 0,123,__LINE__, 0x3fd00000, 0x00000000, 0x3fd00000, 0x00000013},	/* 0.25=f(0.25)*/
{64, 0,123,__LINE__, 0x3fd0a3d7, 0x00000000, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.26=f(0.26)*/
{64, 0,123,__LINE__, 0x3fd147ae, 0x20000000, 0x3fd147ae, 0x147ae15b},	/* 0.27=f(0.27)*/
{64, 0,123,__LINE__, 0x3fd1eb85, 0x20000000, 0x3fd1eb85, 0x1eb851ff},	/* 0.28=f(0.28)*/
{64, 0,123,__LINE__, 0x3fd28f5c, 0x20000000, 0x3fd28f5c, 0x28f5c2a3},	/* 0.29=f(0.29)*/
{64, 0,123,__LINE__, 0x3fd33333, 0x40000000, 0x3fd33333, 0x33333347},	/* 0.3=f(0.3)*/
{64, 0,123,__LINE__, 0x3fd3d70a, 0x40000000, 0x3fd3d70a, 0x3d70a3eb},	/* 0.31=f(0.31)*/
{64, 0,123,__LINE__, 0x3fd47ae1, 0x40000000, 0x3fd47ae1, 0x47ae148f},	/* 0.32=f(0.32)*/
{64, 0,123,__LINE__, 0x3fd51eb8, 0x60000000, 0x3fd51eb8, 0x51eb8533},	/* 0.33=f(0.33)*/
{64, 0,123,__LINE__, 0x3fd5c28f, 0x60000000, 0x3fd5c28f, 0x5c28f5d7},	/* 0.34=f(0.34)*/
{64, 0,123,__LINE__, 0x3fd66666, 0x60000000, 0x3fd66666, 0x6666667b},	/* 0.35=f(0.35)*/
{64, 0,123,__LINE__, 0x3fd70a3d, 0x80000000, 0x3fd70a3d, 0x70a3d71f},	/* 0.36=f(0.36)*/
{64, 0,123,__LINE__, 0x3fd7ae14, 0x80000000, 0x3fd7ae14, 0x7ae147c3},	/* 0.37=f(0.37)*/
{64, 0,123,__LINE__, 0x3fd851eb, 0x80000000, 0x3fd851eb, 0x851eb867},	/* 0.38=f(0.38)*/
{64, 0,123,__LINE__, 0x3fd8f5c2, 0x80000000, 0x3fd8f5c2, 0x8f5c290b},	/* 0.39=f(0.39)*/
{64, 0,123,__LINE__, 0x3fd99999, 0xa0000000, 0x3fd99999, 0x999999af},	/* 0.4=f(0.4)*/
{64, 0,123,__LINE__, 0x3fda3d70, 0xa0000000, 0x3fda3d70, 0xa3d70a53},	/* 0.41=f(0.41)*/
{64, 0,123,__LINE__, 0x3fdae147, 0xa0000000, 0x3fdae147, 0xae147af7},	/* 0.42=f(0.42)*/
{64, 0,123,__LINE__, 0x3fdb851e, 0xc0000000, 0x3fdb851e, 0xb851eb9b},	/* 0.43=f(0.43)*/
{64, 0,123,__LINE__, 0x3fdc28f5, 0xc0000000, 0x3fdc28f5, 0xc28f5c3f},	/* 0.44=f(0.44)*/
{64, 0,123,__LINE__, 0x3fdccccc, 0xc0000000, 0x3fdccccc, 0xcccccce3},	/* 0.45=f(0.45)*/
{64, 0,123,__LINE__, 0x3fdd70a3, 0xe0000000, 0x3fdd70a3, 0xd70a3d87},	/* 0.46=f(0.46)*/
{64, 0,123,__LINE__, 0x3fde147a, 0xe0000000, 0x3fde147a, 0xe147ae2b},	/* 0.47=f(0.47)*/
{64, 0,123,__LINE__, 0x3fdeb851, 0xe0000000, 0x3fdeb851, 0xeb851ecf},	/* 0.48=f(0.48)*/
{64, 0,123,__LINE__, 0x3fdf5c29, 0x00000000, 0x3fdf5c28, 0xf5c28f73},	/* 0.49=f(0.49)*/
{64, 0,123,__LINE__, 0x3fe00000, 0x00000000, 0x3fe00000, 0x0000000b},	/* 0.5=f(0.5)*/
{64, 0,123,__LINE__, 0x3fe051eb, 0x80000000, 0x3fe051eb, 0x851eb85d},	/* 0.51=f(0.51)*/
{64, 0,123,__LINE__, 0x3fe0a3d7, 0x00000000, 0x3fe0a3d7, 0x0a3d70af},	/* 0.52=f(0.52)*/
{64, 0,123,__LINE__, 0x3fe0f5c2, 0x80000000, 0x3fe0f5c2, 0x8f5c2901},	/* 0.53=f(0.53)*/
{64, 0,123,__LINE__, 0x3fe147ae, 0x20000000, 0x3fe147ae, 0x147ae153},	/* 0.54=f(0.54)*/
{64, 0,123,__LINE__, 0x3fe19999, 0xa0000000, 0x3fe19999, 0x999999a5},	/* 0.55=f(0.55)*/
{64, 0,123,__LINE__, 0x3fe1eb85, 0x20000000, 0x3fe1eb85, 0x1eb851f7},	/* 0.56=f(0.56)*/
{64, 0,123,__LINE__, 0x3fe23d70, 0xa0000000, 0x3fe23d70, 0xa3d70a49},	/* 0.57=f(0.57)*/
{64, 0,123,__LINE__, 0x3fe28f5c, 0x20000000, 0x3fe28f5c, 0x28f5c29b},	/* 0.58=f(0.58)*/
{64, 0,123,__LINE__, 0x3fe2e147, 0xa0000000, 0x3fe2e147, 0xae147aed},	/* 0.59=f(0.59)*/
{64, 0,123,__LINE__, 0x3fe33333, 0x40000000, 0x3fe33333, 0x3333333f},	/* 0.6=f(0.6)*/
{64, 0,123,__LINE__, 0x3fe3851e, 0xc0000000, 0x3fe3851e, 0xb851eb91},	/* 0.61=f(0.61)*/
{64, 0,123,__LINE__, 0x3fe3d70a, 0x40000000, 0x3fe3d70a, 0x3d70a3e3},	/* 0.62=f(0.62)*/
{64, 0,123,__LINE__, 0x3fe428f5, 0xc0000000, 0x3fe428f5, 0xc28f5c35},	/* 0.63=f(0.63)*/
{64, 0,123,__LINE__, 0x3fe47ae1, 0x40000000, 0x3fe47ae1, 0x47ae1487},	/* 0.64=f(0.64)*/
{64, 0,123,__LINE__, 0x3fe4cccc, 0xc0000000, 0x3fe4cccc, 0xccccccd9},	/* 0.65=f(0.65)*/
{64, 0,123,__LINE__, 0x3fe51eb8, 0x60000000, 0x3fe51eb8, 0x51eb852b},	/* 0.66=f(0.66)*/
{64, 0,123,__LINE__, 0x3fe570a3, 0xe0000000, 0x3fe570a3, 0xd70a3d7d},	/* 0.67=f(0.67)*/
{64, 0,123,__LINE__, 0x3fe5c28f, 0x60000000, 0x3fe5c28f, 0x5c28f5cf},	/* 0.68=f(0.68)*/
{64, 0,123,__LINE__, 0x3fe6147a, 0xe0000000, 0x3fe6147a, 0xe147ae21},	/* 0.69=f(0.69)*/
{64, 0,123,__LINE__, 0x3fe66666, 0x60000000, 0x3fe66666, 0x66666673},	/* 0.7=f(0.7)*/
{64, 0,123,__LINE__, 0x3fe6b851, 0xe0000000, 0x3fe6b851, 0xeb851ec5},	/* 0.71=f(0.71)*/
{64, 0,123,__LINE__, 0x3fe70a3d, 0x80000000, 0x3fe70a3d, 0x70a3d717},	/* 0.72=f(0.72)*/
{64, 0,123,__LINE__, 0x3fe75c29, 0x00000000, 0x3fe75c28, 0xf5c28f69},	/* 0.73=f(0.73)*/
{64, 0,123,__LINE__, 0x3fe7ae14, 0x80000000, 0x3fe7ae14, 0x7ae147bb},	/* 0.74=f(0.74)*/
{64, 0,123,__LINE__, 0x3fe80000, 0x00000000, 0x3fe80000, 0x0000000d},	/* 0.75=f(0.75)*/
{64, 0,123,__LINE__, 0x3fe851eb, 0x80000000, 0x3fe851eb, 0x851eb85f},	/* 0.76=f(0.76)*/
{64, 0,123,__LINE__, 0x3fe8a3d7, 0x00000000, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.77=f(0.77)*/
{64, 0,123,__LINE__, 0x3fe8f5c2, 0x80000000, 0x3fe8f5c2, 0x8f5c2903},	/* 0.78=f(0.78)*/
{64, 0,123,__LINE__, 0x3fe947ae, 0x20000000, 0x3fe947ae, 0x147ae155},	/* 0.79=f(0.79)*/
{64, 0,123,__LINE__, 0x3fe99999, 0xa0000000, 0x3fe99999, 0x999999a7},	/* 0.8=f(0.8)*/
{64, 0,123,__LINE__, 0x3fe9eb85, 0x20000000, 0x3fe9eb85, 0x1eb851f9},	/* 0.81=f(0.81)*/
{64, 0,123,__LINE__, 0x3fea3d70, 0xa0000000, 0x3fea3d70, 0xa3d70a4b},	/* 0.82=f(0.82)*/
{64, 0,123,__LINE__, 0x3fea8f5c, 0x20000000, 0x3fea8f5c, 0x28f5c29d},	/* 0.83=f(0.83)*/
{64, 0,123,__LINE__, 0x3feae147, 0xa0000000, 0x3feae147, 0xae147aef},	/* 0.84=f(0.84)*/
{64, 0,123,__LINE__, 0x3feb3333, 0x40000000, 0x3feb3333, 0x33333341},	/* 0.85=f(0.85)*/
{64, 0,123,__LINE__, 0x3feb851e, 0xc0000000, 0x3feb851e, 0xb851eb93},	/* 0.86=f(0.86)*/
{64, 0,123,__LINE__, 0x3febd70a, 0x40000000, 0x3febd70a, 0x3d70a3e5},	/* 0.87=f(0.87)*/
{64, 0,123,__LINE__, 0x3fec28f5, 0xc0000000, 0x3fec28f5, 0xc28f5c37},	/* 0.88=f(0.88)*/
{64, 0,123,__LINE__, 0x3fec7ae1, 0x40000000, 0x3fec7ae1, 0x47ae1489},	/* 0.89=f(0.89)*/
{64, 0,123,__LINE__, 0x3feccccc, 0xc0000000, 0x3feccccc, 0xccccccdb},	/* 0.9=f(0.9)*/
{64, 0,123,__LINE__, 0x3fed1eb8, 0x60000000, 0x3fed1eb8, 0x51eb852d},	/* 0.91=f(0.91)*/
{64, 0,123,__LINE__, 0x3fed70a3, 0xe0000000, 0x3fed70a3, 0xd70a3d7f},	/* 0.92=f(0.92)*/
{64, 0,123,__LINE__, 0x3fedc28f, 0x60000000, 0x3fedc28f, 0x5c28f5d1},	/* 0.93=f(0.93)*/
{64, 0,123,__LINE__, 0x3fee147a, 0xe0000000, 0x3fee147a, 0xe147ae23},	/* 0.94=f(0.94)*/
{64, 0,123,__LINE__, 0x3fee6666, 0x60000000, 0x3fee6666, 0x66666675},	/* 0.95=f(0.95)*/
{64, 0,123,__LINE__, 0x3feeb851, 0xe0000000, 0x3feeb851, 0xeb851ec7},	/* 0.96=f(0.96)*/
{64, 0,123,__LINE__, 0x3fef0a3d, 0x80000000, 0x3fef0a3d, 0x70a3d719},	/* 0.97=f(0.97)*/
{64, 0,123,__LINE__, 0x3fef5c29, 0x00000000, 0x3fef5c28, 0xf5c28f6b},	/* 0.98=f(0.98)*/
{64, 0,123,__LINE__, 0x3fefae14, 0x80000000, 0x3fefae14, 0x7ae147bd},	/* 0.99=f(0.99)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3ff00000, 0x00000007},	/* 1=f(1)*/
{64, 0,123,__LINE__, 0x3ff028f5, 0xc0000000, 0x3ff028f5, 0xc28f5c30},	/* 1.01=f(1.01)*/
{64, 0,123,__LINE__, 0x3ff051eb, 0x80000000, 0x3ff051eb, 0x851eb859},	/* 1.02=f(1.02)*/
{64, 0,123,__LINE__, 0x3ff07ae1, 0x40000000, 0x3ff07ae1, 0x47ae1482},	/* 1.03=f(1.03)*/
{64, 0,123,__LINE__, 0x3ff0a3d7, 0x00000000, 0x3ff0a3d7, 0x0a3d70ab},	/* 1.04=f(1.04)*/
{64, 0,123,__LINE__, 0x3ff0cccc, 0xc0000000, 0x3ff0cccc, 0xccccccd4},	/* 1.05=f(1.05)*/
{64, 0,123,__LINE__, 0x3ff0f5c2, 0x80000000, 0x3ff0f5c2, 0x8f5c28fd},	/* 1.06=f(1.06)*/
{64, 0,123,__LINE__, 0x3ff11eb8, 0x60000000, 0x3ff11eb8, 0x51eb8526},	/* 1.07=f(1.07)*/
{64, 0,123,__LINE__, 0x3ff147ae, 0x20000000, 0x3ff147ae, 0x147ae14f},	/* 1.08=f(1.08)*/
{64, 0,123,__LINE__, 0x3ff170a3, 0xe0000000, 0x3ff170a3, 0xd70a3d78},	/* 1.09=f(1.09)*/
{64, 0,123,__LINE__, 0x3ff19999, 0xa0000000, 0x3ff19999, 0x999999a1},	/* 1.1=f(1.1)*/
{64, 0,123,__LINE__, 0x3ff1c28f, 0x60000000, 0x3ff1c28f, 0x5c28f5ca},	/* 1.11=f(1.11)*/
{64, 0,123,__LINE__, 0x3ff1eb85, 0x20000000, 0x3ff1eb85, 0x1eb851f3},	/* 1.12=f(1.12)*/
{64, 0,123,__LINE__, 0x3ff2147a, 0xe0000000, 0x3ff2147a, 0xe147ae1c},	/* 1.13=f(1.13)*/
{64, 0,123,__LINE__, 0x3ff23d70, 0xa0000000, 0x3ff23d70, 0xa3d70a45},	/* 1.14=f(1.14)*/
{64, 0,123,__LINE__, 0x3ff26666, 0x60000000, 0x3ff26666, 0x6666666e},	/* 1.15=f(1.15)*/
{64, 0,123,__LINE__, 0x3ff28f5c, 0x20000000, 0x3ff28f5c, 0x28f5c297},	/* 1.16=f(1.16)*/
{64, 0,123,__LINE__, 0x3ff2b851, 0xe0000000, 0x3ff2b851, 0xeb851ec0},	/* 1.17=f(1.17)*/
{64, 0,123,__LINE__, 0x3ff2e147, 0xa0000000, 0x3ff2e147, 0xae147ae9},	/* 1.18=f(1.18)*/
{64, 0,123,__LINE__, 0x3ff30a3d, 0x80000000, 0x3ff30a3d, 0x70a3d712},	/* 1.19=f(1.19)*/
{64, 0,123,__LINE__, 0x401921fb, 0x60000000, 0xc01921fb, 0x54442d18},	/* 6.28319=f(-6.28319)*/
{64, 0,123,__LINE__, 0x4012d97c, 0x80000000, 0xc012d97c, 0x7f3321d2},	/* 4.71239=f(-4.71239)*/
{64, 0,123,__LINE__, 0x400921fb, 0x60000000, 0xc00921fb, 0x54442d18},	/* 3.14159=f(-3.14159)*/
{64, 0,123,__LINE__, 0x3ff921fb, 0x60000000, 0xbff921fb, 0x54442d18},	/* 1.5708=f(-1.5708)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{64, 0,123,__LINE__, 0x3ff921fb, 0x60000000, 0x3ff921fb, 0x54442d18},	/* 1.5708=f(1.5708)*/
{64, 0,123,__LINE__, 0x400921fb, 0x60000000, 0x400921fb, 0x54442d18},	/* 3.14159=f(3.14159)*/
{64, 0,123,__LINE__, 0x4012d97c, 0x80000000, 0x4012d97c, 0x7f3321d2},	/* 4.71239=f(4.71239)*/
{64, 0,123,__LINE__, 0x403e0000, 0x00000000, 0xc03e0000, 0x00000000},	/* 30=f(-30)*/
{64, 0,123,__LINE__, 0x403c4ccc, 0xc0000000, 0xc03c4ccc, 0xcccccccd},	/* 28.3=f(-28.3)*/
{64, 0,123,__LINE__, 0x403a9999, 0xa0000000, 0xc03a9999, 0x9999999a},	/* 26.6=f(-26.6)*/
{64, 0,123,__LINE__, 0x4038e666, 0x60000000, 0xc038e666, 0x66666667},	/* 24.9=f(-24.9)*/
{64, 0,123,__LINE__, 0x40373333, 0x40000000, 0xc0373333, 0x33333334},	/* 23.2=f(-23.2)*/
{64, 0,123,__LINE__, 0x40358000, 0x00000000, 0xc0358000, 0x00000001},	/* 21.5=f(-21.5)*/
{64, 0,123,__LINE__, 0x4033cccc, 0xc0000000, 0xc033cccc, 0xccccccce},	/* 19.8=f(-19.8)*/
{64, 0,123,__LINE__, 0x40321999, 0xa0000000, 0xc0321999, 0x9999999b},	/* 18.1=f(-18.1)*/
{64, 0,123,__LINE__, 0x40306666, 0x60000000, 0xc0306666, 0x66666668},	/* 16.4=f(-16.4)*/
{64, 0,123,__LINE__, 0x402d6666, 0x60000000, 0xc02d6666, 0x6666666a},	/* 14.7=f(-14.7)*/
{64, 0,123,__LINE__, 0x402a0000, 0x00000000, 0xc02a0000, 0x00000004},	/* 13=f(-13)*/
{64, 0,123,__LINE__, 0x40269999, 0xa0000000, 0xc0269999, 0x9999999e},	/* 11.3=f(-11.3)*/
{64, 0,123,__LINE__, 0x40233333, 0x40000000, 0xc0233333, 0x33333338},	/* 9.6=f(-9.6)*/
{64, 0,123,__LINE__, 0x401f9999, 0xa0000000, 0xc01f9999, 0x999999a3},	/* 7.9=f(-7.9)*/
{64, 0,123,__LINE__, 0x4018cccc, 0xc0000000, 0xc018cccc, 0xccccccd6},	/* 6.2=f(-6.2)*/
{64, 0,123,__LINE__, 0x40120000, 0x00000000, 0xc0120000, 0x00000009},	/* 4.5=f(-4.5)*/
{64, 0,123,__LINE__, 0x40066666, 0x60000000, 0xc0066666, 0x66666678},	/* 2.8=f(-2.8)*/
{64, 0,123,__LINE__, 0x3ff19999, 0xa0000000, 0xbff19999, 0x999999bd},	/* 1.1=f(-1.1)*/
{64, 0,123,__LINE__, 0x3fe33333, 0x40000000, 0x3fe33333, 0x333332ec},	/* 0.6=f(0.6)*/
{64, 0,123,__LINE__, 0x40026666, 0x60000000, 0x40026666, 0x66666654},	/* 2.3=f(2.3)*/
{64, 0,123,__LINE__, 0x40100000, 0x00000000, 0x400fffff, 0xffffffee},	/* 4=f(4)*/
{64, 0,123,__LINE__, 0x4016cccc, 0xc0000000, 0x4016cccc, 0xccccccc4},	/* 5.7=f(5.7)*/
{64, 0,123,__LINE__, 0x401d9999, 0xa0000000, 0x401d9999, 0x99999991},	/* 7.4=f(7.4)*/
{64, 0,123,__LINE__, 0x40223333, 0x40000000, 0x40223333, 0x3333332f},	/* 9.1=f(9.1)*/
{64, 0,123,__LINE__, 0x40259999, 0xa0000000, 0x40259999, 0x99999995},	/* 10.8=f(10.8)*/
{64, 0,123,__LINE__, 0x40290000, 0x00000000, 0x4028ffff, 0xfffffffb},	/* 12.5=f(12.5)*/
{64, 0,123,__LINE__, 0x402c6666, 0x60000000, 0x402c6666, 0x66666661},	/* 14.2=f(14.2)*/
{64, 0,123,__LINE__, 0x402fcccc, 0xc0000000, 0x402fcccc, 0xccccccc7},	/* 15.9=f(15.9)*/
{64, 0,123,__LINE__, 0x40319999, 0xa0000000, 0x40319999, 0x99999997},	/* 17.6=f(17.6)*/
{64, 0,123,__LINE__, 0x40334ccc, 0xc0000000, 0x40334ccc, 0xccccccca},	/* 19.3=f(19.3)*/
{64, 0,123,__LINE__, 0x40350000, 0x00000000, 0x4034ffff, 0xfffffffd},	/* 21=f(21)*/
{64, 0,123,__LINE__, 0x4036b333, 0x40000000, 0x4036b333, 0x33333330},	/* 22.7=f(22.7)*/
{64, 0,123,__LINE__, 0x40386666, 0x60000000, 0x40386666, 0x66666663},	/* 24.4=f(24.4)*/
{64, 0,123,__LINE__, 0x403a1999, 0xa0000000, 0x403a1999, 0x99999996},	/* 26.1=f(26.1)*/
{64, 0,123,__LINE__, 0x403bcccc, 0xc0000000, 0x403bcccc, 0xccccccc9},	/* 27.8=f(27.8)*/
{64, 0,123,__LINE__, 0x403d8000, 0x00000000, 0x403d7fff, 0xfffffffc},	/* 29.5=f(29.5)*/
{64, 0,123,__LINE__, 0x7ff80000, 0x00000000, 0x7ff80000, 0x00000000},   /* qnan=f(qnan)*/
{64, 0,123,__LINE__, 0x7ff40000, 0x00000000, 0x7ff40000, 0x00000000},   /* snan=f(snan)*/
{64, 0,123,__LINE__, 0x7ff00000, 0x00000000, 0x7ff00000, 0x00000000},   /* +inf=f(+inf)*/
{64, 0,123,__LINE__, 0x7ff00000, 0x00000000, 0xfff00000, 0x00000000},   /* +inf=f(-inf)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},   /* +0=f(+0)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x80000000, 0x00000000},   /* +0=f(-0)*/
{0}
};
void test_fabsf(int m)   {run_vector_1(m,fabsf_vec,(char *)(fabsf),"fabsf","ff");   }
