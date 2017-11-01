/*
 * rx_dmap_wr.c
 *
 *  Created on: 2017年9月20日
 *      Author: cloudieskyx
 */

#include <stdio.h>
#include <stdlib.h>

#include "config.h"
#include "debug.h"

#include "rx_dmap.h"
/* #include "rx_bmap_mux.h" */

int rx_dmap_wr(cfg_t *config, float **DiI, float **DiQ, int **Do)
{


  /* int *DoDemap; */

	/*
	 * parameter definition
	 */
	int Mod = config->Mod;
	int Len = config->Len;
	/* int numBits = config->numBits; */


	/*
	 * procedure
	 */

  /* DoDemap = (int *)malloc(sizeof(int) * Len); */

  rx_dmap(Mod, Len, &(*DiI),  &(*DiQ), &(*Do));

  /* rx_bmap_mux(Mod, numBits, &DoDemap, &(*Do)); */

  /*
   * log
   */
  //write_ai(config->FnameRxBmapMapDo, Len, &DoDemap);

	return EXIT_SUCCESS;
}
