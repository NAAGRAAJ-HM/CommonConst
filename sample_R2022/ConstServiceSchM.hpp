#pragma once
/******************************************************************************/
/* File   : ConstServiceSchM.hpp                                              */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstModule.hpp"

#include "infServiceSchMClient.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTSERVICESCHM_AR_RELEASE_VERSION_MAJOR                              4
#define CONSTSERVICESCHM_AR_RELEASE_VERSION_MINOR                              3
#define ServiceSchM_SizeServiceSchMClients_1ms                                 5
#define ServiceSchM_SizeServiceSchMClients_25ms                                5

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTSERVICESCHM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CONSTSERVICESCHM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTSERVICESCHM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CONSTSERVICESCHM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstServiceSchM_Type:
      public ConstModule_TypeAbstract
{
   public:
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
      uint8                 u8SizeServiceSchMClients_1ms;
      infServiceSchMClient* aptrServiceSchMClients_1ms[ServiceSchM_SizeServiceSchMClients_1ms];
      uint8                 u8SizeServiceSchMClients_25ms;
      infServiceSchMClient* aptrServiceSchMClients_25ms[ServiceSchM_SizeServiceSchMClients_25ms];
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

