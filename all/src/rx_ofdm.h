/*
  ============================================================================
  Name        : Constellation.c
  Author      : CC
  Version     :
  Copyright   : NZ
  Description : Hello World in C, Ansi-style
  ============================================================================
*/

#ifndef RX_OFDM_H_
#define RX_OFDM_H_

#include "config.h"
int rx_ofdm(int FftTyp,   \
                float **DiI,  \
                float **DiQ,  \
                float **DoI,  \
                float **DoQ   \
                );
#endif
