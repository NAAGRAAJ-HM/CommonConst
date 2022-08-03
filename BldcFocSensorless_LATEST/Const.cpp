/******************************************************************************/
/* File   : Const.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"

#include "Const.hpp"
#include "infConst_Imp.hpp"

#include "CfgGen.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define Const_DefaultInit                                                                                                  \
      {CONSTADC_AR_RELEASE_VERSION_MAJOR,          CONSTADC_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTBSWM_AR_RELEASE_VERSION_MAJOR,         CONSTBSWM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDEM_AR_RELEASE_VERSION_MAJOR,          CONSTDEM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDET_AR_RELEASE_VERSION_MAJOR,          CONSTDET_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDIO_AR_RELEASE_VERSION_MAJOR,          CONSTDIO_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDLT_AR_RELEASE_VERSION_MAJOR,          CONSTDLT_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFEE_AR_RELEASE_VERSION_MAJOR,          CONSTFEE_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFIM_AR_RELEASE_VERSION_MAJOR,          CONSTFIM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFLS_AR_RELEASE_VERSION_MAJOR,          CONSTFLS_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTGPT_AR_RELEASE_VERSION_MAJOR,          CONSTGPT_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTICU_AR_RELEASE_VERSION_MAJOR,          CONSTICU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCU_AR_RELEASE_VERSION_MAJOR,          CONSTMCU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMEMIF_AR_RELEASE_VERSION_MAJOR,        CONSTMEMIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTOCU_AR_RELEASE_VERSION_MAJOR,          CONSTOCU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTPORT_AR_RELEASE_VERSION_MAJOR,         CONSTPORT_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTPWM_AR_RELEASE_VERSION_MAJOR,          CONSTPWM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTRTE_AR_RELEASE_VERSION_MAJOR,          CONSTRTE_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSPI_AR_RELEASE_VERSION_MAJOR,          CONSTSPI_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSTARTUP_AR_RELEASE_VERSION_MAJOR,      CONSTSTARTUP_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR,   CONSTSWCAPPLFOC_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {                                                                                                                \
            {CONSTDCM_AR_RELEASE_VERSION_MAJOR, CONSTDCM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}         \
         ,  Dcm_SizeinfDcmClients                                                                                      \
         ,  {                                                                                                          \
                  &Adc                                                                                                 \
               ,  &BswM                                                                                                \
               ,  &Dcm                                                                                                 \
               ,  &Dem                                                                                                 \
               ,  &Det                                                                                                 \
               ,  &Dio                                                                                                 \
               ,  &Dlt                                                                                                 \
               ,  &EcuM                                                                                                \
               ,  &Fee                                                                                                 \
               ,  &FiM                                                                                                 \
               ,  &Fls                                                                                                 \
               ,  &Gpt                                                                                                 \
               ,  &Icu                                                                                                 \
               ,  &Mcu                                                                                                 \
               ,  &MemIf                                                                                               \
               ,  &NvM                                                                                                 \
               ,  &Ocu                                                                                                 \
               ,  &Os                                                                                                  \
               ,  &Port                                                                                                \
               ,  &Pwm                                                                                                 \
               ,  &Rte                                                                                                 \
               ,  &SchM                                                                                                \
               ,  &Spi                                                                                                 \
               ,  &StartUp                                                                                             \
               ,  &SwcApplFoc                                                                                          \
               ,  &SwcServiceEcuM                                                                                      \
               ,  &SwcServiceOs                                                                                        \
            }                                                                                                          \
/*#if(STD_ON == _ReSIM)*/                                                                                              \
         ,  {                                                                                                          \
                  "Adc"                                                                                                \
               ,  "BswM"                                                                                               \
               ,  "Dcm"                                                                                                \
               ,  "Dem"                                                                                                \
               ,  "Det"                                                                                                \
               ,  "Dio"                                                                                                \
               ,  "Dlt"                                                                                                \
               ,  "EcuM"                                                                                               \
               ,  "Fee"                                                                                                \
               ,  "FiM"                                                                                                \
               ,  "Fls"                                                                                                \
               ,  "Gpt"                                                                                                \
               ,  "Icu"                                                                                                \
               ,  "Mcu"                                                                                                \
               ,  "MemIf"                                                                                              \
               ,  "NvM"                                                                                                \
               ,  "Ocu"                                                                                                \
               ,  "Os"                                                                                                 \
               ,  "Port"                                                                                               \
               ,  "Pwm"                                                                                                \
               ,  "Rte"                                                                                                \
               ,  "SchM"                                                                                               \
               ,  "Spi"                                                                                                \
               ,  "StartUp"                                                                                            \
               ,  "SwcApplFoc"                                                                                         \
               ,  "SwcServiceEcuM"                                                                                     \
               ,  "SwcServiceOs"                                                                                       \
            }                                                                                                          \
