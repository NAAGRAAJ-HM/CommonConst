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
#define Const_DefaultInit                                                                                                     \
      {                                                                                                                       \
            Dcm_SizeinfDcmClients                                                                                             \
         ,  {                                                                                                                 \
                  &Adc                                                                                                        \
               ,  &BswM                                                                                                       \
               ,  &Can                                                                                                        \
               ,  &CanIf                                                                                                      \
               ,  &CanNm                                                                                                      \
               ,  &CanSm                                                                                                      \
               ,  &CanTp                                                                                                      \
               ,  &Com                                                                                                        \
               ,  &ComM                                                                                                       \
               ,  &Cry                                                                                                        \
               ,  &CryIf                                                                                                      \
               ,  &Csm                                                                                                        \
               ,  &Dcm                                                                                                        \
               ,  &Dem                                                                                                        \
               ,  &Det                                                                                                        \
               ,  &Dio                                                                                                        \
               ,  &Dlt                                                                                                        \
               ,  &Ea                                                                                                         \
               ,  &EcuM                                                                                                       \
               ,  &Eep                                                                                                        \
               ,  &Eth                                                                                                        \
               ,  &EthIf                                                                                                      \
               ,  &Fee                                                                                                        \
               ,  &FiM                                                                                                        \
               ,  &Fls                                                                                                        \
               ,  &Fr                                                                                                         \
               ,  &FrIf                                                                                                       \
               ,  &FrNm                                                                                                       \
               ,  &FrTp                                                                                                       \
               ,  &Gpt                                                                                                        \
               ,  &Icu                                                                                                        \
               ,  &IpduM                                                                                                      \
               ,  &J1939Tp                                                                                                    \
               ,  &Lin                                                                                                        \
               ,  &LinIf                                                                                                      \
               ,  &LinTp                                                                                                      \
               ,  &Mcu                                                                                                        \
               ,  &MemIf                                                                                                      \
               ,  &Nm                                                                                                         \
               ,  &NvM                                                                                                        \
               ,  &Ocu                                                                                                        \
               ,  &Os                                                                                                         \
               ,  &PduR                                                                                                       \
               ,  &Port                                                                                                       \
               ,  &Pwm                                                                                                        \
               ,  &Rte                                                                                                        \
               ,  &SchM                                                                                                       \
               ,  &SecOC                                                                                                      \
               ,  &SokFm                                                                                                      \
               ,  &Spi                                                                                                        \
               ,  &StartUp                                                                                                    \
               ,  &StbM                                                                                                       \
               ,  &SwcApplFoc                                                                                                 \
               ,  &SwcServiceEcuM                                                                                             \
               ,  &SwcServiceOs                                                                                               \
               ,  &Vkms                                                                                                       \
               ,  &Wdg                                                                                                        \
               ,  &WdgIf                                                                                                      \
               ,  &WdgM                                                                                                       \
            }                                                                                                                 \
/*#if(STD_ON == _ReSIM)*/                                                                                                     \
         ,  {                                                                                                                 \
                  "Adc"                                                                                                       \
               ,  "BswM"                                                                                                      \
               ,  "Can"                                                                                                       \
               ,  "CanIf"                                                                                                     \
               ,  "CanNm"                                                                                                     \
               ,  "CanSm"                                                                                                     \
               ,  "CanTp"                                                                                                     \
               ,  "Com"                                                                                                       \
               ,  "ComM"                                                                                                      \
               ,  "Cry"                                                                                                       \
               ,  "CryIf"                                                                                                     \
               ,  "Csm"                                                                                                       \
               ,  "Dcm"                                                                                                       \
               ,  "Dem"                                                                                                       \
               ,  "Det"                                                                                                       \
               ,  "Dio"                                                                                                       \
               ,  "Dlt"                                                                                                       \
               ,  "Ea"                                                                                                        \
               ,  "EcuM"                                                                                                      \
               ,  "Eep"                                                                                                       \
               ,  "Eth"                                                                                                       \
               ,  "EthIf"                                                                                                     \
               ,  "Fee"                                                                                                       \
               ,  "FiM"                                                                                                       \
               ,  "Fls"                                                                                                       \
               ,  "Fr"                                                                                                        \
               ,  "FrIf"                                                                                                      \
               ,  "FrNm"                                                                                                      \
               ,  "FrTp"                                                                                                      \
               ,  "Gpt"                                                                                                       \
               ,  "Icu"                                                                                                       \
               ,  "IpduM"                                                                                                     \
               ,  "J1939Tp"                                                                                                   \
               ,  "Lin"                                                                                                       \
               ,  "LinIf"                                                                                                     \
               ,  "LinTp"                                                                                                     \
               ,  "Mcu"                                                                                                       \
               ,  "MemIf"                                                                                                     \
               ,  "Nm"                                                                                                        \
               ,  "NvM"                                                                                                       \
               ,  "Ocu"                                                                                                       \
               ,  "Os"                                                                                                        \
               ,  "PduR"                                                                                                      \
               ,  "Port"                                                                                                      \
               ,  "Pwm"                                                                                                       \
               ,  "Rte"                                                                                                       \
               ,  "SchM"                                                                                                      \
               ,  "SecOC"                                                                                                     \
               ,  "SokFm"                                                                                                     \
               ,  "Spi"                                                                                                       \
               ,  "StartUp"                                                                                                   \
               ,  "StbM"                                                                                                      \
               ,  "SwcApplFoc"                                                                                                \
               ,  "SwcServiceEcuM"                                                                                            \
               ,  "SwcServiceOs"                                                                                              \
               ,  "Vkms"                                                                                                      \
               ,  "Wdg"                                                                                                       \
               ,  "WdgIf"                                                                                                     \
               ,  "WdgM"                                                                                                      \
            }                                                                                                                 \
/*#else*/                                                                                                                     \
/*#endif*/                                                                                                                    \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            SchM_SizeSchMClients                                                                                              \
         ,  {                                                                                                                 \
                  &EcuM                                                                                                       \
               ,  &NvM                                                                                                        \
               ,  &CanIf                                                                                                      \
               ,  &PduR                                                                                                       \
               ,  &Dcm                                                                                                        \
            }                                                                                                                 \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            SizeDriverInitData_One                                                                                            \
         ,  {                                                                                                                 \
                  &Adc                                                                                                        \
               ,  &Can                                                                                                        \
               ,  &CanIf                                                                                                      \
               ,  &CanNm                                                                                                      \
               ,  &CanSm                                                                                                      \
               ,  &CanTp                                                                                                      \
               ,  &Com                                                                                                        \
               ,  &ComM                                                                                                       \
               ,  &Cry                                                                                                        \
               ,  &CryIf                                                                                                      \
               ,  &Csm                                                                                                        \
               ,  &Dcm                                                                                                        \
/*             ,  &Dem*/                                                                                                      \
/*             ,  &Det*/                                                                                                      \
               ,  &Dio                                                                                                        \
               ,  &Dlt                                                                                                        \
               ,  &Ea                                                                                                         \
/*             ,  &EcuM*/                                                                                                     \
               ,  &Eep                                                                                                        \
               ,  &Eth                                                                                                        \
               ,  &EthIf                                                                                                      \
/*             ,  &Fee*/                                                                                                      \
               ,  &FiM                                                                                                        \
/*             ,  &Fls*/                                                                                                      \
               ,  &Fr                                                                                                         \
               ,  &FrIf                                                                                                       \
               ,  &FrNm                                                                                                       \
               ,  &FrTp                                                                                                       \
               ,  &Gpt                                                                                                        \
               ,  &Icu                                                                                                        \
               ,  &IpduM                                                                                                      \
               ,  &J1939Tp                                                                                                    \
               ,  &Lin                                                                                                        \
               ,  &LinIf                                                                                                      \
               ,  &LinTp                                                                                                      \
               ,  &Mcu                                                                                                        \
/*             ,  &MemIf*/                                                                                                    \
               ,  &Nm                                                                                                         \
/*             ,  &NvM*/                                                                                                      \
               ,  &Ocu                                                                                                        \
               ,  &Os                                                                                                         \
               ,  &PduR                                                                                                       \
               ,  &Port                                                                                                       \
               ,  &Pwm                                                                                                        \
               ,  &Rte                                                                                                        \
               ,  &SecOC                                                                                                      \
               ,  &SokFm                                                                                                      \
               ,  &Spi                                                                                                        \
               ,  &StartUp                                                                                                    \
               ,  &StbM                                                                                                       \
               ,  &SwcApplFoc                                                                                                 \
/*             ,  &SwcServiceEcuM*/                                                                                           \
               ,  &SwcServiceOs                                                                                               \
               ,  &Vkms                                                                                                       \
               ,  &Wdg                                                                                                        \
               ,  &WdgIf                                                                                                      \
               ,  &WdgM                                                                                                       \
                                                                                                                              \
               ,  &BswM                                                                                                       \
               ,  &SchM                                                                                                       \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(CfgGen_NvM.CfgAdc)                                                                                        \
               ,  &(CfgGen_NvM.CfgCan)                                                                                        \
               ,  &(CfgGen_NvM.CfgCanIf)                                                                                      \
               ,  &(CfgGen_NvM.CfgCanNm)                                                                                      \
               ,  &(CfgGen_NvM.CfgCanSm)                                                                                      \
               ,  &(CfgGen_NvM.CfgCanTp)                                                                                      \
               ,  &(CfgGen_NvM.CfgCom)                                                                                        \
               ,  &(CfgGen_NvM.CfgComM)                                                                                       \
               ,  &(CfgGen_NvM.CfgCry)                                                                                        \
               ,  &(CfgGen_NvM.CfgCryIf)                                                                                      \
               ,  &(CfgGen_NvM.CfgCsm)                                                                                        \
               ,  &(CfgGen_NvM.CfgDcm)                                                                                        \
/*             ,  &(CfgGen_NvM.CfgDem)*/                                                                                      \
/*             ,  &(CfgGen_NvM.CfgDet)*/                                                                                      \
               ,  &(CfgGen_NvM.CfgDio)                                                                                        \
               ,  &(CfgGen_NvM.CfgDlt)                                                                                        \
               ,  &(CfgGen_NvM.CfgEa)                                                                                         \
/*             ,  &(CfgGen_NvM.CfgEcuM)*/                                                                                     \
               ,  &(CfgGen_NvM.CfgEep)                                                                                        \
               ,  &(CfgGen_NvM.CfgEth)                                                                                        \
               ,  &(CfgGen_NvM.CfgEthIf)                                                                                      \
/*             ,  &(CfgGen_NvM.CfgFee)*/                                                                                      \
               ,  &(CfgGen_NvM.CfgFiM)                                                                                        \
/*             ,  &(CfgGen_NvM.CfgFls)*/                                                                                      \
               ,  &(CfgGen_NvM.CfgFr)                                                                                         \
               ,  &(CfgGen_NvM.CfgFrIf)                                                                                       \
               ,  &(CfgGen_NvM.CfgFrNm)                                                                                       \
               ,  &(CfgGen_NvM.CfgFrTp)                                                                                       \
               ,  &(CfgGen_NvM.CfgGpt)                                                                                        \
               ,  &(CfgGen_NvM.CfgIcu)                                                                                        \
               ,  &(CfgGen_NvM.CfgIpduM)                                                                                      \
               ,  &(CfgGen_NvM.CfgJ1939Tp)                                                                                    \
               ,  &(CfgGen_NvM.CfgLin)                                                                                        \
               ,  &(CfgGen_NvM.CfgLinIf)                                                                                      \
               ,  &(CfgGen_NvM.CfgLinTp)                                                                                      \
               ,  &(CfgGen_NvM.CfgMcu)                                                                                        \
/*             ,  &(CfgGen_NvM.CfgMemIf)*/                                                                                    \
               ,  &(CfgGen_NvM.CfgNm)                                                                                         \
/*             ,  &(CfgGen_NvM.CfgNvM)*/                                                                                      \
               ,  &(CfgGen_NvM.CfgOcu)                                                                                        \
               ,  &(CfgGen_NvM.CfgOs)                                                                                         \
               ,  &(CfgGen_NvM.CfgPduR)                                                                                       \
               ,  &(CfgGen_NvM.CfgPort)                                                                                       \
               ,  &(CfgGen_NvM.CfgPwm)                                                                                        \
               ,  &(CfgGen_NvM.CfgRte)                                                                                        \
               ,  &(CfgGen_NvM.CfgSecOC)                                                                                      \
               ,  &(CfgGen_NvM.CfgSokFm)                                                                                      \
               ,  &(CfgGen_NvM.CfgSpi)                                                                                        \
               ,  &(CfgGen_NvM.CfgStartUp)                                                                                    \
               ,  &(CfgGen_NvM.CfgStbM)                                                                                       \
               ,  &(CfgGen_NvM.CfgSwcApplFoc)                                                                                 \
/*             ,  &(CfgGen_NvM.CfgSwcServiceEcuM)*/                                                                           \
               ,  &(CfgGen_NvM.CfgSwcServiceOs)                                                                               \
               ,  &(CfgGen_NvM.CfgVkms)                                                                                       \
               ,  &(CfgGen_NvM.CfgWdg)                                                                                        \
               ,  &(CfgGen_NvM.CfgWdgIf)                                                                                      \
               ,  &(CfgGen_NvM.CfgWdgM)                                                                                       \
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
            &Mcu                                                                                                              \
         ,  &Os                                                                                                               \
         ,  &SwcServiceEcuM                                                                                                   \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            &MemIf                                                                                                            \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            &EcuM                                                                                                             \
         ,  &SwcServiceOs                                                                                                     \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            &SchM                                                                                                             \
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

