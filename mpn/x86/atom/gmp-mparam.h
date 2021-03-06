/* Intel Atom/32 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000-2011, 2014 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4

/* 1667 MHz Pineview (Atom D510) */
/* FFT tuning limit = 25000000 */
/* Generated by tuneup.c, 2014-03-14, gcc 4.5 */

#define MOD_1_NORM_THRESHOLD                 3
#define MOD_1_UNNORM_THRESHOLD               5
#define MOD_1N_TO_MOD_1_1_THRESHOLD         11
#define MOD_1U_TO_MOD_1_1_THRESHOLD          5
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        10
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0  /* never mpn_mod_1s_2p */
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     13
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1N_PI1_METHOD                 1
#define DIV_QR_1_NORM_THRESHOLD              4
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           31

#define MUL_TOOM22_THRESHOLD                20
#define MUL_TOOM33_THRESHOLD                74
#define MUL_TOOM44_THRESHOLD               178
#define MUL_TOOM6H_THRESHOLD               270
#define MUL_TOOM8H_THRESHOLD               399

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      73
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     122
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     115
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     127
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     106

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 30
#define SQR_TOOM3_THRESHOLD                105
#define SQR_TOOM4_THRESHOLD                178
#define SQR_TOOM6_THRESHOLD                303
#define SQR_TOOM8_THRESHOLD                527

#define MULMID_TOOM42_THRESHOLD             54

#define MULMOD_BNM1_THRESHOLD               13
#define SQRMOD_BNM1_THRESHOLD               18

#define MUL_FFT_MODF_THRESHOLD             380  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    380, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     11, 5}, {     23, 6}, {     21, 7}, {     11, 6}, \
    {     25, 7}, {     13, 6}, {     27, 7}, {     15, 6}, \
    {     31, 7}, {     21, 8}, {     11, 7}, {     27, 8}, \
    {     15, 7}, {     35, 8}, {     19, 7}, {     39, 8}, \
    {     23, 7}, {     47, 8}, {     27, 9}, {     15, 8}, \
    {     39, 9}, {     23, 8}, {     51,10}, {     15, 9}, \
    {     31, 8}, {     67, 9}, {     39, 8}, {     79, 9}, \
    {     47, 8}, {     95,10}, {     31, 9}, {     79,10}, \
    {     47, 9}, {     95,11}, {     31,10}, {     63, 9}, \
    {    127, 8}, {    255, 9}, {    135,10}, {     79, 9}, \
    {    159,10}, {     95, 9}, {    191,11}, {     63,10}, \
    {    127, 9}, {    255, 8}, {    511, 9}, {    271,10}, \
    {    143, 9}, {    287, 8}, {    575,10}, {    159,11}, \
    {     95,10}, {    191, 9}, {    383,12}, {     63,11}, \
    {    127,10}, {    255, 9}, {    511,10}, {    271, 9}, \
    {    543,10}, {    287, 9}, {    575,10}, {    303,11}, \
    {    159,10}, {    319, 9}, {    639,10}, {    335, 9}, \
    {    671,10}, {    351, 9}, {    703,11}, {    191,10}, \
    {    383, 9}, {    767,10}, {    415, 9}, {    831,11}, \
    {    223,10}, {    447,12}, {    127,11}, {    255,10}, \
    {    543,11}, {    287,10}, {    607, 9}, {   1215,11}, \
    {    319,10}, {    671,11}, {    351,10}, {    703,12}, \
    {    191,11}, {    383,10}, {    767,11}, {    415,10}, \
    {    831,11}, {    447,13}, {    127,12}, {    255,11}, \
    {    543,10}, {   1087,11}, {    607,10}, {   1215,12}, \
    {    319,11}, {    735,12}, {    383,11}, {    831,12}, \
    {    447,11}, {    959,13}, {    255,12}, {    511,11}, \
    {   1087,12}, {    575,11}, {   1151,12}, {    703,11}, \
    {   1471,13}, {    383,12}, {    831,11}, {   1663,12}, \
    {    959,14}, {    255,13}, {    511,12}, {   1215,13}, \
    {    639,12}, {   1471,11}, {   2943,13}, {    767,12}, \
    {   1663,13}, {    895,12}, {   1919,14}, {    511,13}, \
    {   1023,12}, {   2111,13}, {   1151,12}, {   2431,13}, \
    {   1407,12}, {   2943,14}, {    767,13}, {   1663,12}, \
    {   3455,13}, {   1919,15}, {    511,14}, {   1023,13}, \
    {   2431,14}, {   1279,13}, {   2943,12}, {   5887,14}, \
    {  16384,15}, {  32768,16} }
#define MUL_FFT_TABLE3_SIZE 150
#define MUL_FFT_THRESHOLD                 4544

