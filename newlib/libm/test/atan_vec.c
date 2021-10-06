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
 one_line_type atan_vec[] = {
{64, 0,123,__LINE__, 0xbfec08aa, 0xe496efa6, 0xbff33333, 0x33333333},	/* -0.876058=f(-1.2)*/
{64, 0,123,__LINE__, 0xbfebe6ed, 0x93e2de0a, 0xbff30a3d, 0x70a3d70a},	/* -0.871939=f(-1.19)*/
{64, 0,123,__LINE__, 0xbfebc4da, 0xc279b378, 0xbff2e147, 0xae147ae1},	/* -0.86778=f(-1.18)*/
{64, 0,123,__LINE__, 0xbfeba271, 0x78241551, 0xbff2b851, 0xeb851eb8},	/* -0.863579=f(-1.17)*/
{64, 0,123,__LINE__, 0xbfeb7fb0, 0xbad89c3a, 0xbff28f5c, 0x28f5c28f},	/* -0.859337=f(-1.16)*/
{64, 0,123,__LINE__, 0xbfeb5c97, 0x8ec9f805, 0xbff26666, 0x66666666},	/* -0.855053=f(-1.15)*/
{64, 0,123,__LINE__, 0xbfeb3924, 0xf6762ef7, 0xbff23d70, 0xa3d70a3d},	/* -0.850726=f(-1.14)*/
{63, 0,123,__LINE__, 0xbfeb1557, 0xf2b704a8, 0xbff2147a, 0xe147ae14},	/* -0.846355=f(-1.13)*/
{64, 0,123,__LINE__, 0xbfeaf12f, 0x82d394f5, 0xbff1eb85, 0x1eb851eb},	/* -0.841942=f(-1.12)*/
{63, 0,123,__LINE__, 0xbfeaccaa, 0xa4932fed, 0xbff1c28f, 0x5c28f5c2},	/* -0.837484=f(-1.11)*/
{64, 0,123,__LINE__, 0xbfeaa7c8, 0x545183cc, 0xbff19999, 0x99999999},	/* -0.832981=f(-1.1)*/
{64, 0,123,__LINE__, 0xbfea8287, 0x8d142296, 0xbff170a3, 0xd70a3d70},	/* -0.828434=f(-1.09)*/
{63, 0,123,__LINE__, 0xbfea5ce7, 0x48a170fe, 0xbff147ae, 0x147ae147},	/* -0.823841=f(-1.08)*/
{64, 0,123,__LINE__, 0xbfea36e6, 0x7f990cb5, 0xbff11eb8, 0x51eb851e},	/* -0.819202=f(-1.07)*/
{64, 0,123,__LINE__, 0xbfea1084, 0x298db87a, 0xbff0f5c2, 0x8f5c28f5},	/* -0.814516=f(-1.06)*/
{64, 0,123,__LINE__, 0xbfe9e9bf, 0x3d20dc70, 0xbff0cccc, 0xcccccccc},	/* -0.809784=f(-1.05)*/
{64, 0,123,__LINE__, 0xbfe9c296, 0xb01fa9a4, 0xbff0a3d7, 0x0a3d70a3},	/* -0.805003=f(-1.04)*/
{64, 0,123,__LINE__, 0xbfe99b09, 0x77a1efc6, 0xbff07ae1, 0x47ae147a},	/* -0.800175=f(-1.03)*/
{64, 0,123,__LINE__, 0xbfe97316, 0x882ab459, 0xbff051eb, 0x851eb851},	/* -0.795299=f(-1.02)*/
{63, 0,123,__LINE__, 0xbfe94abc, 0xd5ca9acf, 0xbff028f5, 0xc28f5c28},	/* -0.790373=f(-1.01)*/
{64, 0,123,__LINE__, 0xbfe921fb, 0x54442d17, 0xbfefffff, 0xfffffffe},	/* -0.785398=f(-1)*/
{64, 0,123,__LINE__, 0xbfe8f8d0, 0xf7321466, 0xbfefae14, 0x7ae147ac},	/* -0.780373=f(-0.99)*/
{64, 0,123,__LINE__, 0xbfe8cf3c, 0xb22f51e4, 0xbfef5c28, 0xf5c28f5a},	/* -0.775297=f(-0.98)*/
{64, 0,123,__LINE__, 0xbfe8a53d, 0x79018729, 0xbfef0a3d, 0x70a3d708},	/* -0.770171=f(-0.97)*/
{63, 0,123,__LINE__, 0xbfe87ad2, 0x3fc55e46, 0xbfeeb851, 0xeb851eb6},	/* -0.764993=f(-0.96)*/
{63, 0,123,__LINE__, 0xbfe84ff9, 0xfb1d212d, 0xbfee6666, 0x66666664},	/* -0.759763=f(-0.95)*/
{64, 0,123,__LINE__, 0xbfe824b3, 0xa0619018, 0xbfee147a, 0xe147ae12},	/* -0.75448=f(-0.94)*/
{64, 0,123,__LINE__, 0xbfe7f8fe, 0x25d50679, 0xbfedc28f, 0x5c28f5c0},	/* -0.749145=f(-0.93)*/
{64, 0,123,__LINE__, 0xbfe7ccd8, 0x82d8fdbc, 0xbfed70a3, 0xd70a3d6e},	/* -0.743756=f(-0.92)*/
{64, 0,123,__LINE__, 0xbfe7a041, 0xb025fce7, 0xbfed1eb8, 0x51eb851c},	/* -0.738313=f(-0.91)*/
{63, 0,123,__LINE__, 0xbfe77338, 0xa80603bd, 0xbfeccccc, 0xccccccca},	/* -0.732815=f(-0.9)*/
{64, 0,123,__LINE__, 0xbfe745bc, 0x66917fae, 0xbfec7ae1, 0x47ae1478},	/* -0.727263=f(-0.89)*/
{64, 0,123,__LINE__, 0xbfe717cb, 0xe9eed851, 0xbfec28f5, 0xc28f5c26},	/* -0.721655=f(-0.88)*/
{64, 0,123,__LINE__, 0xbfe6e966, 0x3294a096, 0xbfebd70a, 0x3d70a3d4},	/* -0.715991=f(-0.87)*/
{64, 0,123,__LINE__, 0xbfe6ba8a, 0x438e7924, 0xbfeb851e, 0xb851eb82},	/* -0.710271=f(-0.86)*/
{64, 0,123,__LINE__, 0xbfe68b37, 0x22c4afb2, 0xbfeb3333, 0x33333330},	/* -0.704494=f(-0.85)*/
{64, 0,123,__LINE__, 0xbfe65b6b, 0xd946a619, 0xbfeae147, 0xae147ade},	/* -0.69866=f(-0.84)*/
{64, 0,123,__LINE__, 0xbfe62b27, 0x73980b0f, 0xbfea8f5c, 0x28f5c28c},	/* -0.692768=f(-0.83)*/
{64, 0,123,__LINE__, 0xbfe5fa69, 0x0200ed43, 0xbfea3d70, 0xa3d70a3a},	/* -0.686818=f(-0.82)*/
{64, 0,123,__LINE__, 0xbfe5c92f, 0x98e0b06f, 0xbfe9eb85, 0x1eb851e8},	/* -0.680809=f(-0.81)*/
{64, 0,123,__LINE__, 0xbfe5977a, 0x5103ea90, 0xbfe99999, 0x99999996},	/* -0.674741=f(-0.8)*/
{64, 0,123,__LINE__, 0xbfe56548, 0x47fd2dfe, 0xbfe947ae, 0x147ae144},	/* -0.668614=f(-0.79)*/
{64, 0,123,__LINE__, 0xbfe53298, 0xa080c38a, 0xbfe8f5c2, 0x8f5c28f2},	/* -0.662426=f(-0.78)*/
{64, 0,123,__LINE__, 0xbfe4ff6a, 0x82c355fd, 0xbfe8a3d7, 0x0a3d70a0},	/* -0.656179=f(-0.77)*/
{64, 0,123,__LINE__, 0xbfe4cbbd, 0x1cdb8e6d, 0xbfe851eb, 0x851eb84e},	/* -0.64987=f(-0.76)*/
{63, 0,123,__LINE__, 0xbfe4978f, 0xa3269edf, 0xbfe7ffff, 0xfffffffc},	/* -0.643501=f(-0.75)*/
{63, 0,123,__LINE__, 0xbfe462e1, 0x50afb65d, 0xbfe7ae14, 0x7ae147aa},	/* -0.63707=f(-0.74)*/
{64, 0,123,__LINE__, 0xbfe42db1, 0x679a576c, 0xbfe75c28, 0xf5c28f58},	/* -0.630578=f(-0.73)*/
{64, 0,123,__LINE__, 0xbfe3f7ff, 0x318f8720, 0xbfe70a3d, 0x70a3d706},	/* -0.624023=f(-0.72)*/
{64, 0,123,__LINE__, 0xbfe3c1ca, 0x002dc874, 0xbfe6b851, 0xeb851eb4},	/* -0.617406=f(-0.71)*/
{63, 0,123,__LINE__, 0xbfe38b11, 0x2d7bd4ab, 0xbfe66666, 0x66666662},	/* -0.610726=f(-0.7)*/
{64, 0,123,__LINE__, 0xbfe353d4, 0x1c5dfe64, 0xbfe6147a, 0xe147ae10},	/* -0.603983=f(-0.69)*/
{64, 0,123,__LINE__, 0xbfe31c12, 0x390e29f6, 0xbfe5c28f, 0x5c28f5be},	/* -0.597177=f(-0.68)*/
{63, 0,123,__LINE__, 0xbfe2e3ca, 0xf996421b, 0xbfe570a3, 0xd70a3d6c},	/* -0.590307=f(-0.67)*/
{64, 0,123,__LINE__, 0xbfe2aafd, 0xde4d0c9b, 0xbfe51eb8, 0x51eb851a},	/* -0.583373=f(-0.66)*/
{64, 0,123,__LINE__, 0xbfe271aa, 0x72553ed1, 0xbfe4cccc, 0xccccccc8},	/* -0.576375=f(-0.65)*/
{64, 0,123,__LINE__, 0xbfe237d0, 0x4c1eadfe, 0xbfe47ae1, 0x47ae1476},	/* -0.569313=f(-0.64)*/
{64, 0,123,__LINE__, 0xbfe1fd6f, 0x0de97384, 0xbfe428f5, 0xc28f5c24},	/* -0.562187=f(-0.63)*/
{64, 0,123,__LINE__, 0xbfe1c286, 0x664ad8c6, 0xbfe3d70a, 0x3d70a3d2},	/* -0.554996=f(-0.62)*/
{64, 0,123,__LINE__, 0xbfe18716, 0x10b3da3e, 0xbfe3851e, 0xb851eb80},	/* -0.54774=f(-0.61)*/
{64, 0,123,__LINE__, 0xbfe14b1d, 0xd5f90cdd, 0xbfe33333, 0x3333332e},	/* -0.54042=f(-0.6)*/
{64, 0,123,__LINE__, 0xbfe10e9d, 0x8cdbac44, 0xbfe2e147, 0xae147adc},	/* -0.533034=f(-0.59)*/
{63, 0,123,__LINE__, 0xbfe0d195, 0x1a9393b3, 0xbfe28f5c, 0x28f5c28a},	/* -0.525584=f(-0.58)*/
{64, 0,123,__LINE__, 0xbfe09404, 0x7359dee7, 0xbfe23d70, 0xa3d70a38},	/* -0.518069=f(-0.57)*/
{64, 0,123,__LINE__, 0xbfe055eb, 0x9af3eb46, 0xbfe1eb85, 0x1eb851e6},	/* -0.510488=f(-0.56)*/
{64, 0,123,__LINE__, 0xbfe0174a, 0xa53e6cdf, 0xbfe19999, 0x99999994},	/* -0.502843=f(-0.55)*/
{64, 0,123,__LINE__, 0xbfdfb043, 0x6d708c01, 0xbfe147ae, 0x147ae142},	/* -0.495133=f(-0.54)*/
{63, 0,123,__LINE__, 0xbfdf30e2, 0x0a19966c, 0xbfe0f5c2, 0x8f5c28f0},	/* -0.487359=f(-0.53)*/
{64, 0,123,__LINE__, 0xbfdeb071, 0xaf3a3187, 0xbfe0a3d7, 0x0a3d709e},	/* -0.479519=f(-0.52)*/
{63, 0,123,__LINE__, 0xbfde2ef3, 0x101033d5, 0xbfe051eb, 0x851eb84c},	/* -0.471616=f(-0.51)*/
{63, 0,123,__LINE__, 0xbfddac67, 0x0561bb46, 0xbfdfffff, 0xfffffff4},	/* -0.463648=f(-0.5)*/
{63, 0,123,__LINE__, 0xbfdd28ce, 0x8e859fe5, 0xbfdf5c28, 0xf5c28f50},	/* -0.455616=f(-0.49)*/
{63, 0,123,__LINE__, 0xbfdca42a, 0xd266d566, 0xbfdeb851, 0xeb851eac},	/* -0.44752=f(-0.48)*/
{63, 0,123,__LINE__, 0xbfdc1e7d, 0x2081d8d8, 0xbfde147a, 0xe147ae08},	/* -0.439361=f(-0.47)*/
{64, 0,123,__LINE__, 0xbfdb97c6, 0xf1db4027, 0xbfdd70a3, 0xd70a3d64},	/* -0.431139=f(-0.46)*/
{63, 0,123,__LINE__, 0xbfdb1009, 0xe9ee79b1, 0xbfdccccc, 0xccccccc0},	/* -0.422854=f(-0.45)*/
{64, 0,123,__LINE__, 0xbfda8747, 0xd793c3d1, 0xbfdc28f5, 0xc28f5c1c},	/* -0.414507=f(-0.44)*/
{64, 0,123,__LINE__, 0xbfd9fd82, 0xb5dc5e54, 0xbfdb851e, 0xb851eb78},	/* -0.406098=f(-0.43)*/
{64, 0,123,__LINE__, 0xbfd972bc, 0xace3f306, 0xbfdae147, 0xae147ad4},	/* -0.397628=f(-0.42)*/
{64, 0,123,__LINE__, 0xbfd8e6f8, 0x12962e43, 0xbfda3d70, 0xa3d70a30},	/* -0.389097=f(-0.41)*/
{64, 0,123,__LINE__, 0xbfd85a37, 0x6b677db4, 0xbfd99999, 0x9999998c},	/* -0.380506=f(-0.4)*/
{63, 0,123,__LINE__, 0xbfd7cc7d, 0x6affe94d, 0xbfd8f5c2, 0x8f5c28e8},	/* -0.371856=f(-0.39)*/
{64, 0,123,__LINE__, 0xbfd73dcc, 0xf4d6fa09, 0xbfd851eb, 0x851eb844},	/* -0.363147=f(-0.38)*/
{64, 0,123,__LINE__, 0xbfd6ae29, 0x1cbfa268, 0xbfd7ae14, 0x7ae147a0},	/* -0.35438=f(-0.37)*/
{63, 0,123,__LINE__, 0xbfd61d95, 0x27631e9c, 0xbfd70a3d, 0x70a3d6fc},	/* -0.345556=f(-0.36)*/
{63, 0,123,__LINE__, 0xbfd58c14, 0x8aa9c5c9, 0xbfd66666, 0x66666658},	/* -0.336675=f(-0.35)*/
{64, 0,123,__LINE__, 0xbfd4f9aa, 0xee10ca74, 0xbfd5c28f, 0x5c28f5b4},	/* -0.327739=f(-0.34)*/
{63, 0,123,__LINE__, 0xbfd4665c, 0x2aebeec7, 0xbfd51eb8, 0x51eb8510},	/* -0.318748=f(-0.33)*/
{63, 0,123,__LINE__, 0xbfd3d22c, 0x4c92394f, 0xbfd47ae1, 0x47ae146c},	/* -0.309703=f(-0.32)*/
{63, 0,123,__LINE__, 0xbfd33d1f, 0x9074c08b, 0xbfd3d70a, 0x3d70a3c8},	/* -0.300606=f(-0.31)*/
{64, 0,123,__LINE__, 0xbfd2a73a, 0x661eaef8, 0xbfd33333, 0x33333324},	/* -0.291457=f(-0.3)*/
{64, 0,123,__LINE__, 0xbfd21081, 0x6f1dae73, 0xbfd28f5c, 0x28f5c280},	/* -0.282257=f(-0.29)*/
{64, 0,123,__LINE__, 0xbfd178f9, 0x7ed1f883, 0xbfd1eb85, 0x1eb851dc},	/* -0.273009=f(-0.28)*/
{63, 0,123,__LINE__, 0xbfd0e0a7, 0x9a2559a0, 0xbfd147ae, 0x147ae138},	/* -0.263712=f(-0.27)*/
{64, 0,123,__LINE__, 0xbfd04790, 0xf72887c5, 0xbfd0a3d7, 0x0a3d7094},	/* -0.254368=f(-0.26)*/
{63, 0,123,__LINE__, 0xbfcf5b75, 0xf92c80bf, 0xbfcfffff, 0xffffffe0},	/* -0.244979=f(-0.25)*/
{64, 0,123,__LINE__, 0xbfce2656, 0x82776e58, 0xbfceb851, 0xeb851e98},	/* -0.235545=f(-0.24)*/
{63, 0,123,__LINE__, 0xbfccefcf, 0x168bece3, 0xbfcd70a3, 0xd70a3d50},	/* -0.226068=f(-0.23)*/
{64, 0,123,__LINE__, 0xbfcbb7eb, 0x9ee7d2f8, 0xbfcc28f5, 0xc28f5c08},	/* -0.21655=f(-0.22)*/
{64, 0,123,__LINE__, 0xbfca7eb8, 0x6059c7bb, 0xbfcae147, 0xae147ac0},	/* -0.206992=f(-0.21)*/
{63, 0,123,__LINE__, 0xbfc94441, 0xf8f725eb, 0xbfc99999, 0x99999978},	/* -0.197396=f(-0.2)*/
{63, 0,123,__LINE__, 0xbfc80895, 0x5ddac672, 0xbfc851eb, 0x851eb830},	/* -0.187762=f(-0.19)*/
{64, 0,123,__LINE__, 0xbfc6cbbf, 0xd8acff2f, 0xbfc70a3d, 0x70a3d6e8},	/* -0.178093=f(-0.18)*/
{63, 0,123,__LINE__, 0xbfc58dcf, 0x04f55e36, 0xbfc5c28f, 0x5c28f5a0},	/* -0.16839=f(-0.17)*/
{63, 0,123,__LINE__, 0xbfc44ed0, 0xcd36e60c, 0xbfc47ae1, 0x47ae1458},	/* -0.158655=f(-0.16)*/
{64, 0,123,__LINE__, 0xbfc30ed3, 0x67d7cce1, 0xbfc33333, 0x33333310},	/* -0.14889=f(-0.15)*/
{63, 0,123,__LINE__, 0xbfc1cde5, 0x53d5fe43, 0xbfc1eb85, 0x1eb851c8},	/* -0.139096=f(-0.14)*/
{63, 0,123,__LINE__, 0xbfc08c15, 0x5549dc60, 0xbfc0a3d7, 0x0a3d7080},	/* -0.129275=f(-0.13)*/
{64, 0,123,__LINE__, 0xbfbe92e4, 0xe371f633, 0xbfbeb851, 0xeb851e71},	/* -0.119429=f(-0.12)*/
{64, 0,123,__LINE__, 0xbfbc0c17, 0xd8759634, 0xbfbc28f5, 0xc28f5be2},	/* -0.10956=f(-0.11)*/
{64, 0,123,__LINE__, 0xbfb983e2, 0x82e2cc06, 0xbfb99999, 0x99999953},	/* -0.0996687=f(-0.1)*/
{64, 0,123,__LINE__, 0xbfb6fa64, 0x46b1cb0e, 0xbfb70a3d, 0x70a3d6c4},	/* -0.0897582=f(-0.09)*/
{63, 0,123,__LINE__, 0xbfb46fbc, 0xe9dfcbba, 0xbfb47ae1, 0x47ae1435},	/* -0.07983=f(-0.08)*/
{64, 0,123,__LINE__, 0xbfb1e40c, 0x8b780f98, 0xbfb1eb85, 0x1eb851a6},	/* -0.069886=f(-0.07)*/
{64, 0,123,__LINE__, 0xbfaeaee7, 0x34b5dc99, 0xbfaeb851, 0xeb851e2d},	/* -0.0599282=f(-0.06)*/
{64, 0,123,__LINE__, 0xbfa99425, 0x97929e9b, 0xbfa99999, 0x9999990e},	/* -0.0499584=f(-0.05)*/
{63, 0,123,__LINE__, 0xbfa47816, 0x23768cca, 0xbfa47ae1, 0x47ae13ef},	/* -0.0399787=f(-0.04)*/
{64, 0,123,__LINE__, 0xbf9eb5f6, 0x44234a6b, 0xbf9eb851, 0xeb851da0},	/* -0.029991=f(-0.03)*/
{64, 0,123,__LINE__, 0xbf947a2e, 0x5daffdee, 0xbf947ae1, 0x47ae1362},	/* -0.0199973=f(-0.02)*/
{63, 0,123,__LINE__, 0xbf847ab4, 0x8b1ef92c, 0xbf847ae1, 0x47ae1249},	/* -0.00999967=f(-0.01)*/
{64, 0,123,__LINE__, 0x3cd19000, 0x00000000, 0x3cd19000, 0x00000000},	/* 9.74915e-16=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0x3f847ab4, 0x8b1efd8f, 0x3f847ae1, 0x47ae16ad},	/* 0.00999967=f(0.01)*/
{64, 0,123,__LINE__, 0x3f947a2e, 0x5db0001f, 0x3f947ae1, 0x47ae1594},	/* 0.0199973=f(0.02)*/
{63, 0,123,__LINE__, 0x3f9eb5f6, 0x44234c9c, 0x3f9eb851, 0xeb851fd2},	/* 0.029991=f(0.03)*/
{64, 0,123,__LINE__, 0x3fa47816, 0x23768de3, 0x3fa47ae1, 0x47ae1508},	/* 0.0399787=f(0.04)*/
{64, 0,123,__LINE__, 0x3fa99425, 0x97929fb4, 0x3fa99999, 0x99999a27},	/* 0.0499584=f(0.05)*/
{64, 0,123,__LINE__, 0x3faeaee7, 0x34b5ddb1, 0x3faeb851, 0xeb851f46},	/* 0.0599282=f(0.06)*/
{64, 0,123,__LINE__, 0x3fb1e40c, 0x8b781023, 0x3fb1eb85, 0x1eb85232},	/* 0.069886=f(0.07)*/
{64, 0,123,__LINE__, 0x3fb46fbc, 0xe9dfcc46, 0x3fb47ae1, 0x47ae14c1},	/* 0.07983=f(0.08)*/
{64, 0,123,__LINE__, 0x3fb6fa64, 0x46b1cb99, 0x3fb70a3d, 0x70a3d750},	/* 0.0897582=f(0.09)*/
{64, 0,123,__LINE__, 0x3fb983e2, 0x82e2cc91, 0x3fb99999, 0x999999df},	/* 0.0996687=f(0.1)*/
{63, 0,123,__LINE__, 0x3fbc0c17, 0xd87596be, 0x3fbc28f5, 0xc28f5c6e},	/* 0.10956=f(0.11)*/
{63, 0,123,__LINE__, 0x3fbe92e4, 0xe371f6bd, 0x3fbeb851, 0xeb851efd},	/* 0.119429=f(0.12)*/
{64, 0,123,__LINE__, 0x3fc08c15, 0x5549dca5, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.129275=f(0.13)*/
{63, 0,123,__LINE__, 0x3fc1cde5, 0x53d5fe88, 0x3fc1eb85, 0x1eb8520e},	/* 0.139096=f(0.14)*/
{64, 0,123,__LINE__, 0x3fc30ed3, 0x67d7cd26, 0x3fc33333, 0x33333356},	/* 0.14889=f(0.15)*/
{64, 0,123,__LINE__, 0x3fc44ed0, 0xcd36e650, 0x3fc47ae1, 0x47ae149e},	/* 0.158655=f(0.16)*/
{63, 0,123,__LINE__, 0x3fc58dcf, 0x04f55e7a, 0x3fc5c28f, 0x5c28f5e6},	/* 0.16839=f(0.17)*/
{64, 0,123,__LINE__, 0x3fc6cbbf, 0xd8acff73, 0x3fc70a3d, 0x70a3d72e},	/* 0.178093=f(0.18)*/
{64, 0,123,__LINE__, 0x3fc80895, 0x5ddac6b5, 0x3fc851eb, 0x851eb876},	/* 0.187762=f(0.19)*/
{63, 0,123,__LINE__, 0x3fc94441, 0xf8f7262e, 0x3fc99999, 0x999999be},	/* 0.197396=f(0.2)*/
{64, 0,123,__LINE__, 0x3fca7eb8, 0x6059c7fe, 0x3fcae147, 0xae147b06},	/* 0.206992=f(0.21)*/
{64, 0,123,__LINE__, 0x3fcbb7eb, 0x9ee7d33b, 0x3fcc28f5, 0xc28f5c4e},	/* 0.21655=f(0.22)*/
{64, 0,123,__LINE__, 0x3fccefcf, 0x168bed26, 0x3fcd70a3, 0xd70a3d96},	/* 0.226068=f(0.23)*/
{64, 0,123,__LINE__, 0x3fce2656, 0x82776e9a, 0x3fceb851, 0xeb851ede},	/* 0.235545=f(0.24)*/
{63, 0,123,__LINE__, 0x3fcf5b75, 0xf92c8101, 0x3fd00000, 0x00000013},	/* 0.244979=f(0.25)*/
{64, 0,123,__LINE__, 0x3fd04790, 0xf72887e6, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.254368=f(0.26)*/
{63, 0,123,__LINE__, 0x3fd0e0a7, 0x9a2559c1, 0x3fd147ae, 0x147ae15b},	/* 0.263712=f(0.27)*/
{63, 0,123,__LINE__, 0x3fd178f9, 0x7ed1f8a3, 0x3fd1eb85, 0x1eb851ff},	/* 0.273009=f(0.28)*/
{64, 0,123,__LINE__, 0x3fd21081, 0x6f1dae93, 0x3fd28f5c, 0x28f5c2a3},	/* 0.282257=f(0.29)*/
{64, 0,123,__LINE__, 0x3fd2a73a, 0x661eaf18, 0x3fd33333, 0x33333347},	/* 0.291457=f(0.3)*/
{63, 0,123,__LINE__, 0x3fd33d1f, 0x9074c0ab, 0x3fd3d70a, 0x3d70a3eb},	/* 0.300606=f(0.31)*/
{63, 0,123,__LINE__, 0x3fd3d22c, 0x4c92396f, 0x3fd47ae1, 0x47ae148f},	/* 0.309703=f(0.32)*/
{64, 0,123,__LINE__, 0x3fd4665c, 0x2aebeee6, 0x3fd51eb8, 0x51eb8533},	/* 0.318748=f(0.33)*/
{64, 0,123,__LINE__, 0x3fd4f9aa, 0xee10ca93, 0x3fd5c28f, 0x5c28f5d7},	/* 0.327739=f(0.34)*/
{63, 0,123,__LINE__, 0x3fd58c14, 0x8aa9c5e9, 0x3fd66666, 0x6666667b},	/* 0.336675=f(0.35)*/
{63, 0,123,__LINE__, 0x3fd61d95, 0x27631ebb, 0x3fd70a3d, 0x70a3d71f},	/* 0.345556=f(0.36)*/
{63, 0,123,__LINE__, 0x3fd6ae29, 0x1cbfa287, 0x3fd7ae14, 0x7ae147c3},	/* 0.35438=f(0.37)*/
{64, 0,123,__LINE__, 0x3fd73dcc, 0xf4d6fa28, 0x3fd851eb, 0x851eb867},	/* 0.363147=f(0.38)*/
{64, 0,123,__LINE__, 0x3fd7cc7d, 0x6affe96b, 0x3fd8f5c2, 0x8f5c290b},	/* 0.371856=f(0.39)*/
{63, 0,123,__LINE__, 0x3fd85a37, 0x6b677dd2, 0x3fd99999, 0x999999af},	/* 0.380506=f(0.4)*/
{63, 0,123,__LINE__, 0x3fd8e6f8, 0x12962e61, 0x3fda3d70, 0xa3d70a53},	/* 0.389097=f(0.41)*/
{63, 0,123,__LINE__, 0x3fd972bc, 0xace3f324, 0x3fdae147, 0xae147af7},	/* 0.397628=f(0.42)*/
{64, 0,123,__LINE__, 0x3fd9fd82, 0xb5dc5e72, 0x3fdb851e, 0xb851eb9b},	/* 0.406098=f(0.43)*/
{63, 0,123,__LINE__, 0x3fda8747, 0xd793c3ee, 0x3fdc28f5, 0xc28f5c3f},	/* 0.414507=f(0.44)*/
{63, 0,123,__LINE__, 0x3fdb1009, 0xe9ee79cf, 0x3fdccccc, 0xcccccce3},	/* 0.422854=f(0.45)*/
{64, 0,123,__LINE__, 0x3fdb97c6, 0xf1db4044, 0x3fdd70a3, 0xd70a3d87},	/* 0.431139=f(0.46)*/
{64, 0,123,__LINE__, 0x3fdc1e7d, 0x2081d8f4, 0x3fde147a, 0xe147ae2b},	/* 0.439361=f(0.47)*/
{63, 0,123,__LINE__, 0x3fdca42a, 0xd266d582, 0x3fdeb851, 0xeb851ecf},	/* 0.44752=f(0.48)*/
{63, 0,123,__LINE__, 0x3fdd28ce, 0x8e85a001, 0x3fdf5c28, 0xf5c28f73},	/* 0.455616=f(0.49)*/
{64, 0,123,__LINE__, 0x3fddac67, 0x0561bb61, 0x3fe00000, 0x0000000b},	/* 0.463648=f(0.5)*/
{63, 0,123,__LINE__, 0x3fde2ef3, 0x101033f0, 0x3fe051eb, 0x851eb85d},	/* 0.471616=f(0.51)*/
{64, 0,123,__LINE__, 0x3fdeb071, 0xaf3a31a2, 0x3fe0a3d7, 0x0a3d70af},	/* 0.479519=f(0.52)*/
{62, 0,123,__LINE__, 0x3fdf30e2, 0x0a199686, 0x3fe0f5c2, 0x8f5c2901},	/* 0.487359=f(0.53)*/
{64, 0,123,__LINE__, 0x3fdfb043, 0x6d708c1b, 0x3fe147ae, 0x147ae153},	/* 0.495133=f(0.54)*/
{64, 0,123,__LINE__, 0x3fe0174a, 0xa53e6cec, 0x3fe19999, 0x999999a5},	/* 0.502843=f(0.55)*/
{63, 0,123,__LINE__, 0x3fe055eb, 0x9af3eb53, 0x3fe1eb85, 0x1eb851f7},	/* 0.510488=f(0.56)*/
{64, 0,123,__LINE__, 0x3fe09404, 0x7359def4, 0x3fe23d70, 0xa3d70a49},	/* 0.518069=f(0.57)*/
{64, 0,123,__LINE__, 0x3fe0d195, 0x1a9393c0, 0x3fe28f5c, 0x28f5c29b},	/* 0.525584=f(0.58)*/
{63, 0,123,__LINE__, 0x3fe10e9d, 0x8cdbac51, 0x3fe2e147, 0xae147aed},	/* 0.533034=f(0.59)*/
{64, 0,123,__LINE__, 0x3fe14b1d, 0xd5f90cea, 0x3fe33333, 0x3333333f},	/* 0.54042=f(0.6)*/
{64, 0,123,__LINE__, 0x3fe18716, 0x10b3da4a, 0x3fe3851e, 0xb851eb91},	/* 0.54774=f(0.61)*/
{64, 0,123,__LINE__, 0x3fe1c286, 0x664ad8d2, 0x3fe3d70a, 0x3d70a3e3},	/* 0.554996=f(0.62)*/
{64, 0,123,__LINE__, 0x3fe1fd6f, 0x0de97390, 0x3fe428f5, 0xc28f5c35},	/* 0.562187=f(0.63)*/
{64, 0,123,__LINE__, 0x3fe237d0, 0x4c1eae0a, 0x3fe47ae1, 0x47ae1487},	/* 0.569313=f(0.64)*/
{64, 0,123,__LINE__, 0x3fe271aa, 0x72553edd, 0x3fe4cccc, 0xccccccd9},	/* 0.576375=f(0.65)*/
{64, 0,123,__LINE__, 0x3fe2aafd, 0xde4d0ca7, 0x3fe51eb8, 0x51eb852b},	/* 0.583373=f(0.66)*/
{64, 0,123,__LINE__, 0x3fe2e3ca, 0xf9964226, 0x3fe570a3, 0xd70a3d7d},	/* 0.590307=f(0.67)*/
{64, 0,123,__LINE__, 0x3fe31c12, 0x390e2a02, 0x3fe5c28f, 0x5c28f5cf},	/* 0.597177=f(0.68)*/
{64, 0,123,__LINE__, 0x3fe353d4, 0x1c5dfe70, 0x3fe6147a, 0xe147ae21},	/* 0.603983=f(0.69)*/
{64, 0,123,__LINE__, 0x3fe38b11, 0x2d7bd4b6, 0x3fe66666, 0x66666673},	/* 0.610726=f(0.7)*/
{64, 0,123,__LINE__, 0x3fe3c1ca, 0x002dc87f, 0x3fe6b851, 0xeb851ec5},	/* 0.617406=f(0.71)*/
{64, 0,123,__LINE__, 0x3fe3f7ff, 0x318f872b, 0x3fe70a3d, 0x70a3d717},	/* 0.624023=f(0.72)*/
{64, 0,123,__LINE__, 0x3fe42db1, 0x679a5777, 0x3fe75c28, 0xf5c28f69},	/* 0.630578=f(0.73)*/
{64, 0,123,__LINE__, 0x3fe462e1, 0x50afb668, 0x3fe7ae14, 0x7ae147bb},	/* 0.63707=f(0.74)*/
{64, 0,123,__LINE__, 0x3fe4978f, 0xa3269ee9, 0x3fe80000, 0x0000000d},	/* 0.643501=f(0.75)*/
{64, 0,123,__LINE__, 0x3fe4cbbd, 0x1cdb8e78, 0x3fe851eb, 0x851eb85f},	/* 0.64987=f(0.76)*/
{63, 0,123,__LINE__, 0x3fe4ff6a, 0x82c35608, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.656179=f(0.77)*/
{63, 0,123,__LINE__, 0x3fe53298, 0xa080c395, 0x3fe8f5c2, 0x8f5c2903},	/* 0.662426=f(0.78)*/
{64, 0,123,__LINE__, 0x3fe56548, 0x47fd2e08, 0x3fe947ae, 0x147ae155},	/* 0.668614=f(0.79)*/
{64, 0,123,__LINE__, 0x3fe5977a, 0x5103ea9a, 0x3fe99999, 0x999999a7},	/* 0.674741=f(0.8)*/
{63, 0,123,__LINE__, 0x3fe5c92f, 0x98e0b07a, 0x3fe9eb85, 0x1eb851f9},	/* 0.680809=f(0.81)*/
{64, 0,123,__LINE__, 0x3fe5fa69, 0x0200ed4d, 0x3fea3d70, 0xa3d70a4b},	/* 0.686818=f(0.82)*/
{64, 0,123,__LINE__, 0x3fe62b27, 0x73980b19, 0x3fea8f5c, 0x28f5c29d},	/* 0.692768=f(0.83)*/
{64, 0,123,__LINE__, 0x3fe65b6b, 0xd946a623, 0x3feae147, 0xae147aef},	/* 0.69866=f(0.84)*/
{64, 0,123,__LINE__, 0x3fe68b37, 0x22c4afbc, 0x3feb3333, 0x33333341},	/* 0.704494=f(0.85)*/
{64, 0,123,__LINE__, 0x3fe6ba8a, 0x438e792e, 0x3feb851e, 0xb851eb93},	/* 0.710271=f(0.86)*/
{64, 0,123,__LINE__, 0x3fe6e966, 0x3294a09f, 0x3febd70a, 0x3d70a3e5},	/* 0.715991=f(0.87)*/
{64, 0,123,__LINE__, 0x3fe717cb, 0xe9eed85b, 0x3fec28f5, 0xc28f5c37},	/* 0.721655=f(0.88)*/
{64, 0,123,__LINE__, 0x3fe745bc, 0x66917fb7, 0x3fec7ae1, 0x47ae1489},	/* 0.727263=f(0.89)*/
{64, 0,123,__LINE__, 0x3fe77338, 0xa80603c6, 0x3feccccc, 0xccccccdb},	/* 0.732815=f(0.9)*/
{64, 0,123,__LINE__, 0x3fe7a041, 0xb025fcf0, 0x3fed1eb8, 0x51eb852d},	/* 0.738313=f(0.91)*/
{63, 0,123,__LINE__, 0x3fe7ccd8, 0x82d8fdc6, 0x3fed70a3, 0xd70a3d7f},	/* 0.743756=f(0.92)*/
{64, 0,123,__LINE__, 0x3fe7f8fe, 0x25d50682, 0x3fedc28f, 0x5c28f5d1},	/* 0.749145=f(0.93)*/
{64, 0,123,__LINE__, 0x3fe824b3, 0xa0619021, 0x3fee147a, 0xe147ae23},	/* 0.75448=f(0.94)*/
{63, 0,123,__LINE__, 0x3fe84ff9, 0xfb1d2136, 0x3fee6666, 0x66666675},	/* 0.759763=f(0.95)*/
{63, 0,123,__LINE__, 0x3fe87ad2, 0x3fc55e4f, 0x3feeb851, 0xeb851ec7},	/* 0.764993=f(0.96)*/
{63, 0,123,__LINE__, 0x3fe8a53d, 0x79018732, 0x3fef0a3d, 0x70a3d719},	/* 0.770171=f(0.97)*/
{64, 0,123,__LINE__, 0x3fe8cf3c, 0xb22f51ed, 0x3fef5c28, 0xf5c28f6b},	/* 0.775297=f(0.98)*/
{64, 0,123,__LINE__, 0x3fe8f8d0, 0xf732146f, 0x3fefae14, 0x7ae147bd},	/* 0.780373=f(0.99)*/
{64, 0,123,__LINE__, 0x3fe921fb, 0x54442d1f, 0x3ff00000, 0x00000007},	/* 0.785398=f(1)*/
{64, 0,123,__LINE__, 0x3fe94abc, 0xd5ca9ad6, 0x3ff028f5, 0xc28f5c30},	/* 0.790373=f(1.01)*/
{64, 0,123,__LINE__, 0x3fe97316, 0x882ab461, 0x3ff051eb, 0x851eb859},	/* 0.795299=f(1.02)*/
{63, 0,123,__LINE__, 0x3fe99b09, 0x77a1efce, 0x3ff07ae1, 0x47ae1482},	/* 0.800175=f(1.03)*/
{64, 0,123,__LINE__, 0x3fe9c296, 0xb01fa9ac, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.805003=f(1.04)*/
{63, 0,123,__LINE__, 0x3fe9e9bf, 0x3d20dc78, 0x3ff0cccc, 0xccccccd4},	/* 0.809784=f(1.05)*/
{63, 0,123,__LINE__, 0x3fea1084, 0x298db882, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.814516=f(1.06)*/
{63, 0,123,__LINE__, 0x3fea36e6, 0x7f990cbd, 0x3ff11eb8, 0x51eb8526},	/* 0.819202=f(1.07)*/
{64, 0,123,__LINE__, 0x3fea5ce7, 0x48a17105, 0x3ff147ae, 0x147ae14f},	/* 0.823841=f(1.08)*/
{63, 0,123,__LINE__, 0x3fea8287, 0x8d14229e, 0x3ff170a3, 0xd70a3d78},	/* 0.828434=f(1.09)*/
{64, 0,123,__LINE__, 0x3feaa7c8, 0x545183d3, 0x3ff19999, 0x999999a1},	/* 0.832981=f(1.1)*/
{64, 0,123,__LINE__, 0x3feaccaa, 0xa4932ff4, 0x3ff1c28f, 0x5c28f5ca},	/* 0.837484=f(1.11)*/
{64, 0,123,__LINE__, 0x3feaf12f, 0x82d394fc, 0x3ff1eb85, 0x1eb851f3},	/* 0.841942=f(1.12)*/
{63, 0,123,__LINE__, 0x3feb1557, 0xf2b704af, 0x3ff2147a, 0xe147ae1c},	/* 0.846355=f(1.13)*/
{64, 0,123,__LINE__, 0x3feb3924, 0xf6762efe, 0x3ff23d70, 0xa3d70a45},	/* 0.850726=f(1.14)*/
{64, 0,123,__LINE__, 0x3feb5c97, 0x8ec9f80c, 0x3ff26666, 0x6666666e},	/* 0.855053=f(1.15)*/
{64, 0,123,__LINE__, 0x3feb7fb0, 0xbad89c41, 0x3ff28f5c, 0x28f5c297},	/* 0.859337=f(1.16)*/
{64, 0,123,__LINE__, 0x3feba271, 0x78241558, 0x3ff2b851, 0xeb851ec0},	/* 0.863579=f(1.17)*/
{64, 0,123,__LINE__, 0x3febc4da, 0xc279b37f, 0x3ff2e147, 0xae147ae9},	/* 0.86778=f(1.18)*/
{64, 0,123,__LINE__, 0x3febe6ed, 0x93e2de10, 0x3ff30a3d, 0x70a3d712},	/* 0.871939=f(1.19)*/
{64, 0,123,__LINE__, 0xbff69b81, 0x54baf42e, 0xc01921fb, 0x54442d18},	/* -1.41297=f(-6.28319)*/
{63, 0,123,__LINE__, 0xbff5c97d, 0x37d98aa4, 0xc012d97c, 0x7f3321d2},	/* -1.36169=f(-4.71239)*/
{63, 0,123,__LINE__, 0xbff433b8, 0xa322ddd3, 0xc00921fb, 0x54442d18},	/* -1.26263=f(-3.14159)*/
{64, 0,123,__LINE__, 0xbff00fe9, 0x87ed02ff, 0xbff921fb, 0x54442d18},	/* -1.00388=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{64, 0,123,__LINE__, 0x3ff00fe9, 0x87ed02ff, 0x3ff921fb, 0x54442d18},	/* 1.00388=f(1.5708)*/
{63, 0,123,__LINE__, 0x3ff433b8, 0xa322ddd3, 0x400921fb, 0x54442d18},	/* 1.26263=f(3.14159)*/
{63, 0,123,__LINE__, 0x3ff5c97d, 0x37d98aa4, 0x4012d97c, 0x7f3321d2},	/* 1.36169=f(4.71239)*/
{64, 0,123,__LINE__, 0xbff8997f, 0xbb8b19c0, 0xc03e0000, 0x00000000},	/* -1.53748=f(-30)*/
{63, 0,123,__LINE__, 0xbff8914e, 0x9558e14e, 0xc03c4ccc, 0xcccccccd},	/* -1.53548=f(-28.3)*/
{63, 0,123,__LINE__, 0xbff88811, 0xbbe6dd1a, 0xc03a9999, 0x9999999a},	/* -1.53322=f(-26.6)*/
{64, 0,123,__LINE__, 0xbff87d92, 0x7628865c, 0xc038e666, 0x66666667},	/* -1.53066=f(-24.9)*/
{63, 0,123,__LINE__, 0xbff8718a, 0x0c21772c, 0xc0373333, 0x33333334},	/* -1.52772=f(-23.2)*/
{63, 0,123,__LINE__, 0xbff8639b, 0x79e21173, 0xc0358000, 0x00000001},	/* -1.52432=f(-21.5)*/
{64, 0,123,__LINE__, 0xbff85349, 0xe792c6df, 0xc033cccc, 0xccccccce},	/* -1.52033=f(-19.8)*/
{64, 0,123,__LINE__, 0xbff83fe9, 0xca4b0fb2, 0xc0321999, 0x9999999b},	/* -1.5156=f(-18.1)*/
{64, 0,123,__LINE__, 0xbff82888, 0xd516330c, 0xc0306666, 0x66666668},	/* -1.5099=f(-16.4)*/
{64, 0,123,__LINE__, 0xbff80bc5, 0x5b9fbf46, 0xc02d6666, 0x6666666a},	/* -1.50287=f(-14.7)*/
{64, 0,123,__LINE__, 0xbff7e786, 0x2aa0157c, 0xc02a0000, 0x00000004},	/* -1.49402=f(-13)*/
{63, 0,123,__LINE__, 0xbff7b872, 0x197c1746, 0xc0269999, 0x9999999e},	/* -1.48253=f(-11.3)*/
{64, 0,123,__LINE__, 0xbff778d9, 0x2c06c36f, 0xc0233333, 0x33333338},	/* -1.467=f(-9.6)*/
{64, 0,123,__LINE__, 0xbff71e3e, 0x5f2c979f, 0xc01f9999, 0x999999a3},	/* -1.44488=f(-7.9)*/
{63, 0,123,__LINE__, 0xbff692fa, 0x44218619, 0xc018cccc, 0xccccccd6},	/* -1.41088=f(-6.2)*/
{64, 0,123,__LINE__, 0xbff5a250, 0x52114e62, 0xc0120000, 0x00000009},	/* -1.35213=f(-4.5)*/
{64, 0,123,__LINE__, 0xbff3a4f4, 0xa8668b6d, 0xc0066666, 0x66666678},	/* -1.22777=f(-2.8)*/
{64, 0,123,__LINE__, 0xbfeaa7c8, 0x545183ed, 0xbff19999, 0x999999bd},	/* -0.832981=f(-1.1)*/
{63, 0,123,__LINE__, 0x3fe14b1d, 0xd5f90cad, 0x3fe33333, 0x333332ec},	/* 0.54042=f(0.6)*/
{64, 0,123,__LINE__, 0x3ff29219, 0xa497099b, 0x40026666, 0x66666654},	/* 1.16067=f(2.3)*/
{64, 0,123,__LINE__, 0x3ff5368c, 0x951e9cfa, 0x400fffff, 0xffffffee},	/* 1.32582=f(4)*/
{64, 0,123,__LINE__, 0x3ff65a9f, 0xe0f20774, 0x4016cccc, 0xccccccc4},	/* 1.39713=f(5.7)*/
{64, 0,123,__LINE__, 0x3ff6fbcd, 0x16bebe3f, 0x401d9999, 0x99999991},	/* 1.43647=f(7.4)*/
{64, 0,123,__LINE__, 0x3ff761ab, 0xb0d2ec50, 0x40223333, 0x3333332f},	/* 1.46135=f(9.1)*/
{64, 0,123,__LINE__, 0x3ff7a7cd, 0x013209a5, 0x40259999, 0x99999995},	/* 1.47847=f(10.8)*/
{64, 0,123,__LINE__, 0x3ff7daff, 0x85a63058, 0x4028ffff, 0xfffffffb},	/* 1.49097=f(12.5)*/
{64, 0,123,__LINE__, 0x3ff80201, 0xa882c932, 0x402c6666, 0x66666661},	/* 1.50049=f(14.2)*/
{63, 0,123,__LINE__, 0x3ff820b5, 0xe69c2ec7, 0x402fcccc, 0xccccccc7},	/* 1.50799=f(15.9)*/
{64, 0,123,__LINE__, 0x3ff83981, 0x22b99e8c, 0x40319999, 0x99999997},	/* 1.51404=f(17.6)*/
{64, 0,123,__LINE__, 0x3ff84df1, 0x81e40544, 0x40334ccc, 0xccccccca},	/* 1.51903=f(19.3)*/
{64, 0,123,__LINE__, 0x3ff85f14, 0xd43d81be, 0x4034ffff, 0xfffffffd},	/* 1.52321=f(21)*/
{63, 0,123,__LINE__, 0x3ff86da8, 0x6687209f, 0x4036b333, 0x33333330},	/* 1.52677=f(22.7)*/
{64, 0,123,__LINE__, 0x3ff87a34, 0xf080f2f8, 0x40386666, 0x66666663},	/* 1.52984=f(24.4)*/
{64, 0,123,__LINE__, 0x3ff8851f, 0xa51ef694, 0x403a1999, 0x99999996},	/* 1.5325=f(26.1)*/
{64, 0,123,__LINE__, 0x3ff88eb5, 0x0616141e, 0x403bcccc, 0xccccccc9},	/* 1.53484=f(27.8)*/
{64, 0,123,__LINE__, 0x3ff8972f, 0xfc482372, 0x403d7fff, 0xfffffffc},	/* 1.53691=f(29.5)*/
{0}
};
void test_atan(m)   {run_vector_1(m,atan_vec,(char *)(atan),"atan","dd");   }
