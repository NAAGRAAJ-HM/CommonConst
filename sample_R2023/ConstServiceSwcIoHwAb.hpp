#pragma once
/******************************************************************************/
/* File   : ConstServiceSwcIoHwAb.hpp                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstModule.hpp"

/*
#include "infMcalMcu_ServiceSwcIoHwAb.hpp"
#include "infServiceOs_ServiceSwcIoHwAb.hpp"
#include "infServiceSwcEcuM_ServiceSwcIoHwAb.hpp"
*/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTSERVICESWCIOHWAB_AR_RELEASE_VERSION_MAJOR                         4
#define CONSTSERVICESWCIOHWAB_AR_RELEASE_VERSION_MINOR                         3

#define Const_DefaultInit_ConstServiceSwcIoHwAb                                                                                    \
   ,  {CONSTSERVICESWCIOHWAB_AR_RELEASE_VERSION_MAJOR, CONSTSERVICESWCIOHWAB_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTSERVICESWCIOHWAB_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGSERVICESWCIOHWAB_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTSERVICESWCIOHWAB_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGSERVICESWCIOHWAB_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstServiceSwcIoHwAb_Type:
      public ConstModule_TypeAbstract
{
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
/*
   public:
      infMcalMcu_ServiceSwcIoHwAb*        ptrinfMcalMcu_ServiceSwcIoHwAb;
      infServiceOs_ServiceSwcIoHwAb*      ptrinfServiceOs_ServiceSwcIoHwAb;
      infServiceSwcEcuM_ServiceSwcIoHwAb* ptrinfServiceSwcEcuM_ServiceSwcIoHwAb;
*/
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

