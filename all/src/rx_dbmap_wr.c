/*
 * rx_bmap_wr.c
 *
 *  Created on: 2017年9月20日
 *      Author: cloudieskyx
 */

#include <stdio.h>
#include <stdlib.h>

#include "config.h"
#include "debug.h"

/* #include "rx_dmap.h" */
#include "rx_dbmap.h"

int rx_dbmap_wr(cfg_t *config, int **Di, int **Do)
{


  /* int *DoDemap; */

	/*
	 * parameter definition
	 */
	int Mod = config->Mod;
	/* int Len = config->Len; */
	int numBits = config->numBits;


	/*
	 * procedure
	 */

  /* DoDemap = (int *)malloc(sizeof(int) * Len); */

  /* rx_dmap(Mod, Len, &(*DiI),  &(*DiQ), &DoDemap); */

  rx_dbmap(Mod, numBits, &(*Di), &(*Do));

  /*
   * log
   */
  //write_ai(config->FnameRxBmapMapDo, Len, &DoDemap);

	return EXIT_SUCCESS;
}
