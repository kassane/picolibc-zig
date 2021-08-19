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
 one_line_type tan_vec[] = {
{63, 0,123,__LINE__, 0xc00493c4, 0x3acb164d, 0xbff33333, 0x33333333},	/* -2.57215=f(-1.2)*/
{63, 0,123,__LINE__, 0xc003fbb2, 0xac8d6e08, 0xbff30a3d, 0x70a3d70a},	/* -2.4979=f(-1.19)*/
{63, 0,123,__LINE__, 0xc0036b0a, 0xa04728b4, 0xbff2e147, 0xae147ae1},	/* -2.42727=f(-1.18)*/
{64, 0,123,__LINE__, 0xc002e13d, 0xc4352012, 0xbff2b851, 0xeb851eb8},	/* -2.35998=f(-1.17)*/
{63, 0,123,__LINE__, 0xc0025dcb, 0xa00cf2d0, 0xbff28f5c, 0x28f5c28f},	/* -2.2958=f(-1.16)*/
{64, 0,123,__LINE__, 0xc001e03f, 0xefaf53c9, 0xbff26666, 0x66666666},	/* -2.2345=f(-1.15)*/
{64, 0,123,__LINE__, 0xc0016831, 0x3887b2e3, 0xbff23d70, 0xa3d70a3d},	/* -2.17588=f(-1.14)*/
{63, 0,123,__LINE__, 0xc000f53f, 0x9047cd42, 0xbff2147a, 0xe147ae14},	/* -2.11975=f(-1.13)*/
{64, 0,123,__LINE__, 0xc0008713, 0x8d550701, 0xbff1eb85, 0x1eb851eb},	/* -2.06596=f(-1.12)*/
{64, 0,123,__LINE__, 0xc0001d5d, 0x5a921689, 0xbff1c28f, 0x5c28f5c2},	/* -2.01434=f(-1.11)*/
{63, 0,123,__LINE__, 0xbfff6fa7, 0xd2862149, 0xbff19999, 0x99999999},	/* -1.96476=f(-1.1)*/
{63, 0,123,__LINE__, 0xbffeac68, 0x7953b03a, 0xbff170a3, 0xd70a3d70},	/* -1.91709=f(-1.09)*/
{64, 0,123,__LINE__, 0xbffdf081, 0x975fac4d, 0xbff147ae, 0x147ae147},	/* -1.87122=f(-1.08)*/
{64, 0,123,__LINE__, 0xbffd3b81, 0xeb0fcaad, 0xbff11eb8, 0x51eb851e},	/* -1.82703=f(-1.07)*/
{63, 0,123,__LINE__, 0xbffc8d01, 0x0d5ddd8c, 0xbff0f5c2, 0x8f5c28f5},	/* -1.78442=f(-1.06)*/
{63, 0,123,__LINE__, 0xbffbe49e, 0x982fe6ab, 0xbff0cccc, 0xcccccccc},	/* -1.74332=f(-1.05)*/
{62, 0,123,__LINE__, 0xbffb4201, 0x654a4049, 0xbff0a3d7, 0x0a3d70a3},	/* -1.70361=f(-1.04)*/
{63, 0,123,__LINE__, 0xbffaa4d6, 0xe2aca2f9, 0xbff07ae1, 0x47ae147a},	/* -1.66524=f(-1.03)*/
{64, 0,123,__LINE__, 0xbffa0cd2, 0x79a136ed, 0xbff051eb, 0x851eb851},	/* -1.62813=f(-1.02)*/
{62, 0,123,__LINE__, 0xbff979ad, 0x06284699, 0xbff028f5, 0xc28f5c28},	/* -1.59221=f(-1.01)*/
{63, 0,123,__LINE__, 0xbff8eb24, 0x5cbee3a2, 0xbfefffff, 0xfffffffe},	/* -1.55741=f(-1)*/
{63, 0,123,__LINE__, 0xbff860fa, 0xdcc59061, 0xbfefae14, 0x7ae147ac},	/* -1.52368=f(-0.99)*/
{63, 0,123,__LINE__, 0xbff7daf7, 0x0e07fa5a, 0xbfef5c28, 0xf5c28f5a},	/* -1.49096=f(-0.98)*/
{63, 0,123,__LINE__, 0xbff758e3, 0x4819d01b, 0xbfef0a3d, 0x70a3d708},	/* -1.4592=f(-0.97)*/
{62, 0,123,__LINE__, 0xbff6da8d, 0x62683762, 0xbfeeb851, 0xeb851eb6},	/* -1.42836=f(-0.96)*/
{63, 0,123,__LINE__, 0xbff65fc6, 0x6c04955c, 0xbfee6666, 0x66666664},	/* -1.39838=f(-0.95)*/
{63, 0,123,__LINE__, 0xbff5e862, 0x6a4d39cb, 0xbfee147a, 0xe147ae12},	/* -1.36923=f(-0.94)*/
{64, 0,123,__LINE__, 0xbff57438, 0x1db3e2ff, 0xbfedc28f, 0x5c28f5c0},	/* -1.34087=f(-0.93)*/
{63, 0,123,__LINE__, 0xbff50320, 0xcbf9abc8, 0xbfed70a3, 0xd70a3d6e},	/* -1.31326=f(-0.92)*/
{64, 0,123,__LINE__, 0xbff494f8, 0x0f4c58a1, 0xbfed1eb8, 0x51eb851c},	/* -1.28637=f(-0.91)*/
{64, 0,123,__LINE__, 0xbff4299b, 0xa9c2a134, 0xbfeccccc, 0xccccccca},	/* -1.26016=f(-0.9)*/
{64, 0,123,__LINE__, 0xbff3c0eb, 0x5cc4656d, 0xbfec7ae1, 0x47ae1478},	/* -1.2346=f(-0.89)*/
{64, 0,123,__LINE__, 0xbff35ac8, 0xc3f910bc, 0xbfec28f5, 0xc28f5c26},	/* -1.20966=f(-0.88)*/
{64, 0,123,__LINE__, 0xbff2f717, 0x33620b29, 0xbfebd70a, 0x3d70a3d4},	/* -1.18532=f(-0.87)*/
{63, 0,123,__LINE__, 0xbff295bb, 0x98513caa, 0xbfeb851e, 0xb851eb82},	/* -1.16156=f(-0.86)*/
{64, 0,123,__LINE__, 0xbff2369c, 0x5cf4878a, 0xbfeb3333, 0x33333330},	/* -1.13833=f(-0.85)*/
{64, 0,123,__LINE__, 0xbff1d9a1, 0x4e36e752, 0xbfeae147, 0xae147ade},	/* -1.11563=f(-0.84)*/
{64, 0,123,__LINE__, 0xbff17eb3, 0x83beb82e, 0xbfea8f5c, 0x28f5c28c},	/* -1.09343=f(-0.83)*/
{63, 0,123,__LINE__, 0xbff125bd, 0x49d6af67, 0xbfea3d70, 0xa3d70a3a},	/* -1.07171=f(-0.82)*/
{64, 0,123,__LINE__, 0xbff0ceaa, 0x0d145bf5, 0xbfe9eb85, 0x1eb851e8},	/* -1.05046=f(-0.81)*/
{64, 0,123,__LINE__, 0xbff07966, 0x4793b607, 0xbfe99999, 0x99999996},	/* -1.02964=f(-0.8)*/
{64, 0,123,__LINE__, 0xbff025df, 0x6fa369bb, 0xbfe947ae, 0x147ae144},	/* -1.00925=f(-0.79)*/
{64, 0,123,__LINE__, 0xbfefa807, 0xcf826c3d, 0xbfe8f5c2, 0x8f5c28f2},	/* -0.989262=f(-0.78)*/
{63, 0,123,__LINE__, 0xbfef0785, 0xdf91f898, 0xbfe8a3d7, 0x0a3d70a0},	/* -0.969668=f(-0.77)*/
{63, 0,123,__LINE__, 0xbfee6a19, 0x2e7801f2, 0xbfe851eb, 0x851eb84e},	/* -0.950451=f(-0.76)*/
{63, 0,123,__LINE__, 0xbfedcfa3, 0x6110eee4, 0xbfe7ffff, 0xfffffffc},	/* -0.931596=f(-0.75)*/
{62, 0,123,__LINE__, 0xbfed3807, 0x8a7774ec, 0xbfe7ae14, 0x7ae147aa},	/* -0.91309=f(-0.74)*/
{63, 0,123,__LINE__, 0xbfeca32a, 0x16174ae7, 0xbfe75c28, 0xf5c28f58},	/* -0.894918=f(-0.73)*/
{64, 0,123,__LINE__, 0xbfec10f0, 0xb34aae96, 0xbfe70a3d, 0x70a3d706},	/* -0.877068=f(-0.72)*/
{64, 0,123,__LINE__, 0xbfeb8142, 0x426299ed, 0xbfe6b851, 0xeb851eb4},	/* -0.859529=f(-0.71)*/
{64, 0,123,__LINE__, 0xbfeaf406, 0xc2fc78a7, 0xbfe66666, 0x66666662},	/* -0.842288=f(-0.7)*/
{63, 0,123,__LINE__, 0xbfea6927, 0x438ad4c3, 0xbfe6147a, 0xe147ae10},	/* -0.825336=f(-0.69)*/
{64, 0,123,__LINE__, 0xbfe9e08d, 0xd1f8d28c, 0xbfe5c28f, 0x5c28f5be},	/* -0.808661=f(-0.68)*/
{63, 0,123,__LINE__, 0xbfe95a25, 0x6d52797b, 0xbfe570a3, 0xd70a3d6c},	/* -0.792254=f(-0.67)*/
{64, 0,123,__LINE__, 0xbfe8d5d9, 0xf85db5f5, 0xbfe51eb8, 0x51eb851a},	/* -0.776105=f(-0.66)*/
{64, 0,123,__LINE__, 0xbfe85398, 0x2d11be31, 0xbfe4cccc, 0xccccccc8},	/* -0.760204=f(-0.65)*/
{64, 0,123,__LINE__, 0xbfe7d34d, 0x90dc178c, 0xbfe47ae1, 0x47ae1476},	/* -0.744544=f(-0.64)*/
{63, 0,123,__LINE__, 0xbfe754e8, 0x69a3e639, 0xbfe428f5, 0xc28f5c24},	/* -0.729115=f(-0.63)*/
{63, 0,123,__LINE__, 0xbfe6d857, 0xb37d7b1f, 0xbfe3d70a, 0x3d70a3d2},	/* -0.713909=f(-0.62)*/
{63, 0,123,__LINE__, 0xbfe65d8b, 0x17013ed3, 0xbfe3851e, 0xb851eb80},	/* -0.698919=f(-0.61)*/
{63, 0,123,__LINE__, 0xbfe5e472, 0xe03a2804, 0xbfe33333, 0x3333332e},	/* -0.684137=f(-0.6)*/
{64, 0,123,__LINE__, 0xbfe56cff, 0xf620e1f3, 0xbfe2e147, 0xae147adc},	/* -0.669556=f(-0.59)*/
{63, 0,123,__LINE__, 0xbfe4f723, 0xd299a7bd, 0xbfe28f5c, 0x28f5c28a},	/* -0.655168=f(-0.58)*/
{64, 0,123,__LINE__, 0xbfe482d0, 0x7aeba509, 0xbfe23d70, 0xa3d70a38},	/* -0.640969=f(-0.57)*/
{63, 0,123,__LINE__, 0xbfe40ff8, 0x78a96653, 0xbfe1eb85, 0x1eb851e6},	/* -0.62695=f(-0.56)*/
{64, 0,123,__LINE__, 0xbfe39e8e, 0xd3028c71, 0xbfe19999, 0x99999994},	/* -0.613105=f(-0.55)*/
{64, 0,123,__LINE__, 0xbfe32e87, 0x0877915c, 0xbfe147ae, 0x147ae142},	/* -0.59943=f(-0.54)*/
{64, 0,123,__LINE__, 0xbfe2bfd5, 0x08e8f96f, 0xbfe0f5c2, 0x8f5c28f0},	/* -0.585917=f(-0.53)*/
{63, 0,123,__LINE__, 0xbfe2526d, 0x2ffbcd56, 0xbfe0a3d7, 0x0a3d709e},	/* -0.572562=f(-0.52)*/
{64, 0,123,__LINE__, 0xbfe1e644, 0x3fcdaee5, 0xbfe051eb, 0x851eb84c},	/* -0.559359=f(-0.51)*/
{63, 0,123,__LINE__, 0xbfe17b4f, 0x5bf34742, 0xbfdfffff, 0xfffffff4},	/* -0.546302=f(-0.5)*/
{64, 0,123,__LINE__, 0xbfe11184, 0x04bc2fcf, 0xbfdf5c28, 0xf5c28f50},	/* -0.533388=f(-0.49)*/
{63, 0,123,__LINE__, 0xbfe0a8d8, 0x12b7d222, 0xbfdeb851, 0xeb851eac},	/* -0.520611=f(-0.48)*/
{64, 0,123,__LINE__, 0xbfe04141, 0xb2770eea, 0xbfde147a, 0xe147ae08},	/* -0.507966=f(-0.47)*/
{64, 0,123,__LINE__, 0xbfdfb56e, 0xc10d900b, 0xbfdd70a3, 0xd70a3d64},	/* -0.495449=f(-0.46)*/
{63, 0,123,__LINE__, 0xbfdeea5f, 0xcb3f61a4, 0xbfdccccc, 0xccccccc0},	/* -0.483055=f(-0.45)*/
{63, 0,123,__LINE__, 0xbfde2144, 0xa61010ab, 0xbfdc28f5, 0xc28f5c1c},	/* -0.470781=f(-0.44)*/
{63, 0,123,__LINE__, 0xbfdd5a0b, 0xfe483967, 0xbfdb851e, 0xb851eb78},	/* -0.458621=f(-0.43)*/
{64, 0,123,__LINE__, 0xbfdc94a5, 0x04655ca0, 0xbfdae147, 0xae147ad4},	/* -0.446573=f(-0.42)*/
{63, 0,123,__LINE__, 0xbfdbd0ff, 0x6664f781, 0xbfda3d70, 0xa3d70a30},	/* -0.434631=f(-0.41)*/
{64, 0,123,__LINE__, 0xbfdb0f0b, 0x49dcdcc8, 0xbfd99999, 0x9999998c},	/* -0.422793=f(-0.4)*/
{64, 0,123,__LINE__, 0xbfda4eb9, 0x465c156f, 0xbfd8f5c2, 0x8f5c28e8},	/* -0.411055=f(-0.39)*/
{64, 0,123,__LINE__, 0xbfd98ffa, 0x600fde98, 0xbfd851eb, 0x851eb844},	/* -0.399413=f(-0.38)*/
{64, 0,123,__LINE__, 0xbfd8d2c0, 0x02a8a451, 0xbfd7ae14, 0x7ae147a0},	/* -0.387863=f(-0.37)*/
{63, 0,123,__LINE__, 0xbfd816fb, 0xfc7b1cf3, 0xbfd70a3d, 0x70a3d6fc},	/* -0.376403=f(-0.36)*/
{64, 0,123,__LINE__, 0xbfd75ca0, 0x79d9e7d4, 0xbfd66666, 0x66666658},	/* -0.365028=f(-0.35)*/
{63, 0,123,__LINE__, 0xbfd6a3a0, 0x00a44c7c, 0xbfd5c28f, 0x5c28f5b4},	/* -0.353737=f(-0.34)*/
{63, 0,123,__LINE__, 0xbfd5ebed, 0x6c06ed7f, 0xbfd51eb8, 0x51eb8510},	/* -0.342525=f(-0.33)*/
{64, 0,123,__LINE__, 0xbfd5357b, 0xe86b7455, 0xbfd47ae1, 0x47ae146c},	/* -0.331389=f(-0.32)*/
{64, 0,123,__LINE__, 0xbfd4803e, 0xef9469bf, 0xbfd3d70a, 0x3d70a3c8},	/* -0.320328=f(-0.31)*/
{63, 0,123,__LINE__, 0xbfd3cc2a, 0x44e29987, 0xbfd33333, 0x33333324},	/* -0.309336=f(-0.3)*/
{64, 0,123,__LINE__, 0xbfd31931, 0xf1c1881e, 0xbfd28f5c, 0x28f5c280},	/* -0.298413=f(-0.29)*/
{64, 0,123,__LINE__, 0xbfd2674a, 0x4238a5c3, 0xbfd1eb85, 0x1eb851dc},	/* -0.287554=f(-0.28)*/
{64, 0,123,__LINE__, 0xbfd1b667, 0xc19f0d22, 0xbfd147ae, 0x147ae138},	/* -0.276758=f(-0.27)*/
{63, 0,123,__LINE__, 0xbfd1067f, 0x376fbb45, 0xbfd0a3d7, 0x0a3d7094},	/* -0.266022=f(-0.26)*/
{64, 0,123,__LINE__, 0xbfd05785, 0xa43c4c45, 0xbfcfffff, 0xffffffe0},	/* -0.255342=f(-0.25)*/
{64, 0,123,__LINE__, 0xbfcf52e0, 0x7d78c725, 0xbfceb851, 0xeb851e98},	/* -0.244717=f(-0.24)*/
{63, 0,123,__LINE__, 0xbfcdf868, 0xe1f0008e, 0xbfcd70a3, 0xd70a3d50},	/* -0.234143=f(-0.23)*/
{63, 0,123,__LINE__, 0xbfcc9f8f, 0xab162ada, 0xbfcc28f5, 0xc28f5c08},	/* -0.223619=f(-0.22)*/
{64, 0,123,__LINE__, 0xbfcb4840, 0x6a01a891, 0xbfcae147, 0xae147ac0},	/* -0.213142=f(-0.21)*/
{63, 0,123,__LINE__, 0xbfc9f267, 0x068a55c8, 0xbfc99999, 0x99999978},	/* -0.20271=f(-0.2)*/
{64, 0,123,__LINE__, 0xbfc89def, 0xba56182d, 0xbfc851eb, 0x851eb830},	/* -0.19232=f(-0.19)*/
{64, 0,123,__LINE__, 0xbfc74ac7, 0x0c0c4f51, 0xbfc70a3d, 0x70a3d6e8},	/* -0.18197=f(-0.18)*/
{64, 0,123,__LINE__, 0xbfc5f8d9, 0xcaad92ee, 0xbfc5c28f, 0x5c28f5a0},	/* -0.171657=f(-0.17)*/
{64, 0,123,__LINE__, 0xbfc4a815, 0x090d4ab9, 0xbfc47ae1, 0x47ae1458},	/* -0.161379=f(-0.16)*/
{63, 0,123,__LINE__, 0xbfc35866, 0x196ac71f, 0xbfc33333, 0x33333310},	/* -0.151135=f(-0.15)*/
{64, 0,123,__LINE__, 0xbfc209ba, 0x89279ba7, 0xbfc1eb85, 0x1eb851c8},	/* -0.140922=f(-0.14)*/
{63, 0,123,__LINE__, 0xbfc0bc00, 0x1c99135e, 0xbfc0a3d7, 0x0a3d7080},	/* -0.130737=f(-0.13)*/
{63, 0,123,__LINE__, 0xbfbede49, 0x95e55a37, 0xbfbeb851, 0xeb851e71},	/* -0.120579=f(-0.12)*/
{64, 0,123,__LINE__, 0xbfbc462d, 0x748f42c5, 0xbfbc28f5, 0xc28f5be2},	/* -0.110446=f(-0.11)*/
{63, 0,123,__LINE__, 0xbfb9af88, 0x77430b38, 0xbfb99999, 0x99999953},	/* -0.100335=f(-0.1)*/
{64, 0,123,__LINE__, 0xbfb71a37, 0x8e5461ea, 0xbfb70a3d, 0x70a3d6c4},	/* -0.0902438=f(-0.09)*/
{64, 0,123,__LINE__, 0xbfb48617, 0xf0ce2c03, 0xbfb47ae1, 0x47ae1435},	/* -0.0801711=f(-0.08)*/
{64, 0,123,__LINE__, 0xbfb1f307, 0x1508a3a2, 0xbfb1eb85, 0x1eb851a6},	/* -0.0701146=f(-0.07)*/
{64, 0,123,__LINE__, 0xbfaec1c5, 0x52b6f47b, 0xbfaeb851, 0xeb851e2d},	/* -0.0600721=f(-0.06)*/
{64, 0,123,__LINE__, 0xbfa99f11, 0x19d15be5, 0xbfa99999, 0x9999990e},	/* -0.0500417=f(-0.05)*/
{63, 0,123,__LINE__, 0xbfa47dad, 0x90f9a68a, 0xbfa47ae1, 0x47ae13ef},	/* -0.0400213=f(-0.04)*/
{64, 0,123,__LINE__, 0xbf9ebaae, 0x1e069446, 0xbf9eb851, 0xeb851da0},	/* -0.030009=f(-0.03)*/
{64, 0,123,__LINE__, 0xbf947b94, 0x43fee8b6, 0xbf947ae1, 0x47ae1362},	/* -0.0200027=f(-0.02)*/
{63, 0,123,__LINE__, 0xbf847b0e, 0x05625d65, 0xbf847ae1, 0x47ae1249},	/* -0.0100003=f(-0.01)*/
{64, 0,123,__LINE__, 0x3cd19000, 0x00000000, 0x3cd19000, 0x00000000},	/* 9.74915e-16=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0x3f847b0e, 0x056261c9, 0x3f847ae1, 0x47ae16ad},	/* 0.0100003=f(0.01)*/
{63, 0,123,__LINE__, 0x3f947b94, 0x43feeae9, 0x3f947ae1, 0x47ae1594},	/* 0.0200027=f(0.02)*/
{63, 0,123,__LINE__, 0x3f9ebaae, 0x1e069679, 0x3f9eb851, 0xeb851fd2},	/* 0.030009=f(0.03)*/
{63, 0,123,__LINE__, 0x3fa47dad, 0x90f9a7a4, 0x3fa47ae1, 0x47ae1508},	/* 0.0400213=f(0.04)*/
{63, 0,123,__LINE__, 0x3fa99f11, 0x19d15cfe, 0x3fa99999, 0x99999a27},	/* 0.0500417=f(0.05)*/
{64, 0,123,__LINE__, 0x3faec1c5, 0x52b6f595, 0x3faeb851, 0xeb851f46},	/* 0.0600721=f(0.06)*/
{64, 0,123,__LINE__, 0x3fb1f307, 0x1508a42f, 0x3fb1eb85, 0x1eb85232},	/* 0.0701146=f(0.07)*/
{64, 0,123,__LINE__, 0x3fb48617, 0xf0ce2c90, 0x3fb47ae1, 0x47ae14c1},	/* 0.0801711=f(0.08)*/
{64, 0,123,__LINE__, 0x3fb71a37, 0x8e546278, 0x3fb70a3d, 0x70a3d750},	/* 0.0902438=f(0.09)*/
{64, 0,123,__LINE__, 0x3fb9af88, 0x77430bc6, 0x3fb99999, 0x999999df},	/* 0.100335=f(0.1)*/
{64, 0,123,__LINE__, 0x3fbc462d, 0x748f4352, 0x3fbc28f5, 0xc28f5c6e},	/* 0.110446=f(0.11)*/
{63, 0,123,__LINE__, 0x3fbede49, 0x95e55ac5, 0x3fbeb851, 0xeb851efd},	/* 0.120579=f(0.12)*/
{64, 0,123,__LINE__, 0x3fc0bc00, 0x1c9913a5, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.130737=f(0.13)*/
{64, 0,123,__LINE__, 0x3fc209ba, 0x89279bef, 0x3fc1eb85, 0x1eb8520e},	/* 0.140922=f(0.14)*/
{63, 0,123,__LINE__, 0x3fc35866, 0x196ac766, 0x3fc33333, 0x33333356},	/* 0.151135=f(0.15)*/
{63, 0,123,__LINE__, 0x3fc4a815, 0x090d4b01, 0x3fc47ae1, 0x47ae149e},	/* 0.161379=f(0.16)*/
{63, 0,123,__LINE__, 0x3fc5f8d9, 0xcaad9336, 0x3fc5c28f, 0x5c28f5e6},	/* 0.171657=f(0.17)*/
{64, 0,123,__LINE__, 0x3fc74ac7, 0x0c0c4f99, 0x3fc70a3d, 0x70a3d72e},	/* 0.18197=f(0.18)*/
{63, 0,123,__LINE__, 0x3fc89def, 0xba561875, 0x3fc851eb, 0x851eb876},	/* 0.19232=f(0.19)*/
{64, 0,123,__LINE__, 0x3fc9f267, 0x068a5611, 0x3fc99999, 0x999999be},	/* 0.20271=f(0.2)*/
{64, 0,123,__LINE__, 0x3fcb4840, 0x6a01a8da, 0x3fcae147, 0xae147b06},	/* 0.213142=f(0.21)*/
{63, 0,123,__LINE__, 0x3fcc9f8f, 0xab162b23, 0x3fcc28f5, 0xc28f5c4e},	/* 0.223619=f(0.22)*/
{63, 0,123,__LINE__, 0x3fcdf868, 0xe1f000d8, 0x3fcd70a3, 0xd70a3d96},	/* 0.234143=f(0.23)*/
{64, 0,123,__LINE__, 0x3fcf52e0, 0x7d78c76f, 0x3fceb851, 0xeb851ede},	/* 0.244717=f(0.24)*/
{64, 0,123,__LINE__, 0x3fd05785, 0xa43c4c6a, 0x3fd00000, 0x00000013},	/* 0.255342=f(0.25)*/
{64, 0,123,__LINE__, 0x3fd1067f, 0x376fbb6b, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.266022=f(0.26)*/
{64, 0,123,__LINE__, 0x3fd1b667, 0xc19f0d48, 0x3fd147ae, 0x147ae15b},	/* 0.276758=f(0.27)*/
{63, 0,123,__LINE__, 0x3fd2674a, 0x4238a5e9, 0x3fd1eb85, 0x1eb851ff},	/* 0.287554=f(0.28)*/
{64, 0,123,__LINE__, 0x3fd31931, 0xf1c18844, 0x3fd28f5c, 0x28f5c2a3},	/* 0.298413=f(0.29)*/
{64, 0,123,__LINE__, 0x3fd3cc2a, 0x44e299ad, 0x3fd33333, 0x33333347},	/* 0.309336=f(0.3)*/
{63, 0,123,__LINE__, 0x3fd4803e, 0xef9469e6, 0x3fd3d70a, 0x3d70a3eb},	/* 0.320328=f(0.31)*/
{64, 0,123,__LINE__, 0x3fd5357b, 0xe86b747c, 0x3fd47ae1, 0x47ae148f},	/* 0.331389=f(0.32)*/
{64, 0,123,__LINE__, 0x3fd5ebed, 0x6c06eda6, 0x3fd51eb8, 0x51eb8533},	/* 0.342525=f(0.33)*/
{64, 0,123,__LINE__, 0x3fd6a3a0, 0x00a44ca3, 0x3fd5c28f, 0x5c28f5d7},	/* 0.353737=f(0.34)*/
{64, 0,123,__LINE__, 0x3fd75ca0, 0x79d9e7fc, 0x3fd66666, 0x6666667b},	/* 0.365028=f(0.35)*/
{64, 0,123,__LINE__, 0x3fd816fb, 0xfc7b1d1a, 0x3fd70a3d, 0x70a3d71f},	/* 0.376403=f(0.36)*/
{64, 0,123,__LINE__, 0x3fd8d2c0, 0x02a8a479, 0x3fd7ae14, 0x7ae147c3},	/* 0.387863=f(0.37)*/
{63, 0,123,__LINE__, 0x3fd98ffa, 0x600fdec1, 0x3fd851eb, 0x851eb867},	/* 0.399413=f(0.38)*/
{63, 0,123,__LINE__, 0x3fda4eb9, 0x465c1598, 0x3fd8f5c2, 0x8f5c290b},	/* 0.411055=f(0.39)*/
{64, 0,123,__LINE__, 0x3fdb0f0b, 0x49dcdcf1, 0x3fd99999, 0x999999af},	/* 0.422793=f(0.4)*/
{64, 0,123,__LINE__, 0x3fdbd0ff, 0x6664f7aa, 0x3fda3d70, 0xa3d70a53},	/* 0.434631=f(0.41)*/
{63, 0,123,__LINE__, 0x3fdc94a5, 0x04655cca, 0x3fdae147, 0xae147af7},	/* 0.446573=f(0.42)*/
{64, 0,123,__LINE__, 0x3fdd5a0b, 0xfe483992, 0x3fdb851e, 0xb851eb9b},	/* 0.458621=f(0.43)*/
{64, 0,123,__LINE__, 0x3fde2144, 0xa61010d6, 0x3fdc28f5, 0xc28f5c3f},	/* 0.470781=f(0.44)*/
{63, 0,123,__LINE__, 0x3fdeea5f, 0xcb3f61cf, 0x3fdccccc, 0xcccccce3},	/* 0.483055=f(0.45)*/
{64, 0,123,__LINE__, 0x3fdfb56e, 0xc10d9036, 0x3fdd70a3, 0xd70a3d87},	/* 0.495449=f(0.46)*/
{64, 0,123,__LINE__, 0x3fe04141, 0xb2770f00, 0x3fde147a, 0xe147ae2b},	/* 0.507966=f(0.47)*/
{64, 0,123,__LINE__, 0x3fe0a8d8, 0x12b7d239, 0x3fdeb851, 0xeb851ecf},	/* 0.520611=f(0.48)*/
{64, 0,123,__LINE__, 0x3fe11184, 0x04bc2fe5, 0x3fdf5c28, 0xf5c28f73},	/* 0.533388=f(0.49)*/
{64, 0,123,__LINE__, 0x3fe17b4f, 0x5bf34759, 0x3fe00000, 0x0000000b},	/* 0.546302=f(0.5)*/
{63, 0,123,__LINE__, 0x3fe1e644, 0x3fcdaefc, 0x3fe051eb, 0x851eb85d},	/* 0.559359=f(0.51)*/
{64, 0,123,__LINE__, 0x3fe2526d, 0x2ffbcd6d, 0x3fe0a3d7, 0x0a3d70af},	/* 0.572562=f(0.52)*/
{64, 0,123,__LINE__, 0x3fe2bfd5, 0x08e8f986, 0x3fe0f5c2, 0x8f5c2901},	/* 0.585917=f(0.53)*/
{64, 0,123,__LINE__, 0x3fe32e87, 0x08779173, 0x3fe147ae, 0x147ae153},	/* 0.59943=f(0.54)*/
{63, 0,123,__LINE__, 0x3fe39e8e, 0xd3028c88, 0x3fe19999, 0x999999a5},	/* 0.613105=f(0.55)*/
{64, 0,123,__LINE__, 0x3fe40ff8, 0x78a9666a, 0x3fe1eb85, 0x1eb851f7},	/* 0.62695=f(0.56)*/
{64, 0,123,__LINE__, 0x3fe482d0, 0x7aeba521, 0x3fe23d70, 0xa3d70a49},	/* 0.640969=f(0.57)*/
{64, 0,123,__LINE__, 0x3fe4f723, 0xd299a7d5, 0x3fe28f5c, 0x28f5c29b},	/* 0.655168=f(0.58)*/
{63, 0,123,__LINE__, 0x3fe56cff, 0xf620e20c, 0x3fe2e147, 0xae147aed},	/* 0.669556=f(0.59)*/
{64, 0,123,__LINE__, 0x3fe5e472, 0xe03a281d, 0x3fe33333, 0x3333333f},	/* 0.684137=f(0.6)*/
{64, 0,123,__LINE__, 0x3fe65d8b, 0x17013eec, 0x3fe3851e, 0xb851eb91},	/* 0.698919=f(0.61)*/
{64, 0,123,__LINE__, 0x3fe6d857, 0xb37d7b38, 0x3fe3d70a, 0x3d70a3e3},	/* 0.713909=f(0.62)*/
{64, 0,123,__LINE__, 0x3fe754e8, 0x69a3e653, 0x3fe428f5, 0xc28f5c35},	/* 0.729115=f(0.63)*/
{63, 0,123,__LINE__, 0x3fe7d34d, 0x90dc17a6, 0x3fe47ae1, 0x47ae1487},	/* 0.744544=f(0.64)*/
{64, 0,123,__LINE__, 0x3fe85398, 0x2d11be4c, 0x3fe4cccc, 0xccccccd9},	/* 0.760204=f(0.65)*/
{64, 0,123,__LINE__, 0x3fe8d5d9, 0xf85db610, 0x3fe51eb8, 0x51eb852b},	/* 0.776105=f(0.66)*/
{64, 0,123,__LINE__, 0x3fe95a25, 0x6d527996, 0x3fe570a3, 0xd70a3d7d},	/* 0.792254=f(0.67)*/
{64, 0,123,__LINE__, 0x3fe9e08d, 0xd1f8d2a8, 0x3fe5c28f, 0x5c28f5cf},	/* 0.808661=f(0.68)*/
{64, 0,123,__LINE__, 0x3fea6927, 0x438ad4df, 0x3fe6147a, 0xe147ae21},	/* 0.825336=f(0.69)*/
{63, 0,123,__LINE__, 0x3feaf406, 0xc2fc78c4, 0x3fe66666, 0x66666673},	/* 0.842288=f(0.7)*/
{64, 0,123,__LINE__, 0x3feb8142, 0x42629a0b, 0x3fe6b851, 0xeb851ec5},	/* 0.859529=f(0.71)*/
{64, 0,123,__LINE__, 0x3fec10f0, 0xb34aaeb4, 0x3fe70a3d, 0x70a3d717},	/* 0.877068=f(0.72)*/
{64, 0,123,__LINE__, 0x3feca32a, 0x16174b05, 0x3fe75c28, 0xf5c28f69},	/* 0.894918=f(0.73)*/
{63, 0,123,__LINE__, 0x3fed3807, 0x8a77750b, 0x3fe7ae14, 0x7ae147bb},	/* 0.91309=f(0.74)*/
{64, 0,123,__LINE__, 0x3fedcfa3, 0x6110ef04, 0x3fe80000, 0x0000000d},	/* 0.931596=f(0.75)*/
{63, 0,123,__LINE__, 0x3fee6a19, 0x2e780213, 0x3fe851eb, 0x851eb85f},	/* 0.950451=f(0.76)*/
{63, 0,123,__LINE__, 0x3fef0785, 0xdf91f8b9, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.969668=f(0.77)*/
{63, 0,123,__LINE__, 0x3fefa807, 0xcf826c5e, 0x3fe8f5c2, 0x8f5c2903},	/* 0.989262=f(0.78)*/
{64, 0,123,__LINE__, 0x3ff025df, 0x6fa369cc, 0x3fe947ae, 0x147ae155},	/* 1.00925=f(0.79)*/
{63, 0,123,__LINE__, 0x3ff07966, 0x4793b618, 0x3fe99999, 0x999999a7},	/* 1.02964=f(0.8)*/
{64, 0,123,__LINE__, 0x3ff0ceaa, 0x0d145c07, 0x3fe9eb85, 0x1eb851f9},	/* 1.05046=f(0.81)*/
{63, 0,123,__LINE__, 0x3ff125bd, 0x49d6af79, 0x3fea3d70, 0xa3d70a4b},	/* 1.07171=f(0.82)*/
{63, 0,123,__LINE__, 0x3ff17eb3, 0x83beb841, 0x3fea8f5c, 0x28f5c29d},	/* 1.09343=f(0.83)*/
{63, 0,123,__LINE__, 0x3ff1d9a1, 0x4e36e765, 0x3feae147, 0xae147aef},	/* 1.11563=f(0.84)*/
{63, 0,123,__LINE__, 0x3ff2369c, 0x5cf4879d, 0x3feb3333, 0x33333341},	/* 1.13833=f(0.85)*/
{64, 0,123,__LINE__, 0x3ff295bb, 0x98513cbe, 0x3feb851e, 0xb851eb93},	/* 1.16156=f(0.86)*/
{63, 0,123,__LINE__, 0x3ff2f717, 0x33620b3d, 0x3febd70a, 0x3d70a3e5},	/* 1.18532=f(0.87)*/
{63, 0,123,__LINE__, 0x3ff35ac8, 0xc3f910d1, 0x3fec28f5, 0xc28f5c37},	/* 1.20966=f(0.88)*/
{63, 0,123,__LINE__, 0x3ff3c0eb, 0x5cc46583, 0x3fec7ae1, 0x47ae1489},	/* 1.2346=f(0.89)*/
{64, 0,123,__LINE__, 0x3ff4299b, 0xa9c2a14a, 0x3feccccc, 0xccccccdb},	/* 1.26016=f(0.9)*/
{63, 0,123,__LINE__, 0x3ff494f8, 0x0f4c58b8, 0x3fed1eb8, 0x51eb852d},	/* 1.28637=f(0.91)*/
{63, 0,123,__LINE__, 0x3ff50320, 0xcbf9abdf, 0x3fed70a3, 0xd70a3d7f},	/* 1.31326=f(0.92)*/
{64, 0,123,__LINE__, 0x3ff57438, 0x1db3e317, 0x3fedc28f, 0x5c28f5d1},	/* 1.34087=f(0.93)*/
{64, 0,123,__LINE__, 0x3ff5e862, 0x6a4d39e3, 0x3fee147a, 0xe147ae23},	/* 1.36923=f(0.94)*/
{63, 0,123,__LINE__, 0x3ff65fc6, 0x6c049575, 0x3fee6666, 0x66666675},	/* 1.39838=f(0.95)*/
{64, 0,123,__LINE__, 0x3ff6da8d, 0x6268377b, 0x3feeb851, 0xeb851ec7},	/* 1.42836=f(0.96)*/
{63, 0,123,__LINE__, 0x3ff758e3, 0x4819d035, 0x3fef0a3d, 0x70a3d719},	/* 1.4592=f(0.97)*/
{63, 0,123,__LINE__, 0x3ff7daf7, 0x0e07fa75, 0x3fef5c28, 0xf5c28f6b},	/* 1.49096=f(0.98)*/
{63, 0,123,__LINE__, 0x3ff860fa, 0xdcc5907d, 0x3fefae14, 0x7ae147bd},	/* 1.52368=f(0.99)*/
{63, 0,123,__LINE__, 0x3ff8eb24, 0x5cbee3be, 0x3ff00000, 0x00000007},	/* 1.55741=f(1)*/
{64, 0,123,__LINE__, 0x3ff979ad, 0x062846b5, 0x3ff028f5, 0xc28f5c30},	/* 1.59221=f(1.01)*/
{64, 0,123,__LINE__, 0x3ffa0cd2, 0x79a1370a, 0x3ff051eb, 0x851eb859},	/* 1.62813=f(1.02)*/
{63, 0,123,__LINE__, 0x3ffaa4d6, 0xe2aca317, 0x3ff07ae1, 0x47ae1482},	/* 1.66524=f(1.03)*/
{62, 0,123,__LINE__, 0x3ffb4201, 0x654a4068, 0x3ff0a3d7, 0x0a3d70ab},	/* 1.70361=f(1.04)*/
{64, 0,123,__LINE__, 0x3ffbe49e, 0x982fe6cb, 0x3ff0cccc, 0xccccccd4},	/* 1.74332=f(1.05)*/
{63, 0,123,__LINE__, 0x3ffc8d01, 0x0d5dddae, 0x3ff0f5c2, 0x8f5c28fd},	/* 1.78442=f(1.06)*/
{63, 0,123,__LINE__, 0x3ffd3b81, 0xeb0fcad0, 0x3ff11eb8, 0x51eb8526},	/* 1.82703=f(1.07)*/
{64, 0,123,__LINE__, 0x3ffdf081, 0x975fac71, 0x3ff147ae, 0x147ae14f},	/* 1.87122=f(1.08)*/
{64, 0,123,__LINE__, 0x3ffeac68, 0x7953b060, 0x3ff170a3, 0xd70a3d78},	/* 1.91709=f(1.09)*/
{63, 0,123,__LINE__, 0x3fff6fa7, 0xd2862170, 0x3ff19999, 0x999999a1},	/* 1.96476=f(1.1)*/
{64, 0,123,__LINE__, 0x40001d5d, 0x5a92169e, 0x3ff1c28f, 0x5c28f5ca},	/* 2.01434=f(1.11)*/
{63, 0,123,__LINE__, 0x40008713, 0x8d550716, 0x3ff1eb85, 0x1eb851f3},	/* 2.06596=f(1.12)*/
{64, 0,123,__LINE__, 0x4000f53f, 0x9047cd58, 0x3ff2147a, 0xe147ae1c},	/* 2.11975=f(1.13)*/
{64, 0,123,__LINE__, 0x40016831, 0x3887b2fa, 0x3ff23d70, 0xa3d70a45},	/* 2.17588=f(1.14)*/
{64, 0,123,__LINE__, 0x4001e03f, 0xefaf53e1, 0x3ff26666, 0x6666666e},	/* 2.2345=f(1.15)*/
{63, 0,123,__LINE__, 0x40025dcb, 0xa00cf2e9, 0x3ff28f5c, 0x28f5c297},	/* 2.2958=f(1.16)*/
{63, 0,123,__LINE__, 0x4002e13d, 0xc435202d, 0x3ff2b851, 0xeb851ec0},	/* 2.35998=f(1.17)*/
{64, 0,123,__LINE__, 0x40036b0a, 0xa04728d0, 0x3ff2e147, 0xae147ae9},	/* 2.42727=f(1.18)*/
{63, 0,123,__LINE__, 0x4003fbb2, 0xac8d6e25, 0x3ff30a3d, 0x70a3d712},	/* 2.4979=f(1.19)*/
{29, 0,123,__LINE__, 0x3cb1a626, 0x33145c07, 0xc01921fb, 0x54442d18},	/* 2.44929e-16=f(-6.28319)*/
{29, 0,123,__LINE__, 0xc333570e, 0xfd768923, 0xc012d97c, 0x7f3321d2},	/* -5.44375e+15=f(-4.71239)*/
{29, 0,123,__LINE__, 0x3ca1a626, 0x33145c07, 0xc00921fb, 0x54442d18},	/* 1.22465e-16=f(-3.14159)*/
{28, 0,123,__LINE__, 0xc34d0296, 0x7c31cdb5, 0xbff921fb, 0x54442d18},	/* -1.63312e+16=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{28, 0,123,__LINE__, 0x434d0296, 0x7c31cdb5, 0x3ff921fb, 0x54442d18},	/* 1.63312e+16=f(1.5708)*/
{29, 0,123,__LINE__, 0xbca1a626, 0x33145c07, 0x400921fb, 0x54442d18},	/* -1.22465e-16=f(3.14159)*/
{29, 0,123,__LINE__, 0x4333570e, 0xfd768923, 0x4012d97c, 0x7f3321d2},	/* 5.44375e+15=f(4.71239)*/
{64, 0,123,__LINE__, 0x40199f0f, 0x242693c3, 0xc03e0000, 0x00000000},	/* 6.40533=f(-30)*/
{63, 0,123,__LINE__, 0xbf9a49b2, 0x510ff817, 0xc03c4ccc, 0xcccccccd},	/* -0.0256718=f(-28.3)*/
{63, 0,123,__LINE__, 0xc0233f61, 0xec28ea0b, 0xc03a9999, 0x9999999a},	/* -9.62379=f(-26.6)*/
{63, 0,123,__LINE__, 0x3fce5738, 0x470a4648, 0xc038e666, 0x66666667},	/* 0.237037=f(-24.9)*/
{64, 0,123,__LINE__, 0xc005210b, 0xfc3dbe54, 0xc0373333, 0x33333334},	/* -2.64114=f(-23.2)*/
{63, 0,123,__LINE__, 0x3fe11d9b, 0xf21d0971, 0xc0358000, 0x00000001},	/* 0.534864=f(-21.5)*/
{63, 0,123,__LINE__, 0xbff66527, 0x7e5f32c1, 0xc033cccc, 0xccccccce},	/* -1.3997=f(-19.8)*/
{64, 0,123,__LINE__, 0x3fedc8d8, 0x8c976b0e, 0xc0321999, 0x9999999b},	/* 0.930767=f(-18.1)*/
{63, 0,123,__LINE__, 0xbfea8540, 0x3fe5751a, 0xc0306666, 0x66666668},	/* -0.828766=f(-16.4)*/
{64, 0,123,__LINE__, 0x3ff95c47, 0x92ef95dd, 0xc02d6666, 0x6666666a},	/* 1.58503=f(-14.7)*/
{64, 0,123,__LINE__, 0xbfdda223, 0x63d46c99, 0xc02a0000, 0x00000004},	/* -0.463021=f(-13)*/
{64, 0,123,__LINE__, 0x4009764d, 0xf48e7ae2, 0xc0269999, 0x9999999e},	/* 3.18277=f(-11.3)*/
{64, 0,123,__LINE__, 0xbfc6a92b, 0x1538da8a, 0xc0233333, 0x33333338},	/* -0.177038=f(-9.6)*/
{63, 0,123,__LINE__, 0x4035b711, 0x9feaed41, 0xc01f9999, 0x999999a3},	/* 21.7151=f(-7.9)*/
{63, 0,123,__LINE__, 0x3fb5583d, 0xee9078b5, 0xc018cccc, 0xccccccd6},	/* 0.0833777=f(-6.2)*/
{64, 0,123,__LINE__, 0xc0128ca0, 0xc62bf65f, 0xc0120000, 0x00000009},	/* -4.63733=f(-4.5)*/
{64, 0,123,__LINE__, 0x3fd6c100, 0x31ec6ced, 0xc0066666, 0x66666678},	/* 0.35553=f(-2.8)*/
{63, 0,123,__LINE__, 0xbfff6fa7, 0xd28621f8, 0xbff19999, 0x999999bd},	/* -1.96476=f(-1.1)*/
{64, 0,123,__LINE__, 0x3fe5e472, 0xe03a27a3, 0x3fe33333, 0x333332ec},	/* 0.684137=f(0.6)*/
{64, 0,123,__LINE__, 0xbff1e84c, 0x9047c388, 0x40026666, 0x66666654},	/* -1.11921=f(2.3)*/
{64, 0,123,__LINE__, 0x3ff2866f, 0x9be4ddbf, 0x400fffff, 0xffffffee},	/* 1.15782=f(4)*/
{63, 0,123,__LINE__, 0xbfe51c83, 0x499b4d30, 0x4016cccc, 0xccccccc4},	/* -0.659731=f(5.7)*/
{63, 0,123,__LINE__, 0x400064ef, 0x1934ec82, 0x401d9999, 0x99999991},	/* 2.04928=f(7.4)*/
{64, 0,123,__LINE__, 0xbfd58c80, 0x5d64d043, 0x40223333, 0x3333332f},	/* -0.336701=f(9.1)*/
{63, 0,123,__LINE__, 0x401430ef, 0x6b305cee, 0x40259999, 0x99999995},	/* 5.04779=f(10.8)*/
{63, 0,123,__LINE__, 0xbfb10410, 0x0d0681de, 0x4028ffff, 0xfffffffb},	/* -0.0664682=f(12.5)*/
{64, 0,123,__LINE__, 0xc02fc9d9, 0xb26ed77b, 0x402c6666, 0x66666661},	/* -15.8942=f(14.2)*/
{63, 0,123,__LINE__, 0x3fc8e32b, 0xf9e67cb6, 0x402fcccc, 0xccccccc7},	/* 0.194433=f(15.9)*/
{64, 0,123,__LINE__, 0xc0080a76, 0xc02a4902, 0x40319999, 0x99999997},	/* -3.00511=f(17.6)*/
{64, 0,123,__LINE__, 0x3fdef359, 0x829ee0fa, 0x40334ccc, 0xccccccca},	/* 0.483603=f(19.3)*/
{63, 0,123,__LINE__, 0xbff870a2, 0x4bce3345, 0x4034ffff, 0xfffffffd},	/* -1.5275=f(21)*/
{63, 0,123,__LINE__, 0x3feb70ea, 0x1a297e1a, 0x4036b333, 0x33333330},	/* 0.857534=f(22.7)*/
{63, 0,123,__LINE__, 0xbfeccbb4, 0x686d348b, 0x40386666, 0x66666663},	/* -0.899866=f(24.4)*/
{63, 0,123,__LINE__, 0x3ff735e4, 0x5e7305e0, 0x403a1999, 0x99999996},	/* 1.45066=f(26.1)*/
{64, 0,123,__LINE__, 0xbfe06e04, 0xfc5ca3b7, 0x403bcccc, 0xccccccc9},	/* -0.51343=f(27.8)*/
{64, 0,123,__LINE__, 0x4006407d, 0xaf0ccd5f, 0x403d7fff, 0xfffffffc},	/* 2.78149=f(29.5)*/
{0},};
void test_tan(m)   {run_vector_1(m,tan_vec,(char *)(tan),"tan","dd");   }	
