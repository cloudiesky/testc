/*
  ============================================================================
  Name        : Constellation.c
  Author      : CC
  Version     :
  Copyright   : NZ
  Description : Hello World in C, Ansi-style
  ============================================================================
*/

#ifndef RX_FADAPT_H_
#define RX_FADAPT_H_

#include "config.h"
int rx_fadapt(int FftTyp,     \
              int Mod,        \
              int numBits,    \
              float **DiI,    \
              float **DiQ,    \
              float **DoI,    \
              float **DoQ );
#endif