/*#else*/                                                                                                              \
/*#endif*/                                                                                                             \
      }                                                                                                                \
                                                                                                                       \
   ,  {                                                                                                                \
            {CONSTSCHM_AR_RELEASE_VERSION_MAJOR, CONSTSCHM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}       \
         ,  SchM_SizeSchMClients                                                                                       \
         ,  {                                                                                                          \
                  &EcuM                                                                                                \
               ,  &NvM                                                                                                 \
               ,  &Dcm                                                                                                 \
            }                                                                                                          \
      }                                                                                                                \
                                                                                                                       \
   ,  {                                                                                                                       \
            {CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR, CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  SizeDriverInitData_One                                                                                            \
         ,  {                                                                                                                 \
                  &Adc                                                                                                        \
               ,  &Dcm                                                                                                        \
/*             ,  &Dem*/                                                                                                      \
/*             ,  &Det*/                                                                                                      \
               ,  &Dio                                                                                                        \
               ,  &Dlt                                                                                                        \
/*             ,  &EcuM*/                                                                                                     \
/*             ,  &Fee*/                                                                                                      \
               ,  &FiM                                                                                                        \
/*             ,  &Fls*/                                                                                                      \
               ,  &Gpt                                                                                                        \
               ,  &Icu                                                                                                        \
               ,  &Mcu                                                                                                        \
/*             ,  &MemIf*/                                                                                                    \
/*             ,  &NvM*/                                                                                                      \
               ,  &Ocu                                                                                                        \
               ,  &Os                                                                                                         \
               ,  &Port                                                                                                       \
               ,  &Pwm                                                                                                        \
               ,  &Rte                                                                                                        \
               ,  &Spi                                                                                                        \
               ,  &StartUp                                                                                                    \
               ,  &SwcApplFoc                                                                                                 \
/*             ,  &SwcServiceEcuM*/                                                                                           \
               ,  &SwcServiceOs                                                                                               \
                                                                                                                              \
               ,  &BswM                                                                                                       \
               ,  &SchM                                                                                                       \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(Const.ConstAdc)                                                                                           \
               ,  &(Const.ConstDcm)                                                                                           \
/*             ,  &(Const.ConstDem)*/                                                                                         \
/*             ,  &(Const.ConstDet)*/                                                                                         \
               ,  &(Const.ConstDio)                                                                                           \
               ,  &(Const.ConstDlt)                                                                                           \
/*             ,  &(Const.ConstEcuM)*/                                                                                        \
/*             ,  &(Const.ConstFee)*/                                                                                         \
               ,  &(Const.ConstFiM)                                                                                           \
/*             ,  &(Const.ConstFls)*/                                                                                         \
               ,  &(Const.ConstGpt)                                                                                           \
               ,  &(Const.ConstIcu)                                                                                           \
               ,  &(Const.ConstMcu)                                                                                           \
/*             ,  &(Const.ConstMemIf)*/                                                                                       \
/*             ,  &(Const.ConstNvM)*/                                                                                         \
               ,  &(Const.ConstOcu)                                                                                           \
               ,  &(Const.ConstOs)                                                                                            \
               ,  &(Const.ConstPort)                                                                                          \
               ,  &(Const.ConstPwm)                                                                                           \
               ,  &(Const.ConstRte)                                                                                           \
               ,  &(Const.ConstSpi)                                                                                           \
               ,  &(Const.ConstStartUp)                                                                                       \
               ,  &(Const.ConstSwcApplFoc)                                                                                    \
/*             ,  &(Const.ConstSwcServiceEcuM)*/                                                                              \
               ,  &(Const.ConstSwcServiceOs)                                                                                  \
                                                                                                                              \
               ,  &(Const.ConstBswM)                                                                                          \
               ,  &(Const.ConstSchM)                                                                                          \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(CfgGen_NvM.CfgAdc)                                                                                        \
               ,  &(CfgGen_NvM.CfgDcm)                                                                                        \
/*             ,  &(CfgGen_NvM.CfgDem)*/                                                                                      \
/*             ,  &(CfgGen_NvM.CfgDet)*/                                                                                      \
               ,  &(CfgGen_NvM.CfgDio)                                                                                        \
               ,  &(CfgGen_NvM.CfgDlt)                                                                                        \
/*             ,  &(CfgGen_NvM.CfgEcuM)*/                                                                                     \
/*             ,  &(CfgGen_NvM.CfgFee)*/                                                                                      \
               ,  &(CfgGen_NvM.CfgFiM)                                                                                        \
/*             ,  &(CfgGen_NvM.CfgFls)*/                                                                                      \
               ,  &(CfgGen_NvM.CfgGpt)                                                                                        \
               ,  &(CfgGen_NvM.CfgIcu)                                                                                        \
               ,  &(CfgGen_NvM.CfgMcu)                                                                                        \
/*             ,  &(CfgGen_NvM.CfgMemIf)*/                                                                                    \
/*             ,  &(CfgGen_NvM.CfgNvM)*/                                                                                      \
               ,  &(CfgGen_NvM.CfgOcu)                                                                                        \
               ,  &(CfgGen_NvM.CfgOs)                                                                                         \
               ,  &(CfgGen_NvM.CfgPort)                                                                                       \
               ,  &(CfgGen_NvM.CfgPwm)                                                                                        \
               ,  &(CfgGen_NvM.CfgRte)                                                                                        \
               ,  &(CfgGen_NvM.CfgSpi)                                                                                        \
               ,  &(CfgGen_NvM.CfgStartUp)                                                                                    \
               ,  &(CfgGen_NvM.CfgSwcApplFoc)                                                                                 \
/*             ,  &(CfgGen_NvM.CfgSwcServiceEcuM)*/                                                                           \
               ,  &(CfgGen_NvM.CfgSwcServiceOs)                                                                               \
                                                                                                                              \
               ,  &(CfgGen_NvM.CfgBswM)                                                                                       \
               ,  &(CfgGen_NvM.CfgSchM)                                                                                       \
            }                                                                                                                 \
         ,  SizeDriverInitData_Zero                                                                                           \
         ,  {                                                                                                                 \
                  &Det                                                                                                        \
               ,  &Dem                                                                                                        \
               ,  &Fls                                                                                                        \
               ,  &Fee                                                                                                        \
               ,  &MemIf                                                                                                      \
               ,  &NvM                                                                                                        \
               ,  &SwcServiceEcuM                                                                                             \
/*             ,  &EcuM*/                                                                                                     \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(Const.ConstDet)                                                                                           \
               ,  &(Const.ConstDem)                                                                                           \
               ,  &(Const.ConstFls)                                                                                           \
               ,  &(Const.ConstFee)                                                                                           \
               ,  &(Const.ConstMemIf)                                                                                         \
               ,  &(Const.ConstNvM)                                                                                           \
               ,  &(Const.ConstSwcServiceEcuM)                                                                                \
/*             ,  &(Const.ConstEcuM)*/                                                                                        \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(CfgGen_NvM.CfgDet)                                                                                        \
               ,  &(CfgGen_NvM.CfgDem)                                                                                        \
               ,  &(CfgGen_NvM.CfgFls)                                                                                        \
               ,  &(CfgGen_NvM.CfgFee)                                                                                        \
               ,  &(CfgGen_NvM.CfgMemIf)                                                                                      \
               ,  &(CfgGen_NvM.CfgNvM)                                                                                        \
               ,  &(CfgGen_NvM.CfgSwcServiceEcuM)                                                                             \
/*             ,  &(CfgGen_NvM.CfgEcuM)*/                                                                                     \
            }                                                                                                                 \
         ,  &EcuM                                                                                                             \
         ,  &SchM                                                                                                             \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTECUM_AR_RELEASE_VERSION_MAJOR, CONSTECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}              \
         ,  &Mcu                                                                                                              \
         ,  &Os                                                                                                               \
         ,  &SwcServiceEcuM                                                                                                   \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTNVM_AR_RELEASE_VERSION_MAJOR, CONSTNVM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                \
         ,  &MemIf                                                                                                            \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTOS_AR_RELEASE_VERSION_MAJOR, CONSTOS_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                  \
         ,  &EcuM                                                                                                             \
         ,  &SwcServiceOs                                                                                                     \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTSWCSERVICEOS_AR_RELEASE_VERSION_MAJOR, CONSTSWCSERVICEOS_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  &SchM                                                                                                             \
      }                                                                                                                       \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
const Const_Type Const = {
   Const_DefaultInit
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

