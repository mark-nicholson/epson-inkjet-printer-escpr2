/*________________________________  epson-escpr-rhv2.h   _______________________________*/

/*       1         2         3         4         5         6         7         8        */
/*34567890123456789012345678901234567890123456789012345678901234567890123456789012345678*/
/*******************************************|********************************************/
/*
 *   Copyright (c) 2015  Seiko Epson Corporation                 All rights reserved.
 *
 *   Copyright protection claimed includes all forms and matters of
 *   copyrightable material and information now allowed by statutory or judicial
 *   law or hereinafter granted, including without limitation, material generated
 *   from the software programs which are displayed on the screen such as icons,
 *   screen display looks, etc.
 *
 */
/*******************************************|********************************************/
#ifndef __EPSON_ESCPR_RHV2_H__
#define __EPSON_ESCPR_RHV2_H__
#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------  Includes   -------------------------------------*/
/*******************************************|********************************************/
#include "epson-escpr-pvt.h"


/*----------------------------------  Generic Macros   ---------------------------------*/
/*******************************************|********************************************/

/*-----------------------------------  Definitions  ------------------------------------*/
/*******************************************|********************************************/

/*---------------------------  Data Structure Declarations   ---------------------------*/
/*******************************************|********************************************/

/*--------------------------------  Global Declarations   ------------------------------*/
/*******************************************|********************************************/

/*----------------------------  API Function Declarations   ----------------------------*/
/*******************************************|********************************************/

extern EPS_ERR_CODE epscmdRhv2Init		(EPS_UINT8**, EPS_UINT32*                       );
extern void         epscmdRhv2Term		(void                                           );
extern EPS_BOOL     epscmdRhv2IsEmptyBuffer
										(void                                           );
extern EPS_ERR_CODE epscmdRhv2Line		(const EPS_UINT8*, EPS_RECT*                    );
extern EPS_ERR_CODE epscmdRhv2BandEmit  (void                                           );


#ifdef __cplusplus
}
#endif

#endif  /* def __EPSON_ESCPR_RHV2_H__ */

/*________________________________  epson-escpr-rhv2.h   _______________________________*/
  
/*34567890123456789012345678901234567890123456789012345678901234567890123456789012345678*/
/*       1         2         3         4         5         6         7         8        */
/*******************************************|********************************************/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/***** End of File *** End of File *** End of File *** End of File *** End of File ******/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
