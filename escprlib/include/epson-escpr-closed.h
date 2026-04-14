/*_______________________________  epson-escpr-closed.h   ______________________________*/

/*       1         2         3         4         5         6         7         8        */
/*34567890123456789012345678901234567890123456789012345678901234567890123456789012345678*/
/*******************************************|********************************************/
/*
 *   Copyright (c) 2009  Seiko Epson Corporation                 All rights reserved.
 *
 *   Copyright protection claimed includes all forms and matters of
 *   copyrightable material and information now allowed by statutory or judicial
 *   law or hereinafter granted, including without limitation, material generated
 *   from the software programs which are displayed on the screen such as icons,
 *   screen display looks, etc.
 *
 */
/*******************************************|********************************************/
/*                                                                                      */
/*                    Epson ESC/PR Application Programming Interfaces                   */
/*                                                                                      */
/*******************************************|********************************************/
#ifndef __EPSON_ESCPR_CLOSED_H__
#define __EPSON_ESCPR_CLOSED_H__
#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------  Includes   -------------------------------------*/
/*******************************************|********************************************/
#include "epson-typedefs.h"
#include "epson-escpr-rhv2.h"
#ifdef CM_DRV
#include "cmfunc.h"
#endif

/*----------------------------------  Generic Macros   ---------------------------------*/
/*******************************************|********************************************/
#ifdef EPS_PRVCMD_SETI
#undef EPS_PRVCMD_SETI
#endif
#define EPS_PRVCMD_SETI(p1, p2, p3)	clsPrvCmdSeti(p1, p2, p3);

#ifdef EPS_PRVCMD_CHKU
#undef EPS_PRVCMD_CHKU
#endif
#define EPS_PRVCMD_CHKU(p1, p2, p3)	clsPrvCmdChku(p1, p2, p3);

#ifdef EPS_PVTCMD
#undef EPS_PVTCMD
#endif
#define EPS_PVTCMD(sg)	\
	if(printJob.printer && EPS_SP_COMPMODE_RHV2 & printJob.printer->supprotedComplessMode){	\
		sg; \
	} else

/*-----------------------------------  Definitions  ------------------------------------*/
/*******************************************|********************************************/
	/* Platform  */
#define EPS_PF_STANDALON		0x00	/* Reserved (stand alone)                       */
#define EPS_PF_WINDOWS			0x02	/* Windows                                      */
#define EPS_PF_MAC				0x03	/* Mac                                          */
#define EPS_PF_LINUX			0x04	/* Linux                                        */
#define EPS_PF_EPSON_CONNECT	0x05	/* Epson Connect                                */
#define EPS_PF_PS3				0x06	/* PlayStation 3                                */
#define EPS_PF_IPRINT_IOS		0x07	/* iPrint iOS                                   */
#define EPS_PF_IPRINT_ANDROID	0x08	/* iPrint Android                               */
#define EPS_PF_OTHER_IOS		0x09	/* other iOS                                    */
#define EPS_PF_OTHER_ANDROID	0x0A	/* other Android                                */
#define EPS_PF_SAMSUNG			0x0B	/* Samsung                                      */	
#define EPS_PF_AMAZON_HP		0x0C	/* Amazon/HP                                    */	
#define EPS_PF_ANDROID_OS       0x0D    /* For Android OS                               */
#define EPS_PF_OTHER			0xFF	/* Other IA device, Windows CE                  */

	/* Supported Compless mode  */
#define EPS_SP_COMPMODE_RLE		(1 << 0) /* RunLength                                   */
#define EPS_SP_COMPMODE_RHV2	(1 << 1) /* RHV2                                        */

	/* Supported Color space  */
#define EPS_SPCS_SRGB			(1 << 0) /* sRGB                                        */
#define EPS_SPCS_ERGB			(1 << 1) /* eRGB                                        */

	/* Color Plane  */
#define EPS_CP_RGBX            (3)       /* Full Color RGB-X                            */
#define EPS_CP_GRAYX           (4)       /* Gray-X                                      */


/*---------------------------  Data Structure Declarations   ---------------------------*/
/*******************************************|********************************************/

/*--------------------------------  Global Declarations   ------------------------------*/
/*******************************************|********************************************/

/*----------------------------  API Function Declarations   ----------------------------*/
/*******************************************|********************************************/

extern EPS_ERR_CODE epsSetPlatform       (EPS_UINT8                                     );
extern EPS_ERR_CODE epsInfoCommand       (EPS_INT32, EPS_UINT8**, EPS_INT32*            );
extern void         epsSetNonCheckPrintMode(EPS_BOOL                                    );
extern void         epsSetColorConvMode  (EPS_BOOL, EPS_BOOL                            );
extern EPS_BOOL     epsIsEnableColorMode (void                                          );
extern void			epsSetCompressMode	 (EPS_UINT16, EPS_UINT32						);

extern EPS_ERR_CODE clsPrvCmdSeti        (EPS_UINT8**, EPS_UINT8**, EPS_UINT32*         );
extern EPS_ERR_CODE clsPrvCmdChku        (EPS_UINT8**, EPS_UINT8**, EPS_UINT32*         );

extern EPS_ERR_CODE epsGetFirmwareInfo   (EPS_INT8* nicFlg, EPS_INT8 netVer[6], 
										  EPS_INT8 mainVer[7], EPS_INT8 fy[5], 
										  EPS_INT8 marketID[3]                          );
extern void	        epsSetLangList       (EPS_UINT32 *langs, EPS_INT32 langNum          );

#ifdef CM_DRV
extern EPS_ERR_CODE epspageInitCM        (const CMINFO*, const EPS_UINT8*, EPS_UINT32   );
extern void         epspageReleaseCM     (void                                          );
#endif

#ifdef __cplusplus
}
#endif

#endif  /* def __EPSON_ESCPR_CLOSED_H__ */

/*_______________________________  epson-escpr-closed.h   ______________________________*/
  
/*34567890123456789012345678901234567890123456789012345678901234567890123456789012345678*/
/*       1         2         3         4         5         6         7         8        */
/*******************************************|********************************************/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/***** End of File *** End of File *** End of File *** End of File *** End of File ******/
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
