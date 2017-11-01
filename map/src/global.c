/*
 * global.c
 *
 *  Created on: 2017年9月21日
 *      Author: zhang.zhi
 */


#include <math.h>
const int BPC[4] = {1, 2, 4, 6};

const int FFT_SIZE[2] = {1024, 4096};

const int C_POINTS_BPSK[2] = {1, -1};

const int C_POINTS_QPSK[4][2] = {{1,1}, {1,-1}, {-1,1}, {-1-1}};

const int C_POINTS_16QAM[16][2] = \
  {{3,3}, {3,1}, {1,3}, {1,1},                  \
   {3,-3}, {3,-1}, {1,-3}, {1,-1},              \
   {-3,3}, {-3,1}, {-1,3}, {-1,1},              \
   {-3,-3}, {-3,-1}, {-1-3}, {-1,-1}};

const int C_POINTS_64QAM[64][2] = \
	{{7,7}, {7,5}, {5,7}, {5,5},                  \
   {7,1}, {7,3}, {5,1}, {5,3},                  \
   {1,7}, {1,5}, {3,7}, {3,5},                  \
   {1,1}, {1,3}, {3,1}, {3,3},                  \
   {7,-7}, {7,-5}, {5,-7}, {5,-5},              \
   {7,-1}, {7,-3}, {5,-1}, {5,-3},              \
   {1,-7}, {1,-5}, {3,-7}, {3,-5},              \
   {1,-1}, {1,-3}, {3,-1}, {3,-3},              \
   {-7,7}, {-7,5}, {-5,7}, {-5,5},              \
   {-7,1}, {-7,3}, {-5,1}, {-5,3},              \
   {-1,7}, {-1,5}, {-3,7}, {-3,5},              \
   {-1,1}, {-1,3}, {-3,1}, {-3,3},              \
   {-7,-7}, {-7,-5}, {-5,-7}, {-5,-5},          \
   {-7,-1}, {-7,-3}, {-5,-1}, {-5,-3},          \
   {-1,-7}, {-1,-5}, {-3,-7}, {-3,-5},          \
   {-1,-1}, {-1,-3}, {-3,-1}, {-3,-3}};


/* const float ROT_ANGLE_QPSK  = 29.0; */
/* const float ROT_ANGLE_16QAM = 16.8; */
/* const float ROT_ANGLE_64QAM = 8.6; */

/* const float C_QPSK = sqrt(2); */
/* const float C_16QAM = sqrt(10); */
/* const float C_64QAM = sqrt(42); */


const double ROT_ANGLE_QPSK  = 29.0;
const double ROT_ANGLE_16QAM = 16.8;
const double ROT_ANGLE_64QAM = 8.6;
const double C_QPSK = sqrt(2);
const double C_16QAM = sqrt(10);
const double C_64QAM = sqrt(42);

