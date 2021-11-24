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
 one_line_type j1f_vec[] = {
{36, 0,123,__LINE__, 0xbfdfe3f7, 0xd6d8c2cc, 0xbff33333, 0x33333333},	/* -0.498289=f(-1.2)*/
{35, 0,123,__LINE__, 0xbfdfb9be, 0x7037f0ff, 0xbff30a3d, 0x70a3d70a},	/* -0.495712=f(-1.19)*/
{35, 0,123,__LINE__, 0xbfdf8eec, 0x5625ec81, 0xbff2e147, 0xae147ae1},	/* -0.493098=f(-1.18)*/
{36, 0,123,__LINE__, 0xbfdf6382, 0x89bbf406, 0xbff2b851, 0xeb851eb8},	/* -0.490449=f(-1.17)*/
{35, 0,123,__LINE__, 0xbfdf3781, 0xab26706b, 0xbff28f5c, 0x28f5c28f},	/* -0.487763=f(-1.16)*/
{38, 0,123,__LINE__, 0xbfdf0aea, 0x7efab527, 0xbff26666, 0x66666666},	/* -0.485041=f(-1.15)*/
{36, 0,123,__LINE__, 0xbfdeddbd, 0xccfa779e, 0xbff23d70, 0xa3d70a3d},	/* -0.482284=f(-1.14)*/
{36, 0,123,__LINE__, 0xbfdeaffc, 0x600fc03f, 0xbff2147a, 0xe147ae14},	/* -0.479491=f(-1.13)*/
{37, 0,123,__LINE__, 0xbfde81a7, 0x0648c9ab, 0xbff1eb85, 0x1eb851eb},	/* -0.476663=f(-1.12)*/
{36, 0,123,__LINE__, 0xbfde52be, 0x90d3cdf3, 0xbff1c28f, 0x5c28f5c2},	/* -0.4738=f(-1.11)*/
{35, 0,123,__LINE__, 0xbfde2343, 0xd3fac201, 0xbff19999, 0x99999999},	/* -0.470902=f(-1.1)*/
{35, 0,123,__LINE__, 0xbfddf337, 0xa71eff4e, 0xbff170a3, 0xd70a3d70},	/* -0.46797=f(-1.09)*/
{38, 0,123,__LINE__, 0xbfddc29a, 0xe4b4dbf5, 0xbff147ae, 0x147ae147},	/* -0.465003=f(-1.08)*/
{35, 0,123,__LINE__, 0xbfdd916e, 0x6a3f313d, 0xbff11eb8, 0x51eb851e},	/* -0.462001=f(-1.07)*/
{35, 0,123,__LINE__, 0xbfdd5fb2, 0xf138e4f3, 0xbff0f5c2, 0x8f5c28f5},	/* -0.458966=f(-1.06)*/
{38, 0,123,__LINE__, 0xbfdd2d69, 0xaae96f49, 0xbff0cccc, 0xcccccccc},	/* -0.455897=f(-1.05)*/
{37, 0,123,__LINE__, 0xbfdcfa93, 0x574102ef, 0xbff0a3d7, 0x0a3d70a3},	/* -0.452794=f(-1.04)*/
{35, 0,123,__LINE__, 0xbfdcc730, 0xdfce6e70, 0xbff07ae1, 0x47ae147a},	/* -0.449658=f(-1.03)*/
{36, 0,123,__LINE__, 0xbfdc9343, 0x3117a0b8, 0xbff051eb, 0x851eb851},	/* -0.446488=f(-1.02)*/
{35, 0,123,__LINE__, 0xbfdc5ecb, 0x3a94c890, 0xbff028f5, 0xc28f5c28},	/* -0.443286=f(-1.01)*/
{36, 0,123,__LINE__, 0xbfdc29c9, 0xeeab633a, 0xbfefffff, 0xfffffffe},	/* -0.440051=f(-1)*/
{39, 0,123,__LINE__, 0xbfdbf440, 0x42a93a6d, 0xbfefae14, 0x7ae147ac},	/* -0.436783=f(-0.99)*/
{35, 0,123,__LINE__, 0xbfdbbe2f, 0x2ebf51a5, 0xbfef5c28, 0xf5c28f5a},	/* -0.433483=f(-0.98)*/
{36, 0,123,__LINE__, 0xbfdb8797, 0xadfcc309, 0xbfef0a3d, 0x70a3d708},	/* -0.430151=f(-0.97)*/
{35, 0,123,__LINE__, 0xbfdb507a, 0xa8a84e88, 0xbfeeb851, 0xeb851eb6},	/* -0.426787=f(-0.96)*/
{36, 0,123,__LINE__, 0xbfdb18d9, 0x4a8c82f5, 0xbfee6666, 0x66666664},	/* -0.423392=f(-0.95)*/
{36, 0,123,__LINE__, 0xbfdae0b4, 0x81c5f995, 0xbfee147a, 0xe147ae12},	/* -0.419965=f(-0.94)*/
{39, 0,123,__LINE__, 0xbfdaa80d, 0x54a7832e, 0xbfedc28f, 0x5c28f5c0},	/* -0.416507=f(-0.93)*/
{36, 0,123,__LINE__, 0xbfda6ee4, 0xcc47643c, 0xbfed70a3, 0xd70a3d6e},	/* -0.413018=f(-0.92)*/
{38, 0,123,__LINE__, 0xbfda353b, 0xf479d151, 0xbfed1eb8, 0x51eb851c},	/* -0.409499=f(-0.91)*/
{35, 0,123,__LINE__, 0xbfd9fb13, 0xc4faf984, 0xbfeccccc, 0xccccccca},	/* -0.40595=f(-0.9)*/
{36, 0,123,__LINE__, 0xbfd9c06d, 0x7c79d7df, 0xbfec7ae1, 0x47ae1478},	/* -0.40237=f(-0.89)*/
{37, 0,123,__LINE__, 0xbfd9854a, 0x1843de6a, 0xbfec28f5, 0xc28f5c26},	/* -0.39876=f(-0.88)*/
{36, 0,123,__LINE__, 0xbfd949aa, 0xaeeca787, 0xbfebd70a, 0x3d70a3d4},	/* -0.395121=f(-0.87)*/
{36, 0,123,__LINE__, 0xbfd90d90, 0x59a9431d, 0xbfeb851e, 0xb851eb82},	/* -0.391453=f(-0.86)*/
{36, 0,123,__LINE__, 0xbfd8d0fc, 0x344a56e6, 0xbfeb3333, 0x33333330},	/* -0.387755=f(-0.85)*/
{36, 0,123,__LINE__, 0xbfd893ef, 0x4545bd11, 0xbfeae147, 0xae147ade},	/* -0.384029=f(-0.84)*/
{44, 0,123,__LINE__, 0xbfd8566a, 0xdd43d5f3, 0xbfea8f5c, 0x28f5c28c},	/* -0.380275=f(-0.83)*/
{36, 0,123,__LINE__, 0xbfd81870, 0x0802b16c, 0xbfea3d70, 0xa3d70a3a},	/* -0.376492=f(-0.82)*/
{36, 0,123,__LINE__, 0xbfd7d9ff, 0xeb856818, 0xbfe9eb85, 0x1eb851e8},	/* -0.372681=f(-0.81)*/
{39, 0,123,__LINE__, 0xbfd79b1b, 0xb04c6ce0, 0xbfe99999, 0x99999996},	/* -0.368842=f(-0.8)*/
{36, 0,123,__LINE__, 0xbfd75bc4, 0x814f55c9, 0xbfe947ae, 0x147ae144},	/* -0.364976=f(-0.79)*/
{36, 0,123,__LINE__, 0xbfd71bfb, 0x72f6040d, 0xbfe8f5c2, 0x8f5c28f2},	/* -0.361083=f(-0.78)*/
{36, 0,123,__LINE__, 0xbfd6dbc1, 0xe6e8dc7d, 0xbfe8a3d7, 0x0a3d70a0},	/* -0.357163=f(-0.77)*/
{42, 0,123,__LINE__, 0xbfd69b18, 0xf68aabe4, 0xbfe851eb, 0x851eb84e},	/* -0.353216=f(-0.76)*/
{36, 0,123,__LINE__, 0xbfd65a01, 0xd6705662, 0xbfe7ffff, 0xfffffffc},	/* -0.349244=f(-0.75)*/
{37, 0,123,__LINE__, 0xbfd6187d, 0xbd85fed1, 0xbfe7ae14, 0x7ae147aa},	/* -0.345245=f(-0.74)*/
{41, 0,123,__LINE__, 0xbfd5d68d, 0xe5087d21, 0xbfe75c28, 0xf5c28f58},	/* -0.34122=f(-0.73)*/
{38, 0,123,__LINE__, 0xbfd59433, 0x887ec77f, 0xbfe70a3d, 0x70a3d706},	/* -0.33717=f(-0.72)*/
{36, 0,123,__LINE__, 0xbfd5516f, 0xcb8a7afc, 0xbfe6b851, 0xeb851eb4},	/* -0.333096=f(-0.71)*/
{37, 0,123,__LINE__, 0xbfd50e44, 0x225c1484, 0xbfe66666, 0x66666662},	/* -0.328996=f(-0.7)*/
{36, 0,123,__LINE__, 0xbfd4cab1, 0xb530e81b, 0xbfe6147a, 0xe147ae10},	/* -0.324871=f(-0.69)*/
{37, 0,123,__LINE__, 0xbfd486b9, 0xc8757d54, 0xbfe5c28f, 0x5c28f5be},	/* -0.320723=f(-0.68)*/
{38, 0,123,__LINE__, 0xbfd4425d, 0xa2bec62b, 0xbfe570a3, 0xd70a3d6c},	/* -0.316551=f(-0.67)*/
{37, 0,123,__LINE__, 0xbfd3fd9e, 0x8cc33bc9, 0xbfe51eb8, 0x51eb851a},	/* -0.312355=f(-0.66)*/
{38, 0,123,__LINE__, 0xbfd3b87d, 0xb6403d26, 0xbfe4cccc, 0xccccccc8},	/* -0.308135=f(-0.65)*/
{35, 0,123,__LINE__, 0xbfd372fc, 0xa21c7a27, 0xbfe47ae1, 0x47ae1476},	/* -0.303893=f(-0.64)*/
{38, 0,123,__LINE__, 0xbfd32d1c, 0x845b67a1, 0xbfe428f5, 0xc28f5c24},	/* -0.299628=f(-0.63)*/
{38, 0,123,__LINE__, 0xbfd2e6de, 0xadf3ca8a, 0xbfe3d70a, 0x3d70a3d2},	/* -0.295341=f(-0.62)*/
{38, 0,123,__LINE__, 0xbfd2a044, 0x71dacb1d, 0xbfe3851e, 0xb851eb80},	/* -0.291032=f(-0.61)*/
{35, 0,123,__LINE__, 0xbfd2594f, 0x24fccace, 0xbfe33333, 0x3333332e},	/* -0.286701=f(-0.6)*/
{38, 0,123,__LINE__, 0xbfd21200, 0x0249f517, 0xbfe2e147, 0xae147adc},	/* -0.282349=f(-0.59)*/
{36, 0,123,__LINE__, 0xbfd1ca58, 0x9a3da449, 0xbfe28f5c, 0x28f5c28a},	/* -0.277975=f(-0.58)*/
{36, 0,123,__LINE__, 0xbfd1825a, 0x2bb509b7, 0xbfe23d70, 0xa3d70a38},	/* -0.273581=f(-0.57)*/
{36, 0,123,__LINE__, 0xbfd13a06, 0x1330e945, 0xbfe1eb85, 0x1eb851e6},	/* -0.269166=f(-0.56)*/
{36, 0,123,__LINE__, 0xbfd0f15d, 0xaf04c839, 0xbfe19999, 0x99999994},	/* -0.264732=f(-0.55)*/
{37, 0,123,__LINE__, 0xbfd0a862, 0x5f4f8213, 0xbfe147ae, 0x147ae142},	/* -0.260277=f(-0.54)*/
{38, 0,123,__LINE__, 0xbfd05f15, 0x69420dc9, 0xbfe0f5c2, 0x8f5c28f0},	/* -0.255803=f(-0.53)*/
{40, 0,123,__LINE__, 0xbfd01578, 0x69c00a7f, 0xbfe0a3d7, 0x0a3d709e},	/* -0.25131=f(-0.52)*/
{38, 0,123,__LINE__, 0xbfcf9719, 0x53167abf, 0xbfe051eb, 0x851eb84c},	/* -0.246799=f(-0.51)*/
{39, 0,123,__LINE__, 0xbfcf02a7, 0x1f49c21e, 0xbfdfffff, 0xfffffff4},	/* -0.242268=f(-0.5)*/
{36, 0,123,__LINE__, 0xbfce6d9d, 0x0967afd7, 0xbfdf5c28, 0xf5c28f50},	/* -0.23772=f(-0.49)*/
{36, 0,123,__LINE__, 0xbfcdd7fd, 0xc8b295bf, 0xbfdeb851, 0xeb851eac},	/* -0.233154=f(-0.48)*/
{36, 0,123,__LINE__, 0xbfcd41cc, 0x6f538379, 0xbfde147a, 0xe147ae08},	/* -0.228571=f(-0.47)*/
{35, 0,123,__LINE__, 0xbfccab0b, 0xbaf3776c, 0xbfdd70a3, 0xd70a3d64},	/* -0.22397=f(-0.46)*/
{35, 0,123,__LINE__, 0xbfcc13be, 0x6bd9219b, 0xbfdccccc, 0xccccccc0},	/* -0.219353=f(-0.45)*/
{37, 0,123,__LINE__, 0xbfcb7be7, 0x9dfe8de6, 0xbfdc28f5, 0xc28f5c1c},	/* -0.214719=f(-0.44)*/
{37, 0,123,__LINE__, 0xbfcae38a, 0x17b2253d, 0xbfdb851e, 0xb851eb78},	/* -0.210069=f(-0.43)*/
{37, 0,123,__LINE__, 0xbfca4aa8, 0xa1b7d028, 0xbfdae147, 0xae147ad4},	/* -0.205403=f(-0.42)*/
{36, 0,123,__LINE__, 0xbfc9b146, 0x6143a67b, 0xbfda3d70, 0xa3d70a30},	/* -0.200723=f(-0.41)*/
{36, 0,123,__LINE__, 0xbfc91766, 0x24c11f5c, 0xbfd99999, 0x9999998c},	/* -0.196027=f(-0.4)*/
{38, 0,123,__LINE__, 0xbfc87d0a, 0xbce87fb9, 0xbfd8f5c2, 0x8f5c28e8},	/* -0.191316=f(-0.39)*/
{36, 0,123,__LINE__, 0xbfc7e237, 0x578f20d4, 0xbfd851eb, 0x851eb844},	/* -0.186591=f(-0.38)*/
{38, 0,123,__LINE__, 0xbfc746ee, 0xcab38892, 0xbfd7ae14, 0x7ae147a0},	/* -0.181852=f(-0.37)*/
{36, 0,123,__LINE__, 0xbfc6ab34, 0x0ced517e, 0xbfd70a3d, 0x70a3d6fc},	/* -0.1771=f(-0.36)*/
{38, 0,123,__LINE__, 0xbfc60f09, 0xf8b83f65, 0xbfd66666, 0x66666658},	/* -0.172334=f(-0.35)*/
{37, 0,123,__LINE__, 0xbfc57273, 0xc67ab0db, 0xbfd5c28f, 0x5c28f5b4},	/* -0.167555=f(-0.34)*/
{37, 0,123,__LINE__, 0xbfc4d574, 0x55734a6c, 0xbfd51eb8, 0x51eb8510},	/* -0.162764=f(-0.33)*/
{35, 0,123,__LINE__, 0xbfc4380e, 0x86ccc7a9, 0xbfd47ae1, 0x47ae146c},	/* -0.157961=f(-0.32)*/
{36, 0,123,__LINE__, 0xbfc39a45, 0x9a23bdcf, 0xbfd3d70a, 0x3d70a3c8},	/* -0.153146=f(-0.31)*/
{37, 0,123,__LINE__, 0xbfc2fc1c, 0x7502202b, 0xbfd33333, 0x33333324},	/* -0.148319=f(-0.3)*/
{37, 0,123,__LINE__, 0xbfc25d95, 0xfeb3d94c, 0xbfd28f5c, 0x28f5c280},	/* -0.143481=f(-0.29)*/
{36, 0,123,__LINE__, 0xbfc1beb5, 0x7d6d9cf4, 0xbfd1eb85, 0x1eb851dc},	/* -0.138632=f(-0.28)*/
{37, 0,123,__LINE__, 0xbfc11f7d, 0xdc760318, 0xbfd147ae, 0x147ae138},	/* -0.133774=f(-0.27)*/
{37, 0,123,__LINE__, 0xbfc07ff2, 0x08ab1fcb, 0xbfd0a3d7, 0x0a3d7094},	/* -0.128905=f(-0.26)*/
{35, 0,123,__LINE__, 0xbfbfc02a, 0x9c74b42e, 0xbfcfffff, 0xffffffe0},	/* -0.124026=f(-0.25)*/
{38, 0,123,__LINE__, 0xbfbe7fd5, 0x1bde759d, 0xbfceb851, 0xeb851e98},	/* -0.119138=f(-0.24)*/
{38, 0,123,__LINE__, 0xbfbd3ee9, 0xf0a111ea, 0xbfcd70a3, 0xd70a3d50},	/* -0.114241=f(-0.23)*/
{38, 0,123,__LINE__, 0xbfbbfd6f, 0x01bdf6d9, 0xbfcc28f5, 0xc28f5c08},	/* -0.109336=f(-0.22)*/
{39, 0,123,__LINE__, 0xbfbabb6a, 0x9744f57a, 0xbfcae147, 0xae147ac0},	/* -0.104422=f(-0.21)*/
{36, 0,123,__LINE__, 0xbfb978e2, 0xfc6a2736, 0xbfc99999, 0x99999978},	/* -0.0995008=f(-0.2)*/
{35, 0,123,__LINE__, 0xbfb835de, 0x20aa186a, 0xbfc851eb, 0x851eb830},	/* -0.094572=f(-0.19)*/
{36, 0,123,__LINE__, 0xbfb6f262, 0x744126eb, 0xbfc70a3d, 0x70a3d6e8},	/* -0.089636=f(-0.18)*/
{36, 0,123,__LINE__, 0xbfb5ae75, 0xebb0c797, 0xbfc5c28f, 0x5c28f5a0},	/* -0.0846933=f(-0.17)*/
{35, 0,123,__LINE__, 0xbfb46a1e, 0xdca2099b, 0xbfc47ae1, 0x47ae1458},	/* -0.0797443=f(-0.16)*/
{39, 0,123,__LINE__, 0xbfb32563, 0x9f2d3e7c, 0xbfc33333, 0x33333310},	/* -0.0747893=f(-0.15)*/
{38, 0,123,__LINE__, 0xbfb1e04a, 0x2e6655f0, 0xbfc1eb85, 0x1eb851c8},	/* -0.0698286=f(-0.14)*/
{38, 0,123,__LINE__, 0xbfb09ad8, 0xe68189b0, 0xbfc0a3d7, 0x0a3d7080},	/* -0.0648628=f(-0.13)*/
{37, 0,123,__LINE__, 0xbfaeaa2c, 0x2b964794, 0xbfbeb851, 0xeb851e71},	/* -0.0598921=f(-0.12)*/
{41, 0,123,__LINE__, 0xbfac1e0f, 0xd9007e83, 0xbfbc28f5, 0xc28f5be2},	/* -0.0549169=f(-0.11)*/
{38, 0,123,__LINE__, 0xbfa99169, 0x58b6b10d, 0xbfb99999, 0x99999953},	/* -0.0499375=f(-0.1)*/
{38, 0,123,__LINE__, 0xbfa70445, 0x312069da, 0xbfb70a3d, 0x70a3d6c4},	/* -0.0449545=f(-0.09)*/
{36, 0,123,__LINE__, 0xbfa476af, 0xcb67093a, 0xbfb47ae1, 0x47ae1435},	/* -0.039968=f(-0.08)*/
{38, 0,123,__LINE__, 0xbfa1e8b5, 0xf2de1c43, 0xbfb1eb85, 0x1eb851a6},	/* -0.0349786=f(-0.07)*/
{36, 0,123,__LINE__, 0xbf9eb4c8, 0x0a9174fa, 0xbfaeb851, 0xeb851e2d},	/* -0.0299865=f(-0.06)*/
{35, 0,123,__LINE__, 0xbf99978d, 0x643f0ca4, 0xbfa99999, 0x9999990e},	/* -0.0249922=f(-0.05)*/
{36, 0,123,__LINE__, 0xbf9479d4, 0xd51be890, 0xbfa47ae1, 0x47ae13ef},	/* -0.019996=f(-0.04)*/
{36, 0,123,__LINE__, 0xbf8eb76f, 0x641ea33c, 0xbf9eb851, 0xeb851da0},	/* -0.0149983=f(-0.03)*/
{39, 0,123,__LINE__, 0xbf847a9e, 0x246b157f, 0xbf947ae1, 0x47ae1362},	/* -0.0099995=f(-0.02)*/
{36, 0,123,__LINE__, 0xbf747ad0, 0x790d06f9, 0xbf847ae1, 0x47ae1249},	/* -0.00499994=f(-0.01)*/
{64, 0,123,__LINE__, 0x3cc19000, 0x00000000, 0x3cd19000, 0x00000000},	/* 4.87457e-16=f(9.74915e-16)*/
{36, 0,123,__LINE__, 0x3f747ad0, 0x790d06f9, 0x3f847ae1, 0x47ae16ad},	/* 0.00499994=f(0.01)*/
{39, 0,123,__LINE__, 0x3f847a9e, 0x246b157f, 0x3f947ae1, 0x47ae1594},	/* 0.0099995=f(0.02)*/
{36, 0,123,__LINE__, 0x3f8eb76f, 0x641ea33c, 0x3f9eb851, 0xeb851fd2},	/* 0.0149983=f(0.03)*/
{36, 0,123,__LINE__, 0x3f9479d4, 0xd51be890, 0x3fa47ae1, 0x47ae1508},	/* 0.019996=f(0.04)*/
{35, 0,123,__LINE__, 0x3f99978d, 0x643f0ca4, 0x3fa99999, 0x99999a27},	/* 0.0249922=f(0.05)*/
{36, 0,123,__LINE__, 0x3f9eb4c8, 0x0a9174fa, 0x3faeb851, 0xeb851f46},	/* 0.0299865=f(0.06)*/
{38, 0,123,__LINE__, 0x3fa1e8b5, 0xf2de1c43, 0x3fb1eb85, 0x1eb85232},	/* 0.0349786=f(0.07)*/
{36, 0,123,__LINE__, 0x3fa476af, 0xcb67093a, 0x3fb47ae1, 0x47ae14c1},	/* 0.039968=f(0.08)*/
{38, 0,123,__LINE__, 0x3fa70445, 0x312069da, 0x3fb70a3d, 0x70a3d750},	/* 0.0449545=f(0.09)*/
{38, 0,123,__LINE__, 0x3fa99169, 0x58b6b10d, 0x3fb99999, 0x999999df},	/* 0.0499375=f(0.1)*/
{41, 0,123,__LINE__, 0x3fac1e0f, 0xd9007e83, 0x3fbc28f5, 0xc28f5c6e},	/* 0.0549169=f(0.11)*/
{37, 0,123,__LINE__, 0x3faeaa2c, 0x2b964794, 0x3fbeb851, 0xeb851efd},	/* 0.0598921=f(0.12)*/
{38, 0,123,__LINE__, 0x3fb09ad8, 0xe68189b0, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.0648628=f(0.13)*/
{38, 0,123,__LINE__, 0x3fb1e04a, 0x2e6655f0, 0x3fc1eb85, 0x1eb8520e},	/* 0.0698286=f(0.14)*/
{39, 0,123,__LINE__, 0x3fb32563, 0x9f2d3e7c, 0x3fc33333, 0x33333356},	/* 0.0747893=f(0.15)*/
{35, 0,123,__LINE__, 0x3fb46a1e, 0xdca2099b, 0x3fc47ae1, 0x47ae149e},	/* 0.0797443=f(0.16)*/
{36, 0,123,__LINE__, 0x3fb5ae75, 0xebb0c797, 0x3fc5c28f, 0x5c28f5e6},	/* 0.0846933=f(0.17)*/
{36, 0,123,__LINE__, 0x3fb6f262, 0x744126eb, 0x3fc70a3d, 0x70a3d72e},	/* 0.089636=f(0.18)*/
{35, 0,123,__LINE__, 0x3fb835de, 0x20aa186a, 0x3fc851eb, 0x851eb876},	/* 0.094572=f(0.19)*/
{36, 0,123,__LINE__, 0x3fb978e2, 0xfc6a2736, 0x3fc99999, 0x999999be},	/* 0.0995008=f(0.2)*/
{39, 0,123,__LINE__, 0x3fbabb6a, 0x9744f57a, 0x3fcae147, 0xae147b06},	/* 0.104422=f(0.21)*/
{38, 0,123,__LINE__, 0x3fbbfd6f, 0x01bdf6d9, 0x3fcc28f5, 0xc28f5c4e},	/* 0.109336=f(0.22)*/
{38, 0,123,__LINE__, 0x3fbd3ee9, 0xf0a111ea, 0x3fcd70a3, 0xd70a3d96},	/* 0.114241=f(0.23)*/
{38, 0,123,__LINE__, 0x3fbe7fd5, 0x1bde759d, 0x3fceb851, 0xeb851ede},	/* 0.119138=f(0.24)*/
{35, 0,123,__LINE__, 0x3fbfc02a, 0x9c74b42e, 0x3fd00000, 0x00000013},	/* 0.124026=f(0.25)*/
{37, 0,123,__LINE__, 0x3fc07ff2, 0x08ab1fcb, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.128905=f(0.26)*/
{37, 0,123,__LINE__, 0x3fc11f7d, 0xdc760318, 0x3fd147ae, 0x147ae15b},	/* 0.133774=f(0.27)*/
{36, 0,123,__LINE__, 0x3fc1beb5, 0x7d6d9cf4, 0x3fd1eb85, 0x1eb851ff},	/* 0.138632=f(0.28)*/
{37, 0,123,__LINE__, 0x3fc25d95, 0xfeb3d94c, 0x3fd28f5c, 0x28f5c2a3},	/* 0.143481=f(0.29)*/
{37, 0,123,__LINE__, 0x3fc2fc1c, 0x7502202b, 0x3fd33333, 0x33333347},	/* 0.148319=f(0.3)*/
{36, 0,123,__LINE__, 0x3fc39a45, 0x9a23bdcf, 0x3fd3d70a, 0x3d70a3eb},	/* 0.153146=f(0.31)*/
{35, 0,123,__LINE__, 0x3fc4380e, 0x86ccc7a9, 0x3fd47ae1, 0x47ae148f},	/* 0.157961=f(0.32)*/
{37, 0,123,__LINE__, 0x3fc4d574, 0x55734a6c, 0x3fd51eb8, 0x51eb8533},	/* 0.162764=f(0.33)*/
{37, 0,123,__LINE__, 0x3fc57273, 0xc67ab0db, 0x3fd5c28f, 0x5c28f5d7},	/* 0.167555=f(0.34)*/
{38, 0,123,__LINE__, 0x3fc60f09, 0xf8b83f65, 0x3fd66666, 0x6666667b},	/* 0.172334=f(0.35)*/
{36, 0,123,__LINE__, 0x3fc6ab34, 0x0ced517e, 0x3fd70a3d, 0x70a3d71f},	/* 0.1771=f(0.36)*/
{38, 0,123,__LINE__, 0x3fc746ee, 0xcab38892, 0x3fd7ae14, 0x7ae147c3},	/* 0.181852=f(0.37)*/
{36, 0,123,__LINE__, 0x3fc7e237, 0x578f20d4, 0x3fd851eb, 0x851eb867},	/* 0.186591=f(0.38)*/
{38, 0,123,__LINE__, 0x3fc87d0a, 0xbce87fb9, 0x3fd8f5c2, 0x8f5c290b},	/* 0.191316=f(0.39)*/
{36, 0,123,__LINE__, 0x3fc91766, 0x24c11f5c, 0x3fd99999, 0x999999af},	/* 0.196027=f(0.4)*/
{36, 0,123,__LINE__, 0x3fc9b146, 0x6143a67b, 0x3fda3d70, 0xa3d70a53},	/* 0.200723=f(0.41)*/
{37, 0,123,__LINE__, 0x3fca4aa8, 0xa1b7d028, 0x3fdae147, 0xae147af7},	/* 0.205403=f(0.42)*/
{37, 0,123,__LINE__, 0x3fcae38a, 0x17b2253d, 0x3fdb851e, 0xb851eb9b},	/* 0.210069=f(0.43)*/
{37, 0,123,__LINE__, 0x3fcb7be7, 0x9dfe8de6, 0x3fdc28f5, 0xc28f5c3f},	/* 0.214719=f(0.44)*/
{35, 0,123,__LINE__, 0x3fcc13be, 0x6bd9219b, 0x3fdccccc, 0xcccccce3},	/* 0.219353=f(0.45)*/
{35, 0,123,__LINE__, 0x3fccab0b, 0xbaf3776c, 0x3fdd70a3, 0xd70a3d87},	/* 0.22397=f(0.46)*/
{36, 0,123,__LINE__, 0x3fcd41cc, 0x6f538379, 0x3fde147a, 0xe147ae2b},	/* 0.228571=f(0.47)*/
{36, 0,123,__LINE__, 0x3fcdd7fd, 0xc8b295bf, 0x3fdeb851, 0xeb851ecf},	/* 0.233154=f(0.48)*/
{36, 0,123,__LINE__, 0x3fce6d9d, 0x0967afd7, 0x3fdf5c28, 0xf5c28f73},	/* 0.23772=f(0.49)*/
{39, 0,123,__LINE__, 0x3fcf02a7, 0x1f49c21e, 0x3fe00000, 0x0000000b},	/* 0.242268=f(0.5)*/
{38, 0,123,__LINE__, 0x3fcf9719, 0x53167abf, 0x3fe051eb, 0x851eb85d},	/* 0.246799=f(0.51)*/
{40, 0,123,__LINE__, 0x3fd01578, 0x69c00a7f, 0x3fe0a3d7, 0x0a3d70af},	/* 0.25131=f(0.52)*/
{38, 0,123,__LINE__, 0x3fd05f15, 0x69420dc9, 0x3fe0f5c2, 0x8f5c2901},	/* 0.255803=f(0.53)*/
{37, 0,123,__LINE__, 0x3fd0a862, 0x5f4f8213, 0x3fe147ae, 0x147ae153},	/* 0.260277=f(0.54)*/
{36, 0,123,__LINE__, 0x3fd0f15d, 0xaf04c839, 0x3fe19999, 0x999999a5},	/* 0.264732=f(0.55)*/
{36, 0,123,__LINE__, 0x3fd13a06, 0x1330e945, 0x3fe1eb85, 0x1eb851f7},	/* 0.269166=f(0.56)*/
{36, 0,123,__LINE__, 0x3fd1825a, 0x2bb509b7, 0x3fe23d70, 0xa3d70a49},	/* 0.273581=f(0.57)*/
{36, 0,123,__LINE__, 0x3fd1ca58, 0x9a3da449, 0x3fe28f5c, 0x28f5c29b},	/* 0.277975=f(0.58)*/
{38, 0,123,__LINE__, 0x3fd21200, 0x0249f517, 0x3fe2e147, 0xae147aed},	/* 0.282349=f(0.59)*/
{35, 0,123,__LINE__, 0x3fd2594f, 0x24fccace, 0x3fe33333, 0x3333333f},	/* 0.286701=f(0.6)*/
{38, 0,123,__LINE__, 0x3fd2a044, 0x71dacb1d, 0x3fe3851e, 0xb851eb91},	/* 0.291032=f(0.61)*/
{38, 0,123,__LINE__, 0x3fd2e6de, 0xadf3ca8a, 0x3fe3d70a, 0x3d70a3e3},	/* 0.295341=f(0.62)*/
{38, 0,123,__LINE__, 0x3fd32d1c, 0x845b67a1, 0x3fe428f5, 0xc28f5c35},	/* 0.299628=f(0.63)*/
{35, 0,123,__LINE__, 0x3fd372fc, 0xa21c7a27, 0x3fe47ae1, 0x47ae1487},	/* 0.303893=f(0.64)*/
{38, 0,123,__LINE__, 0x3fd3b87d, 0xb6403d26, 0x3fe4cccc, 0xccccccd9},	/* 0.308135=f(0.65)*/
{37, 0,123,__LINE__, 0x3fd3fd9e, 0x8cc33bc9, 0x3fe51eb8, 0x51eb852b},	/* 0.312355=f(0.66)*/
{38, 0,123,__LINE__, 0x3fd4425d, 0xa2bec62b, 0x3fe570a3, 0xd70a3d7d},	/* 0.316551=f(0.67)*/
{37, 0,123,__LINE__, 0x3fd486b9, 0xc8757d54, 0x3fe5c28f, 0x5c28f5cf},	/* 0.320723=f(0.68)*/
{36, 0,123,__LINE__, 0x3fd4cab1, 0xb530e81b, 0x3fe6147a, 0xe147ae21},	/* 0.324871=f(0.69)*/
{37, 0,123,__LINE__, 0x3fd50e44, 0x225c1484, 0x3fe66666, 0x66666673},	/* 0.328996=f(0.7)*/
{36, 0,123,__LINE__, 0x3fd5516f, 0xcb8a7afc, 0x3fe6b851, 0xeb851ec5},	/* 0.333096=f(0.71)*/
{38, 0,123,__LINE__, 0x3fd59433, 0x887ec77f, 0x3fe70a3d, 0x70a3d717},	/* 0.33717=f(0.72)*/
{41, 0,123,__LINE__, 0x3fd5d68d, 0xe5087d21, 0x3fe75c28, 0xf5c28f69},	/* 0.34122=f(0.73)*/
{37, 0,123,__LINE__, 0x3fd6187d, 0xbd85fed1, 0x3fe7ae14, 0x7ae147bb},	/* 0.345245=f(0.74)*/
{36, 0,123,__LINE__, 0x3fd65a01, 0xd6705662, 0x3fe80000, 0x0000000d},	/* 0.349244=f(0.75)*/
{42, 0,123,__LINE__, 0x3fd69b18, 0xf68aabe4, 0x3fe851eb, 0x851eb85f},	/* 0.353216=f(0.76)*/
{36, 0,123,__LINE__, 0x3fd6dbc1, 0xe6e8dc7d, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.357163=f(0.77)*/
{36, 0,123,__LINE__, 0x3fd71bfb, 0x72f6040d, 0x3fe8f5c2, 0x8f5c2903},	/* 0.361083=f(0.78)*/
{36, 0,123,__LINE__, 0x3fd75bc4, 0x814f55c9, 0x3fe947ae, 0x147ae155},	/* 0.364976=f(0.79)*/
{39, 0,123,__LINE__, 0x3fd79b1b, 0xb04c6ce0, 0x3fe99999, 0x999999a7},	/* 0.368842=f(0.8)*/
{36, 0,123,__LINE__, 0x3fd7d9ff, 0xeb856818, 0x3fe9eb85, 0x1eb851f9},	/* 0.372681=f(0.81)*/
{36, 0,123,__LINE__, 0x3fd81870, 0x0802b16c, 0x3fea3d70, 0xa3d70a4b},	/* 0.376492=f(0.82)*/
{44, 0,123,__LINE__, 0x3fd8566a, 0xdd43d5f3, 0x3fea8f5c, 0x28f5c29d},	/* 0.380275=f(0.83)*/
{36, 0,123,__LINE__, 0x3fd893ef, 0x4545bd11, 0x3feae147, 0xae147aef},	/* 0.384029=f(0.84)*/
{36, 0,123,__LINE__, 0x3fd8d0fc, 0x344a56e6, 0x3feb3333, 0x33333341},	/* 0.387755=f(0.85)*/
{36, 0,123,__LINE__, 0x3fd90d90, 0x59a9431d, 0x3feb851e, 0xb851eb93},	/* 0.391453=f(0.86)*/
{36, 0,123,__LINE__, 0x3fd949aa, 0xaeeca787, 0x3febd70a, 0x3d70a3e5},	/* 0.395121=f(0.87)*/
{37, 0,123,__LINE__, 0x3fd9854a, 0x1843de6a, 0x3fec28f5, 0xc28f5c37},	/* 0.39876=f(0.88)*/
{36, 0,123,__LINE__, 0x3fd9c06d, 0x7c79d7df, 0x3fec7ae1, 0x47ae1489},	/* 0.40237=f(0.89)*/
{35, 0,123,__LINE__, 0x3fd9fb13, 0xc4faf984, 0x3feccccc, 0xccccccdb},	/* 0.40595=f(0.9)*/
{38, 0,123,__LINE__, 0x3fda353b, 0xf479d151, 0x3fed1eb8, 0x51eb852d},	/* 0.409499=f(0.91)*/
{36, 0,123,__LINE__, 0x3fda6ee4, 0xcc47643c, 0x3fed70a3, 0xd70a3d7f},	/* 0.413018=f(0.92)*/
{39, 0,123,__LINE__, 0x3fdaa80d, 0x54a7832e, 0x3fedc28f, 0x5c28f5d1},	/* 0.416507=f(0.93)*/
{36, 0,123,__LINE__, 0x3fdae0b4, 0x81c5f995, 0x3fee147a, 0xe147ae23},	/* 0.419965=f(0.94)*/
{36, 0,123,__LINE__, 0x3fdb18d9, 0x4a8c82f5, 0x3fee6666, 0x66666675},	/* 0.423392=f(0.95)*/
{35, 0,123,__LINE__, 0x3fdb507a, 0xa8a84e88, 0x3feeb851, 0xeb851ec7},	/* 0.426787=f(0.96)*/
{36, 0,123,__LINE__, 0x3fdb8797, 0xadfcc309, 0x3fef0a3d, 0x70a3d719},	/* 0.430151=f(0.97)*/
{35, 0,123,__LINE__, 0x3fdbbe2f, 0x2ebf51a5, 0x3fef5c28, 0xf5c28f6b},	/* 0.433483=f(0.98)*/
{39, 0,123,__LINE__, 0x3fdbf440, 0x42a93a6d, 0x3fefae14, 0x7ae147bd},	/* 0.436783=f(0.99)*/
{36, 0,123,__LINE__, 0x3fdc29c9, 0xeeab633a, 0x3ff00000, 0x00000007},	/* 0.440051=f(1)*/
{35, 0,123,__LINE__, 0x3fdc5ecb, 0x3a94c890, 0x3ff028f5, 0xc28f5c30},	/* 0.443286=f(1.01)*/
{36, 0,123,__LINE__, 0x3fdc9343, 0x3117a0b8, 0x3ff051eb, 0x851eb859},	/* 0.446488=f(1.02)*/
{35, 0,123,__LINE__, 0x3fdcc730, 0xdfce6e70, 0x3ff07ae1, 0x47ae1482},	/* 0.449658=f(1.03)*/
{37, 0,123,__LINE__, 0x3fdcfa93, 0x574102ef, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.452794=f(1.04)*/
{38, 0,123,__LINE__, 0x3fdd2d69, 0xaae96f49, 0x3ff0cccc, 0xccccccd4},	/* 0.455897=f(1.05)*/
{35, 0,123,__LINE__, 0x3fdd5fb2, 0xf138e4f3, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.458966=f(1.06)*/
{35, 0,123,__LINE__, 0x3fdd916e, 0x6a3f313d, 0x3ff11eb8, 0x51eb8526},	/* 0.462001=f(1.07)*/
{38, 0,123,__LINE__, 0x3fddc29a, 0xe4b4dbf5, 0x3ff147ae, 0x147ae14f},	/* 0.465003=f(1.08)*/
{35, 0,123,__LINE__, 0x3fddf337, 0xa71eff4e, 0x3ff170a3, 0xd70a3d78},	/* 0.46797=f(1.09)*/
{35, 0,123,__LINE__, 0x3fde2343, 0xd3fac201, 0x3ff19999, 0x999999a1},	/* 0.470902=f(1.1)*/
{36, 0,123,__LINE__, 0x3fde52be, 0x90d3cdf3, 0x3ff1c28f, 0x5c28f5ca},	/* 0.4738=f(1.11)*/
{37, 0,123,__LINE__, 0x3fde81a7, 0x0648c9ab, 0x3ff1eb85, 0x1eb851f3},	/* 0.476663=f(1.12)*/
{36, 0,123,__LINE__, 0x3fdeaffc, 0x600fc03f, 0x3ff2147a, 0xe147ae1c},	/* 0.479491=f(1.13)*/
{36, 0,123,__LINE__, 0x3fdeddbd, 0xccfa779e, 0x3ff23d70, 0xa3d70a45},	/* 0.482284=f(1.14)*/
{38, 0,123,__LINE__, 0x3fdf0aea, 0x7efab527, 0x3ff26666, 0x6666666e},	/* 0.485041=f(1.15)*/
{35, 0,123,__LINE__, 0x3fdf3781, 0xab26706b, 0x3ff28f5c, 0x28f5c297},	/* 0.487763=f(1.16)*/
{36, 0,123,__LINE__, 0x3fdf6382, 0x89bbf406, 0x3ff2b851, 0xeb851ec0},	/* 0.490449=f(1.17)*/
{35, 0,123,__LINE__, 0x3fdf8eec, 0x5625ec81, 0x3ff2e147, 0xae147ae9},	/* 0.493098=f(1.18)*/
{35, 0,123,__LINE__, 0x3fdfb9be, 0x7037f0ff, 0x3ff30a3d, 0x70a3d712},	/* 0.495712=f(1.19)*/
{30, 0,123,__LINE__, 0x3fcb2f59, 0xb57d5fcb, 0xc01921fb, 0x54442d18},	/* 0.212383=f(-6.28319)*/
{34, 0,123,__LINE__, 0x3fd206ae, 0xf2c78d7b, 0xc012d97c, 0x7f3321d2},	/* 0.281658=f(-4.71239)*/
{34, 0,123,__LINE__, 0xbfd23723, 0x3faffbfb, 0xc00921fb, 0x54442d18},	/* -0.284615=f(-3.14159)*/
{36, 0,123,__LINE__, 0xbfe2236c, 0x488463d7, 0xbff921fb, 0x54442d18},	/* -0.566824=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{36, 0,123,__LINE__, 0x3fe2236c, 0x488463d7, 0x3ff921fb, 0x54442d18},	/* 0.566824=f(1.5708)*/
{34, 0,123,__LINE__, 0x3fd23723, 0x3faffbfb, 0x400921fb, 0x54442d18},	/* 0.284615=f(3.14159)*/
{34, 0,123,__LINE__, 0xbfd206ae, 0xf2c78d7b, 0x4012d97c, 0x7f3321d2},	/* -0.281658=f(4.71239)*/
{31, 0,123,__LINE__, 0x3fbe6678, 0x5264feb3, 0xc03e0000, 0x00000000},	/* 0.118751=f(-30)*/
{31, 0,123,__LINE__, 0xbfba145d, 0xe1d1af86, 0xc03c4ccc, 0xcccccccd},	/* -0.101873=f(-28.3)*/
{31, 0,123,__LINE__, 0xbfb965be, 0xc505b6a1, 0xc03a9999, 0x9999999a},	/* -0.0992088=f(-26.6)*/
{32, 0,123,__LINE__, 0x3fc142f3, 0xfdfc9ad2, 0xc038e666, 0x66666667},	/* 0.134856=f(-24.9)*/
{30, 0,123,__LINE__, 0x3fb20dc9, 0xbc32e4e6, 0xc0373333, 0x33333334},	/* 0.0705229=f(-23.2)*/
{33, 0,123,__LINE__, 0xbfc4f91a, 0xf17ff04c, 0xc0358000, 0x00000001},	/* -0.163852=f(-21.5)*/
{29, 0,123,__LINE__, 0xbfa0cd57, 0x741888a8, 0xc033cccc, 0xccccccce},	/* -0.0328166=f(-19.8)*/
{33, 0,123,__LINE__, 0x3fc7fb17, 0x7b33abe9, 0xc0321999, 0x9999999b},	/* 0.18735=f(-18.1)*/
{27, 0,123,__LINE__, 0xbf8c74da, 0xb4bbaab5, 0xc0306666, 0x66666668},	/* -0.0138948=f(-16.4)*/
{33, 0,123,__LINE__, 0xbfca24e7, 0xdd1f580e, 0xc02d6666, 0x6666666a},	/* -0.204251=f(-14.7)*/
{31, 0,123,__LINE__, 0x3fb2005d, 0x483d9a3b, 0xc02a0000, 0x00000004},	/* 0.0703181=f(-13)*/
{30, 0,123,__LINE__, 0x3fcb6cb5, 0xbe7e4e3c, 0xc0269999, 0x9999999e},	/* 0.214255=f(-11.3)*/
{32, 0,123,__LINE__, 0xbfc1dbf2, 0x47e3acb7, 0xc0233333, 0x33333338},	/* -0.139525=f(-9.6)*/
{31, 0,123,__LINE__, 0xbfcc0e12, 0x3bd9d25a, 0xc01f9999, 0x999999a3},	/* -0.219179=f(-7.9)*/
{30, 0,123,__LINE__, 0x3fcdd036, 0x41e8765f, 0xc018cccc, 0xccccccd6},	/* 0.232917=f(-6.2)*/
{30, 0,123,__LINE__, 0x3fcd9363, 0x933bd0e5, 0xc0120000, 0x00000009},	/* 0.23106=f(-4.5)*/
{38, 0,123,__LINE__, 0xbfda38ad, 0x5dbc72a8, 0xc0066666, 0x66666678},	/* -0.409709=f(-2.8)*/
{35, 0,123,__LINE__, 0xbfde2343, 0xd3fac201, 0xbff19999, 0x999999bd},	/* -0.470902=f(-1.1)*/
{35, 0,123,__LINE__, 0x3fd2594f, 0x24fccace, 0x3fe33333, 0x333332ec},	/* 0.286701=f(0.6)*/
{34, 0,123,__LINE__, 0x3fe146a2, 0xdeca5e20, 0x40026666, 0x66666654},	/* 0.539873=f(2.3)*/
{30, 0,123,__LINE__, 0xbfb0e837, 0x375e6026, 0x400fffff, 0xffffffee},	/* -0.0660433=f(4)*/
{33, 0,123,__LINE__, 0xbfd4bed6, 0x24f2ca3c, 0x4016cccc, 0xccccccc4},	/* -0.324148=f(5.7)*/
{28, 0,123,__LINE__, 0x3fbc1064, 0x32bc0b36, 0x401d9999, 0x99999991},	/* 0.109625=f(7.4)*/
{33, 0,123,__LINE__, 0x3fcdc04a, 0x2c8f1535, 0x40223333, 0x3333332f},	/* 0.232431=f(9.1)*/
{32, 0,123,__LINE__, 0xbfc23283, 0xd00a3d1a, 0x40259999, 0x99999995},	/* -0.142167=f(10.8)*/
{32, 0,123,__LINE__, 0xbfc52e92, 0xc81035e7, 0x4028ffff, 0xfffffffb},	/* -0.165484=f(12.5)*/
{32, 0,123,__LINE__, 0x3fc4d06d, 0x94cf0f67, 0x402c6666, 0x66666661},	/* 0.162611=f(14.2)*/
{31, 0,123,__LINE__, 0x3fbba7b8, 0x88626f80, 0x402fcccc, 0xccccccc7},	/* 0.108028=f(15.9)*/
{33, 0,123,__LINE__, 0xbfc60238, 0x9a2163e1, 0x40319999, 0x99999997},	/* -0.171943=f(17.6)*/
{29, 0,123,__LINE__, 0xbfacdf55, 0x6a83fd27, 0x40334ccc, 0xccccccca},	/* -0.0563914=f(19.3)*/
{33, 0,123,__LINE__, 0x3fc5e744, 0xe8bf6779, 0x4034ffff, 0xfffffffd},	/* 0.17112=f(21)*/
{27, 0,123,__LINE__, 0x3f84964c, 0xae15df20, 0x4036b333, 0x33333330},	/* 0.0100523=f(22.7)*/
{35, 0,123,__LINE__, 0xbfc4a256, 0xf9da1acc, 0x40386666, 0x66666663},	/* -0.161204=f(24.4)*/
{28, 0,123,__LINE__, 0x3f9f3031, 0x2942c60e, 0x403a1999, 0x99999996},	/* 0.0304573=f(26.1)*/
{33, 0,123,__LINE__, 0x3fc25cf8, 0xd1c20f55, 0x403bcccc, 0xccccccc9},	/* 0.143462=f(27.8)*/
{31, 0,123,__LINE__, 0xbfb07640, 0x84343430, 0x403d7fff, 0xfffffffc},	/* -0.0643044=f(29.5)*/
{0},};
void test_j1f(int m)   {run_vector_1(m,j1f_vec,(char *)(j1f),"j1f","ff");   }
