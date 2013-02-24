/*
 * HEVC data tables
 *
 * Copyright (C) 2012 Guillaume Martres
 *
 * This file is part of Libav.
 *
 * Libav is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Libav is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Libav; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVCODEC_HEVCDATA_H
#define AVCODEC_HEVCDATA_H

static const uint8_t qpel_extra_before[4] = { 0, 3, 3, 2 };
static const uint8_t qpel_extra_after[4] = { 0, 3, 4, 4 };
static const uint8_t qpel_extra[4] = { 0, 6, 7, 6 };

static const int epel_extra_before = 1;
static const int epel_extra_after = 2;
static const int epel_extra = 3;

static const int8_t epel_filters[7][4] = {
    { -2,  58,  10,  -2 },
    { -4,  54,  16,  -2 },
    { -6,  46,  28,  -4 },
    { -4,  36,  36,  -4 },
    { -4,  28,  46,  -6 },
    { -2,  16,  54,  -4 },
    { -2,  10,  58,  -2 },
};

static const uint8_t scan_1x1[1] = {
    0,
};

static const uint8_t horiz_scan2x2_x[4] = {
    0, 1, 0, 1,
};

static const uint8_t horiz_scan2x2_y[4] = {
    0, 0, 1, 1
};

static const uint8_t horiz_scan4x4_x[16] = {
    0, 1, 2, 3,
    0, 1, 2, 3,
    0, 1, 2, 3,
    0, 1, 2, 3,
};

static const uint8_t horiz_scan4x4_y[16] = {
    0, 0, 0, 0,
    1, 1, 1, 1,
    2, 2, 2, 2,
    3, 3, 3, 3,
};

static const uint8_t horiz_scan8x8_inv[8][8] = {
    {  0,  1,  2,  3, 16, 17, 18, 19, },
    {  4,  5,  6,  7, 20, 21, 22, 23, },
    {  8,  9, 10, 11, 24, 25, 26, 27, },
    { 12, 13, 14, 15, 28, 29, 30, 31, },
    { 32, 33, 34, 35, 48, 49, 50, 51, },
    { 36, 37, 38, 39, 52, 53, 54, 55, },
    { 40, 41, 42, 43, 56, 57, 58, 59, },
    { 44, 45, 46, 47, 60, 61, 62, 63, },
};

static const uint8_t diag_scan4x1_x[4] = {
    0, 1, 2, 3,
};

static const uint8_t diag_scan1x4_y[4] = {
    0, 1, 2, 3,
};

static const uint8_t diag_scan2x2_x[4] = {
    0, 0, 1, 1,
};

static const uint8_t l0_l1_cand_idx[12][2] = {
    { 0, 1, },
    { 1, 0, },
    { 0, 2, },
    { 2, 0, },
    { 1, 2, },
    { 2, 1, },
    { 0, 3, },
    { 3, 0, },
    { 1, 3, },
    { 3, 1, },
    { 2, 3, },
    { 3, 2, },
};

static const uint8_t diag_scan2x2_y[4] = {
    0, 1, 0, 1,
};


static const uint8_t diag_scan2x2_inv[2][2] = {
    { 0, 2, },
    { 1, 3, },
};

static const uint8_t diag_scan8x2_x[16] = {
    0, 0, 1, 1,
    2, 2, 3, 3,
    4, 4, 5, 5,
    6, 6, 7, 7,
};

static const uint8_t diag_scan8x2_y[16] = {
    0, 1, 0, 1,
    0, 1, 0, 1,
    0, 1, 0, 1,
    0, 1, 0, 1,
};


static const uint8_t diag_scan8x2_inv[2][8] = {
    { 0, 2, 4, 6, 8, 10, 12, 14, },
    { 1, 3, 5, 7, 9, 11, 13, 15, },
};


static const uint8_t diag_scan2x8_x[16] = {
    0, 0, 1, 0,
    1, 0, 1, 0,
    1, 0, 1, 0,
    1, 0, 1, 1,
};

static const uint8_t diag_scan2x8_y[16] = {
    0, 1, 0, 2,
    1, 3, 2, 4,
    3, 5, 4, 6,
    5, 7, 6, 7,
};


static const uint8_t diag_scan2x8_inv[8][2] = {
    {  0,  2, },
    {  1,  4, },
    {  3,  6, },
    {  5,  8, },
    {  7, 10, },
    {  9, 12, },
    { 11, 14, },
    { 13, 15, },
};


static const uint8_t diag_scan4x4_x[16] = {
    0, 0, 1, 0,
    1, 2, 0, 1,
    2, 3, 1, 2,
    3, 2, 3, 3,
};

static const uint8_t diag_scan4x4_y[16] = {
    0, 1, 0, 2,
    1, 0, 3, 2,
    1, 0, 3, 2,
    1, 3, 2, 3,
};

static const uint8_t diag_scan4x4_inv[4][4] = {
    { 0,  2,  5,  9, },
    { 1,  4,  8, 12, },
    { 3,  7, 11, 14, },
    { 6, 10, 13, 15, },
};

static const uint8_t diag_scan8x8_x[64] = {
    0, 0, 1, 0,
    1, 2, 0, 1,
    2, 3, 0, 1,
    2, 3, 4, 0,
    1, 2, 3, 4,
    5, 0, 1, 2,
    3, 4, 5, 6,
    0, 1, 2, 3,
    4, 5, 6, 7,
    1, 2, 3, 4,
    5, 6, 7, 2,
    3, 4, 5, 6,
    7, 3, 4, 5,
    6, 7, 4, 5,
    6, 7, 5, 6,
    7, 6, 7, 7,
};

static const uint8_t diag_scan8x8_y[64] = {
    0, 1, 0, 2,
    1, 0, 3, 2,
    1, 0, 4, 3,
    2, 1, 0, 5,
    4, 3, 2, 1,
    0, 6, 5, 4,
    3, 2, 1, 0,
    7, 6, 5, 4,
    3, 2, 1, 0,
    7, 6, 5, 4,
    3, 2, 1, 7,
    6, 5, 4, 3,
    2, 7, 6, 5,
    4, 3, 7, 6,
    5, 4, 7, 6,
    5, 7, 6, 7,
};

static const uint8_t diag_scan8x8_inv[8][8] = {
    {  0,  2,  5,  9, 14, 20, 27, 35, },
    {  1,  4,  8, 13, 19, 26, 34, 42, },
    {  3,  7, 12, 18, 25, 33, 41, 48, },
    {  6, 11, 17, 24, 32, 40, 47, 53, },
    { 10, 16, 23, 31, 39, 46, 52, 57, },
    { 15, 22, 30, 38, 45, 51, 56, 60, },
    { 21, 29, 37, 44, 50, 55, 59, 62, },
    { 28, 36, 43, 49, 54, 58, 61, 63, },
};

static const int8_t transform[32][32] = {
    { 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
     64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64 },
    { 90, 90, 88, 85, 82, 78, 73, 67, 61, 54, 46, 38, 31, 22, 13, 4,
     -4, -13, -22, -31, -38, -46, -54, -61, -67, -73, -78, -82, -85, -88, -90, -90 },
    { 90, 87, 80, 70, 57, 43, 25, 9, -9, -25, -43, -57, -70, -80, -87, -90,
     -90, -87, -80, -70, -57, -43, -25, -9, 9, 25, 43, 57, 70, 80, 87, 90 },
    { 90, 82, 67, 46, 22, -4, -31, -54, -73, -85, -90, -88, -78, -61, -38, -13,
     13, 38, 61, 78, 88, 90, 85, 73, 54, 31, 4, -22, -46, -67, -82, -90 },
    { 89, 75, 50, 18, -18, -50, -75, -89, -89, -75, -50, -18, 18, 50, 75, 89,
     89, 75, 50, 18, -18, -50, -75, -89, -89, -75, -50, -18, 18, 50, 75, 89 },
    { 88, 67, 31, -13, -54, -82, -90, -78, -46, -4, 38, 73, 90, 85, 61, 22,
     -22, -61, -85, -90, -73, -38, 4, 46, 78, 90, 82, 54, 13, -31, -67, -88 },
    { 87, 57, 9, -43, -80, -90, -70, -25, 25, 70, 90, 80, 43, -9, -57, -87,
     -87, -57, -9, 43, 80, 90, 70, 25, -25, -70, -90, -80, -43, 9, 57, 87 },
    { 85, 46, -13, -67, -90, -73, -22, 38, 82, 88, 54, -4, -61, -90, -78, -31,
     31, 78, 90, 61, 4, -54, -88, -82, -38, 22, 73, 90, 67, 13, -46, -85 },
    { 83, 36, -36, -83, -83, -36, 36, 83, 83, 36, -36, -83, -83, -36, 36, 83,
     83, 36, -36, -83, -83, -36, 36, 83, 83, 36, -36, -83, -83, -36, 36, 83 },
    { 82, 22, -54, -90, -61, 13, 78, 85, 31, -46, -90, -67, 4, 73, 88, 38,
     -38, -88, -73, -4, 67, 90, 46, -31, -85, -78, -13, 61, 90, 54, -22, -82 },
    { 80, 9, -70, -87, -25, 57, 90, 43, -43, -90, -57, 25, 87, 70, -9, -80,
     -80, -9, 70, 87, 25, -57, -90, -43, 43, 90, 57, -25, -87, -70, 9, 80 },
    { 78, -4, -82, -73, 13, 85, 67, -22, -88, -61, 31, 90, 54, -38, -90, -46,
     46, 90, 38, -54, -90, -31, 61, 88, 22, -67, -85, -13, 73, 82, 4, -78 },
    { 75, -18, -89, -50, 50, 89, 18, -75, -75, 18, 89, 50, -50, -89, -18, 75,
     75, -18, -89, -50, 50, 89, 18, -75, -75, 18, 89, 50, -50, -89, -18, 75 },
    { 73, -31, -90, -22, 78, 67, -38, -90, -13, 82, 61, -46, -88, -4, 85, 54,
     -54, -85, 4, 88, 46, -61, -82, 13, 90, 38, -67, -78, 22, 90, 31, -73 },
    { 70, -43, -87, 9, 90, 25, -80, -57, 57, 80, -25, -90, -9, 87, 43, -70,
     -70, 43, 87, -9, -90, -25, 80, 57, -57, -80, 25, 90, 9, -87, -43, 70 },
    { 67, -54, -78, 38, 85, -22, -90, 4, 90, 13, -88, -31, 82, 46, -73, -61,
     61, 73, -46, -82, 31, 88, -13, -90, -4, 90, 22, -85, -38, 78, 54, -67 },
    { 64, -64, -64, 64, 64, -64, -64, 64, 64, -64, -64, 64, 64, -64, -64, 64,
     64, -64, -64, 64, 64, -64, -64, 64, 64, -64, -64, 64, 64, -64, -64, 64 },
    { 61, -73, -46, 82, 31, -88, -13, 90, -4, -90, 22, 85, -38, -78, 54, 67,
     -67, -54, 78, 38, -85, -22, 90, 4, -90, 13, 88, -31, -82, 46, 73, -61 },
    { 57, -80, -25, 90, -9, -87, 43, 70, -70, -43, 87, 9, -90, 25, 80, -57,
     -57, 80, 25, -90, 9, 87, -43, -70, 70, 43, -87, -9, 90, -25, -80, 57 },
    { 54, -85, -4, 88, -46, -61, 82, 13, -90, 38, 67, -78, -22, 90, -31, -73,
     73, 31, -90, 22, 78, -67, -38, 90, -13, -82, 61, 46, -88, 4, 85, -54 },
    { 50, -89, 18, 75, -75, -18, 89, -50, -50, 89, -18, -75, 75, 18, -89, 50,
     50, -89, 18, 75, -75, -18, 89, -50, -50, 89, -18, -75, 75, 18, -89, 50 },
    { 46, -90, 38, 54, -90, 31, 61, -88, 22, 67, -85, 13, 73, -82, 4, 78,
     -78, -4, 82, -73, -13, 85, -67, -22, 88, -61, -31, 90, -54, -38, 90, -46 },
    { 43, -90, 57, 25, -87, 70, 9, -80, 80, -9, -70, 87, -25, -57, 90, -43,
     -43, 90, -57, -25, 87, -70, -9, 80, -80, 9, 70, -87, 25, 57, -90, 43 },
    { 38, -88, 73, -4, -67, 90, -46, -31, 85, -78, 13, 61, -90, 54, 22, -82,
     82, -22, -54, 90, -61, -13, 78, -85, 31, 46, -90, 67, 4, -73, 88, -38 },
    { 36, -83, 83, -36, -36, 83, -83, 36, 36, -83, 83, -36, -36, 83, -83, 36,
     36, -83, 83, -36, -36, 83, -83, 36, 36, -83, 83, -36, -36, 83, -83, 36 },
    { 31, -78, 90, -61, 4, 54, -88, 82, -38, -22, 73, -90, 67, -13, -46, 85,
     -85, 46, 13, -67, 90, -73, 22, 38, -82, 88, -54, -4, 61, -90, 78, -31 },
    { 25, -70, 90, -80, 43, 9, -57, 87, -87, 57, -9, -43, 80, -90, 70, -25,
     -25, 70, -90, 80, -43, -9, 57, -87, 87, -57, 9, 43, -80, 90, -70, 25 },
    { 22, -61, 85, -90, 73, -38, -4, 46, -78, 90, -82, 54, -13, -31, 67, -88,
     88, -67, 31, 13, -54, 82, -90, 78, -46, 4, 38, -73, 90, -85, 61, -22 },
    { 18, -50, 75, -89, 89, -75, 50, -18, -18, 50, -75, 89, -89, 75, -50, 18,
     18, -50, 75, -89, 89, -75, 50, -18, -18, 50, -75, 89, -89, 75, -50, 18 },
    { 13, -38, 61, -78, 88, -90, 85, -73, 54, -31, 4, 22, -46, 67, -82, 90,
     -90, 82, -67, 46, -22, -4, 31, -54, 73, -85, 90, -88, 78, -61, 38, -13 },
    { 9, -25, 43, -57, 70, -80, 87, -90, 90, -87, 80, -70, 57, -43, 25, -9,
     -9, 25, -43, 57, -70, 80, -87, 90, -90, 87, -80, 70, -57, 43, -25, 9 },
    { 4, -13, 22, -31, 38, -46, 54, -61, 67, -73, 78, -82, 85, -88, 90, -90,
     90, -90, 88, -85, 82, -78, 73, -67, 61, -54, 46, -38, 31, -22, 13, -4 },
};

static const uint8_t tctable[54] =
{
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, // QP  0...18
     1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, // QP 19...37
     5, 5, 6, 6, 7, 8, 9,10,11,13,14,16,18,20,22,24           // QP 38...53
};

static const uint8_t betatable[52] =
{
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 8, // QP 0...18
     9,10,11,12,13,14,15,16,17,18,20,22,24,26,28,30,32,34,36, // QP 19...37
    38,40,42,44,46,48,50,52,54,56,58,60,62,64                 // QP 38...51
};

#endif /* AVCODEC_HEVCDATA_H */
