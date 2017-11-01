/*
 * rx_fft_wr.c
 *
 *  Created on: 2017年9月20日
 *      Author: cloudieskyx
 */

#include <stdio.h>
#include <stdlib.h>

#include "config.h"
#include "debug.h"
#include "global.h"
#include "rx_fadapt.h"
#include "ift.h"

int rx_fadapt_wr(cfg_t *config, float **DiI, float **DiQ, float **DoI, float **DoQ)
{
  
	/*
	 * parameter definition
	 */
	int Mod = config->Mod;
	int Len = config->Len;
  int FftTyp = config->FftTyp;

  //printf("cfg file name %c\n", config->FnameTxIftMapDoI);

  /* float *DoFftI, *DoFftQ; */

  /* DoFftI = (float *)malloc(sizeof(float) * FFT_SIZE[FftTyp]); */
  /* DoFftQ = (float *)malloc(sizeof(float) * FFT_SIZE[FftTyp]); */


	/*
	 * procedure
	 */
  /* rx_fft_core(FftTyp, &(*DiI), &(*DiQ), &(DoFftI), &(DoFftQ)); */
  rx_fadapt(FftTyp, Mod, Len, &(*DiI), &(*DiQ), &(*DoI), &(*DoQ));

  /*
   * log
   */
  /* write_af(config->FnameRxFftCoreDoI, FFT_SIZE[FftTyp], &(DoFftI)); */
  /* write_af(config->FnameRxFftCoreDoQ, FFT_SIZE[FftTyp], &(DoFftQ)); */


  /* free(DoFftI); */
  /* free(DoFftQ); */

	return EXIT_SUCCESS;
}
