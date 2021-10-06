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
 one_line_type sinf_vec[] = {
{37, 0,123,__LINE__, 0xbfedd343, 0xab6112e5, 0xbff33333, 0x33333333},	/* -0.932039=f(-1.2)*/
{38, 0,123,__LINE__, 0xbfedb532, 0xe189731e, 0xbff30a3d, 0x70a3d70a},	/* -0.928369=f(-1.19)*/
{39, 0,123,__LINE__, 0xbfed965f, 0x4e653233, 0xbff2e147, 0xae147ae1},	/* -0.924606=f(-1.18)*/
{40, 0,123,__LINE__, 0xbfed76c9, 0xec245aff, 0xbff2b851, 0xeb851eb8},	/* -0.920751=f(-1.17)*/
{39, 0,123,__LINE__, 0xbfed5673, 0x71f97b24, 0xbff28f5c, 0x28f5c28f},	/* -0.916803=f(-1.16)*/
{37, 0,123,__LINE__, 0xbfed355c, 0xb3d1d872, 0xbff26666, 0x66666666},	/* -0.912764=f(-1.15)*/
{40, 0,123,__LINE__, 0xbfed1386, 0x8a86bd86, 0xbff23d70, 0xa3d70a3d},	/* -0.908633=f(-1.14)*/
{38, 0,123,__LINE__, 0xbfecf0f1, 0xd3d7eca9, 0xbff2147a, 0xe147ae14},	/* -0.904412=f(-1.13)*/
{41, 0,123,__LINE__, 0xbfeccd9f, 0x7265f297, 0xbff1eb85, 0x1eb851eb},	/* -0.9001=f(-1.12)*/
{37, 0,123,__LINE__, 0xbfeca990, 0x4dac5943, 0xbff1c28f, 0x5c28f5c2},	/* -0.895699=f(-1.11)*/
{41, 0,123,__LINE__, 0xbfec84c5, 0x51fbbad8, 0xbff19999, 0x99999999},	/* -0.891207=f(-1.1)*/
{40, 0,123,__LINE__, 0xbfec5f3f, 0x7073b4ff, 0xbff170a3, 0xd70a3d70},	/* -0.886627=f(-1.09)*/
{38, 0,123,__LINE__, 0xbfec38ff, 0x9efcbcae, 0xbff147ae, 0x147ae147},	/* -0.881958=f(-1.08)*/
{37, 0,123,__LINE__, 0xbfec1206, 0xd841d293, 0xbff11eb8, 0x51eb851e},	/* -0.877201=f(-1.07)*/
{40, 0,123,__LINE__, 0xbfebea55, 0xfc606a39, 0xbff0f5c2, 0x8f5c28f5},	/* -0.872355=f(-1.06)*/
{37, 0,123,__LINE__, 0xbfebc1ee, 0x4d7a129d, 0xbff0cccc, 0xcccccccc},	/* -0.867423=f(-1.05)*/
{37, 0,123,__LINE__, 0xbfeb98d0, 0xb5a01bc1, 0xbff0a3d7, 0x0a3d70a3},	/* -0.862404=f(-1.04)*/
{42, 0,123,__LINE__, 0xbfeb6efe, 0x424657ce, 0xbff07ae1, 0x47ae147a},	/* -0.857299=f(-1.03)*/
{39, 0,123,__LINE__, 0xbfeb4478, 0x0581da39, 0xbff051eb, 0x851eb851},	/* -0.852108=f(-1.02)*/
{39, 0,123,__LINE__, 0xbfeb193f, 0x1601f38a, 0xbff028f5, 0xc28f5c28},	/* -0.846832=f(-1.01)*/
{40, 0,123,__LINE__, 0xbfeaed54, 0x8f090f04, 0xbfefffff, 0xfffffffe},	/* -0.841471=f(-1)*/
{39, 0,123,__LINE__, 0xbfeac0b9, 0x90657247, 0xbfefae14, 0x7ae147ac},	/* -0.836026=f(-0.99)*/
{40, 0,123,__LINE__, 0xbfea936f, 0x3e69df2a, 0xbfef5c28, 0xf5c28f5a},	/* -0.830497=f(-0.98)*/
{39, 0,123,__LINE__, 0xbfea6576, 0xc1e61802, 0xbfef0a3d, 0x70a3d708},	/* -0.824886=f(-0.97)*/
{37, 0,123,__LINE__, 0xbfea36d1, 0x35c4ffdb, 0xbfeeb851, 0xeb851eb6},	/* -0.819192=f(-0.96)*/
{38, 0,123,__LINE__, 0xbfea077f, 0xf02b1f2a, 0xbfee6666, 0x66666664},	/* -0.813415=f(-0.95)*/
{39, 0,123,__LINE__, 0xbfe9d784, 0x151a40ab, 0xbfee147a, 0xe147ae12},	/* -0.807558=f(-0.94)*/
{41, 0,123,__LINE__, 0xbfe9a6de, 0xdf090b70, 0xbfedc28f, 0x5c28f5c0},	/* -0.80162=f(-0.93)*/
{38, 0,123,__LINE__, 0xbfe97591, 0x8cc406fa, 0xbfed70a3, 0xd70a3d6e},	/* -0.795602=f(-0.92)*/
{39, 0,123,__LINE__, 0xbfe9439d, 0x616571f1, 0xbfed1eb8, 0x51eb851c},	/* -0.789504=f(-0.91)*/
{39, 0,123,__LINE__, 0xbfe91103, 0x9068c223, 0xbfeccccc, 0xccccccca},	/* -0.783327=f(-0.9)*/
{38, 0,123,__LINE__, 0xbfe8ddc5, 0x8cf34340, 0xbfec7ae1, 0x47ae1478},	/* -0.777072=f(-0.89)*/
{41, 0,123,__LINE__, 0xbfe8a9e4, 0x93327c6b, 0xbfec28f5, 0xc28f5c26},	/* -0.770739=f(-0.88)*/
{39, 0,123,__LINE__, 0xbfe87561, 0xf723bd1b, 0xbfebd70a, 0x3d70a3d4},	/* -0.764329=f(-0.87)*/
{41, 0,123,__LINE__, 0xbfe8403f, 0x10e79ad9, 0xbfeb851e, 0xb851eb82},	/* -0.757843=f(-0.86)*/
{38, 0,123,__LINE__, 0xbfe80a7d, 0x3cb921fa, 0xbfeb3333, 0x33333330},	/* -0.75128=f(-0.85)*/
{38, 0,123,__LINE__, 0xbfe7d41d, 0xc589107c, 0xbfeae147, 0xae147ade},	/* -0.744643=f(-0.84)*/
{43, 0,123,__LINE__, 0xbfe79d22, 0x3a278326, 0xbfea8f5c, 0x28f5c28c},	/* -0.737931=f(-0.83)*/
{40, 0,123,__LINE__, 0xbfe7658b, 0xedca6ff8, 0xbfea3d70, 0xa3d70a3a},	/* -0.731146=f(-0.82)*/
{39, 0,123,__LINE__, 0xbfe72d5c, 0x4cbc9104, 0xbfe9eb85, 0x1eb851e8},	/* -0.724287=f(-0.81)*/
{39, 0,123,__LINE__, 0xbfe6f494, 0xc7357c16, 0xbfe99999, 0x99999996},	/* -0.717356=f(-0.8)*/
{41, 0,123,__LINE__, 0xbfe6bb36, 0xd1503588, 0xbfe947ae, 0x147ae144},	/* -0.710353=f(-0.79)*/
{36, 0,123,__LINE__, 0xbfe68143, 0xc0000000, 0xbfe8f5c2, 0x8f5c28f2},	/* -0.703279=f(-0.78)*/
{42, 0,123,__LINE__, 0xbfe646bd, 0x60000000, 0xbfe8a3d7, 0x0a3d70a0},	/* -0.696135=f(-0.77)*/
{37, 0,123,__LINE__, 0xbfe60ba5, 0x00000000, 0xbfe851eb, 0x851eb84e},	/* -0.688921=f(-0.76)*/
{36, 0,123,__LINE__, 0xbfe5cffc, 0x20000000, 0xbfe7ffff, 0xfffffffc},	/* -0.681639=f(-0.75)*/
{40, 0,123,__LINE__, 0xbfe593c4, 0x40000000, 0xbfe7ae14, 0x7ae147aa},	/* -0.674288=f(-0.74)*/
{37, 0,123,__LINE__, 0xbfe556ff, 0x00000000, 0xbfe75c28, 0xf5c28f58},	/* -0.66687=f(-0.73)*/
{35, 0,123,__LINE__, 0xbfe519ad, 0xe0000000, 0xbfe70a3d, 0x70a3d706},	/* -0.659385=f(-0.72)*/
{36, 0,123,__LINE__, 0xbfe4dbd2, 0x80000000, 0xbfe6b851, 0xeb851eb4},	/* -0.651834=f(-0.71)*/
{38, 0,123,__LINE__, 0xbfe49d6e, 0x60000000, 0xbfe66666, 0x66666662},	/* -0.644218=f(-0.7)*/
{37, 0,123,__LINE__, 0xbfe45e83, 0x40000000, 0xbfe6147a, 0xe147ae10},	/* -0.636537=f(-0.69)*/
{36, 0,123,__LINE__, 0xbfe41f12, 0x80000000, 0xbfe5c28f, 0x5c28f5be},	/* -0.628793=f(-0.68)*/
{36, 0,123,__LINE__, 0xbfe3df1e, 0x00000000, 0xbfe570a3, 0xd70a3d6c},	/* -0.620986=f(-0.67)*/
{37, 0,123,__LINE__, 0xbfe39ea7, 0x40000000, 0xbfe51eb8, 0x51eb851a},	/* -0.613117=f(-0.66)*/
{36, 0,123,__LINE__, 0xbfe35daf, 0xe0000000, 0xbfe4cccc, 0xccccccc8},	/* -0.605186=f(-0.65)*/
{36, 0,123,__LINE__, 0xbfe31c39, 0xa0000000, 0xbfe47ae1, 0x47ae1476},	/* -0.597195=f(-0.64)*/
{37, 0,123,__LINE__, 0xbfe2da46, 0x20000000, 0xbfe428f5, 0xc28f5c24},	/* -0.589145=f(-0.63)*/
{36, 0,123,__LINE__, 0xbfe297d7, 0x00000000, 0xbfe3d70a, 0x3d70a3d2},	/* -0.581035=f(-0.62)*/
{36, 0,123,__LINE__, 0xbfe254ee, 0x20000000, 0xbfe3851e, 0xb851eb80},	/* -0.572867=f(-0.61)*/
{38, 0,123,__LINE__, 0xbfe2118d, 0x20000000, 0xbfe33333, 0x3333332e},	/* -0.564642=f(-0.6)*/
{36, 0,123,__LINE__, 0xbfe1cdb5, 0xa0000000, 0xbfe2e147, 0xae147adc},	/* -0.556361=f(-0.59)*/
{37, 0,123,__LINE__, 0xbfe18969, 0x80000000, 0xbfe28f5c, 0x28f5c28a},	/* -0.548024=f(-0.58)*/
{36, 0,123,__LINE__, 0xbfe144aa, 0x60000000, 0xbfe23d70, 0xa3d70a38},	/* -0.539632=f(-0.57)*/
{36, 0,123,__LINE__, 0xbfe0ff7a, 0x40000000, 0xbfe1eb85, 0x1eb851e6},	/* -0.531186=f(-0.56)*/
{36, 0,123,__LINE__, 0xbfe0b9da, 0xa0000000, 0xbfe19999, 0x99999994},	/* -0.522687=f(-0.55)*/
{38, 0,123,__LINE__, 0xbfe073cd, 0x60000000, 0xbfe147ae, 0x147ae142},	/* -0.514136=f(-0.54)*/
{36, 0,123,__LINE__, 0xbfe02d54, 0x40000000, 0xbfe0f5c2, 0x8f5c28f0},	/* -0.505533=f(-0.53)*/
{37, 0,123,__LINE__, 0xbfdfcce2, 0x40000000, 0xbfe0a3d7, 0x0a3d709e},	/* -0.49688=f(-0.52)*/
{40, 0,123,__LINE__, 0xbfdf3e4b, 0xc0000000, 0xbfe051eb, 0x851eb84c},	/* -0.488177=f(-0.51)*/
{36, 0,123,__LINE__, 0xbfdeaee8, 0x80000000, 0xbfdfffff, 0xfffffff4},	/* -0.479426=f(-0.5)*/
{36, 0,123,__LINE__, 0xbfde1ebc, 0x20000000, 0xbfdf5c28, 0xf5c28f50},	/* -0.470626=f(-0.49)*/
{36, 0,123,__LINE__, 0xbfdd8dca, 0x40000000, 0xbfdeb851, 0xeb851eac},	/* -0.461779=f(-0.48)*/
{39, 0,123,__LINE__, 0xbfdcfc16, 0xc0000000, 0xbfde147a, 0xe147ae08},	/* -0.452886=f(-0.47)*/
{37, 0,123,__LINE__, 0xbfdc69a5, 0x60000000, 0xbfdd70a3, 0xd70a3d64},	/* -0.443948=f(-0.46)*/
{38, 0,123,__LINE__, 0xbfdbd679, 0xa0000000, 0xbfdccccc, 0xccccccc0},	/* -0.434966=f(-0.45)*/
{37, 0,123,__LINE__, 0xbfdb4297, 0xa0000000, 0xbfdc28f5, 0xc28f5c1c},	/* -0.425939=f(-0.44)*/
{37, 0,123,__LINE__, 0xbfdaae02, 0xe0000000, 0xbfdb851e, 0xb851eb78},	/* -0.416871=f(-0.43)*/
{43, 0,123,__LINE__, 0xbfda18bf, 0x40000000, 0xbfdae147, 0xae147ad4},	/* -0.40776=f(-0.42)*/
{36, 0,123,__LINE__, 0xbfd982d0, 0xa0000000, 0xbfda3d70, 0xa3d70a30},	/* -0.398609=f(-0.41)*/
{36, 0,123,__LINE__, 0xbfd8ec3a, 0xe0000000, 0xbfd99999, 0x9999998c},	/* -0.389418=f(-0.4)*/
{38, 0,123,__LINE__, 0xbfd85501, 0xc0000000, 0xbfd8f5c2, 0x8f5c28e8},	/* -0.380188=f(-0.39)*/
{36, 0,123,__LINE__, 0xbfd7bd29, 0x40000000, 0xbfd851eb, 0x851eb844},	/* -0.37092=f(-0.38)*/
{36, 0,123,__LINE__, 0xbfd724b5, 0x20000000, 0xbfd7ae14, 0x7ae147a0},	/* -0.361615=f(-0.37)*/
{36, 0,123,__LINE__, 0xbfd68ba9, 0x40000000, 0xbfd70a3d, 0x70a3d6fc},	/* -0.352274=f(-0.36)*/
{40, 0,123,__LINE__, 0xbfd5f209, 0xa0000000, 0xbfd66666, 0x66666658},	/* -0.342898=f(-0.35)*/
{38, 0,123,__LINE__, 0xbfd557da, 0x40000000, 0xbfd5c28f, 0x5c28f5b4},	/* -0.333487=f(-0.34)*/
{37, 0,123,__LINE__, 0xbfd4bd1f, 0x00000000, 0xbfd51eb8, 0x51eb8510},	/* -0.324043=f(-0.33)*/
{39, 0,123,__LINE__, 0xbfd421db, 0xc0000000, 0xbfd47ae1, 0x47ae146c},	/* -0.314567=f(-0.32)*/
{36, 0,123,__LINE__, 0xbfd38614, 0xa0000000, 0xbfd3d70a, 0x3d70a3c8},	/* -0.305059=f(-0.31)*/
{38, 0,123,__LINE__, 0xbfd2e9cd, 0xa0000000, 0xbfd33333, 0x33333324},	/* -0.29552=f(-0.3)*/
{37, 0,123,__LINE__, 0xbfd24d0a, 0x80000000, 0xbfd28f5c, 0x28f5c280},	/* -0.285952=f(-0.29)*/
{37, 0,123,__LINE__, 0xbfd1afcf, 0xa0000000, 0xbfd1eb85, 0x1eb851dc},	/* -0.276356=f(-0.28)*/
{37, 0,123,__LINE__, 0xbfd11220, 0xc0000000, 0xbfd147ae, 0x147ae138},	/* -0.266731=f(-0.27)*/
{36, 0,123,__LINE__, 0xbfd07402, 0x00000000, 0xbfd0a3d7, 0x0a3d7094},	/* -0.257081=f(-0.26)*/
{36, 0,123,__LINE__, 0xbfcfaaee, 0xe0000000, 0xbfcfffff, 0xffffffe0},	/* -0.247404=f(-0.25)*/
{38, 0,123,__LINE__, 0xbfce6d0a, 0x20000000, 0xbfceb851, 0xeb851e98},	/* -0.237703=f(-0.24)*/
{38, 0,123,__LINE__, 0xbfcd2e5e, 0x20000000, 0xbfcd70a3, 0xd70a3d50},	/* -0.227978=f(-0.23)*/
{41, 0,123,__LINE__, 0xbfcbeef2, 0xc0000000, 0xbfcc28f5, 0xc28f5c08},	/* -0.21823=f(-0.22)*/
{36, 0,123,__LINE__, 0xbfcaaed0, 0x60000000, 0xbfcae147, 0xae147ac0},	/* -0.20846=f(-0.21)*/
{36, 0,123,__LINE__, 0xbfc96dff, 0x20000000, 0xbfc99999, 0x99999978},	/* -0.198669=f(-0.2)*/
{36, 0,123,__LINE__, 0xbfc82c87, 0x40000000, 0xbfc851eb, 0x851eb830},	/* -0.188859=f(-0.19)*/
{37, 0,123,__LINE__, 0xbfc6ea71, 0x00000000, 0xbfc70a3d, 0x70a3d6e8},	/* -0.17903=f(-0.18)*/
{36, 0,123,__LINE__, 0xbfc5a7c4, 0x60000000, 0xbfc5c28f, 0x5c28f5a0},	/* -0.169182=f(-0.17)*/
{36, 0,123,__LINE__, 0xbfc4648a, 0x00000000, 0xbfc47ae1, 0x47ae1458},	/* -0.159318=f(-0.16)*/
{36, 0,123,__LINE__, 0xbfc320ca, 0x00000000, 0xbfc33333, 0x33333310},	/* -0.149438=f(-0.15)*/
{39, 0,123,__LINE__, 0xbfc1dc8c, 0x80000000, 0xbfc1eb85, 0x1eb851c8},	/* -0.139543=f(-0.14)*/
{36, 0,123,__LINE__, 0xbfc097da, 0x00000000, 0xbfc0a3d7, 0x0a3d7080},	/* -0.129634=f(-0.13)*/
{38, 0,123,__LINE__, 0xbfbea575, 0x80000000, 0xbfbeb851, 0xeb851e71},	/* -0.119712=f(-0.12)*/
{39, 0,123,__LINE__, 0xbfbc1a6e, 0x40000000, 0xbfbc28f5, 0xc28f5be2},	/* -0.109778=f(-0.11)*/
{36, 0,123,__LINE__, 0xbfb98eae, 0xe0000000, 0xbfb99999, 0x99999953},	/* -0.0998334=f(-0.1)*/
{37, 0,123,__LINE__, 0xbfb70247, 0xe0000000, 0xbfb70a3d, 0x70a3d6c4},	/* -0.0898786=f(-0.09)*/
{36, 0,123,__LINE__, 0xbfb4754a, 0x00000000, 0xbfb47ae1, 0x47ae1435},	/* -0.0799147=f(-0.08)*/
{38, 0,123,__LINE__, 0xbfb1e7c6, 0x40000000, 0xbfb1eb85, 0x1eb851a6},	/* -0.0699428=f(-0.07)*/
{38, 0,123,__LINE__, 0xbfaeb39a, 0x20000000, 0xbfaeb851, 0xeb851e2d},	/* -0.059964=f(-0.06)*/
{36, 0,123,__LINE__, 0xbfa996de, 0xa0000000, 0xbfa99999, 0x9999990e},	/* -0.0499792=f(-0.05)*/
{38, 0,123,__LINE__, 0xbfa4797b, 0x60000000, 0xbfa47ae1, 0x47ae13ef},	/* -0.0399893=f(-0.04)*/
{37, 0,123,__LINE__, 0xbf9eb723, 0xe0000000, 0xbf9eb851, 0xeb851da0},	/* -0.0299955=f(-0.03)*/
{37, 0,123,__LINE__, 0xbf947a87, 0xc0000000, 0xbf947ae1, 0x47ae1362},	/* -0.0199987=f(-0.02)*/
{39, 0,123,__LINE__, 0xbf847aca, 0xe0000000, 0xbf847ae1, 0x47ae1249},	/* -0.00999983=f(-0.01)*/
{64, 0,123,__LINE__, 0x3cd19000, 0x00000000, 0x3cd19000, 0x00000000},	/* 9.74915e-16=f(9.74915e-16)*/
{39, 0,123,__LINE__, 0x3f847aca, 0xe0000000, 0x3f847ae1, 0x47ae16ad},	/* 0.00999983=f(0.01)*/
{37, 0,123,__LINE__, 0x3f947a87, 0xc0000000, 0x3f947ae1, 0x47ae1594},	/* 0.0199987=f(0.02)*/
{37, 0,123,__LINE__, 0x3f9eb723, 0xe0000000, 0x3f9eb851, 0xeb851fd2},	/* 0.0299955=f(0.03)*/
{38, 0,123,__LINE__, 0x3fa4797b, 0x60000000, 0x3fa47ae1, 0x47ae1508},	/* 0.0399893=f(0.04)*/
{36, 0,123,__LINE__, 0x3fa996de, 0xa0000000, 0x3fa99999, 0x99999a27},	/* 0.0499792=f(0.05)*/
{38, 0,123,__LINE__, 0x3faeb39a, 0x20000000, 0x3faeb851, 0xeb851f46},	/* 0.059964=f(0.06)*/
{38, 0,123,__LINE__, 0x3fb1e7c6, 0x40000000, 0x3fb1eb85, 0x1eb85232},	/* 0.0699428=f(0.07)*/
{36, 0,123,__LINE__, 0x3fb4754a, 0x00000000, 0x3fb47ae1, 0x47ae14c1},	/* 0.0799147=f(0.08)*/
{37, 0,123,__LINE__, 0x3fb70247, 0xe0000000, 0x3fb70a3d, 0x70a3d750},	/* 0.0898786=f(0.09)*/
{36, 0,123,__LINE__, 0x3fb98eae, 0xe0000000, 0x3fb99999, 0x999999df},	/* 0.0998334=f(0.1)*/
{39, 0,123,__LINE__, 0x3fbc1a6e, 0x40000000, 0x3fbc28f5, 0xc28f5c6e},	/* 0.109778=f(0.11)*/
{38, 0,123,__LINE__, 0x3fbea575, 0x80000000, 0x3fbeb851, 0xeb851efd},	/* 0.119712=f(0.12)*/
{36, 0,123,__LINE__, 0x3fc097da, 0x00000000, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.129634=f(0.13)*/
{39, 0,123,__LINE__, 0x3fc1dc8c, 0x80000000, 0x3fc1eb85, 0x1eb8520e},	/* 0.139543=f(0.14)*/
{36, 0,123,__LINE__, 0x3fc320ca, 0x00000000, 0x3fc33333, 0x33333356},	/* 0.149438=f(0.15)*/
{36, 0,123,__LINE__, 0x3fc4648a, 0x00000000, 0x3fc47ae1, 0x47ae149e},	/* 0.159318=f(0.16)*/
{36, 0,123,__LINE__, 0x3fc5a7c4, 0x60000000, 0x3fc5c28f, 0x5c28f5e6},	/* 0.169182=f(0.17)*/
{37, 0,123,__LINE__, 0x3fc6ea71, 0x00000000, 0x3fc70a3d, 0x70a3d72e},	/* 0.17903=f(0.18)*/
{36, 0,123,__LINE__, 0x3fc82c87, 0x40000000, 0x3fc851eb, 0x851eb876},	/* 0.188859=f(0.19)*/
{36, 0,123,__LINE__, 0x3fc96dff, 0x20000000, 0x3fc99999, 0x999999be},	/* 0.198669=f(0.2)*/
{36, 0,123,__LINE__, 0x3fcaaed0, 0x60000000, 0x3fcae147, 0xae147b06},	/* 0.20846=f(0.21)*/
{41, 0,123,__LINE__, 0x3fcbeef2, 0xc0000000, 0x3fcc28f5, 0xc28f5c4e},	/* 0.21823=f(0.22)*/
{38, 0,123,__LINE__, 0x3fcd2e5e, 0x20000000, 0x3fcd70a3, 0xd70a3d96},	/* 0.227978=f(0.23)*/
{38, 0,123,__LINE__, 0x3fce6d0a, 0x20000000, 0x3fceb851, 0xeb851ede},	/* 0.237703=f(0.24)*/
{36, 0,123,__LINE__, 0x3fcfaaee, 0xe0000000, 0x3fd00000, 0x00000013},	/* 0.247404=f(0.25)*/
{36, 0,123,__LINE__, 0x3fd07402, 0x00000000, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.257081=f(0.26)*/
{37, 0,123,__LINE__, 0x3fd11220, 0xc0000000, 0x3fd147ae, 0x147ae15b},	/* 0.266731=f(0.27)*/
{37, 0,123,__LINE__, 0x3fd1afcf, 0xa0000000, 0x3fd1eb85, 0x1eb851ff},	/* 0.276356=f(0.28)*/
{37, 0,123,__LINE__, 0x3fd24d0a, 0x80000000, 0x3fd28f5c, 0x28f5c2a3},	/* 0.285952=f(0.29)*/
{38, 0,123,__LINE__, 0x3fd2e9cd, 0xa0000000, 0x3fd33333, 0x33333347},	/* 0.29552=f(0.3)*/
{36, 0,123,__LINE__, 0x3fd38614, 0xa0000000, 0x3fd3d70a, 0x3d70a3eb},	/* 0.305059=f(0.31)*/
{39, 0,123,__LINE__, 0x3fd421db, 0xc0000000, 0x3fd47ae1, 0x47ae148f},	/* 0.314567=f(0.32)*/
{37, 0,123,__LINE__, 0x3fd4bd1f, 0x00000000, 0x3fd51eb8, 0x51eb8533},	/* 0.324043=f(0.33)*/
{38, 0,123,__LINE__, 0x3fd557da, 0x40000000, 0x3fd5c28f, 0x5c28f5d7},	/* 0.333487=f(0.34)*/
{40, 0,123,__LINE__, 0x3fd5f209, 0xa0000000, 0x3fd66666, 0x6666667b},	/* 0.342898=f(0.35)*/
{36, 0,123,__LINE__, 0x3fd68ba9, 0x40000000, 0x3fd70a3d, 0x70a3d71f},	/* 0.352274=f(0.36)*/
{36, 0,123,__LINE__, 0x3fd724b5, 0x20000000, 0x3fd7ae14, 0x7ae147c3},	/* 0.361615=f(0.37)*/
{36, 0,123,__LINE__, 0x3fd7bd29, 0x40000000, 0x3fd851eb, 0x851eb867},	/* 0.37092=f(0.38)*/
{38, 0,123,__LINE__, 0x3fd85501, 0xc0000000, 0x3fd8f5c2, 0x8f5c290b},	/* 0.380188=f(0.39)*/
{36, 0,123,__LINE__, 0x3fd8ec3a, 0xe0000000, 0x3fd99999, 0x999999af},	/* 0.389418=f(0.4)*/
{36, 0,123,__LINE__, 0x3fd982d0, 0xa0000000, 0x3fda3d70, 0xa3d70a53},	/* 0.398609=f(0.41)*/
{43, 0,123,__LINE__, 0x3fda18bf, 0x40000000, 0x3fdae147, 0xae147af7},	/* 0.40776=f(0.42)*/
{37, 0,123,__LINE__, 0x3fdaae02, 0xe0000000, 0x3fdb851e, 0xb851eb9b},	/* 0.416871=f(0.43)*/
{37, 0,123,__LINE__, 0x3fdb4297, 0xa0000000, 0x3fdc28f5, 0xc28f5c3f},	/* 0.425939=f(0.44)*/
{38, 0,123,__LINE__, 0x3fdbd679, 0xa0000000, 0x3fdccccc, 0xcccccce3},	/* 0.434966=f(0.45)*/
{37, 0,123,__LINE__, 0x3fdc69a5, 0x60000000, 0x3fdd70a3, 0xd70a3d87},	/* 0.443948=f(0.46)*/
{39, 0,123,__LINE__, 0x3fdcfc16, 0xc0000000, 0x3fde147a, 0xe147ae2b},	/* 0.452886=f(0.47)*/
{36, 0,123,__LINE__, 0x3fdd8dca, 0x40000000, 0x3fdeb851, 0xeb851ecf},	/* 0.461779=f(0.48)*/
{36, 0,123,__LINE__, 0x3fde1ebc, 0x20000000, 0x3fdf5c28, 0xf5c28f73},	/* 0.470626=f(0.49)*/
{36, 0,123,__LINE__, 0x3fdeaee8, 0x80000000, 0x3fe00000, 0x0000000b},	/* 0.479426=f(0.5)*/
{40, 0,123,__LINE__, 0x3fdf3e4b, 0xc0000000, 0x3fe051eb, 0x851eb85d},	/* 0.488177=f(0.51)*/
{37, 0,123,__LINE__, 0x3fdfcce2, 0x40000000, 0x3fe0a3d7, 0x0a3d70af},	/* 0.49688=f(0.52)*/
{36, 0,123,__LINE__, 0x3fe02d54, 0x40000000, 0x3fe0f5c2, 0x8f5c2901},	/* 0.505533=f(0.53)*/
{38, 0,123,__LINE__, 0x3fe073cd, 0x60000000, 0x3fe147ae, 0x147ae153},	/* 0.514136=f(0.54)*/
{36, 0,123,__LINE__, 0x3fe0b9da, 0xa0000000, 0x3fe19999, 0x999999a5},	/* 0.522687=f(0.55)*/
{36, 0,123,__LINE__, 0x3fe0ff7a, 0x40000000, 0x3fe1eb85, 0x1eb851f7},	/* 0.531186=f(0.56)*/
{36, 0,123,__LINE__, 0x3fe144aa, 0x60000000, 0x3fe23d70, 0xa3d70a49},	/* 0.539632=f(0.57)*/
{37, 0,123,__LINE__, 0x3fe18969, 0x80000000, 0x3fe28f5c, 0x28f5c29b},	/* 0.548024=f(0.58)*/
{36, 0,123,__LINE__, 0x3fe1cdb5, 0xa0000000, 0x3fe2e147, 0xae147aed},	/* 0.556361=f(0.59)*/
{38, 0,123,__LINE__, 0x3fe2118d, 0x20000000, 0x3fe33333, 0x3333333f},	/* 0.564642=f(0.6)*/
{36, 0,123,__LINE__, 0x3fe254ee, 0x20000000, 0x3fe3851e, 0xb851eb91},	/* 0.572867=f(0.61)*/
{36, 0,123,__LINE__, 0x3fe297d7, 0x00000000, 0x3fe3d70a, 0x3d70a3e3},	/* 0.581035=f(0.62)*/
{37, 0,123,__LINE__, 0x3fe2da46, 0x20000000, 0x3fe428f5, 0xc28f5c35},	/* 0.589145=f(0.63)*/
{36, 0,123,__LINE__, 0x3fe31c39, 0xa0000000, 0x3fe47ae1, 0x47ae1487},	/* 0.597195=f(0.64)*/
{36, 0,123,__LINE__, 0x3fe35daf, 0xe0000000, 0x3fe4cccc, 0xccccccd9},	/* 0.605186=f(0.65)*/
{37, 0,123,__LINE__, 0x3fe39ea7, 0x40000000, 0x3fe51eb8, 0x51eb852b},	/* 0.613117=f(0.66)*/
{36, 0,123,__LINE__, 0x3fe3df1e, 0x00000000, 0x3fe570a3, 0xd70a3d7d},	/* 0.620986=f(0.67)*/
{36, 0,123,__LINE__, 0x3fe41f12, 0x80000000, 0x3fe5c28f, 0x5c28f5cf},	/* 0.628793=f(0.68)*/
{37, 0,123,__LINE__, 0x3fe45e83, 0x40000000, 0x3fe6147a, 0xe147ae21},	/* 0.636537=f(0.69)*/
{38, 0,123,__LINE__, 0x3fe49d6e, 0x60000000, 0x3fe66666, 0x66666673},	/* 0.644218=f(0.7)*/
{36, 0,123,__LINE__, 0x3fe4dbd2, 0x80000000, 0x3fe6b851, 0xeb851ec5},	/* 0.651834=f(0.71)*/
{35, 0,123,__LINE__, 0x3fe519ad, 0xe0000000, 0x3fe70a3d, 0x70a3d717},	/* 0.659385=f(0.72)*/
{37, 0,123,__LINE__, 0x3fe556ff, 0x00000000, 0x3fe75c28, 0xf5c28f69},	/* 0.66687=f(0.73)*/
{40, 0,123,__LINE__, 0x3fe593c4, 0x40000000, 0x3fe7ae14, 0x7ae147bb},	/* 0.674288=f(0.74)*/
{36, 0,123,__LINE__, 0x3fe5cffc, 0x20000000, 0x3fe80000, 0x0000000d},	/* 0.681639=f(0.75)*/
{37, 0,123,__LINE__, 0x3fe60ba5, 0x00000000, 0x3fe851eb, 0x851eb85f},	/* 0.688921=f(0.76)*/
{42, 0,123,__LINE__, 0x3fe646bd, 0x60000000, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.696135=f(0.77)*/
{36, 0,123,__LINE__, 0x3fe68143, 0xc0000000, 0x3fe8f5c2, 0x8f5c2903},	/* 0.703279=f(0.78)*/
{41, 0,123,__LINE__, 0x3fe6bb36, 0xd1503588, 0x3fe947ae, 0x147ae155},	/* 0.710353=f(0.79)*/
{39, 0,123,__LINE__, 0x3fe6f494, 0xc7357c16, 0x3fe99999, 0x999999a7},	/* 0.717356=f(0.8)*/
{39, 0,123,__LINE__, 0x3fe72d5c, 0x4cbc9104, 0x3fe9eb85, 0x1eb851f9},	/* 0.724287=f(0.81)*/
{40, 0,123,__LINE__, 0x3fe7658b, 0xedca6ff8, 0x3fea3d70, 0xa3d70a4b},	/* 0.731146=f(0.82)*/
{43, 0,123,__LINE__, 0x3fe79d22, 0x3a278326, 0x3fea8f5c, 0x28f5c29d},	/* 0.737931=f(0.83)*/
{38, 0,123,__LINE__, 0x3fe7d41d, 0xc589107c, 0x3feae147, 0xae147aef},	/* 0.744643=f(0.84)*/
{38, 0,123,__LINE__, 0x3fe80a7d, 0x3cb921fa, 0x3feb3333, 0x33333341},	/* 0.75128=f(0.85)*/
{41, 0,123,__LINE__, 0x3fe8403f, 0x10e79ad9, 0x3feb851e, 0xb851eb93},	/* 0.757843=f(0.86)*/
{39, 0,123,__LINE__, 0x3fe87561, 0xf723bd1b, 0x3febd70a, 0x3d70a3e5},	/* 0.764329=f(0.87)*/
{41, 0,123,__LINE__, 0x3fe8a9e4, 0x93327c6b, 0x3fec28f5, 0xc28f5c37},	/* 0.770739=f(0.88)*/
{38, 0,123,__LINE__, 0x3fe8ddc5, 0x8cf34340, 0x3fec7ae1, 0x47ae1489},	/* 0.777072=f(0.89)*/
{39, 0,123,__LINE__, 0x3fe91103, 0x9068c223, 0x3feccccc, 0xccccccdb},	/* 0.783327=f(0.9)*/
{39, 0,123,__LINE__, 0x3fe9439d, 0x616571f1, 0x3fed1eb8, 0x51eb852d},	/* 0.789504=f(0.91)*/
{38, 0,123,__LINE__, 0x3fe97591, 0x8cc406fa, 0x3fed70a3, 0xd70a3d7f},	/* 0.795602=f(0.92)*/
{41, 0,123,__LINE__, 0x3fe9a6de, 0xdf090b70, 0x3fedc28f, 0x5c28f5d1},	/* 0.80162=f(0.93)*/
{39, 0,123,__LINE__, 0x3fe9d784, 0x151a40ab, 0x3fee147a, 0xe147ae23},	/* 0.807558=f(0.94)*/
{38, 0,123,__LINE__, 0x3fea077f, 0xf02b1f2a, 0x3fee6666, 0x66666675},	/* 0.813415=f(0.95)*/
{37, 0,123,__LINE__, 0x3fea36d1, 0x35c4ffdb, 0x3feeb851, 0xeb851ec7},	/* 0.819192=f(0.96)*/
{39, 0,123,__LINE__, 0x3fea6576, 0xc1e61802, 0x3fef0a3d, 0x70a3d719},	/* 0.824886=f(0.97)*/
{40, 0,123,__LINE__, 0x3fea936f, 0x3e69df2a, 0x3fef5c28, 0xf5c28f6b},	/* 0.830497=f(0.98)*/
{39, 0,123,__LINE__, 0x3feac0b9, 0x90657247, 0x3fefae14, 0x7ae147bd},	/* 0.836026=f(0.99)*/
{40, 0,123,__LINE__, 0x3feaed54, 0x8f090f04, 0x3ff00000, 0x00000007},	/* 0.841471=f(1)*/
{39, 0,123,__LINE__, 0x3feb193f, 0x1601f38a, 0x3ff028f5, 0xc28f5c30},	/* 0.846832=f(1.01)*/
{39, 0,123,__LINE__, 0x3feb4478, 0x0581da39, 0x3ff051eb, 0x851eb859},	/* 0.852108=f(1.02)*/
{42, 0,123,__LINE__, 0x3feb6efe, 0x424657ce, 0x3ff07ae1, 0x47ae1482},	/* 0.857299=f(1.03)*/
{37, 0,123,__LINE__, 0x3feb98d0, 0xb5a01bc1, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.862404=f(1.04)*/
{37, 0,123,__LINE__, 0x3febc1ee, 0x4d7a129d, 0x3ff0cccc, 0xccccccd4},	/* 0.867423=f(1.05)*/
{40, 0,123,__LINE__, 0x3febea55, 0xfc606a39, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.872355=f(1.06)*/
{37, 0,123,__LINE__, 0x3fec1206, 0xd841d293, 0x3ff11eb8, 0x51eb8526},	/* 0.877201=f(1.07)*/
{38, 0,123,__LINE__, 0x3fec38ff, 0x9efcbcae, 0x3ff147ae, 0x147ae14f},	/* 0.881958=f(1.08)*/
{40, 0,123,__LINE__, 0x3fec5f3f, 0x7073b4ff, 0x3ff170a3, 0xd70a3d78},	/* 0.886627=f(1.09)*/
{41, 0,123,__LINE__, 0x3fec84c5, 0x51fbbad8, 0x3ff19999, 0x999999a1},	/* 0.891207=f(1.1)*/
{37, 0,123,__LINE__, 0x3feca990, 0x4dac5943, 0x3ff1c28f, 0x5c28f5ca},	/* 0.895699=f(1.11)*/
{41, 0,123,__LINE__, 0x3feccd9f, 0x7265f297, 0x3ff1eb85, 0x1eb851f3},	/* 0.9001=f(1.12)*/
{38, 0,123,__LINE__, 0x3fecf0f1, 0xd3d7eca9, 0x3ff2147a, 0xe147ae1c},	/* 0.904412=f(1.13)*/
{40, 0,123,__LINE__, 0x3fed1386, 0x8a86bd86, 0x3ff23d70, 0xa3d70a45},	/* 0.908633=f(1.14)*/
{37, 0,123,__LINE__, 0x3fed355c, 0xb3d1d872, 0x3ff26666, 0x6666666e},	/* 0.912764=f(1.15)*/
{39, 0,123,__LINE__, 0x3fed5673, 0x71f97b24, 0x3ff28f5c, 0x28f5c297},	/* 0.916803=f(1.16)*/
{40, 0,123,__LINE__, 0x3fed76c9, 0xec245aff, 0x3ff2b851, 0xeb851ec0},	/* 0.920751=f(1.17)*/
{39, 0,123,__LINE__, 0x3fed965f, 0x4e653233, 0x3ff2e147, 0xae147ae9},	/* 0.924606=f(1.18)*/
{38, 0,123,__LINE__, 0x3fedb532, 0xe189731e, 0x3ff30a3d, 0x70a3d712},	/* 0.928369=f(1.19)*/
{40, 0,123,__LINE__, 0x3fefffff, 0xffffffff, 0xc012d97c, 0x7f3321d2},	/* 1=f(-4.71239)*/
{36, 0,123,__LINE__, 0xbfefffff, 0xfffffff7, 0xbff921fb, 0x54442d18},	/* -1=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{36, 0,123,__LINE__, 0x3fefffff, 0xfffffff7, 0x3ff921fb, 0x54442d18},	/* 1=f(1.5708)*/
{64, 0,123,__LINE__, 0xbe7777a5, 0xcffffff8, 0x400921fb, 0x54442d18},	/* -8.74228e-08=f(3.14159)*/
{40, 0,123,__LINE__, 0xbfefffff, 0xffffffff, 0x4012d97c, 0x7f3321d2},	/* -1=f(4.71239)*/
{34, 0,123,__LINE__, 0x3fef9df4, 0x7f1c92a0, 0xc03e0000, 0x00000000},	/* 0.988032=f(-30)*/
{26, 0,123,__LINE__, 0x3f9a4747, 0xb78d0d1e, 0xc03c4ccc, 0xcccccccd},	/* 0.0256625=f(-28.3)*/
{35, 0,123,__LINE__, 0xbfefd421, 0x5c08d0fe, 0xc03a9999, 0x9999999a},	/* -0.994645=f(-26.6)*/
{29, 0,123,__LINE__, 0x3fcd85cf, 0x8712b1e4, 0xc038e666, 0x66666667},	/* 0.230646=f(-24.9)*/
{33, 0,123,__LINE__, 0x3feded3d, 0xe91e5adc, 0xc0373333, 0x33333334},	/* 0.93521=f(-23.2)*/
{31, 0,123,__LINE__, 0xbfde2f55, 0x5b73b003, 0xc0358000, 0x00000001},	/* -0.471639=f(-21.5)*/
{32, 0,123,__LINE__, 0xbfea099c, 0x936a9606, 0xc033cccc, 0xccccccce},	/* -0.813673=f(-19.8)*/
{32, 0,123,__LINE__, 0x3fe5cd51, 0xf0c292c5, 0xc0321999, 0x9999999b},	/* 0.681313=f(-18.1)*/
{32, 0,123,__LINE__, 0x3fe46b5e, 0x16d1efff, 0xc0306666, 0x66666668},	/* 0.638106=f(-16.4)*/
{33, 0,123,__LINE__, 0xbfeb105b, 0xdf322561, 0xc02d6666, 0x6666666a},	/* -0.845747=f(-14.7)*/
{31, 0,123,__LINE__, 0xbfdae404, 0x4881c4e7, 0xc02a0000, 0x00000004},	/* -0.420167=f(-13)*/
{34, 0,123,__LINE__, 0x3fee8753, 0x4211097c, 0xc0269999, 0x9999999e},	/* 0.954019=f(-11.3)*/
{31, 0,123,__LINE__, 0x3fc6505a, 0x2ebdb807, 0xc0233333, 0x33333338},	/* 0.174327=f(-9.6)*/
{38, 0,123,__LINE__, 0xbfeff753, 0xd2df6a58, 0xc01f9999, 0x999999a3},	/* -0.998941=f(-7.9)*/
{46, 0,123,__LINE__, 0x3fb5455c, 0x0c1cd32c, 0xc018cccc, 0xccccccd6},	/* 0.0830896=f(-6.2)*/
{41, 0,123,__LINE__, 0x3fef47ed, 0x3dc742cd, 0xc0120000, 0x00000009},	/* 0.97753=f(-4.5)*/
{41, 0,123,__LINE__, 0xbfd57072, 0x539bcb2f, 0xc0066666, 0x66666678},	/* -0.334988=f(-2.8)*/
{41, 0,123,__LINE__, 0xbfec84c5, 0x51fbbad8, 0xbff19999, 0x999999bd},	/* -0.891207=f(-1.1)*/
{38, 0,123,__LINE__, 0x3fe2118d, 0x20000000, 0x3fe33333, 0x333332ec},	/* 0.564642=f(0.6)*/
{38, 0,123,__LINE__, 0x3fe7dcd1, 0x3e66b0e8, 0x40026666, 0x66666654},	/* 0.745705=f(2.3)*/
{40, 0,123,__LINE__, 0xbfe837b9, 0xdddc1d9a, 0x400fffff, 0xffffffee},	/* -0.756802=f(4)*/
{43, 0,123,__LINE__, 0xbfe19f37, 0x9ef4460b, 0x4016cccc, 0xccccccc4},	/* -0.550686=f(5.7)*/
{34, 0,123,__LINE__, 0x3fecc237, 0x9179496b, 0x401d9999, 0x99999991},	/* 0.898708=f(7.4)*/
{32, 0,123,__LINE__, 0x3fd46c1a, 0x05700753, 0x40223333, 0x3333332f},	/* 0.319098=f(9.1)*/
{36, 0,123,__LINE__, 0xbfef63d4, 0x74595b52, 0x40259999, 0x99999995},	/* -0.980936=f(10.8)*/
{30, 0,123,__LINE__, 0xbfb0fa78, 0xcc21cfc3, 0x4028ffff, 0xfffffffb},	/* -0.0663219=f(12.5)*/
{42, 0,123,__LINE__, 0x3fefefd5, 0x9dac8c1d, 0x402c6666, 0x66666661},	/* 0.998027=f(14.2)*/
{30, 0,123,__LINE__, 0xbfc86e0a, 0xae70bff5, 0x402fcccc, 0xccccccc7},	/* -0.190858=f(15.9)*/
{34, 0,123,__LINE__, 0xbfee5cee, 0xe24773d6, 0x40319999, 0x99999997},	/* -0.948844=f(17.6)*/
{31, 0,123,__LINE__, 0x3fdbdd03, 0xcaaa44c5, 0x40334ccc, 0xccccccca},	/* 0.435365=f(19.3)*/
{32, 0,123,__LINE__, 0x3feac5e2, 0x0bb0d9d9, 0x4034ffff, 0xfffffffd},	/* 0.836656=f(21)*/
{32, 0,123,__LINE__, 0xbfe4d4b0, 0x1da6ebdf, 0x4036b333, 0x33333330},	/* -0.650963=f(22.7)*/
{32, 0,123,__LINE__, 0xbfe567b6, 0x298c80d8, 0x40386666, 0x66666663},	/* -0.66891=f(24.4)*/
{32, 0,123,__LINE__, 0x3fea58be, 0xe738d0e3, 0x403a1999, 0x99999996},	/* 0.823333=f(26.1)*/
{30, 0,123,__LINE__, 0x3fdd3b56, 0x4dfe1bfd, 0x403bcccc, 0xccccccc9},	/* 0.456747=f(27.8)*/
{33, 0,123,__LINE__, 0xbfee1ced, 0xe66aee4e, 0x403d7fff, 0xfffffffc},	/* -0.941031=f(29.5)*/
{0},};
void test_sinf(m)   {run_vector_1(m,sinf_vec,(char *)(sinf),"sinf","ff");   }
