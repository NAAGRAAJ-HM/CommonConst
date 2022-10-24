#pragma once
/******************************************************************************/
/* File   : ConstServiceDcm.hpp                                               */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstModule.hpp"

#include "infServiceDcmClient.hpp"

#if(STD_ON == _ReSIM)
#include <iostream>
using namespace std;
#else
#endif

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTSERVICEDCM_AR_RELEASE_VERSION_MAJOR                               4
#define CONSTSERVICEDCM_AR_RELEASE_VERSION_MINOR                               3
#define ServiceDcm_SizeinfServiceDcmClients                                   59

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTSERVICEDCM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CONSTSERVICEDCM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTSERVICEDCM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CONSTSERVICEDCM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstServiceDcm_Type:
      public ConstModule_TypeAbstract
{
   public:
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
      uint8         u8SizeinfServiceDcmClients;
      infServiceDcmClient* aptrServiceDcmClients[ServiceDcm_SizeinfServiceDcmClients];
#if(STD_ON == _ReSIM)
      string        astrServiceDcmClientNames[ServiceDcm_SizeinfServiceDcmClients];
#else
#endif
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

