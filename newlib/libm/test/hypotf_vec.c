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
 one_line_type hypotf_vec[] = {
{36, 0,123,__LINE__, 0x40085ed7, 0x60000000, 0xbff33333, 0x33333333, 0x40066666, 0x66666666},	/* 3.04631=f(-1.2, 2.8)*/
{35, 0,123,__LINE__, 0x400869a7, 0xe0000000, 0xbff30a3d, 0x70a3d70a, 0x40067ae1, 0x47ae147b},	/* 3.05159=f(-1.19, 2.81)*/
{35, 0,123,__LINE__, 0x40087495, 0xe0000000, 0xbff2e147, 0xae147ae1, 0x40068f5c, 0x28f5c290},	/* 3.05693=f(-1.18, 2.82)*/
{36, 0,123,__LINE__, 0x40087fa1, 0x40000000, 0xbff2b851, 0xeb851eb8, 0x4006a3d7, 0x0a3d70a4},	/* 3.06232=f(-1.17, 2.83)*/
{36, 0,123,__LINE__, 0x40088ac9, 0xe0000000, 0xbff28f5c, 0x28f5c28f, 0x4006b851, 0xeb851eb8},	/* 3.06777=f(-1.16, 2.84)*/
{38, 0,123,__LINE__, 0x4008960f, 0x80000000, 0xbff26666, 0x66666666, 0x4006cccc, 0xcccccccd},	/* 3.07327=f(-1.15, 2.85)*/
{39, 0,123,__LINE__, 0x4008a172, 0x20000000, 0xbff23d70, 0xa3d70a3d, 0x4006e147, 0xae147ae2},	/* 3.07883=f(-1.14, 2.86)*/
{35, 0,123,__LINE__, 0x4008acf1, 0x60000000, 0xbff2147a, 0xe147ae14, 0x4006f5c2, 0x8f5c28f6},	/* 3.08444=f(-1.13, 2.87)*/
{36, 0,123,__LINE__, 0x4008b88d, 0x60000000, 0xbff1eb85, 0x1eb851eb, 0x40070a3d, 0x70a3d70a},	/* 3.09011=f(-1.12, 2.88)*/
{36, 0,123,__LINE__, 0x4008c445, 0xa0000000, 0xbff1c28f, 0x5c28f5c2, 0x40071eb8, 0x51eb851f},	/* 3.09584=f(-1.11, 2.89)*/
{38, 0,123,__LINE__, 0x4008d01a, 0x40000000, 0xbff19999, 0x99999999, 0x40073333, 0x33333334},	/* 3.10161=f(-1.1, 2.9)*/
{38, 0,123,__LINE__, 0x4008dc0b, 0x00000000, 0xbff170a3, 0xd70a3d70, 0x400747ae, 0x147ae148},	/* 3.10744=f(-1.09, 2.91)*/
{36, 0,123,__LINE__, 0x4008e817, 0xa0000000, 0xbff147ae, 0x147ae147, 0x40075c28, 0xf5c28f5c},	/* 3.11333=f(-1.08, 2.92)*/
{38, 0,123,__LINE__, 0x4008f440, 0x00000000, 0xbff11eb8, 0x51eb851e, 0x400770a3, 0xd70a3d71},	/* 3.11926=f(-1.07, 2.93)*/
{35, 0,123,__LINE__, 0x40090084, 0x20000000, 0xbff0f5c2, 0x8f5c28f5, 0x4007851e, 0xb851eb86},	/* 3.12525=f(-1.06, 2.94)*/
{37, 0,123,__LINE__, 0x40090ce3, 0xc0000000, 0xbff0cccc, 0xcccccccc, 0x40079999, 0x9999999a},	/* 3.13129=f(-1.05, 2.95)*/
{36, 0,123,__LINE__, 0x4009195e, 0xa0000000, 0xbff0a3d7, 0x0a3d70a3, 0x4007ae14, 0x7ae147ae},	/* 3.13739=f(-1.04, 2.96)*/
{36, 0,123,__LINE__, 0x400925f4, 0xa0000000, 0xbff07ae1, 0x47ae147a, 0x4007c28f, 0x5c28f5c3},	/* 3.14353=f(-1.03, 2.97)*/
{36, 0,123,__LINE__, 0x400932a5, 0xc0000000, 0xbff051eb, 0x851eb851, 0x4007d70a, 0x3d70a3d8},	/* 3.14973=f(-1.02, 2.98)*/
{35, 0,123,__LINE__, 0x40093f71, 0xa0000000, 0xbff028f5, 0xc28f5c28, 0x4007eb85, 0x1eb851ec},	/* 3.15598=f(-1.01, 2.99)*/
{35, 0,123,__LINE__, 0x40094c58, 0x40000000, 0xbfefffff, 0xfffffffe, 0x40080000, 0x00000000},	/* 3.16228=f(-1, 3)*/
{38, 0,123,__LINE__, 0x40095959, 0x60000000, 0xbfefae14, 0x7ae147ac, 0x4008147a, 0xe147ae15},	/* 3.16863=f(-0.99, 3.01)*/
{37, 0,123,__LINE__, 0x40096674, 0xe0000000, 0xbfef5c28, 0xf5c28f5a, 0x400828f5, 0xc28f5c2a},	/* 3.17503=f(-0.98, 3.02)*/
{36, 0,123,__LINE__, 0x400973aa, 0x80000000, 0xbfef0a3d, 0x70a3d708, 0x40083d70, 0xa3d70a3e},	/* 3.18148=f(-0.97, 3.03)*/
{36, 0,123,__LINE__, 0x400980fa, 0x40000000, 0xbfeeb851, 0xeb851eb6, 0x400851eb, 0x851eb852},	/* 3.18798=f(-0.96, 3.04)*/
{34, 0,123,__LINE__, 0x40098e63, 0xe0000000, 0xbfee6666, 0x66666664, 0x40086666, 0x66666667},	/* 3.19453=f(-0.95, 3.05)*/
{36, 0,123,__LINE__, 0x40099be7, 0x40000000, 0xbfee147a, 0xe147ae12, 0x40087ae1, 0x47ae147c},	/* 3.20112=f(-0.94, 3.06)*/
{38, 0,123,__LINE__, 0x4009a984, 0x40000000, 0xbfedc28f, 0x5c28f5c0, 0x40088f5c, 0x28f5c290},	/* 3.20777=f(-0.93, 3.07)*/
{34, 0,123,__LINE__, 0x4009b73a, 0xa0000000, 0xbfed70a3, 0xd70a3d6e, 0x4008a3d7, 0x0a3d70a4},	/* 3.21447=f(-0.92, 3.08)*/
{35, 0,123,__LINE__, 0x4009c50a, 0x40000000, 0xbfed1eb8, 0x51eb851c, 0x4008b851, 0xeb851eb9},	/* 3.22121=f(-0.91, 3.09)*/
{37, 0,123,__LINE__, 0x4009d2f2, 0xe0000000, 0xbfeccccc, 0xccccccca, 0x4008cccc, 0xccccccce},	/* 3.228=f(-0.9, 3.1)*/
{34, 0,123,__LINE__, 0x4009e0f4, 0xa0000000, 0xbfec7ae1, 0x47ae1478, 0x4008e147, 0xae147ae2},	/* 3.23484=f(-0.89, 3.11)*/
{35, 0,123,__LINE__, 0x4009ef0f, 0x00000000, 0xbfec28f5, 0xc28f5c26, 0x4008f5c2, 0x8f5c28f6},	/* 3.24173=f(-0.88, 3.12)*/
{36, 0,123,__LINE__, 0x4009fd42, 0x20000000, 0xbfebd70a, 0x3d70a3d4, 0x40090a3d, 0x70a3d70b},	/* 3.24866=f(-0.87, 3.13)*/
{35, 0,123,__LINE__, 0x400a0b8d, 0xc0000000, 0xbfeb851e, 0xb851eb82, 0x40091eb8, 0x51eb8520},	/* 3.25564=f(-0.86, 3.14)*/
{34, 0,123,__LINE__, 0x400a19f1, 0x80000000, 0xbfeb3333, 0x33333330, 0x40093333, 0x33333334},	/* 3.26267=f(-0.85, 3.15)*/
{34, 0,123,__LINE__, 0x400a286d, 0x80000000, 0xbfeae147, 0xae147ade, 0x400947ae, 0x147ae148},	/* 3.26974=f(-0.84, 3.16)*/
{35, 0,123,__LINE__, 0x400a3701, 0x80000000, 0xbfea8f5c, 0x28f5c28c, 0x40095c28, 0xf5c28f5d},	/* 3.27686=f(-0.83, 3.17)*/
{35, 0,123,__LINE__, 0x400a45ad, 0x60000000, 0xbfea3d70, 0xa3d70a3a, 0x400970a3, 0xd70a3d72},	/* 3.28402=f(-0.82, 3.18)*/
{35, 0,123,__LINE__, 0x400a5470, 0xe0000000, 0xbfe9eb85, 0x1eb851e8, 0x4009851e, 0xb851eb86},	/* 3.29123=f(-0.81, 3.19)*/
{36, 0,123,__LINE__, 0x400a634b, 0xe0000000, 0xbfe99999, 0x99999996, 0x40099999, 0x9999999a},	/* 3.29848=f(-0.8, 3.2)*/
{35, 0,123,__LINE__, 0x400a723e, 0x40000000, 0xbfe947ae, 0x147ae144, 0x4009ae14, 0x7ae147af},	/* 3.30578=f(-0.79, 3.21)*/
{36, 0,123,__LINE__, 0x400a8147, 0xe0000000, 0xbfe8f5c2, 0x8f5c28f2, 0x4009c28f, 0x5c28f5c4},	/* 3.31313=f(-0.78, 3.22)*/
{37, 0,123,__LINE__, 0x400a9068, 0xa0000000, 0xbfe8a3d7, 0x0a3d70a0, 0x4009d70a, 0x3d70a3d8},	/* 3.32051=f(-0.77, 3.23)*/
{35, 0,123,__LINE__, 0x400a9fa0, 0x40000000, 0xbfe851eb, 0x851eb84e, 0x4009eb85, 0x1eb851ec},	/* 3.32794=f(-0.76, 3.24)*/
{35, 0,123,__LINE__, 0x400aaeee, 0xa0000000, 0xbfe7ffff, 0xfffffffc, 0x400a0000, 0x00000001},	/* 3.33542=f(-0.75, 3.25)*/
{35, 0,123,__LINE__, 0x400abe53, 0xa0000000, 0xbfe7ae14, 0x7ae147aa, 0x400a147a, 0xe147ae16},	/* 3.34293=f(-0.74, 3.26)*/
{36, 0,123,__LINE__, 0x400acdcf, 0x00000000, 0xbfe75c28, 0xf5c28f58, 0x400a28f5, 0xc28f5c2a},	/* 3.35049=f(-0.73, 3.27)*/
{35, 0,123,__LINE__, 0x400add60, 0xc0000000, 0xbfe70a3d, 0x70a3d706, 0x400a3d70, 0xa3d70a3e},	/* 3.35809=f(-0.72, 3.28)*/
{36, 0,123,__LINE__, 0x400aed08, 0xa0000000, 0xbfe6b851, 0xeb851eb4, 0x400a51eb, 0x851eb853},	/* 3.36574=f(-0.71, 3.29)*/
{37, 0,123,__LINE__, 0x400afcc6, 0x80000000, 0xbfe66666, 0x66666662, 0x400a6666, 0x66666668},	/* 3.37343=f(-0.7, 3.3)*/
{36, 0,123,__LINE__, 0x400b0c9a, 0x40000000, 0xbfe6147a, 0xe147ae10, 0x400a7ae1, 0x47ae147c},	/* 3.38115=f(-0.69, 3.31)*/
{35, 0,123,__LINE__, 0x400b1c83, 0xc0000000, 0xbfe5c28f, 0x5c28f5be, 0x400a8f5c, 0x28f5c290},	/* 3.38892=f(-0.68, 3.32)*/
{35, 0,123,__LINE__, 0x400b2c82, 0xc0000000, 0xbfe570a3, 0xd70a3d6c, 0x400aa3d7, 0x0a3d70a5},	/* 3.39673=f(-0.67, 3.33)*/
{35, 0,123,__LINE__, 0x400b3c97, 0x20000000, 0xbfe51eb8, 0x51eb851a, 0x400ab851, 0xeb851eba},	/* 3.40459=f(-0.66, 3.34)*/
{35, 0,123,__LINE__, 0x400b4cc0, 0xc0000000, 0xbfe4cccc, 0xccccccc8, 0x400acccc, 0xccccccce},	/* 3.41248=f(-0.65, 3.35)*/
{35, 0,123,__LINE__, 0x400b5cff, 0x80000000, 0xbfe47ae1, 0x47ae1476, 0x400ae147, 0xae147ae2},	/* 3.42041=f(-0.64, 3.36)*/
{35, 0,123,__LINE__, 0x400b6d53, 0x40000000, 0xbfe428f5, 0xc28f5c24, 0x400af5c2, 0x8f5c28f7},	/* 3.42838=f(-0.63, 3.37)*/
{36, 0,123,__LINE__, 0x400b7dbb, 0xe0000000, 0xbfe3d70a, 0x3d70a3d2, 0x400b0a3d, 0x70a3d70c},	/* 3.43639=f(-0.62, 3.38)*/
{35, 0,123,__LINE__, 0x400b8e39, 0x20000000, 0xbfe3851e, 0xb851eb80, 0x400b1eb8, 0x51eb8520},	/* 3.44444=f(-0.61, 3.39)*/
{38, 0,123,__LINE__, 0x400b9eca, 0xe0000000, 0xbfe33333, 0x3333332e, 0x400b3333, 0x33333334},	/* 3.45254=f(-0.6, 3.4)*/
{36, 0,123,__LINE__, 0x400baf71, 0x00000000, 0xbfe2e147, 0xae147adc, 0x400b47ae, 0x147ae149},	/* 3.46066=f(-0.59, 3.41)*/
{36, 0,123,__LINE__, 0x400bc02b, 0x60000000, 0xbfe28f5c, 0x28f5c28a, 0x400b5c28, 0xf5c28f5e},	/* 3.46883=f(-0.58, 3.42)*/
{35, 0,123,__LINE__, 0x400bd0f9, 0xe0000000, 0xbfe23d70, 0xa3d70a38, 0x400b70a3, 0xd70a3d72},	/* 3.47704=f(-0.57, 3.43)*/
{35, 0,123,__LINE__, 0x400be1dc, 0x40000000, 0xbfe1eb85, 0x1eb851e6, 0x400b851e, 0xb851eb86},	/* 3.48528=f(-0.56, 3.44)*/
{35, 0,123,__LINE__, 0x400bf2d2, 0x80000000, 0xbfe19999, 0x99999994, 0x400b9999, 0x9999999b},	/* 3.49357=f(-0.55, 3.45)*/
{35, 0,123,__LINE__, 0x400c03dc, 0x60000000, 0xbfe147ae, 0x147ae142, 0x400bae14, 0x7ae147b0},	/* 3.50189=f(-0.54, 3.46)*/
{36, 0,123,__LINE__, 0x400c14f9, 0xe0000000, 0xbfe0f5c2, 0x8f5c28f0, 0x400bc28f, 0x5c28f5c4},	/* 3.51024=f(-0.53, 3.47)*/
{35, 0,123,__LINE__, 0x400c262a, 0xc0000000, 0xbfe0a3d7, 0x0a3d709e, 0x400bd70a, 0x3d70a3d8},	/* 3.51864=f(-0.52, 3.48)*/
{40, 0,123,__LINE__, 0x400c376e, 0xc0000000, 0xbfe051eb, 0x851eb84c, 0x400beb85, 0x1eb851ed},	/* 3.52707=f(-0.51, 3.49)*/
{35, 0,123,__LINE__, 0x400c48c6, 0x00000000, 0xbfdfffff, 0xfffffff4, 0x400c0000, 0x00000002},	/* 3.53553=f(-0.5, 3.5)*/
{35, 0,123,__LINE__, 0x400c5a30, 0x40000000, 0xbfdf5c28, 0xf5c28f50, 0x400c147a, 0xe147ae16},	/* 3.54404=f(-0.49, 3.51)*/
{37, 0,123,__LINE__, 0x400c6bad, 0x40000000, 0xbfdeb851, 0xeb851eac, 0x400c28f5, 0xc28f5c2a},	/* 3.55258=f(-0.48, 3.52)*/
{36, 0,123,__LINE__, 0x400c7d3d, 0x00000000, 0xbfde147a, 0xe147ae08, 0x400c3d70, 0xa3d70a3f},	/* 3.56115=f(-0.47, 3.53)*/
{34, 0,123,__LINE__, 0x400c8edf, 0x40000000, 0xbfdd70a3, 0xd70a3d64, 0x400c51eb, 0x851eb854},	/* 3.56976=f(-0.46, 3.54)*/
{34, 0,123,__LINE__, 0x400ca094, 0x20000000, 0xbfdccccc, 0xccccccc0, 0x400c6666, 0x66666668},	/* 3.57841=f(-0.45, 3.55)*/
{35, 0,123,__LINE__, 0x400cb25b, 0x20000000, 0xbfdc28f5, 0xc28f5c1c, 0x400c7ae1, 0x47ae147c},	/* 3.58709=f(-0.44, 3.56)*/
{36, 0,123,__LINE__, 0x400cc434, 0x60000000, 0xbfdb851e, 0xb851eb78, 0x400c8f5c, 0x28f5c291},	/* 3.5958=f(-0.43, 3.57)*/
{34, 0,123,__LINE__, 0x400cd61f, 0xa0000000, 0xbfdae147, 0xae147ad4, 0x400ca3d7, 0x0a3d70a6},	/* 3.60455=f(-0.42, 3.58)*/
{36, 0,123,__LINE__, 0x400ce81c, 0xe0000000, 0xbfda3d70, 0xa3d70a30, 0x400cb851, 0xeb851eba},	/* 3.61334=f(-0.41, 3.59)*/
{36, 0,123,__LINE__, 0x400cfa2b, 0xe0000000, 0xbfd99999, 0x9999998c, 0x400ccccc, 0xccccccce},	/* 3.62215=f(-0.4, 3.6)*/
{35, 0,123,__LINE__, 0x400d0c4c, 0x80000000, 0xbfd8f5c2, 0x8f5c28e8, 0x400ce147, 0xae147ae3},	/* 3.63101=f(-0.39, 3.61)*/
{36, 0,123,__LINE__, 0x400d1e7e, 0xa0000000, 0xbfd851eb, 0x851eb844, 0x400cf5c2, 0x8f5c28f8},	/* 3.63989=f(-0.38, 3.62)*/
{37, 0,123,__LINE__, 0x400d30c2, 0x60000000, 0xbfd7ae14, 0x7ae147a0, 0x400d0a3d, 0x70a3d70c},	/* 3.64881=f(-0.37, 3.63)*/
{34, 0,123,__LINE__, 0x400d4317, 0x20000000, 0xbfd70a3d, 0x70a3d6fc, 0x400d1eb8, 0x51eb8520},	/* 3.65776=f(-0.36, 3.64)*/
{35, 0,123,__LINE__, 0x400d557d, 0x20000000, 0xbfd66666, 0x66666658, 0x400d3333, 0x33333335},	/* 3.66674=f(-0.35, 3.65)*/
{39, 0,123,__LINE__, 0x400d67f4, 0x20000000, 0xbfd5c28f, 0x5c28f5b4, 0x400d47ae, 0x147ae14a},	/* 3.67576=f(-0.34, 3.66)*/
{36, 0,123,__LINE__, 0x400d7a7c, 0x00000000, 0xbfd51eb8, 0x51eb8510, 0x400d5c28, 0xf5c28f5e},	/* 3.68481=f(-0.33, 3.67)*/
{35, 0,123,__LINE__, 0x400d8d14, 0xa0000000, 0xbfd47ae1, 0x47ae146c, 0x400d70a3, 0xd70a3d72},	/* 3.69389=f(-0.32, 3.68)*/
{34, 0,123,__LINE__, 0x400d9fbd, 0xe0000000, 0xbfd3d70a, 0x3d70a3c8, 0x400d851e, 0xb851eb87},	/* 3.703=f(-0.31, 3.69)*/
{35, 0,123,__LINE__, 0x400db277, 0xa0000000, 0xbfd33333, 0x33333324, 0x400d9999, 0x9999999c},	/* 3.71214=f(-0.3, 3.7)*/
{34, 0,123,__LINE__, 0x400dc541, 0xe0000000, 0xbfd28f5c, 0x28f5c280, 0x400dae14, 0x7ae147b0},	/* 3.72132=f(-0.29, 3.71)*/
{39, 0,123,__LINE__, 0x400dd81c, 0x60000000, 0xbfd1eb85, 0x1eb851dc, 0x400dc28f, 0x5c28f5c4},	/* 3.73052=f(-0.28, 3.72)*/
{35, 0,123,__LINE__, 0x400deb07, 0x00000000, 0xbfd147ae, 0x147ae138, 0x400dd70a, 0x3d70a3d9},	/* 3.73976=f(-0.27, 3.73)*/
{40, 0,123,__LINE__, 0x400dfe01, 0xa0000000, 0xbfd0a3d7, 0x0a3d7094, 0x400deb85, 0x1eb851ee},	/* 3.74903=f(-0.26, 3.74)*/
{36, 0,123,__LINE__, 0x400e110c, 0x40000000, 0xbfcfffff, 0xffffffe0, 0x400e0000, 0x00000002},	/* 3.75832=f(-0.25, 3.75)*/
{35, 0,123,__LINE__, 0x400e2426, 0xa0000000, 0xbfceb851, 0xeb851e98, 0x400e147a, 0xe147ae16},	/* 3.76765=f(-0.24, 3.76)*/
{36, 0,123,__LINE__, 0x400e3750, 0xc0000000, 0xbfcd70a3, 0xd70a3d50, 0x400e28f5, 0xc28f5c2b},	/* 3.77701=f(-0.23, 3.77)*/
{34, 0,123,__LINE__, 0x400e4a8a, 0x60000000, 0xbfcc28f5, 0xc28f5c08, 0x400e3d70, 0xa3d70a40},	/* 3.7864=f(-0.22, 3.78)*/
{34, 0,123,__LINE__, 0x400e5dd3, 0x80000000, 0xbfcae147, 0xae147ac0, 0x400e51eb, 0x851eb854},	/* 3.79581=f(-0.21, 3.79)*/
{34, 0,123,__LINE__, 0x400e712b, 0xe0000000, 0xbfc99999, 0x99999978, 0x400e6666, 0x66666668},	/* 3.80526=f(-0.2, 3.8)*/
{34, 0,123,__LINE__, 0x400e8493, 0x80000000, 0xbfc851eb, 0x851eb830, 0x400e7ae1, 0x47ae147d},	/* 3.81473=f(-0.19, 3.81)*/
{36, 0,123,__LINE__, 0x400e980a, 0x60000000, 0xbfc70a3d, 0x70a3d6e8, 0x400e8f5c, 0x28f5c292},	/* 3.82424=f(-0.18, 3.82)*/
{34, 0,123,__LINE__, 0x400eab90, 0x20000000, 0xbfc5c28f, 0x5c28f5a0, 0x400ea3d7, 0x0a3d70a6},	/* 3.83377=f(-0.17, 3.83)*/
{35, 0,123,__LINE__, 0x400ebf24, 0xc0000000, 0xbfc47ae1, 0x47ae1458, 0x400eb851, 0xeb851eba},	/* 3.84333=f(-0.16, 3.84)*/
{34, 0,123,__LINE__, 0x400ed2c8, 0x20000000, 0xbfc33333, 0x33333310, 0x400ecccc, 0xcccccccf},	/* 3.85292=f(-0.15, 3.85)*/
{35, 0,123,__LINE__, 0x400ee67a, 0x40000000, 0xbfc1eb85, 0x1eb851c8, 0x400ee147, 0xae147ae4},	/* 3.86254=f(-0.14, 3.86)*/
{36, 0,123,__LINE__, 0x400efa3b, 0x00000000, 0xbfc0a3d7, 0x0a3d7080, 0x400ef5c2, 0x8f5c28f8},	/* 3.87218=f(-0.13, 3.87)*/
{36, 0,123,__LINE__, 0x400f0e0a, 0x20000000, 0xbfbeb851, 0xeb851e71, 0x400f0a3d, 0x70a3d70c},	/* 3.88186=f(-0.12, 3.88)*/
{36, 0,123,__LINE__, 0x400f21e7, 0xa0000000, 0xbfbc28f5, 0xc28f5be2, 0x400f1eb8, 0x51eb8521},	/* 3.89156=f(-0.11, 3.89)*/
{37, 0,123,__LINE__, 0x400f35d3, 0x40000000, 0xbfb99999, 0x99999953, 0x400f3333, 0x33333335},	/* 3.90128=f(-0.1, 3.9)*/
{41, 0,123,__LINE__, 0x400f49cd, 0x20000000, 0xbfb70a3d, 0x70a3d6c4, 0x400f47ae, 0x147ae14a},	/* 3.91104=f(-0.09, 3.91)*/
{38, 0,123,__LINE__, 0x400f5dd5, 0x00000000, 0xbfb47ae1, 0x47ae1435, 0x400f5c28, 0xf5c28f5e},	/* 3.92082=f(-0.08, 3.92)*/
{34, 0,123,__LINE__, 0x400f71ea, 0xc0000000, 0xbfb1eb85, 0x1eb851a6, 0x400f70a3, 0xd70a3d73},	/* 3.93062=f(-0.07, 3.93)*/
{34, 0,123,__LINE__, 0x400f860e, 0x40000000, 0xbfaeb851, 0xeb851e2d, 0x400f851e, 0xb851eb87},	/* 3.94046=f(-0.06, 3.94)*/
{37, 0,123,__LINE__, 0x400f9a3f, 0x80000000, 0xbfa99999, 0x9999990e, 0x400f9999, 0x9999999c},	/* 3.95032=f(-0.05, 3.95)*/
{36, 0,123,__LINE__, 0x400fae7e, 0x60000000, 0xbfa47ae1, 0x47ae13ef, 0x400fae14, 0x7ae147b0},	/* 3.9602=f(-0.04, 3.96)*/
{35, 0,123,__LINE__, 0x400fc2ca, 0xc0000000, 0xbf9eb851, 0xeb851da0, 0x400fc28f, 0x5c28f5c5},	/* 3.97011=f(-0.03, 3.97)*/
{39, 0,123,__LINE__, 0x400fd724, 0xa0000000, 0xbf947ae1, 0x47ae1362, 0x400fd70a, 0x3d70a3d9},	/* 3.98005=f(-0.02, 3.98)*/
{34, 0,123,__LINE__, 0x400feb8b, 0xc0000000, 0xbf847ae1, 0x47ae1249, 0x400feb85, 0x1eb851ee},	/* 3.99001=f(-0.01, 3.99)*/
{64, 0,123,__LINE__, 0x40100000, 0x00000000, 0x3cd19000, 0x00000000, 0x40100000, 0x00000001},	/* 4=f(9.74915e-16, 4)*/
{38, 0,123,__LINE__, 0x40100a40, 0xc0000000, 0x3f847ae1, 0x47ae16ad, 0x40100a3d, 0x70a3d70b},	/* 4.01001=f(0.01, 4.01)*/
{35, 0,123,__LINE__, 0x40101487, 0xe0000000, 0x3f947ae1, 0x47ae1594, 0x4010147a, 0xe147ae16},	/* 4.02005=f(0.02, 4.02)*/
{36, 0,123,__LINE__, 0x40101ed5, 0xa0000000, 0x3f9eb851, 0xeb851fd2, 0x40101eb8, 0x51eb8520},	/* 4.03011=f(0.03, 4.03)*/
{38, 0,123,__LINE__, 0x40102929, 0xa0000000, 0x3fa47ae1, 0x47ae1508, 0x401028f5, 0xc28f5c2a},	/* 4.0402=f(0.04, 4.04)*/
{41, 0,123,__LINE__, 0x40103384, 0x20000000, 0x3fa99999, 0x99999a27, 0x40103333, 0x33333334},	/* 4.05031=f(0.05, 4.05)*/
{36, 0,123,__LINE__, 0x40103de4, 0xe0000000, 0x3faeb851, 0xeb851f46, 0x40103d70, 0xa3d70a3f},	/* 4.06044=f(0.06, 4.06)*/
{36, 0,123,__LINE__, 0x4010484b, 0xe0000000, 0x3fb1eb85, 0x1eb85232, 0x401047ae, 0x147ae149},	/* 4.0706=f(0.07, 4.07)*/
{35, 0,123,__LINE__, 0x401052b9, 0x20000000, 0x3fb47ae1, 0x47ae14c1, 0x401051eb, 0x851eb853},	/* 4.08078=f(0.08, 4.08)*/
{35, 0,123,__LINE__, 0x40105d2c, 0x80000000, 0x3fb70a3d, 0x70a3d750, 0x40105c28, 0xf5c28f5d},	/* 4.09099=f(0.09, 4.09)*/
{36, 0,123,__LINE__, 0x401067a6, 0x00000000, 0x3fb99999, 0x999999df, 0x40106666, 0x66666667},	/* 4.10122=f(0.1, 4.1)*/
{35, 0,123,__LINE__, 0x40107225, 0xa0000000, 0x3fbc28f5, 0xc28f5c6e, 0x401070a3, 0xd70a3d72},	/* 4.11147=f(0.11, 4.11)*/
{36, 0,123,__LINE__, 0x40107cab, 0x40000000, 0x3fbeb851, 0xeb851efd, 0x40107ae1, 0x47ae147c},	/* 4.12175=f(0.12, 4.12)*/
{35, 0,123,__LINE__, 0x40108737, 0x00000000, 0x3fc0a3d7, 0x0a3d70c6, 0x4010851e, 0xb851eb86},	/* 4.13205=f(0.13, 4.13)*/
{37, 0,123,__LINE__, 0x401091c8, 0x80000000, 0x3fc1eb85, 0x1eb8520e, 0x40108f5c, 0x28f5c290},	/* 4.14237=f(0.14, 4.14)*/
{36, 0,123,__LINE__, 0x40109c60, 0x00000000, 0x3fc33333, 0x33333356, 0x40109999, 0x9999999b},	/* 4.15271=f(0.15, 4.15)*/
{38, 0,123,__LINE__, 0x4010a6fd, 0x40000000, 0x3fc47ae1, 0x47ae149e, 0x4010a3d7, 0x0a3d70a5},	/* 4.16308=f(0.16, 4.16)*/
{37, 0,123,__LINE__, 0x4010b1a0, 0x80000000, 0x3fc5c28f, 0x5c28f5e6, 0x4010ae14, 0x7ae147af},	/* 4.17346=f(0.17, 4.17)*/
{37, 0,123,__LINE__, 0x4010bc49, 0x60000000, 0x3fc70a3d, 0x70a3d72e, 0x4010b851, 0xeb851eb9},	/* 4.18387=f(0.18, 4.18)*/
{35, 0,123,__LINE__, 0x4010c6f8, 0x20000000, 0x3fc851eb, 0x851eb876, 0x4010c28f, 0x5c28f5c4},	/* 4.19431=f(0.19, 4.19)*/
{36, 0,123,__LINE__, 0x4010d1ac, 0x60000000, 0x3fc99999, 0x999999be, 0x4010cccc, 0xccccccce},	/* 4.20476=f(0.2, 4.2)*/
{35, 0,123,__LINE__, 0x4010dc66, 0x60000000, 0x3fcae147, 0xae147b06, 0x4010d70a, 0x3d70a3d8},	/* 4.21523=f(0.21, 4.21)*/
{35, 0,123,__LINE__, 0x4010e725, 0xe0000000, 0x3fcc28f5, 0xc28f5c4e, 0x4010e147, 0xae147ae2},	/* 4.22573=f(0.22, 4.22)*/
{35, 0,123,__LINE__, 0x4010f1eb, 0x20000000, 0x3fcd70a3, 0xd70a3d96, 0x4010eb85, 0x1eb851ed},	/* 4.23625=f(0.23, 4.23)*/
{35, 0,123,__LINE__, 0x4010fcb5, 0xa0000000, 0x3fceb851, 0xeb851ede, 0x4010f5c2, 0x8f5c28f7},	/* 4.24679=f(0.24, 4.24)*/
{35, 0,123,__LINE__, 0x40110785, 0xe0000000, 0x3fd00000, 0x00000013, 0x40110000, 0x00000001},	/* 4.25735=f(0.25, 4.25)*/
{36, 0,123,__LINE__, 0x4011125b, 0x80000000, 0x3fd0a3d7, 0x0a3d70b7, 0x40110a3d, 0x70a3d70b},	/* 4.26793=f(0.26, 4.26)*/
{37, 0,123,__LINE__, 0x40111d36, 0x60000000, 0x3fd147ae, 0x147ae15b, 0x4011147a, 0xe147ae16},	/* 4.27853=f(0.27, 4.27)*/
{37, 0,123,__LINE__, 0x40112816, 0xc0000000, 0x3fd1eb85, 0x1eb851ff, 0x40111eb8, 0x51eb8520},	/* 4.28915=f(0.28, 4.28)*/
{41, 0,123,__LINE__, 0x401132fc, 0x60000000, 0x3fd28f5c, 0x28f5c2a3, 0x401128f5, 0xc28f5c2a},	/* 4.29979=f(0.29, 4.29)*/
{36, 0,123,__LINE__, 0x40113de7, 0x40000000, 0x3fd33333, 0x33333347, 0x40113333, 0x33333334},	/* 4.31045=f(0.3, 4.3)*/
{35, 0,123,__LINE__, 0x401148d7, 0x60000000, 0x3fd3d70a, 0x3d70a3eb, 0x40113d70, 0xa3d70a3f},	/* 4.32113=f(0.31, 4.31)*/
{35, 0,123,__LINE__, 0x401153cc, 0xc0000000, 0x3fd47ae1, 0x47ae148f, 0x401147ae, 0x147ae149},	/* 4.33184=f(0.32, 4.32)*/
{40, 0,123,__LINE__, 0x40115ec7, 0x40000000, 0x3fd51eb8, 0x51eb8533, 0x401151eb, 0x851eb853},	/* 4.34256=f(0.33, 4.33)*/
{35, 0,123,__LINE__, 0x401169c6, 0xe0000000, 0x3fd5c28f, 0x5c28f5d7, 0x40115c28, 0xf5c28f5d},	/* 4.3533=f(0.34, 4.34)*/
{39, 0,123,__LINE__, 0x401174cb, 0x80000000, 0x3fd66666, 0x6666667b, 0x40116666, 0x66666668},	/* 4.36406=f(0.35, 4.35)*/
{35, 0,123,__LINE__, 0x40117fd5, 0x60000000, 0x3fd70a3d, 0x70a3d71f, 0x401170a3, 0xd70a3d72},	/* 4.37484=f(0.36, 4.36)*/
{36, 0,123,__LINE__, 0x40118ae4, 0x00000000, 0x3fd7ae14, 0x7ae147c3, 0x40117ae1, 0x47ae147c},	/* 4.38564=f(0.37, 4.37)*/
{36, 0,123,__LINE__, 0x401195f7, 0xe0000000, 0x3fd851eb, 0x851eb867, 0x4011851e, 0xb851eb86},	/* 4.39645=f(0.38, 4.38)*/
{35, 0,123,__LINE__, 0x4011a110, 0x80000000, 0x3fd8f5c2, 0x8f5c290b, 0x40118f5c, 0x28f5c291},	/* 4.40729=f(0.39, 4.39)*/
{35, 0,123,__LINE__, 0x4011ac2e, 0x20000000, 0x3fd99999, 0x999999af, 0x40119999, 0x9999999b},	/* 4.41814=f(0.4, 4.4)*/
{34, 0,123,__LINE__, 0x4011b750, 0x80000000, 0x3fda3d70, 0xa3d70a53, 0x4011a3d7, 0x0a3d70a5},	/* 4.42902=f(0.41, 4.41)*/
{36, 0,123,__LINE__, 0x4011c277, 0xc0000000, 0x3fdae147, 0xae147af7, 0x4011ae14, 0x7ae147af},	/* 4.43991=f(0.42, 4.42)*/
{37, 0,123,__LINE__, 0x4011cda3, 0xc0000000, 0x3fdb851e, 0xb851eb9b, 0x4011b851, 0xeb851eba},	/* 4.45082=f(0.43, 4.43)*/
{38, 0,123,__LINE__, 0x4011d8d4, 0xa0000000, 0x3fdc28f5, 0xc28f5c3f, 0x4011c28f, 0x5c28f5c4},	/* 4.46175=f(0.44, 4.44)*/
{40, 0,123,__LINE__, 0x4011e40a, 0x20000000, 0x3fdccccc, 0xcccccce3, 0x4011cccc, 0xccccccce},	/* 4.47269=f(0.45, 4.45)*/
{35, 0,123,__LINE__, 0x4011ef44, 0x60000000, 0x3fdd70a3, 0xd70a3d87, 0x4011d70a, 0x3d70a3d8},	/* 4.48366=f(0.46, 4.46)*/
{35, 0,123,__LINE__, 0x4011fa83, 0x20000000, 0x3fde147a, 0xe147ae2b, 0x4011e147, 0xae147ae3},	/* 4.49464=f(0.47, 4.47)*/
{36, 0,123,__LINE__, 0x401205c6, 0xc0000000, 0x3fdeb851, 0xeb851ecf, 0x4011eb85, 0x1eb851ed},	/* 4.50564=f(0.48, 4.48)*/
{38, 0,123,__LINE__, 0x4012110e, 0xc0000000, 0x3fdf5c28, 0xf5c28f73, 0x4011f5c2, 0x8f5c28f7},	/* 4.51666=f(0.49, 4.49)*/
{37, 0,123,__LINE__, 0x40121c5b, 0x80000000, 0x3fe00000, 0x0000000b, 0x40120000, 0x00000001},	/* 4.52769=f(0.5, 4.5)*/
{35, 0,123,__LINE__, 0x401227ac, 0xa0000000, 0x3fe051eb, 0x851eb85d, 0x40120a3d, 0x70a3d70c},	/* 4.53874=f(0.51, 4.51)*/
{38, 0,123,__LINE__, 0x40123302, 0x40000000, 0x3fe0a3d7, 0x0a3d70af, 0x4012147a, 0xe147ae16},	/* 4.54981=f(0.52, 4.52)*/
{35, 0,123,__LINE__, 0x40123e5c, 0x60000000, 0x3fe0f5c2, 0x8f5c2901, 0x40121eb8, 0x51eb8520},	/* 4.5609=f(0.53, 4.53)*/
{36, 0,123,__LINE__, 0x401249ba, 0xe0000000, 0x3fe147ae, 0x147ae153, 0x401228f5, 0xc28f5c2a},	/* 4.572=f(0.54, 4.54)*/
{36, 0,123,__LINE__, 0x4012551d, 0xc0000000, 0x3fe19999, 0x999999a5, 0x40123333, 0x33333335},	/* 4.58312=f(0.55, 4.55)*/
{37, 0,123,__LINE__, 0x40126085, 0x00000000, 0x3fe1eb85, 0x1eb851f7, 0x40123d70, 0xa3d70a3f},	/* 4.59426=f(0.56, 4.56)*/
{37, 0,123,__LINE__, 0x40126bf0, 0xa0000000, 0x3fe23d70, 0xa3d70a49, 0x401247ae, 0x147ae149},	/* 4.60541=f(0.57, 4.57)*/
{35, 0,123,__LINE__, 0x40127760, 0x60000000, 0x3fe28f5c, 0x28f5c29b, 0x401251eb, 0x851eb853},	/* 4.61658=f(0.58, 4.58)*/
{41, 0,123,__LINE__, 0x401282d4, 0xa0000000, 0x3fe2e147, 0xae147aed, 0x40125c28, 0xf5c28f5e},	/* 4.62776=f(0.59, 4.59)*/
{35, 0,123,__LINE__, 0x40128e4c, 0xe0000000, 0x3fe33333, 0x3333333f, 0x40126666, 0x66666668},	/* 4.63897=f(0.6, 4.6)*/
{35, 0,123,__LINE__, 0x401299c9, 0x80000000, 0x3fe3851e, 0xb851eb91, 0x401270a3, 0xd70a3d72},	/* 4.65018=f(0.61, 4.61)*/
{43, 0,123,__LINE__, 0x4012a54a, 0x40000000, 0x3fe3d70a, 0x3d70a3e3, 0x40127ae1, 0x47ae147c},	/* 4.66142=f(0.62, 4.62)*/
{37, 0,123,__LINE__, 0x4012b0cf, 0x20000000, 0x3fe428f5, 0xc28f5c35, 0x4012851e, 0xb851eb87},	/* 4.67267=f(0.63, 4.63)*/
{36, 0,123,__LINE__, 0x4012bc58, 0x20000000, 0x3fe47ae1, 0x47ae1487, 0x40128f5c, 0x28f5c291},	/* 4.68393=f(0.64, 4.64)*/
{35, 0,123,__LINE__, 0x4012c7e5, 0x40000000, 0x3fe4cccc, 0xccccccd9, 0x40129999, 0x9999999b},	/* 4.69521=f(0.65, 4.65)*/
{36, 0,123,__LINE__, 0x4012d376, 0x40000000, 0x3fe51eb8, 0x51eb852b, 0x4012a3d7, 0x0a3d70a5},	/* 4.70651=f(0.66, 4.66)*/
{38, 0,123,__LINE__, 0x4012df0b, 0x80000000, 0x3fe570a3, 0xd70a3d7d, 0x4012ae14, 0x7ae147b0},	/* 4.71782=f(0.67, 4.67)*/
{37, 0,123,__LINE__, 0x4012eaa4, 0xa0000000, 0x3fe5c28f, 0x5c28f5cf, 0x4012b851, 0xeb851eba},	/* 4.72914=f(0.68, 4.68)*/
{35, 0,123,__LINE__, 0x4012f641, 0xc0000000, 0x3fe6147a, 0xe147ae21, 0x4012c28f, 0x5c28f5c4},	/* 4.74049=f(0.69, 4.69)*/
{36, 0,123,__LINE__, 0x401301e2, 0xc0000000, 0x3fe66666, 0x66666673, 0x4012cccc, 0xccccccce},	/* 4.75184=f(0.7, 4.7)*/
{36, 0,123,__LINE__, 0x40130d87, 0xc0000000, 0x3fe6b851, 0xeb851ec5, 0x4012d70a, 0x3d70a3d9},	/* 4.76321=f(0.71, 4.71)*/
{35, 0,123,__LINE__, 0x40131930, 0x80000000, 0x3fe70a3d, 0x70a3d717, 0x4012e147, 0xae147ae3},	/* 4.7746=f(0.72, 4.72)*/
{37, 0,123,__LINE__, 0x401324dd, 0x40000000, 0x3fe75c28, 0xf5c28f69, 0x4012eb85, 0x1eb851ed},	/* 4.786=f(0.73, 4.73)*/
{37, 0,123,__LINE__, 0x4013308d, 0xc0000000, 0x3fe7ae14, 0x7ae147bb, 0x4012f5c2, 0x8f5c28f7},	/* 4.79742=f(0.74, 4.74)*/
{36, 0,123,__LINE__, 0x40133c42, 0x20000000, 0x3fe80000, 0x0000000d, 0x40130000, 0x00000002},	/* 4.80885=f(0.75, 4.75)*/
{35, 0,123,__LINE__, 0x401347fa, 0x40000000, 0x3fe851eb, 0x851eb85f, 0x40130a3d, 0x70a3d70c},	/* 4.82029=f(0.76, 4.76)*/
{37, 0,123,__LINE__, 0x401353b6, 0x00000000, 0x3fe8a3d7, 0x0a3d70b1, 0x4013147a, 0xe147ae16},	/* 4.83175=f(0.77, 4.77)*/
{36, 0,123,__LINE__, 0x40135f75, 0xa0000000, 0x3fe8f5c2, 0x8f5c2903, 0x40131eb8, 0x51eb8520},	/* 4.84322=f(0.78, 4.78)*/
{36, 0,123,__LINE__, 0x40136b38, 0xe0000000, 0x3fe947ae, 0x147ae155, 0x401328f5, 0xc28f5c2b},	/* 4.85471=f(0.79, 4.79)*/
{42, 0,123,__LINE__, 0x401376ff, 0xc0000000, 0x3fe99999, 0x999999a7, 0x40133333, 0x33333335},	/* 4.86621=f(0.8, 4.8)*/
{35, 0,123,__LINE__, 0x401382ca, 0x40000000, 0x3fe9eb85, 0x1eb851f9, 0x40133d70, 0xa3d70a3f},	/* 4.87772=f(0.81, 4.81)*/
{39, 0,123,__LINE__, 0x40138e98, 0x80000000, 0x3fea3d70, 0xa3d70a4b, 0x401347ae, 0x147ae149},	/* 4.88925=f(0.82, 4.82)*/
{35, 0,123,__LINE__, 0x40139a6a, 0x40000000, 0x3fea8f5c, 0x28f5c29d, 0x401351eb, 0x851eb854},	/* 4.9008=f(0.83, 4.83)*/
{37, 0,123,__LINE__, 0x4013a63f, 0xa0000000, 0x3feae147, 0xae147aef, 0x40135c28, 0xf5c28f5e},	/* 4.91235=f(0.84, 4.84)*/
{37, 0,123,__LINE__, 0x4013b218, 0x60000000, 0x3feb3333, 0x33333341, 0x40136666, 0x66666668},	/* 4.92392=f(0.85, 4.85)*/
{35, 0,123,__LINE__, 0x4013bdf4, 0xc0000000, 0x3feb851e, 0xb851eb93, 0x401370a3, 0xd70a3d72},	/* 4.9355=f(0.86, 4.86)*/
{36, 0,123,__LINE__, 0x4013c9d4, 0xa0000000, 0x3febd70a, 0x3d70a3e5, 0x40137ae1, 0x47ae147d},	/* 4.9471=f(0.87, 4.87)*/
{43, 0,123,__LINE__, 0x4013d5b8, 0x00000000, 0x3fec28f5, 0xc28f5c37, 0x4013851e, 0xb851eb87},	/* 4.95871=f(0.88, 4.88)*/
{34, 0,123,__LINE__, 0x4013e19e, 0xa0000000, 0x3fec7ae1, 0x47ae1489, 0x40138f5c, 0x28f5c291},	/* 4.97033=f(0.89, 4.89)*/
{37, 0,123,__LINE__, 0x4013ed88, 0xe0000000, 0x3feccccc, 0xccccccdb, 0x40139999, 0x9999999b},	/* 4.98197=f(0.9, 4.9)*/
{35, 0,123,__LINE__, 0x4013f976, 0x60000000, 0x3fed1eb8, 0x51eb852d, 0x4013a3d7, 0x0a3d70a6},	/* 4.99362=f(0.91, 4.91)*/
{35, 0,123,__LINE__, 0x40140567, 0x60000000, 0x3fed70a3, 0xd70a3d7f, 0x4013ae14, 0x7ae147b0},	/* 5.00528=f(0.92, 4.92)*/
{36, 0,123,__LINE__, 0x4014115b, 0xa0000000, 0x3fedc28f, 0x5c28f5d1, 0x4013b851, 0xeb851eba},	/* 5.01695=f(0.93, 4.93)*/
{36, 0,123,__LINE__, 0x40141d53, 0x40000000, 0x3fee147a, 0xe147ae23, 0x4013c28f, 0x5c28f5c4},	/* 5.02864=f(0.94, 4.94)*/
{36, 0,123,__LINE__, 0x4014294e, 0x20000000, 0x3fee6666, 0x66666675, 0x4013cccc, 0xcccccccf},	/* 5.04034=f(0.95, 4.95)*/
{36, 0,123,__LINE__, 0x4014354c, 0x60000000, 0x3feeb851, 0xeb851ec7, 0x4013d70a, 0x3d70a3d9},	/* 5.05205=f(0.96, 4.96)*/
{36, 0,123,__LINE__, 0x4014414d, 0xc0000000, 0x3fef0a3d, 0x70a3d719, 0x4013e147, 0xae147ae3},	/* 5.06377=f(0.97, 4.97)*/
{35, 0,123,__LINE__, 0x40144d52, 0x80000000, 0x3fef5c28, 0xf5c28f6b, 0x4013eb85, 0x1eb851ed},	/* 5.07551=f(0.98, 4.98)*/
{37, 0,123,__LINE__, 0x4014595a, 0x40000000, 0x3fefae14, 0x7ae147bd, 0x4013f5c2, 0x8f5c28f8},	/* 5.08726=f(0.99, 4.99)*/
{36, 0,123,__LINE__, 0x40146565, 0x60000000, 0x3ff00000, 0x00000007, 0x40140000, 0x00000002},	/* 5.09902=f(1, 5)*/
{38, 0,123,__LINE__, 0x40147173, 0xa0000000, 0x3ff028f5, 0xc28f5c30, 0x40140a3d, 0x70a3d70c},	/* 5.11079=f(1.01, 5.01)*/
{37, 0,123,__LINE__, 0x40147d85, 0x00000000, 0x3ff051eb, 0x851eb859, 0x4014147a, 0xe147ae16},	/* 5.12258=f(1.02, 5.02)*/
{36, 0,123,__LINE__, 0x40148999, 0x80000000, 0x3ff07ae1, 0x47ae1482, 0x40141eb8, 0x51eb8520},	/* 5.13437=f(1.03, 5.03)*/
{36, 0,123,__LINE__, 0x401495b1, 0x00000000, 0x3ff0a3d7, 0x0a3d70ab, 0x401428f5, 0xc28f5c2b},	/* 5.14618=f(1.04, 5.04)*/
{38, 0,123,__LINE__, 0x4014a1cb, 0xc0000000, 0x3ff0cccc, 0xccccccd4, 0x40143333, 0x33333335},	/* 5.158=f(1.05, 5.05)*/
{35, 0,123,__LINE__, 0x4014ade9, 0x60000000, 0x3ff0f5c2, 0x8f5c28fd, 0x40143d70, 0xa3d70a3f},	/* 5.16984=f(1.06, 5.06)*/
{35, 0,123,__LINE__, 0x4014ba0a, 0x20000000, 0x3ff11eb8, 0x51eb8526, 0x401447ae, 0x147ae14a},	/* 5.18168=f(1.07, 5.07)*/
{35, 0,123,__LINE__, 0x4014c62d, 0xe0000000, 0x3ff147ae, 0x147ae14f, 0x401451eb, 0x851eb854},	/* 5.19353=f(1.08, 5.08)*/
{37, 0,123,__LINE__, 0x4014d254, 0xc0000000, 0x3ff170a3, 0xd70a3d78, 0x40145c28, 0xf5c28f5e},	/* 5.2054=f(1.09, 5.09)*/
{35, 0,123,__LINE__, 0x4014de7e, 0x60000000, 0x3ff19999, 0x999999a1, 0x40146666, 0x66666668},	/* 5.21728=f(1.1, 5.1)*/
{35, 0,123,__LINE__, 0x4014eaab, 0x20000000, 0x3ff1c28f, 0x5c28f5ca, 0x401470a3, 0xd70a3d72},	/* 5.22917=f(1.11, 5.11)*/
{35, 0,123,__LINE__, 0x4014f6da, 0xa0000000, 0x3ff1eb85, 0x1eb851f3, 0x40147ae1, 0x47ae147d},	/* 5.24107=f(1.12, 5.12)*/
{37, 0,123,__LINE__, 0x4015030d, 0x40000000, 0x3ff2147a, 0xe147ae1c, 0x4014851e, 0xb851eb87},	/* 5.25298=f(1.13, 5.13)*/
{36, 0,123,__LINE__, 0x40150f42, 0xa0000000, 0x3ff23d70, 0xa3d70a45, 0x40148f5c, 0x28f5c291},	/* 5.2649=f(1.14, 5.14)*/
{38, 0,123,__LINE__, 0x40151b7b, 0x00000000, 0x3ff26666, 0x6666666e, 0x40149999, 0x9999999c},	/* 5.27684=f(1.15, 5.15)*/
{37, 0,123,__LINE__, 0x401527b6, 0x00000000, 0x3ff28f5c, 0x28f5c297, 0x4014a3d7, 0x0a3d70a6},	/* 5.28878=f(1.16, 5.16)*/
{37, 0,123,__LINE__, 0x401533f4, 0x20000000, 0x3ff2b851, 0xeb851ec0, 0x4014ae14, 0x7ae147b0},	/* 5.30074=f(1.17, 5.17)*/
{35, 0,123,__LINE__, 0x40154034, 0xe0000000, 0x3ff2e147, 0xae147ae9, 0x4014b851, 0xeb851eba},	/* 5.3127=f(1.18, 5.18)*/
{38, 0,123,__LINE__, 0x40154c78, 0x80000000, 0x3ff30a3d, 0x70a3d712, 0x4014c28f, 0x5c28f5c4},	/* 5.32468=f(1.19, 5.19)*/
{35, 0,123,__LINE__, 0x401abd9a, 0x60000000, 0xc01921fb, 0x54442d18, 0xc00243f6, 0xa8885a30},	/* 6.68516=f(-6.28319, -2.28319)*/
{40, 0,123,__LINE__, 0x40131050, 0x80000000, 0xc012d97c, 0x7f3321d2, 0xbfe6cbe3, 0xf9990e90},	/* 4.76593=f(-4.71239, -0.712389)*/
{35, 0,123,__LINE__, 0x400a0dd6, 0xc0000000, 0xc00921fb, 0x54442d18, 0x3feb7812, 0xaeef4ba0},	/* 3.25676=f(-3.14159, 0.858407)*/
{36, 0,123,__LINE__, 0x40072481, 0x00000000, 0xbff921fb, 0x54442d18, 0x40036f02, 0x55dde974},	/* 2.89282=f(-1.5708, 2.4292)*/
{64, 0,123,__LINE__, 0x40100000, 0x00000000, 0x00000000, 0x00000000, 0x40100000, 0x00000000},	/* 4=f(0, 4)*/
{35, 0,123,__LINE__, 0x401726ee, 0xc0000000, 0x3ff921fb, 0x54442d18, 0x4016487e, 0xd5110b46},	/* 5.78802=f(1.5708, 5.5708)*/
{35, 0,123,__LINE__, 0x401f354c, 0x00000000, 0x400921fb, 0x54442d18, 0x401c90fd, 0xaa22168c},	/* 7.80205=f(3.14159, 7.14159)*/
{38, 0,123,__LINE__, 0x4023cf72, 0x00000000, 0x4012d97c, 0x7f3321d2, 0x40216cbe, 0x3f9990e9},	/* 9.90517=f(4.71239, 8.71239)*/
{64, 0,123,__LINE__, 0x4043d974, 0x80000000, 0xc03e0000, 0x00000000, 0xc03a0000, 0x00000000},	/* 39.6989=f(-30, -26)*/
{36, 0,123,__LINE__, 0x4042a68d, 0xe0000000, 0xc03c4ccc, 0xcccccccd, 0xc0384ccc, 0xcccccccd},	/* 37.3012=f(-28.3, -24.3)*/
{35, 0,123,__LINE__, 0x404173c4, 0xc0000000, 0xc03a9999, 0x9999999a, 0xc0369999, 0x9999999a},	/* 34.9044=f(-26.6, -22.6)*/
{37, 0,123,__LINE__, 0x4040411f, 0x40000000, 0xc038e666, 0x66666667, 0xc034e666, 0x66666667},	/* 32.5088=f(-24.9, -20.9)*/
{35, 0,123,__LINE__, 0x403e1d4c, 0x80000000, 0xc0373333, 0x33333334, 0xc0333333, 0x33333334},	/* 30.1144=f(-23.2, -19.2)*/
{36, 0,123,__LINE__, 0x403bb8ca, 0x00000000, 0xc0358000, 0x00000001, 0xc0318000, 0x00000001},	/* 27.7218=f(-21.5, -17.5)*/
{39, 0,123,__LINE__, 0x403954d6, 0xe0000000, 0xc033cccc, 0xccccccce, 0xc02f9999, 0x9999999c},	/* 25.3314=f(-19.8, -15.8)*/
{36, 0,123,__LINE__, 0x4036f19f, 0xe0000000, 0xc0321999, 0x9999999b, 0xc02c3333, 0x33333336},	/* 22.9438=f(-18.1, -14.1)*/
{45, 0,123,__LINE__, 0x40348f66, 0x60000000, 0xc0306666, 0x66666668, 0xc028cccc, 0xccccccd0},	/* 20.5602=f(-16.4, -12.4)*/
{35, 0,123,__LINE__, 0x40322e8e, 0x40000000, 0xc02d6666, 0x6666666a, 0xc0256666, 0x6666666a},	/* 18.1819=f(-14.7, -10.7)*/
{35, 0,123,__LINE__, 0x402f9f6e, 0x40000000, 0xc02a0000, 0x00000004, 0xc0220000, 0x00000004},	/* 15.8114=f(-13, -9)*/
{39, 0,123,__LINE__, 0x402ae7e0, 0x00000000, 0xc0269999, 0x9999999e, 0xc01d3333, 0x3333333c},	/* 13.4529=f(-11.3, -7.3)*/
{37, 0,123,__LINE__, 0x40263a58, 0x60000000, 0xc0233333, 0x33333338, 0xc0166666, 0x66666670},	/* 11.114=f(-9.6, -5.6)*/
{39, 0,123,__LINE__, 0x40219ed5, 0x60000000, 0xc01f9999, 0x999999a3, 0xc00f3333, 0x33333346},	/* 8.81022=f(-7.9, -3.9)*/
{36, 0,123,__LINE__, 0x401a50a4, 0xc0000000, 0xc018cccc, 0xccccccd6, 0xc0019999, 0x999999ac},	/* 6.57875=f(-6.2, -2.2)*/
{37, 0,123,__LINE__, 0x40121c5b, 0x80000000, 0xc0120000, 0x00000009, 0xbfe00000, 0x00000048},	/* 4.52769=f(-4.5, -0.5)*/
{36, 0,123,__LINE__, 0x40085ed7, 0x60000000, 0xc0066666, 0x66666678, 0x3ff33333, 0x33333310},	/* 3.04631=f(-2.8, 1.2)*/
{38, 0,123,__LINE__, 0x4008d01a, 0x40000000, 0xbff19999, 0x999999bd, 0x40073333, 0x33333322},	/* 3.10161=f(-1.1, 2.9)*/
{35, 0,123,__LINE__, 0x40128e4c, 0xe0000000, 0x3fe33333, 0x333332ec, 0x40126666, 0x6666665e},	/* 4.63897=f(0.6, 4.6)*/
{35, 0,123,__LINE__, 0x401ad3ac, 0xa0000000, 0x40026666, 0x66666654, 0x40193333, 0x3333332a},	/* 6.70671=f(2.3, 6.3)*/
{64, 0,123,__LINE__, 0x4021e377, 0xa0000000, 0x400fffff, 0xffffffee, 0x401fffff, 0xfffffff7},	/* 8.94427=f(4, 8)*/
{39, 0,123,__LINE__, 0x40268065, 0xe0000000, 0x4016cccc, 0xccccccc4, 0x40236666, 0x66666662},	/* 11.2508=f(5.7, 9.7)*/
{35, 0,123,__LINE__, 0x402b2eae, 0x40000000, 0x401d9999, 0x99999991, 0x4026cccc, 0xccccccc8},	/* 13.5912=f(7.4, 11.4)*/
{36, 0,123,__LINE__, 0x402fe6ae, 0x60000000, 0x40223333, 0x3333332f, 0x402a3333, 0x3333332f},	/* 15.9505=f(9.1, 13.1)*/
{38, 0,123,__LINE__, 0x40325252, 0x80000000, 0x40259999, 0x99999995, 0x402d9999, 0x99999995},	/* 18.3216=f(10.8, 14.8)*/
{36, 0,123,__LINE__, 0x4034b343, 0x00000000, 0x4028ffff, 0xfffffffb, 0x40307fff, 0xfffffffe},	/* 20.7002=f(12.5, 16.5)*/
{37, 0,123,__LINE__, 0x4037158d, 0xc0000000, 0x402c6666, 0x66666661, 0x40323333, 0x33333330},	/* 23.0842=f(14.2, 18.2)*/
{37, 0,123,__LINE__, 0x403978d1, 0x60000000, 0x402fcccc, 0xccccccc7, 0x4033e666, 0x66666664},	/* 25.4719=f(15.9, 19.9)*/
{35, 0,123,__LINE__, 0x403bdcce, 0x20000000, 0x40319999, 0x99999997, 0x40359999, 0x99999997},	/* 27.8625=f(17.6, 21.6)*/
{34, 0,123,__LINE__, 0x403e4157, 0xe0000000, 0x40334ccc, 0xccccccca, 0x40374ccc, 0xccccccca},	/* 30.2552=f(19.3, 23.3)*/
{38, 0,123,__LINE__, 0x40405327, 0xe0000000, 0x4034ffff, 0xfffffffd, 0x4038ffff, 0xfffffffd},	/* 32.6497=f(21, 25)*/
{36, 0,123,__LINE__, 0x404185cf, 0xa0000000, 0x4036b333, 0x33333330, 0x403ab333, 0x33333330},	/* 35.0454=f(22.7, 26.7)*/
{37, 0,123,__LINE__, 0x4042b89a, 0xc0000000, 0x40386666, 0x66666663, 0x403c6666, 0x66666663},	/* 37.4422=f(24.4, 28.4)*/
{41, 0,123,__LINE__, 0x4043eb82, 0xe0000000, 0x403a1999, 0x99999996, 0x403e1999, 0x99999996},	/* 39.8399=f(26.1, 30.1)*/
{37, 0,123,__LINE__, 0x40451e82, 0xe0000000, 0x403bcccc, 0xccccccc9, 0x403fcccc, 0xccccccc9},	/* 42.2384=f(27.8, 31.8)*/
{37, 0,123,__LINE__, 0x40465197, 0x40000000, 0x403d7fff, 0xfffffffc, 0x4040bfff, 0xfffffffe},	/* 44.6374=f(29.5, 33.5)*/
{0}
};
void test_hypotf(m)   {run_vector_1(m,hypotf_vec,(char *)(hypotf),"hypotf","fff");   }
