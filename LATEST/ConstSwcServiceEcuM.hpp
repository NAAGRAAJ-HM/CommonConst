#pragma once
/******************************************************************************/
/* File   : ConstSwcServiceEcuM.hpp                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstModule.hpp"

#include "infEcuMClient.hpp"
#include "infSwcServiceEcuM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR                           4
#define CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR                           3
#define IndexEcuMClient_BswM                                                  49
#define IndexEcuMClient_SchM                                                  50
#define SizeDriverInitData_One                                                51
#define SizeDriverInitData_Zero                                                7

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstSwcServiceEcuM_Type:
      public ConstModule_TypeAbstract
{
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
   public:
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
      uint8                           u8SizeDriverInitData_One;
      infEcuMClient*                  aptrinfEcuMClient_One  [SizeDriverInitData_One];
      const ConstModule_TypeAbstract* aptrConstModule_One    [SizeDriverInitData_One];
      CfgModule_TypeAbstract*         aptrCfgModule_One      [SizeDriverInitData_One];
      uint8                           u8SizeDriverInitData_Zero;
      infEcuMClient*                  aptrinfEcuMClient_Zero [SizeDriverInitData_Zero];
      const ConstModule_TypeAbstract* aptrConstModule_Zero   [SizeDriverInitData_Zero];
      CfgModule_TypeAbstract*         aptrCfgModule_Zero     [SizeDriverInitData_Zero];
      infEcuM_SwcServiceEcuM*         ptrinfEcuM_SwcServiceEcuM;
      infSchM_EcuM*                   ptrinfSchM_EcuM;
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

