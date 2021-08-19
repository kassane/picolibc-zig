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
 one_line_type jn_vec[] = {
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 1=f(0, 0)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3ff00000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(1, 0)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x40000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(2, 0)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x40080000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(3, 0)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x40100000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(4, 0)*/
{64, 0,123,__LINE__, 0x3feffae1, 0x7c1aebb8, 0x00000000, 0x00000000, 0x3fa99999, 0x9999999a},	/* 0.999375=f(0, 0.05)*/
{64, 0,123,__LINE__, 0x3f99978d, 0x5dda2f5d, 0x3ff00000, 0x00000000, 0x3fa99999, 0x9999999a},	/* 0.0249922=f(1, 0.05)*/
{63, 0,123,__LINE__, 0x3f3479c9, 0xae7be13f, 0x40000000, 0x00000000, 0x3fa99999, 0x9999999a},	/* 0.000312435=f(2, 0.05)*/
{63, 0,123,__LINE__, 0x3ec5d788, 0x15461383, 0x40080000, 0x00000000, 0x3fa99999, 0x9999999a},	/* 2.60376e-06=f(3, 0.05)*/
{63, 0,123,__LINE__, 0x3e51795d, 0x7442f120, 0x40100000, 0x00000000, 0x3fa99999, 0x9999999a},	/* 1.6274e-08=f(4, 0.05)*/
{64, 0,123,__LINE__, 0x3fefeb88, 0x65590ab3, 0x00000000, 0x00000000, 0x3fb99999, 0x9999999a},	/* 0.997502=f(0, 0.1)*/
{64, 0,123,__LINE__, 0x3fa99169, 0x52566dfd, 0x3ff00000, 0x00000000, 0x3fb99999, 0x9999999a},	/* 0.0499375=f(1, 0.1)*/
{64, 0,123,__LINE__, 0x3f547683, 0x25fd91e1, 0x40000000, 0x00000000, 0x3fb99999, 0x9999999a},	/* 0.00124896=f(2, 0.1)*/
{64, 0,123,__LINE__, 0x3ef5d4e9, 0x3442db3c, 0x40080000, 0x00000000, 0x3fb99999, 0x9999999a},	/* 2.08203e-05=f(3, 0.1)*/
{62, 0,123,__LINE__, 0x3e9177b0, 0x11ba6ea2, 0x40100000, 0x00000000, 0x3fb99999, 0x9999999a},	/* 2.60286e-07=f(4, 0.1)*/
{63, 0,123,__LINE__, 0x3fefd1fc, 0x19331410, 0x00000000, 0x00000000, 0x3fc33333, 0x33333334},	/* 0.994383=f(0, 0.15)*/
{63, 0,123,__LINE__, 0x3fb32563, 0x927c0ade, 0x3ff00000, 0x00000000, 0x3fc33333, 0x33333334},	/* 0.0747893=f(1, 0.15)*/
{63, 0,123,__LINE__, 0x3f66ff30, 0x46535fa0, 0x40000000, 0x00000000, 0x3fc33333, 0x33333334},	/* 0.00280723=f(2, 0.15)*/
{64, 0,123,__LINE__, 0x3f1267f5, 0xd0689e2d, 0x40080000, 0x00000000, 0x3fc33333, 0x33333334},	/* 7.02137e-05=f(3, 0.15)*/
{64, 0,123,__LINE__, 0x3eb617f1, 0x7b30b575, 0x40100000, 0x00000000, 0x3fc33333, 0x33333334},	/* 1.31688e-06=f(4, 0.15)*/
{64, 0,123,__LINE__, 0x3fefae48, 0xd9bfc0d4, 0x00000000, 0x00000000, 0x3fc99999, 0x9999999a},	/* 0.990025=f(0, 0.2)*/
{63, 0,123,__LINE__, 0x3fb978e2, 0xf61c3bd5, 0x3ff00000, 0x00000000, 0x3fc99999, 0x9999999a},	/* 0.0995008=f(1, 0.2)*/
{64, 0,123,__LINE__, 0x3f74696c, 0xf1c4fb46, 0x40000000, 0x00000000, 0x3fc99999, 0x9999999a},	/* 0.00498335=f(2, 0.2)*/
{64, 0,123,__LINE__, 0x3f25ca70, 0x33fc81fd, 0x40080000, 0x00000000, 0x3fc99999, 0x9999999a},	/* 0.00016625=f(3, 0.2)*/
{63, 0,123,__LINE__, 0x3ed170fb, 0xdefa5db9, 0x40100000, 0x00000000, 0x3fc99999, 0x9999999a},	/* 4.15834e-06=f(4, 0.2)*/
{64, 0,123,__LINE__, 0x3fef807f, 0xc72aa864, 0x00000000, 0x00000000, 0x3fd00000, 0x00000000},	/* 0.984436=f(0, 0.25)*/
{64, 0,123,__LINE__, 0x3fbfc02a, 0x9c749ee9, 0x3ff00000, 0x00000000, 0x3fd00000, 0x00000000},	/* 0.124026=f(1, 0.25)*/
{64, 0,123,__LINE__, 0x3f7fd56a, 0xa4fb4242, 0x40000000, 0x00000000, 0x3fd00000, 0x00000000},	/* 0.00777189=f(2, 0.25)*/
{64, 0,123,__LINE__, 0x3f354008, 0x86a35a2f, 0x40080000, 0x00000000, 0x3fd00000, 0x00000000},	/* 0.000324251=f(3, 0.25)*/
{64, 0,123,__LINE__, 0x3ee54449, 0xf38a05f2, 0x40100000, 0x00000000, 0x3fd00000, 0x00000000},	/* 1.01408e-05=f(4, 0.25)*/
{64, 0,123,__LINE__, 0x3fef48b6, 0xd692fb9e, 0x00000000, 0x00000000, 0x3fd33333, 0x33333333},	/* 0.977626=f(0, 0.3)*/
{63, 0,123,__LINE__, 0x3fc2fc1c, 0x68a32002, 0x3ff00000, 0x00000000, 0x3fd33333, 0x33333333},	/* 0.148319=f(1, 0.3)*/
{63, 0,123,__LINE__, 0x3f86de20, 0x9f39196f, 0x40000000, 0x00000000, 0x3fd33333, 0x33333333},	/* 0.0111659=f(2, 0.3)*/
{64, 0,123,__LINE__, 0x3f42541c, 0x0c752fd9, 0x40080000, 0x00000000, 0x3fd33333, 0x33333333},	/* 0.000559343=f(3, 0.3)*/
{64, 0,123,__LINE__, 0x3ef604e0, 0xb2c4c00a, 0x40100000, 0x00000000, 0x3fd33333, 0x33333333},	/* 2.0999e-05=f(4, 0.3)*/
{64, 0,123,__LINE__, 0x3fef0708, 0xc6573ae5, 0x00000000, 0x00000000, 0x3fd66666, 0x66666666},	/* 0.969609=f(0, 0.35)*/
{63, 0,123,__LINE__, 0x3fc60f09, 0xfed3cc80, 0x3ff00000, 0x00000000, 0x3fd66666, 0x66666666},	/* 0.172334=f(1, 0.35)*/
{63, 0,123,__LINE__, 0x3f8f0a84, 0xda6806f8, 0x40000000, 0x00000000, 0x3fd66666, 0x66666666},	/* 0.0151568=f(2, 0.35)*/
{64, 0,123,__LINE__, 0x3f4d0bc1, 0xbfa630ab, 0x40080000, 0x00000000, 0x3fd66666, 0x66666666},	/* 0.000886411=f(3, 0.35)*/
{64, 0,123,__LINE__, 0x3f045d05, 0x37bf774c, 0x40100000, 0x00000000, 0x3fd66666, 0x66666666},	/* 3.884e-05=f(4, 0.35)*/
{63, 0,123,__LINE__, 0x3feebb95, 0x0fd4747e, 0x00000000, 0x00000000, 0x3fd99999, 0x99999999},	/* 0.960398=f(0, 0.4)*/
{64, 0,123,__LINE__, 0x3fc91766, 0x1ebb8177, 0x3ff00000, 0x00000000, 0x3fd99999, 0x99999999},	/* 0.196027=f(1, 0.4)*/
{62, 0,123,__LINE__, 0x3f943552, 0xd2bdaaf1, 0x40000000, 0x00000000, 0x3fd99999, 0x99999999},	/* 0.0197347=f(2, 0.4)*/
{64, 0,123,__LINE__, 0x3f55a0b4, 0x58ca1be8, 0x40080000, 0x00000000, 0x3fd99999, 0x99999999},	/* 0.00132005=f(3, 0.4)*/
{63, 0,123,__LINE__, 0x3f115640, 0x7fcf3788, 0x40100000, 0x00000000, 0x3fd99999, 0x99999999},	/* 6.61351e-05=f(4, 0.4)*/
{63, 0,123,__LINE__, 0x3fee667f, 0xd6a10560, 0x00000000, 0x00000000, 0x3fdccccc, 0xcccccccc},	/* 0.950012=f(0, 0.45)*/
{64, 0,123,__LINE__, 0x3fcc13be, 0x77afcc52, 0x3ff00000, 0x00000000, 0x3fdccccc, 0xcccccccc},	/* 0.219353=f(1, 0.45)*/
{64, 0,123,__LINE__, 0x3f997c40, 0x76110a23, 0x40000000, 0x00000000, 0x3fdccccc, 0xcccccccc},	/* 0.024888=f(2, 0.45)*/
{62, 0,123,__LINE__, 0x3f5eb65b, 0x151f786a, 0x40080000, 0x00000000, 0x3fdccccc, 0xcccccccc},	/* 0.00187453=f(3, 0.45)*/
{62, 0,123,__LINE__, 0x3f1bb61b, 0x892f8cfd, 0x40100000, 0x00000000, 0x3fdccccc, 0xcccccccc},	/* 0.00010571=f(4, 0.45)*/
{64, 0,123,__LINE__, 0x3fee07f1, 0xd54c3f35, 0x00000000, 0x00000000, 0x3fdfffff, 0xffffffff},	/* 0.93847=f(0, 0.5)*/
{64, 0,123,__LINE__, 0x3fcf02a7, 0x1f4870d6, 0x3ff00000, 0x00000000, 0x3fdfffff, 0xffffffff},	/* 0.242268=f(1, 0.5)*/
{63, 0,123,__LINE__, 0x3f9f56a9, 0x3f863442, 0x40000000, 0x00000000, 0x3fdfffff, 0xffffffff},	/* 0.030604=f(2, 0.5)*/
{63, 0,123,__LINE__, 0x3f650088, 0x0f70db58, 0x40080000, 0x00000000, 0x3fdfffff, 0xffffffff},	/* 0.00256373=f(3, 0.5)*/
{62, 0,123,__LINE__, 0x3f25116b, 0xd18a61a9, 0x40100000, 0x00000000, 0x3fdfffff, 0xffffffff},	/* 0.000160736=f(4, 0.5)*/
{63, 0,123,__LINE__, 0x3feda018, 0x47adb930, 0x00000000, 0x00000000, 0x3fe19999, 0x99999999},	/* 0.925793=f(0, 0.55)*/
{64, 0,123,__LINE__, 0x3fd0f15d, 0xa9534f53, 0x3ff00000, 0x00000000, 0x3fe19999, 0x99999999},	/* 0.264732=f(1, 0.55)*/
{64, 0,123,__LINE__, 0x3fa2e066, 0x08ca87ed, 0x40000000, 0x00000000, 0x3fe19999, 0x99999999},	/* 0.0368683=f(2, 0.55)*/
{62, 0,123,__LINE__, 0x3f6bdca3, 0xb2679433, 0x40080000, 0x00000000, 0x3fe19999, 0x99999999},	/* 0.00340111=f(3, 0.55)*/
{62, 0,123,__LINE__, 0x3f2ec3c2, 0x4d8baa6c, 0x40100000, 0x00000000, 0x3fe19999, 0x99999999},	/* 0.000234716=f(4, 0.55)*/
{63, 0,123,__LINE__, 0x3fed2f24, 0xd2d06e4d, 0x00000000, 0x00000000, 0x3fe33333, 0x33333333},	/* 0.912005=f(0, 0.6)*/
{63, 0,123,__LINE__, 0x3fd2594f, 0x19ddc930, 0x3ff00000, 0x00000000, 0x3fe33333, 0x33333333},	/* 0.286701=f(1, 0.6)*/
{63, 0,123,__LINE__, 0x3fa65b45, 0x84be1029, 0x40000000, 0x00000000, 0x3fe33333, 0x33333333},	/* 0.0436651=f(2, 0.6)*/
{64, 0,123,__LINE__, 0x3f72055f, 0xdad11213, 0x40080000, 0x00000000, 0x3fe33333, 0x33333333},	/* 0.00439966=f(3, 0.6)*/
{64, 0,123,__LINE__, 0x3f35b926, 0x63a336fb, 0x40100000, 0x00000000, 0x3fe33333, 0x33333333},	/* 0.00033147=f(4, 0.6)*/
{64, 0,123,__LINE__, 0x3fecb54d, 0x6a872136, 0x00000000, 0x00000000, 0x3fe4cccc, 0xcccccccd},	/* 0.897132=f(0, 0.65)*/
{64, 0,123,__LINE__, 0x3fd3b87d, 0xc1127dbb, 0x3ff00000, 0x00000000, 0x3fe4cccc, 0xcccccccd},	/* 0.308135=f(1, 0.65)*/
{63, 0,123,__LINE__, 0x3faa19b6, 0xfbcb3e99, 0x40000000, 0x00000000, 0x3fe4cccc, 0xcccccccd},	/* 0.0509774=f(2, 0.65)*/
{63, 0,123,__LINE__, 0x3f76d285, 0x13b1873a, 0x40080000, 0x00000000, 0x3fe4cccc, 0xcccccccd},	/* 0.00557186=f(3, 0.65)*/
{63, 0,123,__LINE__, 0x3f3dd3be, 0xb2075516, 0x40100000, 0x00000000, 0x3fe4cccc, 0xcccccccd},	/* 0.000455126=f(4, 0.65)*/
{64, 0,123,__LINE__, 0x3fec32cc, 0x34b8cc59, 0x00000000, 0x00000000, 0x3fe66666, 0x66666667},	/* 0.881201=f(0, 0.7)*/
{64, 0,123,__LINE__, 0x3fd50e44, 0x279c0546, 0x3ff00000, 0x00000000, 0x3fe66666, 0x66666667},	/* 0.328996=f(1, 0.7)*/
{62, 0,123,__LINE__, 0x3fae1952, 0x86f3b2fe, 0x40000000, 0x00000000, 0x3fe66666, 0x66666667},	/* 0.0587869=f(2, 0.7)*/
{63, 0,123,__LINE__, 0x3f7c6245, 0x0da7c942, 0x40080000, 0x00000000, 0x3fe66666, 0x66666667},	/* 0.00692965=f(3, 0.7)*/
{64, 0,123,__LINE__, 0x3f43fddd, 0x592928af, 0x40100000, 0x00000000, 0x3fe66666, 0x66666667},	/* 0.000610097=f(4, 0.7)*/
{63, 0,123,__LINE__, 0x3feba7df, 0x6a752a18, 0x00000000, 0x00000000, 0x3fe80000, 0x00000001},	/* 0.864242=f(0, 0.75)*/
{64, 0,123,__LINE__, 0x3fd65a01, 0xd66b68bd, 0x3ff00000, 0x00000000, 0x3fe80000, 0x00000001},	/* 0.349244=f(1, 0.75)*/
{62, 0,123,__LINE__, 0x3fb12bc2, 0xf0d061bf, 0x40000000, 0x00000000, 0x3fe80000, 0x00000001},	/* 0.067074=f(2, 0.75)*/
{64, 0,123,__LINE__, 0x3f816042, 0xaaa332db, 0x40080000, 0x00000000, 0x3fe80000, 0x00000001},	/* 0.00848438=f(3, 0.75)*/
{62, 0,123,__LINE__, 0x3f4a3fdc, 0xe9688cf4, 0x40100000, 0x00000000, 0x3fe80000, 0x00000001},	/* 0.00080107=f(4, 0.75)*/
{64, 0,123,__LINE__, 0x3feb14c9, 0x36e29d84, 0x00000000, 0x00000000, 0x3fe99999, 0x9999999b},	/* 0.846287=f(0, 0.8)*/
{64, 0,123,__LINE__, 0x3fd79b1b, 0xab574ece, 0x3ff00000, 0x00000000, 0x3fe99999, 0x9999999b},	/* 0.368842=f(1, 0.8)*/
{62, 0,123,__LINE__, 0x3fb368ca, 0xfa5427e0, 0x40000000, 0x00000000, 0x3fe99999, 0x9999999b},	/* 0.0758178=f(2, 0.8)*/
{64, 0,123,__LINE__, 0x3f84fc41, 0xb23c60e3, 0x40080000, 0x00000000, 0x3fe99999, 0x9999999b},	/* 0.0102468=f(3, 0.8)*/
{64, 0,123,__LINE__, 0x3f50eca7, 0x311cbd4c, 0x40100000, 0x00000000, 0x3fe99999, 0x9999999b},	/* 0.00103298=f(4, 0.8)*/
{64, 0,123,__LINE__, 0x3fea79cf, 0x9417f64a, 0x00000000, 0x00000000, 0x3feb3333, 0x33333335},	/* 0.827369=f(0, 0.85)*/
{64, 0,123,__LINE__, 0x3fd8d0fc, 0x2ac09609, 0x3ff00000, 0x00000000, 0x3feb3333, 0x33333335},	/* 0.387755=f(1, 0.85)*/
{63, 0,123,__LINE__, 0x3fb5c250, 0x3ceb775c, 0x40000000, 0x00000000, 0x3feb3333, 0x33333335},	/* 0.0849962=f(2, 0.85)*/
{63, 0,123,__LINE__, 0x3f890a65, 0x7f429004, 0x40080000, 0x00000000, 0x3feb3333, 0x33333335},	/* 0.0122269=f(3, 0.85)*/
{63, 0,123,__LINE__, 0x3f557acc, 0xd794bfe9, 0x40100000, 0x00000000, 0x3feb3333, 0x33333335},	/* 0.00131102=f(4, 0.85)*/
{63, 0,123,__LINE__, 0x3fe9d73c, 0x25f5b278, 0x00000000, 0x00000000, 0x3feccccc, 0xcccccccf},	/* 0.807524=f(0, 0.9)*/
{64, 0,123,__LINE__, 0x3fd9fb13, 0xce0f024e, 0x3ff00000, 0x00000000, 0x3feccccc, 0xcccccccf},	/* 0.40595=f(1, 0.9)*/
{62, 0,123,__LINE__, 0x3fb836ce, 0xdb8280b1, 0x40000000, 0x00000000, 0x3feccccc, 0xcccccccf},	/* 0.0945863=f(2, 0.9)*/
{62, 0,123,__LINE__, 0x3f8d8f96, 0x8206eb0c, 0x40080000, 0x00000000, 0x3feccccc, 0xcccccccf},	/* 0.014434=f(3, 0.9)*/
{63, 0,123,__LINE__, 0x3f5ae0f9, 0x8b7b7575, 0x40100000, 0x00000000, 0x3feccccc, 0xcccccccf},	/* 0.00164055=f(4, 0.9)*/
{64, 0,123,__LINE__, 0x3fe92d5c, 0x13137d0b, 0x00000000, 0x00000000, 0x3fee6666, 0x66666669},	/* 0.786787=f(0, 0.95)*/
{64, 0,123,__LINE__, 0x3fdb18d9, 0x4eda7476, 0x3ff00000, 0x00000000, 0x3fee6666, 0x66666669},	/* 0.423392=f(1, 0.95)*/
{64, 0,123,__LINE__, 0x3fbac4b1, 0x27d714b1, 0x40000000, 0x00000000, 0x3fee6666, 0x66666669},	/* 0.104564=f(2, 0.95)*/
{62, 0,123,__LINE__, 0x3f91482d, 0xb156b6bf, 0x40080000, 0x00000000, 0x3fee6666, 0x66666669},	/* 0.0168769=f(3, 0.95)*/
{62, 0,123,__LINE__, 0x3f609b4b, 0x7ea6887b, 0x40100000, 0x00000000, 0x3fee6666, 0x66666669},	/* 0.00202718=f(4, 0.95)*/
{63, 0,123,__LINE__, 0x3fe87c7f, 0xdbd7b8ef, 0x00000000, 0x00000000, 0x3ff00000, 0x00000001},	/* 0.765198=f(0, 1)*/
{64, 0,123,__LINE__, 0x3fdc29c9, 0xee970c6e, 0x3ff00000, 0x00000000, 0x3ff00000, 0x00000001},	/* 0.440051=f(1, 1)*/
{63, 0,123,__LINE__, 0x3fbd6a50, 0x95fa9bea, 0x40000000, 0x00000000, 0x3ff00000, 0x00000001},	/* 0.114903=f(2, 1)*/
{63, 0,123,__LINE__, 0x3f94086a, 0x7638f7a7, 0x40080000, 0x00000000, 0x3ff00000, 0x00000001},	/* 0.0195634=f(3, 1)*/
{62, 0,123,__LINE__, 0x3f6449e3, 0x6b5af1b6, 0x40100000, 0x00000000, 0x3ff00000, 0x00000001},	/* 0.00247664=f(4, 1)*/
{63, 0,123,__LINE__, 0x3fe7c4fb, 0x2fcfebf0, 0x00000000, 0x00000000, 0x3ff0cccc, 0xccccccce},	/* 0.742796=f(0, 1.05)*/
{63, 0,123,__LINE__, 0x3fdd2d69, 0xba9c976d, 0x3ff00000, 0x00000000, 0x3ff0cccc, 0xccccccce},	/* 0.455897=f(1, 1.05)*/
{64, 0,123,__LINE__, 0x3fc012fb, 0x5cfc78b3, 0x40000000, 0x00000000, 0x3ff0cccc, 0xccccccce},	/* 0.125579=f(2, 1.05)*/
{64, 0,123,__LINE__, 0x3f970a5d, 0x1eef9226, 0x40080000, 0x00000000, 0x3ff0cccc, 0xccccccce},	/* 0.0225005=f(3, 1.05)*/
{64, 0,123,__LINE__, 0x3f6888a5, 0x228510b7, 0x40100000, 0x00000000, 0x3ff0cccc, 0xccccccce},	/* 0.00299484=f(4, 1.05)*/
{64, 0,123,__LINE__, 0x3fe70724, 0xc161d44c, 0x00000000, 0x00000000, 0x3ff19999, 0x9999999b},	/* 0.719622=f(0, 1.1)*/
{64, 0,123,__LINE__, 0x3fde2343, 0xcc63c37e, 0x3ff00000, 0x00000000, 0x3ff19999, 0x9999999b},	/* 0.470902=f(1, 1.1)*/
{63, 0,123,__LINE__, 0x3fc17aef, 0x27865e61, 0x40000000, 0x00000000, 0x3ff19999, 0x9999999b},	/* 0.136564=f(2, 1.1)*/
{64, 0,123,__LINE__, 0x3f9a4faa, 0xa04e8191, 0x40080000, 0x00000000, 0x3ff19999, 0x9999999b},	/* 0.0256945=f(3, 1.1)*/
{62, 0,123,__LINE__, 0x3f6d6434, 0x5a55c317, 0x40100000, 0x00000000, 0x3ff19999, 0x9999999b},	/* 0.00358782=f(4, 1.1)*/
{63, 0,123,__LINE__, 0x3fe64356, 0x17eddc82, 0x00000000, 0x00000000, 0x3ff26666, 0x66666668},	/* 0.69572=f(0, 1.15)*/
{64, 0,123,__LINE__, 0x3fdf0aea, 0x85d5bf18, 0x3ff00000, 0x00000000, 0x3ff26666, 0x66666668},	/* 0.485041=f(1, 1.15)*/
{62, 0,123,__LINE__, 0x3fc2ec1a, 0x23e21b7a, 0x40000000, 0x00000000, 0x3ff26666, 0x66666668},	/* 0.14783=f(2, 1.15)*/
{62, 0,123,__LINE__, 0x3f9dd9bf, 0xb5a70ae0, 0x40080000, 0x00000000, 0x3ff26666, 0x66666668},	/* 0.029151=f(3, 1.15)*/
{63, 0,123,__LINE__, 0x3f7174b5, 0x74230429, 0x40100000, 0x00000000, 0x3ff26666, 0x66666668},	/* 0.00426169=f(4, 1.15)*/
{63, 0,123,__LINE__, 0x3fe579eb, 0x607c7c42, 0x00000000, 0x00000000, 0x3ff33333, 0x33333335},	/* 0.671133=f(0, 1.2)*/
{64, 0,123,__LINE__, 0x3fdfe3f7, 0xc98d2caf, 0x3ff00000, 0x00000000, 0x3ff33333, 0x33333335},	/* 0.498289=f(1, 1.2)*/
{63, 0,123,__LINE__, 0x3fc4658c, 0x7339f933, 0x40000000, 0x00000000, 0x3ff33333, 0x33333335},	/* 0.159349=f(2, 1.2)*/
{63, 0,123,__LINE__, 0x3fa0d4e7, 0xb3f0ea70, 0x40080000, 0x00000000, 0x3ff33333, 0x33333335},	/* 0.0328743=f(3, 1.2)*/
{62, 0,123,__LINE__, 0x3f7492a5, 0xb6657ad8, 0x40100000, 0x00000000, 0x3ff33333, 0x33333335},	/* 0.00502267=f(4, 1.2)*/
{64, 0,123,__LINE__, 0x3fe4ab43, 0x3d10e1be, 0x00000000, 0x00000000, 0x3ff40000, 0x00000002},	/* 0.645906=f(0, 1.25)*/
{64, 0,123,__LINE__, 0x3fe05706, 0x9774d334, 0x3ff00000, 0x00000000, 0x3ff40000, 0x00000002},	/* 0.510623=f(1, 1.25)*/
{63, 0,123,__LINE__, 0x3fc5e650, 0x6ea82714, 0x40000000, 0x00000000, 0x3ff40000, 0x00000002},	/* 0.171091=f(2, 1.25)*/
{63, 0,123,__LINE__, 0x3fa2e068, 0xdde7f41c, 0x40080000, 0x00000000, 0x3ff40000, 0x00000002},	/* 0.0368684=f(3, 1.25)*/
{64, 0,123,__LINE__, 0x3f781279, 0xda92ee2f, 0x40100000, 0x00000000, 0x3ff40000, 0x00000002},	/* 0.005877=f(4, 1.25)*/
{64, 0,123,__LINE__, 0x3fe3d7be, 0x92bbfbb9, 0x00000000, 0x00000000, 0x3ff4cccc, 0xcccccccf},	/* 0.620086=f(0, 1.3)*/
{63, 0,123,__LINE__, 0x3fe0b46a, 0x18ecb9d3, 0x3ff00000, 0x00000000, 0x3ff4cccc, 0xcccccccf},	/* 0.522023=f(1, 1.3)*/
{62, 0,123,__LINE__, 0x3fc76d6b, 0x3ac0d75a, 0x40000000, 0x00000000, 0x3ff4cccc, 0xcccccccf},	/* 0.183027=f(2, 1.3)*/
{64, 0,123,__LINE__, 0x3fa50fc1, 0x44526e78, 0x40080000, 0x00000000, 0x3ff4cccc, 0xcccccccf},	/* 0.0411358=f(3, 1.3)*/
{62, 0,123,__LINE__, 0x3f7bfac7, 0x6edc65a8, 0x40100000, 0x00000000, 0x3ff4cccc, 0xcccccccf},	/* 0.00683096=f(4, 1.3)*/
{64, 0,123,__LINE__, 0x3fe2ffc0, 0x568baaa2, 0x00000000, 0x00000000, 0x3ff59999, 0x9999999c},	/* 0.59372=f(0, 1.35)*/
{64, 0,123,__LINE__, 0x3fe109ff, 0x2f1fc3ec, 0x3ff00000, 0x00000000, 0x3ff59999, 0x9999999c},	/* 0.53247=f(1, 1.35)*/
{62, 0,123,__LINE__, 0x3fc8f9dd, 0x5e41b883, 0x40000000, 0x00000000, 0x3ff59999, 0x9999999c},	/* 0.195125=f(2, 1.35)*/
{62, 0,123,__LINE__, 0x3fa76330, 0x3bb95572, 0x40080000, 0x00000000, 0x3ff59999, 0x9999999c},	/* 0.0456786=f(3, 1.35)*/
{63, 0,123,__LINE__, 0x3f802911, 0xcfdfbbf6, 0x40100000, 0x00000000, 0x3ff59999, 0x9999999c},	/* 0.00789083=f(4, 1.35)*/
{64, 0,123,__LINE__, 0x3fe223ad, 0x59727c9e, 0x00000000, 0x00000000, 0x3ff66666, 0x66666669},	/* 0.566855=f(0, 1.4)*/
{64, 0,123,__LINE__, 0x3fe157a2, 0xbb6f3312, 0x3ff00000, 0x00000000, 0x3ff66666, 0x66666669},	/* 0.541948=f(1, 1.4)*/
{63, 0,123,__LINE__, 0x3fca8aa3, 0x5b8ce82f, 0x40000000, 0x00000000, 0x3ff66666, 0x66666669},	/* 0.207356=f(2, 1.4)*/
{63, 0,123,__LINE__, 0x3fa9dad6, 0x163299ef, 0x40080000, 0x00000000, 0x3ff66666, 0x66666669},	/* 0.0504977=f(3, 1.4)*/
{63, 0,123,__LINE__, 0x3f828f8e, 0x0cde14e5, 0x40100000, 0x00000000, 0x3ff66666, 0x66666669},	/* 0.00906287=f(4, 1.4)*/
{63, 0,123,__LINE__, 0x3fe143ec, 0x1344e614, 0x00000000, 0x00000000, 0x3ff73333, 0x33333336},	/* 0.539541=f(0, 1.45)*/
{63, 0,123,__LINE__, 0x3fe19d35, 0xcbd98b74, 0x3ff00000, 0x00000000, 0x3ff73333, 0x33333336},	/* 0.550441=f(1, 1.45)*/
{64, 0,123,__LINE__, 0x3fcc1eb6, 0x4c93d2fc, 0x40000000, 0x00000000, 0x3ff73333, 0x33333336},	/* 0.219687=f(2, 1.45)*/
{62, 0,123,__LINE__, 0x3fac76b3, 0xcd3060b3, 0x40080000, 0x00000000, 0x3ff73333, 0x33333336},	/* 0.0555931=f(3, 1.45)*/
{63, 0,123,__LINE__, 0x3f853417, 0xedc03cbf, 0x40100000, 0x00000000, 0x3ff73333, 0x33333336},	/* 0.0103533=f(4, 1.45)*/
{63, 0,123,__LINE__, 0x3fe060e4, 0x6ce96518, 0x00000000, 0x00000000, 0x3ff80000, 0x00000003},	/* 0.511828=f(0, 1.5)*/
{64, 0,123,__LINE__, 0x3fe1da9d, 0xa9d6fc82, 0x3ff00000, 0x00000000, 0x3ff80000, 0x00000003},	/* 0.557937=f(1, 1.5)*/
{62, 0,123,__LINE__, 0x3fcdb50c, 0x80d503a1, 0x40000000, 0x00000000, 0x3ff80000, 0x00000003},	/* 0.232088=f(2, 1.5)*/
{62, 0,123,__LINE__, 0x3faf36aa, 0xc0c5b3bd, 0x40080000, 0x00000000, 0x3ff80000, 0x00000003},	/* 0.060964=f(3, 1.5)*/
{63, 0,123,__LINE__, 0x3f8819e3, 0xff0b0188, 0x40100000, 0x00000000, 0x3ff80000, 0x00000003},	/* 0.0117681=f(4, 1.5)*/
{63, 0,123,__LINE__, 0x3fdef5ff, 0x13b2d491, 0x00000000, 0x00000000, 0x3ff8cccc, 0xccccccd0},	/* 0.483764=f(0, 1.55)*/
{63, 0,123,__LINE__, 0x3fe20fc3, 0xe6dcefff, 0x3ff00000, 0x00000000, 0x3ff8cccc, 0xccccccd0},	/* 0.564424=f(1, 1.55)*/
{62, 0,123,__LINE__, 0x3fcf4c9a, 0x1d0ea962, 0x40000000, 0x00000000, 0x3ff8cccc, 0xccccccd0},	/* 0.244525=f(2, 1.55)*/
{62, 0,123,__LINE__, 0x3fb10d3e, 0x464b660c, 0x40080000, 0x00000000, 0x3ff8cccc, 0xccccccd0},	/* 0.0666083=f(3, 1.55)*/
{62, 0,123,__LINE__, 0x3f8b4418, 0x3c555ebd, 0x40100000, 0x00000000, 0x3ff8cccc, 0xccccccd0},	/* 0.0133135=f(4, 1.55)*/
{63, 0,123,__LINE__, 0x3fdd254f, 0x22227935, 0x00000000, 0x00000000, 0x3ff99999, 0x9999999d},	/* 0.455402=f(0, 1.6)*/
{64, 0,123,__LINE__, 0x3fe23c96, 0x66824fe1, 0x3ff00000, 0x00000000, 0x3ff99999, 0x9999999d},	/* 0.569896=f(1, 1.6)*/
{64, 0,123,__LINE__, 0x3fd07228, 0xde234e77, 0x40000000, 0x00000000, 0x3ff99999, 0x9999999d},	/* 0.256968=f(2, 1.6)*/
{62, 0,123,__LINE__, 0x3fb290e5, 0x794e9189, 0x40080000, 0x00000000, 0x3ff99999, 0x9999999d},	/* 0.0725234=f(3, 1.6)*/
{64, 0,123,__LINE__, 0x3f8eb5c8, 0x72cb3f07, 0x40100000, 0x00000000, 0x3ff99999, 0x9999999d},	/* 0.0149952=f(4, 1.6)*/
{63, 0,123,__LINE__, 0x3fdb508e, 0xeb1aae8d, 0x00000000, 0x00000000, 0x3ffa6666, 0x6666666a},	/* 0.426792=f(0, 1.65)*/
{63, 0,123,__LINE__, 0x3fe26107, 0x663f6e92, 0x3ff00000, 0x00000000, 0x3ffa6666, 0x6666666a},	/* 0.574344=f(1, 1.65)*/
{64, 0,123,__LINE__, 0x3fd13d92, 0x88e3f0dd, 0x40000000, 0x00000000, 0x3ffa6666, 0x6666666a},	/* 0.269383=f(2, 1.65)*/
{63, 0,123,__LINE__, 0x3fb4260b, 0xedecb2c6, 0x40080000, 0x00000000, 0x3ffa6666, 0x6666666a},	/* 0.0787055=f(3, 1.65)*/
{62, 0,123,__LINE__, 0x3f9138f9, 0x5390ebd3, 0x40100000, 0x00000000, 0x3ffa6666, 0x6666666a},	/* 0.0168189=f(4, 1.65)*/
{64, 0,123,__LINE__, 0x3fd97895, 0x7ce7f2cf, 0x00000000, 0x00000000, 0x3ffb3333, 0x33333337},	/* 0.397985=f(0, 1.7)*/
{64, 0,123,__LINE__, 0x3fe27d0d, 0x82c5db53, 0x3ff00000, 0x00000000, 0x3ffb3333, 0x33333337},	/* 0.577765=f(1, 1.7)*/
{64, 0,123,__LINE__, 0x3fd20802, 0xc5da89b2, 0x40000000, 0x00000000, 0x3ffb3333, 0x33333337},	/* 0.281739=f(2, 1.7)*/
{63, 0,123,__LINE__, 0x3fb5cc62, 0xb77f9eb1, 0x40080000, 0x00000000, 0x3ffb3333, 0x33333337},	/* 0.0851499=f(3, 1.7)*/
{62, 0,123,__LINE__, 0x3f933dbd, 0xc0e89d74, 0x40100000, 0x00000000, 0x3ffb3333, 0x33333337},	/* 0.0187902=f(4, 1.7)*/
{62, 0,123,__LINE__, 0x3fd79e3a, 0x9e138ae8, 0x00000000, 0x00000000, 0x3ffc0000, 0x00000004},	/* 0.369033=f(0, 1.75)*/
{63, 0,123,__LINE__, 0x3fe290a3, 0xbaedcc45, 0x3ff00000, 0x00000000, 0x3ffc0000, 0x00000004},	/* 0.580156=f(1, 1.75)*/
{62, 0,123,__LINE__, 0x3fd2d0f2, 0x7ae76c8c, 0x40000000, 0x00000000, 0x3ffc0000, 0x00000004},	/* 0.294003=f(2, 1.75)*/
{61, 0,123,__LINE__, 0x3fb7838b, 0x1e8c5996, 0x40080000, 0x00000000, 0x3ffc0000, 0x00000004},	/* 0.0918509=f(3, 1.75)*/
{63, 0,123,__LINE__, 0x3f956a95, 0x623295f8, 0x40100000, 0x00000000, 0x3ffc0000, 0x00000004},	/* 0.0209144=f(4, 1.75)*/
{63, 0,123,__LINE__, 0x3fd5c256, 0x5d20c7df, 0x00000000, 0x00000000, 0x3ffccccc, 0xccccccd1},	/* 0.339986=f(0, 1.8)*/
{63, 0,123,__LINE__, 0x3fe29bc9, 0x703828ad, 0x3ff00000, 0x00000000, 0x3ffccccc, 0xccccccd1},	/* 0.581517=f(1, 1.8)*/
{64, 0,123,__LINE__, 0x3fd397db, 0x0e06aef0, 0x40000000, 0x00000000, 0x3ffccccc, 0xccccccd1},	/* 0.306144=f(2, 1.8)*/
{62, 0,123,__LINE__, 0x3fb94b16, 0xc2085bbd, 0x40080000, 0x00000000, 0x3ffccccc, 0xccccccd1},	/* 0.098802=f(3, 1.8)*/
{62, 0,123,__LINE__, 0x3f97c0d3, 0xe559d800, 0x40100000, 0x00000000, 0x3ffccccc, 0xccccccd1},	/* 0.0231965=f(4, 1.8)*/
{62, 0,123,__LINE__, 0x3fd3e5c0, 0xa05c4023, 0x00000000, 0x00000000, 0x3ffd9999, 0x9999999e},	/* 0.310898=f(0, 1.85)*/
{63, 0,123,__LINE__, 0x3fe29e82, 0x64e59f59, 0x3ff00000, 0x00000000, 0x3ffd9999, 0x9999999e},	/* 0.581849=f(1, 1.85)*/
{62, 0,123,__LINE__, 0x3fd45c36, 0xb655f5c8, 0x40000000, 0x00000000, 0x3ffd9999, 0x9999999e},	/* 0.318128=f(2, 1.85)*/
{62, 0,123,__LINE__, 0x3fbb2287, 0xc3831b74, 0x40080000, 0x00000000, 0x3ffd9999, 0x9999999e},	/* 0.105996=f(3, 1.85)*/
{63, 0,123,__LINE__, 0x3f9a41bb, 0x0d6129f7, 0x40100000, 0x00000000, 0x3ffd9999, 0x9999999e},	/* 0.0256414=f(4, 1.85)*/
{62, 0,123,__LINE__, 0x3fd20950, 0xb5facde7, 0x00000000, 0x00000000, 0x3ffe6666, 0x6666666b},	/* 0.281819=f(0, 1.9)*/
{63, 0,123,__LINE__, 0x3fe298d6, 0xb7a495dc, 0x3ff00000, 0x00000000, 0x3ffe6666, 0x6666666b},	/* 0.581157=f(1, 1.9)*/
{62, 0,123,__LINE__, 0x3fd51d80, 0xcca30f3f, 0x40000000, 0x00000000, 0x3ffe6666, 0x6666666b},	/* 0.329926=f(2, 1.9)*/
{61, 0,123,__LINE__, 0x3fbd0950, 0xfe1d809b, 0x40080000, 0x00000000, 0x3ffe6666, 0x6666666b},	/* 0.113423=f(3, 1.9)*/
{61, 0,123,__LINE__, 0x3f9cee79, 0x030dd014, 0x40100000, 0x00000000, 0x3ffe6666, 0x6666666b},	/* 0.0282535=f(4, 1.9)*/
{63, 0,123,__LINE__, 0x3fd02ddc, 0xe4c5e3e9, 0x00000000, 0x00000000, 0x3fff3333, 0x33333338},	/* 0.252799=f(0, 1.95)*/
{63, 0,123,__LINE__, 0x3fe28ad2, 0xdcd91cb0, 0x3ff00000, 0x00000000, 0x3fff3333, 0x33333338},	/* 0.579446=f(1, 1.95)*/
{63, 0,123,__LINE__, 0x3fd5db36, 0x1b535d7b, 0x40000000, 0x00000000, 0x3fff3333, 0x33333338},	/* 0.341505=f(2, 1.95)*/
{62, 0,123,__LINE__, 0x3fbefed6, 0x4831e4e2, 0x40080000, 0x00000000, 0x3fff3333, 0x33333338},	/* 0.121076=f(3, 1.95)*/
{61, 0,123,__LINE__, 0x3f9fc826, 0xafa66438, 0x40100000, 0x00000000, 0x3fff3333, 0x33333338},	/* 0.031037=f(4, 1.95)*/
{0},};
void test_jn(m)   {run_vector_1(m,jn_vec,(char *)(jn),"jn","did");   }	
