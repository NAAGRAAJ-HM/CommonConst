#pragma once
/******************************************************************************/
/* File   : ConstServiceEcuM.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstModule.hpp"

#include "infMcalMcu_ServiceEcuM.hpp"
#include "infServiceOs_ServiceEcuM.hpp"
#include "infServiceSwcEcuM_ServiceEcuM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTECUM_AR_RELEASE_VERSION_MAJOR                                     4
#define CONSTECUM_AR_RELEASE_VERSION_MINOR                                     3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTECUM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGECUM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTECUM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGECUM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstServiceEcuM_Type:
      public ConstModule_TypeAbstract
{
   public:
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
      infMcalMcu_ServiceEcuM*            ptrinfMcalMcu_ServiceEcuM;
      infServiceOs_ServiceEcuM*             ptrinfServiceOs_ServiceEcuM;
      infServiceSwcEcuM_ServiceEcuM* ptrinfServiceSwcEcuM_ServiceEcuM;
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

