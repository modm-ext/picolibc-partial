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
 one_line_type erfcf_vec[] = {
{37, 0,123,__LINE__, 0x3ffe90a5, 0x668e2743, 0xbff33333, 0x33333333},	/* 1.91031=f(-1.2)*/
{37, 0,123,__LINE__, 0x3ffe8590, 0x47a42307, 0xbff30a3d, 0x70a3d70a},	/* 1.90761=f(-1.19)*/
{36, 0,123,__LINE__, 0x3ffe7a36, 0xcab5e06a, 0xbff2e147, 0xae147ae1},	/* 1.90484=f(-1.18)*/
{36, 0,123,__LINE__, 0x3ffe6e97, 0xf47f4356, 0xbff2b851, 0xeb851eb8},	/* 1.902=f(-1.17)*/
{36, 0,123,__LINE__, 0x3ffe62b2, 0xb001e641, 0xbff28f5c, 0x28f5c28f},	/* 1.8991=f(-1.16)*/
{36, 0,123,__LINE__, 0x3ffe5685, 0xf1f4a60b, 0xbff26666, 0x66666666},	/* 1.89612=f(-1.15)*/
{36, 0,123,__LINE__, 0x3ffe4a10, 0xb02fd0ac, 0xbff23d70, 0xa3d70a3d},	/* 1.89308=f(-1.14)*/
{39, 0,123,__LINE__, 0x3ffe3d51, 0xe1dd42a6, 0xbff2147a, 0xe147ae14},	/* 1.88997=f(-1.13)*/
{41, 0,123,__LINE__, 0x3ffe3048, 0x7fa95d22, 0xbff1eb85, 0x1eb851eb},	/* 1.88679=f(-1.12)*/
{38, 0,123,__LINE__, 0x3ffe22f3, 0x83f4cd09, 0xbff1c28f, 0x5c28f5c2},	/* 1.88353=f(-1.11)*/
{36, 0,123,__LINE__, 0x3ffe1551, 0xeb071af5, 0xbff19999, 0x99999999},	/* 1.88021=f(-1.1)*/
{36, 0,123,__LINE__, 0x3ffe0762, 0xb341fb95, 0xbff170a3, 0xd70a3d70},	/* 1.8768=f(-1.09)*/
{38, 0,123,__LINE__, 0x3ffdf924, 0xdd55576e, 0xbff147ae, 0x147ae147},	/* 1.87333=f(-1.08)*/
{36, 0,123,__LINE__, 0x3ffdea97, 0x6c7400b8, 0xbff11eb8, 0x51eb851e},	/* 1.86977=f(-1.07)*/
{37, 0,123,__LINE__, 0x3ffddbb9, 0x5acbdd43, 0xbff0f5c2, 0x8f5c28f5},	/* 1.86614=f(-1.06)*/
{36, 0,123,__LINE__, 0x3ffdcc89, 0xc8708650, 0xbff0cccc, 0xcccccccc},	/* 1.86244=f(-1.05)*/
{36, 0,123,__LINE__, 0x3ffdbd07, 0xb5e22d56, 0xbff0a3d7, 0x0a3d70a3},	/* 1.85865=f(-1.04)*/
{36, 0,123,__LINE__, 0x3ffdad32, 0x327aa2a1, 0xbff07ae1, 0x47ae147a},	/* 1.85478=f(-1.03)*/
{35, 0,123,__LINE__, 0x3ffd9d08, 0x5126fba7, 0xbff051eb, 0x851eb851},	/* 1.85084=f(-1.02)*/
{36, 0,123,__LINE__, 0x3ffd8c89, 0x289f816c, 0xbff028f5, 0xc28f5c28},	/* 1.84681=f(-1.01)*/
{35, 0,123,__LINE__, 0x3ffd7bb3, 0xd3a00000, 0xbfefffff, 0xfffffffe},	/* 1.8427=f(-1)*/
{36, 0,123,__LINE__, 0x3ffd6a87, 0x71206a77, 0xbfefae14, 0x7ae147ac},	/* 1.83851=f(-0.99)*/
{37, 0,123,__LINE__, 0x3ffd5903, 0x248dc680, 0xbfef5c28, 0xf5c28f5a},	/* 1.83423=f(-0.98)*/
{35, 0,123,__LINE__, 0x3ffd4726, 0x1603524b, 0xbfef0a3d, 0x70a3d708},	/* 1.82987=f(-0.97)*/
{36, 0,123,__LINE__, 0x3ffd34ef, 0x6b54e4ce, 0xbfeeb851, 0xeb851eb6},	/* 1.82542=f(-0.96)*/
{37, 0,123,__LINE__, 0x3ffd225e, 0x64e0b2b8, 0xbfee6666, 0x66666664},	/* 1.82089=f(-0.95)*/
{35, 0,123,__LINE__, 0x3ffcfc2a, 0x1310bba9, 0xbfedc28f, 0x5c28f5c0},	/* 1.81156=f(-0.93)*/
{37, 0,123,__LINE__, 0x3ffce885, 0x47a703e7, 0xbfed70a3, 0xd70a3d6e},	/* 1.80677=f(-0.92)*/
{35, 0,123,__LINE__, 0x3ffcd483, 0x19c2a8ee, 0xbfed1eb8, 0x51eb851c},	/* 1.80188=f(-0.91)*/
{35, 0,123,__LINE__, 0x3ffcc022, 0xd0823932, 0xbfeccccc, 0xccccccca},	/* 1.79691=f(-0.9)*/
{35, 0,123,__LINE__, 0x3ffcab63, 0xd1704c11, 0xbfec7ae1, 0x47ae1478},	/* 1.79184=f(-0.89)*/
{35, 0,123,__LINE__, 0x3ffc9645, 0x70faf46f, 0xbfec28f5, 0xc28f5c26},	/* 1.78669=f(-0.88)*/
{36, 0,123,__LINE__, 0x3ffc80c7, 0x125d69e7, 0xbfebd70a, 0x3d70a3d4},	/* 1.78144=f(-0.87)*/
{44, 0,123,__LINE__, 0x3ffc6ae8, 0x1ff4bf36, 0xbfeb851e, 0xb851eb82},	/* 1.7761=f(-0.86)*/
{36, 0,123,__LINE__, 0x3ffc54a8, 0x0b774c65, 0xbfeb3333, 0x33333330},	/* 1.77067=f(-0.85)*/
{37, 0,123,__LINE__, 0x3ffc3e06, 0x4574483c, 0xbfeae147, 0xae147ade},	/* 1.76514=f(-0.84)*/
{42, 0,123,__LINE__, 0x3ffc2702, 0x603376f1, 0xbfea8f5c, 0x28f5c28c},	/* 1.75952=f(-0.83)*/
{38, 0,123,__LINE__, 0x3ffc0f9b, 0xdc39f173, 0xbfea3d70, 0xa3d70a3a},	/* 1.75381=f(-0.82)*/
{36, 0,123,__LINE__, 0x3ffbf7d2, 0x4ac16be8, 0xbfe9eb85, 0x1eb851e8},	/* 1.748=f(-0.81)*/
{37, 0,123,__LINE__, 0x3ffbdfa5, 0x45687734, 0xbfe99999, 0x99999996},	/* 1.7421=f(-0.8)*/
{35, 0,123,__LINE__, 0x3ffbc714, 0x6e65aad2, 0xbfe947ae, 0x147ae144},	/* 1.7361=f(-0.79)*/
{37, 0,123,__LINE__, 0x3ffbae1f, 0x66e690ed, 0xbfe8f5c2, 0x8f5c28f2},	/* 1.73001=f(-0.78)*/
{36, 0,123,__LINE__, 0x3ffb94c5, 0xf666ca49, 0xbfe8a3d7, 0x0a3d70a0},	/* 1.72382=f(-0.77)*/
{36, 0,123,__LINE__, 0x3ffb7b07, 0xd0622afd, 0xbfe851eb, 0x851eb84e},	/* 1.71754=f(-0.76)*/
{37, 0,123,__LINE__, 0x3ffb60e4, 0xbb5b4919, 0xbfe7ffff, 0xfffffffc},	/* 1.71116=f(-0.75)*/
{37, 0,123,__LINE__, 0x3ffb465c, 0x875d2e25, 0xbfe7ae14, 0x7ae147aa},	/* 1.70468=f(-0.74)*/
{36, 0,123,__LINE__, 0x3ffb2b6f, 0x0e27e3b2, 0xbfe75c28, 0xf5c28f58},	/* 1.6981=f(-0.73)*/
{36, 0,123,__LINE__, 0x3ffb101c, 0x335bab87, 0xbfe70a3d, 0x70a3d706},	/* 1.69143=f(-0.72)*/
{37, 0,123,__LINE__, 0x3ffaf463, 0xd9bb01c5, 0xbfe6b851, 0xeb851eb4},	/* 1.68467=f(-0.71)*/
{36, 0,123,__LINE__, 0x3ffad846, 0x0eca9d20, 0xbfe66666, 0x66666662},	/* 1.6778=f(-0.7)*/
{36, 0,123,__LINE__, 0x3ffabbc2, 0xca005167, 0xbfe6147a, 0xe147ae10},	/* 1.67084=f(-0.69)*/
{37, 0,123,__LINE__, 0x3ffa9eda, 0x1810ac05, 0xbfe5c28f, 0x5c28f5be},	/* 1.66378=f(-0.68)*/
{35, 0,123,__LINE__, 0x3ffa818c, 0x105268f3, 0xbfe570a3, 0xd70a3d6c},	/* 1.65663=f(-0.67)*/
{35, 0,123,__LINE__, 0x3ffa63d8, 0xd4e06313, 0xbfe51eb8, 0x51eb851a},	/* 1.64938=f(-0.66)*/
{37, 0,123,__LINE__, 0x3ffa45c0, 0x86e49454, 0xbfe4cccc, 0xccccccc8},	/* 1.64203=f(-0.65)*/
{36, 0,123,__LINE__, 0x3ffa2743, 0x75e3dcbb, 0xbfe47ae1, 0x47ae1476},	/* 1.63459=f(-0.64)*/
{35, 0,123,__LINE__, 0x3ffa0861, 0xd95183c2, 0xbfe428f5, 0xc28f5c24},	/* 1.62705=f(-0.63)*/
{41, 0,123,__LINE__, 0x3ff9e91b, 0xff885938, 0xbfe3d70a, 0x3d70a3d2},	/* 1.61941=f(-0.62)*/
{38, 0,123,__LINE__, 0x3ff9c972, 0x42359095, 0xbfe3851e, 0xb851eb80},	/* 1.61168=f(-0.61)*/
{37, 0,123,__LINE__, 0x3ff9a965, 0x066f597e, 0xbfe33333, 0x3333332e},	/* 1.60386=f(-0.6)*/
{35, 0,123,__LINE__, 0x3ff988f4, 0xb00a4028, 0xbfe2e147, 0xae147adc},	/* 1.59594=f(-0.59)*/
{35, 0,123,__LINE__, 0x3ff96821, 0xd481c991, 0xbfe28f5c, 0x28f5c28a},	/* 1.58792=f(-0.58)*/
{35, 0,123,__LINE__, 0x3ff946ec, 0xef0139c8, 0xbfe23d70, 0xa3d70a38},	/* 1.57982=f(-0.57)*/
{35, 0,123,__LINE__, 0x3ff92556, 0x92fa9b44, 0xbfe1eb85, 0x1eb851e6},	/* 1.57162=f(-0.56)*/
{41, 0,123,__LINE__, 0x3ff9035f, 0x5f9a0147, 0xbfe19999, 0x99999994},	/* 1.56332=f(-0.55)*/
{42, 0,123,__LINE__, 0x3ff8e107, 0xffcf0f44, 0xbfe147ae, 0x147ae142},	/* 1.55494=f(-0.54)*/
{38, 0,123,__LINE__, 0x3ff8be51, 0x1cb2374d, 0xbfe0f5c2, 0x8f5c28f0},	/* 1.54646=f(-0.53)*/
{35, 0,123,__LINE__, 0x3ff89b3b, 0x93eca277, 0xbfe0a3d7, 0x0a3d709e},	/* 1.5379=f(-0.52)*/
{37, 0,123,__LINE__, 0x3ff877c8, 0x265db1e8, 0xbfe051eb, 0x851eb84c},	/* 1.52924=f(-0.51)*/
{35, 0,123,__LINE__, 0x3ff853f7, 0xae33cffe, 0xbfdfffff, 0xfffffff4},	/* 1.5205=f(-0.5)*/
{35, 0,123,__LINE__, 0x3ff82fcb, 0x116d4289, 0xbfdf5c28, 0xf5c28f50},	/* 1.51167=f(-0.49)*/
{37, 0,123,__LINE__, 0x3ff80b43, 0x3aa7fd6b, 0xbfdeb851, 0xeb851eac},	/* 1.50275=f(-0.48)*/
{36, 0,123,__LINE__, 0x3ff7e661, 0x35b64fec, 0xbfde147a, 0xe147ae08},	/* 1.49375=f(-0.47)*/
{37, 0,123,__LINE__, 0x3ff7c126, 0x04c5a9ed, 0xbfdd70a3, 0xd70a3d64},	/* 1.48466=f(-0.46)*/
{36, 0,123,__LINE__, 0x3ff79b92, 0xb56b8bc7, 0xbfdccccc, 0xccccccc0},	/* 1.47548=f(-0.45)*/
{36, 0,123,__LINE__, 0x3ff775a8, 0x76e9639a, 0xbfdc28f5, 0xc28f5c1c},	/* 1.46623=f(-0.44)*/
{35, 0,123,__LINE__, 0x3ff74f68, 0x6e124996, 0xbfdb851e, 0xb851eb78},	/* 1.45689=f(-0.43)*/
{36, 0,123,__LINE__, 0x3ff728d3, 0xcaf00cf1, 0xbfdae147, 0xae147ad4},	/* 1.44747=f(-0.42)*/
{41, 0,123,__LINE__, 0x3ff701eb, 0xdf9346ea, 0xbfda3d70, 0xa3d70a30},	/* 1.43797=f(-0.41)*/
{36, 0,123,__LINE__, 0x3ff6dab1, 0xf2c3e449, 0xbfd99999, 0x9999998c},	/* 1.42839=f(-0.4)*/
{36, 0,123,__LINE__, 0x3ff6b327, 0x5638b27f, 0xbfd8f5c2, 0x8f5c28e8},	/* 1.41874=f(-0.39)*/
{38, 0,123,__LINE__, 0x3ff68b4d, 0x7deca76f, 0xbfd851eb, 0x851eb844},	/* 1.40901=f(-0.38)*/
{35, 0,123,__LINE__, 0x3ff66325, 0xd1a78e38, 0xbfd7ae14, 0x7ae147a0},	/* 1.39921=f(-0.37)*/
{36, 0,123,__LINE__, 0x3ff63ab1, 0xcbafda1c, 0xbfd70a3d, 0x70a3d6fc},	/* 1.38933=f(-0.36)*/
{36, 0,123,__LINE__, 0x3ff611f2, 0xe8f76eaa, 0xbfd66666, 0x66666658},	/* 1.37938=f(-0.35)*/
{36, 0,123,__LINE__, 0x3ff5e8ea, 0xc8d7718e, 0xbfd5c28f, 0x5c28f5b4},	/* 1.36936=f(-0.34)*/
{38, 0,123,__LINE__, 0x3ff5bf9a, 0xfd25c0d4, 0xbfd51eb8, 0x51eb8510},	/* 1.35928=f(-0.33)*/
{39, 0,123,__LINE__, 0x3ff59605, 0x21a8f7fa, 0xbfd47ae1, 0x47ae146c},	/* 1.34913=f(-0.32)*/
{36, 0,123,__LINE__, 0x3ff56c2a, 0xf485fcbb, 0xbfd3d70a, 0x3d70a3c8},	/* 1.33891=f(-0.31)*/
{37, 0,123,__LINE__, 0x3ff5420e, 0x255253d2, 0xbfd33333, 0x33333324},	/* 1.32863=f(-0.3)*/
{35, 0,123,__LINE__, 0x3ff517b0, 0x6d0373c9, 0xbfd28f5c, 0x28f5c280},	/* 1.31828=f(-0.29)*/
{37, 0,123,__LINE__, 0x3ff4ed13, 0xa6c60517, 0xbfd1eb85, 0x1eb851dc},	/* 1.30788=f(-0.28)*/
{39, 0,123,__LINE__, 0x3ff4c239, 0x9e1f19b2, 0xbfd147ae, 0x147ae138},	/* 1.29742=f(-0.27)*/
{37, 0,123,__LINE__, 0x3ff49724, 0x274e94fb, 0xbfd0a3d7, 0x0a3d7094},	/* 1.2869=f(-0.26)*/
{37, 0,123,__LINE__, 0x3ff46bd5, 0x3886be9a, 0xbfcfffff, 0xffffffe0},	/* 1.27633=f(-0.25)*/
{36, 0,123,__LINE__, 0x3ff4404e, 0xb2ecdb67, 0xbfceb851, 0xeb851e98},	/* 1.2657=f(-0.24)*/
{36, 0,123,__LINE__, 0x3ff41492, 0x94fbc4bd, 0xbfcd70a3, 0xd70a3d50},	/* 1.25502=f(-0.23)*/
{36, 0,123,__LINE__, 0x3ff3e8a2, 0xd40e7d18, 0xbfcc28f5, 0xc28f5c08},	/* 1.2443=f(-0.22)*/
{37, 0,123,__LINE__, 0x3ff3bc81, 0x79f3b28b, 0xbfcae147, 0xae147ac0},	/* 1.23352=f(-0.21)*/
{36, 0,123,__LINE__, 0x3ff39030, 0x97ec96c4, 0xbfc99999, 0x99999978},	/* 1.2227=f(-0.2)*/
{37, 0,123,__LINE__, 0x3ff363b2, 0x3952b883, 0xbfc851eb, 0x851eb830},	/* 1.21184=f(-0.19)*/
{39, 0,123,__LINE__, 0x3ff33708, 0x81a3ebfa, 0xbfc70a3d, 0x70a3d6e8},	/* 1.20094=f(-0.18)*/
{36, 0,123,__LINE__, 0x3ff30a35, 0x89746b1c, 0xbfc5c28f, 0x5c28f5a0},	/* 1.18999=f(-0.17)*/
{38, 0,123,__LINE__, 0x3ff2dd3b, 0x7c9e7940, 0xbfc47ae1, 0x47ae1458},	/* 1.17901=f(-0.16)*/
{36, 0,123,__LINE__, 0x3ff2b01c, 0x8cee8c13, 0xbfc33333, 0x33333310},	/* 1.168=f(-0.15)*/
{37, 0,123,__LINE__, 0x3ff282da, 0xe4894b41, 0xbfc1eb85, 0x1eb851c8},	/* 1.15695=f(-0.14)*/
{44, 0,123,__LINE__, 0x3ff25578, 0xc009dac1, 0xbfc0a3d7, 0x0a3d7080},	/* 1.14587=f(-0.13)*/
{39, 0,123,__LINE__, 0x3ff227f8, 0x5ecb1a41, 0xbfbeb851, 0xeb851e71},	/* 1.13476=f(-0.12)*/
{41, 0,123,__LINE__, 0x3ff1fa5c, 0x004f6142, 0xbfbc28f5, 0xc28f5be2},	/* 1.12362=f(-0.11)*/
{36, 0,123,__LINE__, 0x3ff1cca5, 0xea916f12, 0xbfb99999, 0x99999953},	/* 1.11246=f(-0.1)*/
{37, 0,123,__LINE__, 0x3ff19ed8, 0x6776ed3f, 0xbfb70a3d, 0x70a3d6c4},	/* 1.10128=f(-0.09)*/
{38, 0,123,__LINE__, 0x3ff170f5, 0xc23a6c63, 0xbfb47ae1, 0x47ae1435},	/* 1.09008=f(-0.08)*/
{35, 0,123,__LINE__, 0x3ff14300, 0x5009d49f, 0xbfb1eb85, 0x1eb851a6},	/* 1.07886=f(-0.07)*/
{39, 0,123,__LINE__, 0x3ff114fa, 0x611b4dc6, 0xbfaeb851, 0xeb851e2d},	/* 1.06762=f(-0.06)*/
{36, 0,123,__LINE__, 0x3ff0e6e6, 0x4dc72c4c, 0xbfa99999, 0x9999990e},	/* 1.05637=f(-0.05)*/
{36, 0,123,__LINE__, 0x3ff0b8c6, 0x6c1170b7, 0xbfa47ae1, 0x47ae13ef},	/* 1.04511=f(-0.04)*/
{36, 0,123,__LINE__, 0x3ff08a9d, 0x17bd80c9, 0xbf9eb851, 0xeb851da0},	/* 1.03384=f(-0.03)*/
{36, 0,123,__LINE__, 0x3ff05c6c, 0xabc19e20, 0xbf947ae1, 0x47ae1362},	/* 1.02256=f(-0.02)*/
{37, 0,123,__LINE__, 0x3ff02e37, 0x84bacc1c, 0xbf847ae1, 0x47ae1249},	/* 1.01128=f(-0.01)*/
{60, 0,123,__LINE__, 0x3fefffff, 0xfffffff7, 0x3cd19000, 0x00000000},	/* 1=f(9.74915e-16)*/
{36, 0,123,__LINE__, 0x3fefa390, 0xf68a67c7, 0x3f847ae1, 0x47ae16ad},	/* 0.988717=f(0.01)*/
{36, 0,123,__LINE__, 0x3fef4726, 0xa87cc3c1, 0x3f947ae1, 0x47ae1594},	/* 0.977435=f(0.02)*/
{35, 0,123,__LINE__, 0x3feeeac5, 0xd084fe6f, 0x3f9eb851, 0xeb851fd2},	/* 0.966159=f(0.03)*/
{37, 0,123,__LINE__, 0x3fee8e73, 0x27dd1e91, 0x3fa47ae1, 0x47ae1508},	/* 0.954889=f(0.04)*/
{37, 0,123,__LINE__, 0x3fee3233, 0x6471a768, 0x3fa99999, 0x99999a27},	/* 0.943628=f(0.05)*/
{38, 0,123,__LINE__, 0x3fedd60b, 0x3dc96474, 0x3faeb851, 0xeb851f46},	/* 0.932378=f(0.06)*/
{43, 0,123,__LINE__, 0x3fed79ff, 0x5fec56c2, 0x3fb1eb85, 0x1eb85232},	/* 0.921142=f(0.07)*/
{37, 0,123,__LINE__, 0x3fed1e14, 0x7b8b273a, 0x3fb47ae1, 0x47ae14c1},	/* 0.909922=f(0.08)*/
{36, 0,123,__LINE__, 0x3fecc24f, 0x31122583, 0x3fb70a3d, 0x70a3d750},	/* 0.898719=f(0.09)*/
{36, 0,123,__LINE__, 0x3fec66b4, 0x2add21dd, 0x3fb99999, 0x999999df},	/* 0.887537=f(0.1)*/
{40, 0,123,__LINE__, 0x3fec0b47, 0xff613d7c, 0x3fbc28f5, 0xc28f5c6e},	/* 0.876377=f(0.11)*/
{38, 0,123,__LINE__, 0x3febb00f, 0x4269cb7f, 0x3fbeb851, 0xeb851efd},	/* 0.865242=f(0.12)*/
{43, 0,123,__LINE__, 0x3feb550e, 0x7fec4a7e, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.854133=f(0.13)*/
{36, 0,123,__LINE__, 0x3feafa4a, 0x36ed697e, 0x3fc1eb85, 0x1eb8520e},	/* 0.843053=f(0.14)*/
{37, 0,123,__LINE__, 0x3fea9fc6, 0xe622e7da, 0x3fc33333, 0x33333356},	/* 0.832004=f(0.15)*/
{37, 0,123,__LINE__, 0x3fea4589, 0x06c30d81, 0x3fc47ae1, 0x47ae149e},	/* 0.820988=f(0.16)*/
{35, 0,123,__LINE__, 0x3fe9eb94, 0xed1729c8, 0x3fc5c28f, 0x5c28f5e6},	/* 0.810008=f(0.17)*/
{38, 0,123,__LINE__, 0x3fe991ee, 0xfcb8280d, 0x3fc70a3d, 0x70a3d72e},	/* 0.799064=f(0.18)*/
{36, 0,123,__LINE__, 0x3fe9389b, 0x8d5a8efb, 0x3fc851eb, 0x851eb876},	/* 0.78816=f(0.19)*/
{35, 0,123,__LINE__, 0x3fe8df9e, 0xd026d278, 0x3fc99999, 0x999999be},	/* 0.777297=f(0.2)*/
{36, 0,123,__LINE__, 0x3fe886fd, 0x0c189aea, 0x3fcae147, 0xae147b06},	/* 0.766478=f(0.21)*/
{36, 0,123,__LINE__, 0x3fe82eba, 0x57e305d0, 0x3fcc28f5, 0xc28f5c4e},	/* 0.755704=f(0.22)*/
{35, 0,123,__LINE__, 0x3fe7d6da, 0xd6087685, 0x3fcd70a3, 0xd70a3d96},	/* 0.744977=f(0.23)*/
{37, 0,123,__LINE__, 0x3fe77f62, 0x9a264932, 0x3fceb851, 0xeb851ede},	/* 0.7343=f(0.24)*/
{36, 0,123,__LINE__, 0x3fe72855, 0x8ef282cd, 0x3fd00000, 0x00000013},	/* 0.723674=f(0.25)*/
{36, 0,123,__LINE__, 0x3fe6d1b7, 0xb162d609, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.7131=f(0.26)*/
{38, 0,123,__LINE__, 0x3fe67b8c, 0xc3c1cc9b, 0x3fd147ae, 0x147ae15b},	/* 0.702582=f(0.27)*/
{36, 0,123,__LINE__, 0x3fe625d8, 0xb273f5d2, 0x3fd1eb85, 0x1eb851ff},	/* 0.69212=f(0.28)*/
{37, 0,123,__LINE__, 0x3fe5d09f, 0x25f9186e, 0x3fd28f5c, 0x28f5c2a3},	/* 0.681717=f(0.29)*/
{36, 0,123,__LINE__, 0x3fe57be3, 0xb55b585c, 0x3fd33333, 0x33333347},	/* 0.671373=f(0.3)*/
{35, 0,123,__LINE__, 0x3fe527aa, 0x16f40689, 0x3fd3d70a, 0x3d70a3eb},	/* 0.661092=f(0.31)*/
{38, 0,123,__LINE__, 0x3fe4d3f5, 0xbcae100b, 0x3fd47ae1, 0x47ae148f},	/* 0.650874=f(0.32)*/
{37, 0,123,__LINE__, 0x3fe480ca, 0x05b47e58, 0x3fd51eb8, 0x51eb8533},	/* 0.640721=f(0.33)*/
{35, 0,123,__LINE__, 0x3fe42e2a, 0x6e511ce4, 0x3fd5c28f, 0x5c28f5d7},	/* 0.630635=f(0.34)*/
{35, 0,123,__LINE__, 0x3fe3dc1a, 0x2e1122ac, 0x3fd66666, 0x6666667b},	/* 0.620618=f(0.35)*/
{35, 0,123,__LINE__, 0x3fe38a9c, 0x68a04bc9, 0x3fd70a3d, 0x70a3d71f},	/* 0.61067=f(0.36)*/
{38, 0,123,__LINE__, 0x3fe339b4, 0x5cb0e390, 0x3fd7ae14, 0x7ae147c3},	/* 0.600794=f(0.37)*/
{37, 0,123,__LINE__, 0x3fe2e965, 0x0426b123, 0x3fd851eb, 0x851eb867},	/* 0.590991=f(0.38)*/
{35, 0,123,__LINE__, 0x3fe299b1, 0x538e9b03, 0x3fd8f5c2, 0x8f5c290b},	/* 0.581261=f(0.39)*/
{37, 0,123,__LINE__, 0x3fe24a9c, 0x1a78376d, 0x3fd99999, 0x999999af},	/* 0.571608=f(0.4)*/
{40, 0,123,__LINE__, 0x3fe1fc28, 0x40d9722c, 0x3fda3d70, 0xa3d70a53},	/* 0.562031=f(0.41)*/
{35, 0,123,__LINE__, 0x3fe1ae58, 0x6a1fe61f, 0x3fdae147, 0xae147af7},	/* 0.552532=f(0.42)*/
{38, 0,123,__LINE__, 0x3fe1612f, 0x23db6cd4, 0x3fdb851e, 0xb851eb9b},	/* 0.543113=f(0.43)*/
{35, 0,123,__LINE__, 0x3fe114af, 0x122d38cb, 0x3fdc28f5, 0xc28f5c3f},	/* 0.533775=f(0.44)*/
{35, 0,123,__LINE__, 0x3fe0c8da, 0x9528e872, 0x3fdccccc, 0xcccccce3},	/* 0.524518=f(0.45)*/
{36, 0,123,__LINE__, 0x3fe07db3, 0xf674ac25, 0x3fdd70a3, 0xd70a3d87},	/* 0.515345=f(0.46)*/
{36, 0,123,__LINE__, 0x3fe0333d, 0x94936028, 0x3fde147a, 0xe147ae2b},	/* 0.506255=f(0.47)*/
{35, 0,123,__LINE__, 0x3fdfd2f3, 0x15600a52, 0x3fdeb851, 0xeb851ecf},	/* 0.49725=f(0.48)*/
{33, 0,123,__LINE__, 0x3fdf40d3, 0xba4af5db, 0x3fdf5c28, 0xf5c28f73},	/* 0.488332=f(0.49)*/
{37, 0,123,__LINE__, 0x3fdeb021, 0x4730c007, 0x3fe00000, 0x0000000b},	/* 0.4795=f(0.5)*/
{37, 0,123,__LINE__, 0x3fde20df, 0x66893860, 0x3fe051eb, 0x851eb85d},	/* 0.470756=f(0.51)*/
{36, 0,123,__LINE__, 0x3fdd9311, 0xb04d7625, 0x3fe0a3d7, 0x0a3d70af},	/* 0.462101=f(0.52)*/
{36, 0,123,__LINE__, 0x3fdd06bb, 0x8d3722cc, 0x3fe0f5c2, 0x8f5c2901},	/* 0.453536=f(0.53)*/
{40, 0,123,__LINE__, 0x3fdc7be0, 0x00c3c2f0, 0x3fe147ae, 0x147ae153},	/* 0.445061=f(0.54)*/
{39, 0,123,__LINE__, 0x3fdbf282, 0x8197fae4, 0x3fe19999, 0x999999a5},	/* 0.436677=f(0.55)*/
{36, 0,123,__LINE__, 0x3fdb6aa5, 0xb41592ef, 0x3fe1eb85, 0x1eb851f7},	/* 0.428384=f(0.56)*/
{38, 0,123,__LINE__, 0x3fdae44c, 0x43fb18de, 0x3fe23d70, 0xa3d70a49},	/* 0.420184=f(0.57)*/
{35, 0,123,__LINE__, 0x3fda5f78, 0xadf8d9bc, 0x3fe28f5c, 0x28f5c29b},	/* 0.412077=f(0.58)*/
{34, 0,123,__LINE__, 0x3fd9dc2d, 0x3fd6ff61, 0x3fe2e147, 0xae147aed},	/* 0.404064=f(0.59)*/
{35, 0,123,__LINE__, 0x3fd95a6b, 0xe6429a07, 0x3fe33333, 0x3333333f},	/* 0.396144=f(0.6)*/
{36, 0,123,__LINE__, 0x3fd8da36, 0xf729bdad, 0x3fe3851e, 0xb851eb91},	/* 0.388319=f(0.61)*/
{35, 0,123,__LINE__, 0x3fd85b90, 0x01de9b1f, 0x3fe3d70a, 0x3d70a3e3},	/* 0.380589=f(0.62)*/
{34, 0,123,__LINE__, 0x3fd7de78, 0x9ab9f0fa, 0x3fe428f5, 0xc28f5c35},	/* 0.372954=f(0.63)*/
{36, 0,123,__LINE__, 0x3fd762f2, 0x28708d15, 0x3fe47ae1, 0x47ae1487},	/* 0.365414=f(0.64)*/
{35, 0,123,__LINE__, 0x3fd6e8fd, 0xe46daeb1, 0x3fe4cccc, 0xccccccd9},	/* 0.357971=f(0.65)*/
{35, 0,123,__LINE__, 0x3fd6709c, 0xac7e73b3, 0x3fe51eb8, 0x51eb852b},	/* 0.350623=f(0.66)*/
{39, 0,123,__LINE__, 0x3fd5f9cf, 0xbeb65c33, 0x3fe570a3, 0xd70a3d7d},	/* 0.343372=f(0.67)*/
{41, 0,123,__LINE__, 0x3fd58497, 0x9fbd4feb, 0x3fe5c28f, 0x5c28f5cf},	/* 0.336218=f(0.68)*/
{36, 0,123,__LINE__, 0x3fd510f4, 0xd7feba65, 0x3fe6147a, 0xe147ae21},	/* 0.32916=f(0.69)*/
{37, 0,123,__LINE__, 0x3fd49ee7, 0xc4d58b81, 0x3fe66666, 0x66666673},	/* 0.322199=f(0.7)*/
{37, 0,123,__LINE__, 0x3fd42e70, 0x9913f8ec, 0x3fe6b851, 0xeb851ec5},	/* 0.315334=f(0.71)*/
{36, 0,123,__LINE__, 0x3fd3bf8f, 0x329151e4, 0x3fe70a3d, 0x70a3d717},	/* 0.308567=f(0.72)*/
{37, 0,123,__LINE__, 0x3fd35243, 0xc760713a, 0x3fe75c28, 0xf5c28f69},	/* 0.301896=f(0.73)*/
{38, 0,123,__LINE__, 0x3fd2e68d, 0xe28b476b, 0x3fe7ae14, 0x7ae147bb},	/* 0.295322=f(0.74)*/
{36, 0,123,__LINE__, 0x3fd27c6d, 0x1292db9c, 0x3fe80000, 0x0000000d},	/* 0.288844=f(0.75)*/
{35, 0,123,__LINE__, 0x3fd213e0, 0xbe77540a, 0x3fe851eb, 0x851eb85f},	/* 0.282463=f(0.76)*/
{34, 0,123,__LINE__, 0x3fd1ace8, 0x2664d6dd, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.276178=f(0.77)*/
{37, 0,123,__LINE__, 0x3fd14782, 0x6465bc4c, 0x3fe8f5c2, 0x8f5c2903},	/* 0.26999=f(0.78)*/
{37, 0,123,__LINE__, 0x3fd0e3ae, 0x466954b8, 0x3fe947ae, 0x147ae155},	/* 0.263897=f(0.79)*/
{36, 0,123,__LINE__, 0x3fd0816a, 0xea5e2330, 0x3fe99999, 0x999999a7},	/* 0.257899=f(0.8)*/
{36, 0,123,__LINE__, 0x3fd020b6, 0xd4fa5060, 0x3fe9eb85, 0x1eb851f9},	/* 0.251997=f(0.81)*/
{33, 0,123,__LINE__, 0x3fcf8321, 0x1e307466, 0x3fea3d70, 0xa3d70a4b},	/* 0.246189=f(0.82)*/
{33, 0,123,__LINE__, 0x3fcec7ec, 0xfe644878, 0x3fea8f5c, 0x28f5c29d},	/* 0.240476=f(0.83)*/
{33, 0,123,__LINE__, 0x3fce0fcd, 0xd45dbe1e, 0x3feae147, 0xae147aef},	/* 0.234857=f(0.84)*/
{34, 0,123,__LINE__, 0x3fcd5abf, 0xa4459cd7, 0x3feb3333, 0x33333341},	/* 0.229332=f(0.85)*/
{34, 0,123,__LINE__, 0x3fcca8bf, 0x005a0653, 0x3feb851e, 0xb851eb93},	/* 0.2239=f(0.86)*/
{36, 0,123,__LINE__, 0x3fcbf9c7, 0x6d14b0c7, 0x3febd70a, 0x3d70a3e5},	/* 0.21856=f(0.87)*/
{34, 0,123,__LINE__, 0x3fcb4dd4, 0x78285c8a, 0x3fec28f5, 0xc28f5c37},	/* 0.213313=f(0.88)*/
{34, 0,123,__LINE__, 0x3fcaa4e1, 0x747d9f79, 0x3fec7ae1, 0x47ae1489},	/* 0.208157=f(0.89)*/
{33, 0,123,__LINE__, 0x3fc9fee9, 0x7bee3674, 0x3feccccc, 0xccccccdb},	/* 0.203092=f(0.9)*/
{33, 0,123,__LINE__, 0x3fc95be7, 0x31eab893, 0x3fed1eb8, 0x51eb852d},	/* 0.198117=f(0.91)*/
{34, 0,123,__LINE__, 0x3fc8bbd5, 0xc2c7e0ca, 0x3fed70a3, 0xd70a3d7f},	/* 0.193232=f(0.92)*/
{35, 0,123,__LINE__, 0x3fc81eaf, 0x677a22b7, 0x3fedc28f, 0x5c28f5d1},	/* 0.188436=f(0.93)*/
{35, 0,123,__LINE__, 0x3fc6ed0c, 0xd8fa6a43, 0x3fee6666, 0x66666675},	/* 0.179109=f(0.95)*/
{37, 0,123,__LINE__, 0x3fc65884, 0xa558d991, 0x3feeb851, 0xeb851ec7},	/* 0.174576=f(0.96)*/
{34, 0,123,__LINE__, 0x3fc5c6cf, 0x4fe56da7, 0x3fef0a3d, 0x70a3d719},	/* 0.17013=f(0.97)*/
{34, 0,123,__LINE__, 0x3fc537e6, 0xdb91cc04, 0x3fef5c28, 0xf5c28f6b},	/* 0.165768=f(0.98)*/
{36, 0,123,__LINE__, 0x3fc4abc4, 0x76fcac47, 0x3fefae14, 0x7ae147bd},	/* 0.161492=f(0.99)*/
{34, 0,123,__LINE__, 0x3fc42261, 0x63000000, 0x3ff00000, 0x00000007},	/* 0.157299=f(1)*/
{37, 0,123,__LINE__, 0x3fc39bb6, 0xbb03f4a0, 0x3ff028f5, 0xc28f5c30},	/* 0.15319=f(1.01)*/
{36, 0,123,__LINE__, 0x3fc317bd, 0x76c822c8, 0x3ff051eb, 0x851eb859},	/* 0.149162=f(1.02)*/
{35, 0,123,__LINE__, 0x3fc2966e, 0x6c2aeaf4, 0x3ff07ae1, 0x47ae1482},	/* 0.145216=f(1.03)*/
{36, 0,123,__LINE__, 0x3fc217c2, 0x50ee9551, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.14135=f(1.04)*/
{38, 0,123,__LINE__, 0x3fc19bb1, 0xbc7bcd83, 0x3ff0cccc, 0xccccccd4},	/* 0.137564=f(1.05)*/
{36, 0,123,__LINE__, 0x3fc12235, 0x29a115eb, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.133856=f(1.06)*/
{38, 0,123,__LINE__, 0x3fc0ab44, 0x9c5ffa40, 0x3ff11eb8, 0x51eb8526},	/* 0.130227=f(1.07)*/
{35, 0,123,__LINE__, 0x3fc036d9, 0x15554493, 0x3ff147ae, 0x147ae14f},	/* 0.126674=f(1.08)*/
{34, 0,123,__LINE__, 0x3fbf89d4, 0xcbe046b4, 0x3ff170a3, 0xd70a3d78},	/* 0.123197=f(1.09)*/
{36, 0,123,__LINE__, 0x3fbeaae1, 0x4f8e50ae, 0x3ff19999, 0x999999a1},	/* 0.119795=f(1.1)*/
{35, 0,123,__LINE__, 0x3fbdd0c7, 0xc0b32f74, 0x3ff1c28f, 0x5c28f5ca},	/* 0.116467=f(1.11)*/
{37, 0,123,__LINE__, 0x3fbcfb78, 0x056a2dd8, 0x3ff1eb85, 0x1eb851f3},	/* 0.113212=f(1.12)*/
{33, 0,123,__LINE__, 0x3fbc2ae1, 0xe22bd5a5, 0x3ff2147a, 0xe147ae1c},	/* 0.110029=f(1.13)*/
{34, 0,123,__LINE__, 0x3fbb5ef4, 0xfd02f541, 0x3ff23d70, 0xa3d70a45},	/* 0.106918=f(1.14)*/
{40, 0,123,__LINE__, 0x3fba97a0, 0xe0b59f49, 0x3ff26666, 0x6666666e},	/* 0.103876=f(1.15)*/
{43, 0,123,__LINE__, 0x3fb9d4d4, 0xffe19bef, 0x3ff28f5c, 0x28f5c297},	/* 0.100904=f(1.16)*/
{37, 0,123,__LINE__, 0x3fb91680, 0xb80bca9d, 0x3ff2b851, 0xeb851ec0},	/* 0.0979996=f(1.17)*/
{36, 0,123,__LINE__, 0x3fb85c93, 0x54a1f960, 0x3ff2e147, 0xae147ae9},	/* 0.0951626=f(1.18)*/
{37, 0,123,__LINE__, 0x3fb7a6fb, 0x85bdcf8c, 0x3ff30a3d, 0x70a3d712},	/* 0.0923917=f(1.19)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc01921fb, 0x54442d18},	/* 2=f(-6.28319)*/
{47, 0,123,__LINE__, 0x3fffffff, 0xfffe2c40, 0xc012d97c, 0x7f3321d2},	/* 2=f(-4.71239)*/
{36, 0,123,__LINE__, 0x3ffffff6, 0xb1543efb, 0xc00921fb, 0x54442d18},	/* 1.99999=f(-3.14159)*/
{37, 0,123,__LINE__, 0x3fff9430, 0x5b3721c1, 0xbff921fb, 0x54442d18},	/* 1.97368=f(-1.5708)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x00000000, 0x00000000},	/* 1=f(0)*/
{64, 0,123,__LINE__, 0x3f9af3e9, 0x40000000, 0x3ff921fb, 0x54442d18},	/* 0.0263211=f(1.5708)*/
{33, 0,123,__LINE__, 0x3ee29d57, 0x80000000, 0x400921fb, 0x54442d18},	/* 8.87614e-06=f(3.14159)*/
{11, 0,123,__LINE__, 0x3dbd3c03, 0x60000000, 0x4012d97c, 0x7f3321d2},	/* 2.65886e-11=f(4.71239)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc03e0000, 0x00000000},	/* 2=f(-30)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc03c4ccc, 0xcccccccd},	/* 2=f(-28.3)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc03a9999, 0x9999999a},	/* 2=f(-26.6)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc038e666, 0x66666667},	/* 2=f(-24.9)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc0373333, 0x33333334},	/* 2=f(-23.2)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc0358000, 0x00000001},	/* 2=f(-21.5)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc033cccc, 0xccccccce},	/* 2=f(-19.8)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc0321999, 0x9999999b},	/* 2=f(-18.1)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc0306666, 0x66666668},	/* 2=f(-16.4)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc02d6666, 0x6666666a},	/* 2=f(-14.7)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc02a0000, 0x00000004},	/* 2=f(-13)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc0269999, 0x9999999e},	/* 2=f(-11.3)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc0233333, 0x33333338},	/* 2=f(-9.6)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc01f9999, 0x999999a3},	/* 2=f(-7.9)*/
{64, 0,123,__LINE__, 0x40000000, 0x00000000, 0xc018cccc, 0xccccccd6},	/* 2=f(-6.2)*/
{44, 0,123,__LINE__, 0x3fffffff, 0xfff27d18, 0xc0120000, 0x00000009},	/* 2=f(-4.5)*/
{36, 0,123,__LINE__, 0x3fffffb1, 0x57cafccb, 0xc0066666, 0x66666678},	/* 1.99992=f(-2.8)*/
{36, 0,123,__LINE__, 0x3ffe1551, 0xeb071af5, 0xbff19999, 0x999999bd},	/* 1.88021=f(-1.1)*/
{35, 0,123,__LINE__, 0x3fd95a6b, 0xe6429a07, 0x3fe33333, 0x333332ec},	/* 0.396144=f(0.6)*/
{34, 0,123,__LINE__, 0x3f52bad4, 0xc0000000, 0x40026666, 0x66666654},	/* 0.00114318=f(2.3)*/
{33, 0,123,__LINE__, 0x3e508ddd, 0x20000000, 0x400fffff, 0xffffffee},	/* 1.54173e-08=f(4)*/
{11, 0,123,__LINE__, 0x3ccb429d, 0x40000000, 0x4016cccc, 0xccccccc4},	/* 7.56623e-16=f(5.7)*/
{11, 0,123,__LINE__, 0x3ac3515b, 0xa0000000, 0x401d9999, 0x99999991},	/* 1.24838e-25=f(7.4)*/
{11, 0,123,__LINE__, 0x3836c9c8, 0x40000000, 0x40223333, 0x3333332f},	/* 6.69685e-38=f(9.1)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x40259999, 0x99999995},	/* 0=f(10.8)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x4028ffff, 0xfffffffb},	/* 0=f(12.5)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x402c6666, 0x66666661},	/* 0=f(14.2)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x402fcccc, 0xccccccc7},	/* 0=f(15.9)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x40319999, 0x99999997},	/* 0=f(17.6)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x40334ccc, 0xccccccca},	/* 0=f(19.3)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x4034ffff, 0xfffffffd},	/* 0=f(21)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x4036b333, 0x33333330},	/* 0=f(22.7)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x40386666, 0x66666663},	/* 0=f(24.4)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x403a1999, 0x99999996},	/* 0=f(26.1)*/
{64, 0, 34,__LINE__, 0x00000000, 0x00000000, 0x403bcccc, 0xccccccc9},	/* 0=f(27.8)*/
{31, 0, 34,__LINE__, 0x3379b604, 0xad690000, 0x403d7fff, 0xfffffffc},	/* 1e-60=f(29.5)*/
0,};
void test_erfcf(m)   {run_vector_1(m,erfcf_vec,(char *)(erfcf),"erfcf","ff");   }