#define SQR_FFT_MODF_THRESHOLD             340  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    340, 5}, {     21, 6}, {     11, 5}, {     23, 6}, \
    {     12, 5}, {     25, 6}, {     21, 7}, {     11, 6}, \
    {     25, 7}, {     13, 6}, {     27, 7}, {     15, 6}, \
    {     31, 7}, {     21, 8}, {     11, 7}, {     27, 8}, \
    {     15, 7}, {     35, 8}, {     19, 7}, {     41, 8}, \
    {     23, 7}, {     47, 8}, {     27, 9}, {     15, 8}, \
    {     39, 9}, {     23, 8}, {     51,10}, {     15, 9}, \
    {     31, 8}, {     63, 9}, {     39, 8}, {     79, 9}, \
    {     47,10}, {     31, 9}, {     79,10}, {     47, 9}, \
    {     95,11}, {     31,10}, {     63, 9}, {    127, 8}, \
    {    255,10}, {     79, 9}, {    159, 8}, {    319,10}, \
    {     95, 9}, {    191,11}, {     63,10}, {    127, 9}, \
    {    255, 8}, {    511, 9}, {    271,10}, {    143, 9}, \
    {    287, 8}, {    575, 9}, {    303, 8}, {    607,10}, \
    {    159, 9}, {    319,11}, {     95,10}, {    191, 9}, \
    {    383,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,10}, {    271, 9}, {    543,10}, {    287, 9}, \
    {    575,10}, {    303, 9}, {    607,10}, {    319, 9}, \
    {    639,10}, {    335, 9}, {    671,10}, {    351, 9}, \
    {    703,11}, {    191,10}, {    383, 9}, {    767,10}, \
    {    415,11}, {    223,10}, {    447,12}, {    127,11}, \
    {    255,10}, {    543,11}, {    287,10}, {    607,11}, \
    {    319,10}, {    671,11}, {    351,10}, {    703,12}, \
    {    191,11}, {    383,10}, {    767,11}, {    415,10}, \
    {    831,11}, {    479,13}, {    127,12}, {    255,11}, \
    {    543,10}, {   1087,11}, {    607,12}, {    319,11}, \
    {    671,10}, {   1343,11}, {    735,12}, {    383,11}, \
    {    831,12}, {    447,11}, {    959,13}, {    255,12}, \
    {    511,11}, {   1087,12}, {    575,11}, {   1215,12}, \
    {    639,11}, {   1343,12}, {    703,11}, {   1407,13}, \
    {    383,12}, {    831,11}, {   1663,12}, {    959,14}, \
    {    255,13}, {    511,12}, {   1215,13}, {    639,12}, \
    {   1471,13}, {    767,12}, {   1663,13}, {    895,12}, \
    {   1791,14}, {    511,13}, {   1023,12}, {   2111,13}, \
    {   1151,12}, {   2431,13}, {   1407,14}, {    767,13}, \
    {   1663,12}, {   3455,13}, {   1791,15}, {    511,14}, \
    {   1023,13}, {   2431,14}, {   1279,13}, {   2943,12}, \
    {   5887,14}, {  16384,15}, {  32768,16} }
#define SQR_FFT_TABLE3_SIZE 151
#define SQR_FFT_THRESHOLD                 2880

#define MULLO_BASECASE_THRESHOLD             6
#define MULLO_DC_THRESHOLD                  48
#define MULLO_MUL_N_THRESHOLD             8907

#define DC_DIV_QR_THRESHOLD                 59
#define DC_DIVAPPR_Q_THRESHOLD             250
#define DC_BDIV_QR_THRESHOLD                59
#define DC_BDIV_Q_THRESHOLD                169

#define INV_MULMOD_BNM1_THRESHOLD           38
#define INV_NEWTON_THRESHOLD               246
#define INV_APPR_THRESHOLD                 246

#define BINV_NEWTON_THRESHOLD              276
#define REDC_1_TO_REDC_N_THRESHOLD          67

#define MU_DIV_QR_THRESHOLD               1334
#define MU_DIVAPPR_Q_THRESHOLD            1442
#define MUPI_DIV_QR_THRESHOLD              114
#define MU_BDIV_QR_THRESHOLD              1142
#define MU_BDIV_Q_THRESHOLD               1334

#define POWM_SEC_TABLE  1,22,98,416,1378

#define MATRIX22_STRASSEN_THRESHOLD         13
#define HGCD_THRESHOLD                     133
#define HGCD_APPR_THRESHOLD                169
#define HGCD_REDUCE_THRESHOLD             2479
#define GCD_DC_THRESHOLD                   460
#define GCDEXT_DC_THRESHOLD                342
#define JACOBI_BASE_METHOD                   3

#define GET_STR_DC_THRESHOLD                12
#define GET_STR_PRECOMPUTE_THRESHOLD        23
#define SET_STR_DC_THRESHOLD               321
#define SET_STR_PRECOMPUTE_THRESHOLD      1099

#define FAC_DSC_THRESHOLD                  198
#define FAC_ODD_THRESHOLD                   34
