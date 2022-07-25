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
      {CFGADC_AR_RELEASE_VERSION_MAJOR,   CFGADC_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGBSWM_AR_RELEASE_VERSION_MAJOR,  CFGBSWM_AR_RELEASE_VERSION_MINOR,  0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCAN_AR_RELEASE_VERSION_MAJOR,   CFGCAN_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCANIF_AR_RELEASE_VERSION_MAJOR, CFGCANIF_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCANNM_AR_RELEASE_VERSION_MAJOR, CFGCANNM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCANSM_AR_RELEASE_VERSION_MAJOR, CFGCANSM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCANTP_AR_RELEASE_VERSION_MAJOR, CFGCANTP_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCOM_AR_RELEASE_VERSION_MAJOR,   CFGCOM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCOMM_AR_RELEASE_VERSION_MAJOR,  CFGCOMM_AR_RELEASE_VERSION_MINOR,  0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCRY_AR_RELEASE_VERSION_MAJOR,   CFGCRY_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCRYIF_AR_RELEASE_VERSION_MAJOR, CFGCRYIF_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGCSM_AR_RELEASE_VERSION_MAJOR,   CFGCSM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGDEM_AR_RELEASE_VERSION_MAJOR,   CFGDEM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGDET_AR_RELEASE_VERSION_MAJOR,   CFGDET_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGDIO_AR_RELEASE_VERSION_MAJOR,   CFGDIO_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGDLT_AR_RELEASE_VERSION_MAJOR,   CFGDLT_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGEA_AR_RELEASE_VERSION_MAJOR,    CFGEA_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGETH_AR_RELEASE_VERSION_MAJOR,   CFGETH_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGETHIF_AR_RELEASE_VERSION_MAJOR, CFGETHIF_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGFEE_AR_RELEASE_VERSION_MAJOR,   CFGFEE_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGFIM_AR_RELEASE_VERSION_MAJOR,   CFGFIM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGFLS_AR_RELEASE_VERSION_MAJOR,   CFGFLS_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGFR_AR_RELEASE_VERSION_MAJOR,    CFGFR_AR_RELEASE_VERSION_MINOR,    0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGFRIF_AR_RELEASE_VERSION_MAJOR,  CFGFRIF_AR_RELEASE_VERSION_MINOR,  0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGFRNM_AR_RELEASE_VERSION_MAJOR,  CFGFRNM_AR_RELEASE_VERSION_MINOR,  0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGFRTP_AR_RELEASE_VERSION_MAJOR,  CFGFRTP_AR_RELEASE_VERSION_MINOR,  0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGGPT_AR_RELEASE_VERSION_MAJOR,   CFGGPT_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGICU_AR_RELEASE_VERSION_MAJOR,   CFGICU_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGIPDUM_AR_RELEASE_VERSION_MAJOR,   CFGIPDUM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGJ1939TP_AR_RELEASE_VERSION_MAJOR,   CFGJ1939TP_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGLIN_AR_RELEASE_VERSION_MAJOR,   CFGLIN_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGLINIF_AR_RELEASE_VERSION_MAJOR,   CFGLINIF_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGLINTP_AR_RELEASE_VERSION_MAJOR,   CFGLINTP_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGMCU_AR_RELEASE_VERSION_MAJOR,   CFGMCU_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGMEMIF_AR_RELEASE_VERSION_MAJOR,   CFGMEMIF_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGMEMIF_AR_RELEASE_VERSION_MAJOR,   CFGMEMIF_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGNM_AR_RELEASE_VERSION_MAJOR,   CFGNM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGOCU_AR_RELEASE_VERSION_MAJOR,   CFGOCU_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGPORT_AR_RELEASE_VERSION_MAJOR,   CFGPORT_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGPWM_AR_RELEASE_VERSION_MAJOR,   CFGPWM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGRTE_AR_RELEASE_VERSION_MAJOR,   CFGRTE_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGSECOC_AR_RELEASE_VERSION_MAJOR,   CFGSECOC_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGSOKFM_AR_RELEASE_VERSION_MAJOR,   CFGSOKFM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGSPI_AR_RELEASE_VERSION_MAJOR,   CFGSPI_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGSTARTUP_AR_RELEASE_VERSION_MAJOR,   CFGSTARTUP_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGSTBM_AR_RELEASE_VERSION_MAJOR,   CFGSTBM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR,   CFGSWCAPPLFOC_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGVKMS_AR_RELEASE_VERSION_MAJOR,   CFGVKMS_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGWDG_AR_RELEASE_VERSION_MAJOR,   CFGWDG_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGWDGIF_AR_RELEASE_VERSION_MAJOR,   CFGWDGIF_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {CFGWDGM_AR_RELEASE_VERSION_MAJOR,   CFGWDGM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                      \
   ,  {                                                                                                                       \
            {CFGDCM_AR_RELEASE_VERSION_MAJOR,   CFGDCM_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'}                \
         ,  Dcm_SizeinfDcmClients                                                                                             \
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
//#if(STD_ON == _ReSIM)                                                                                                       \
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
//#else                                                                                                                       \
//#endif                                                                                                                      \
      }                                                                                                                       \
                                                                                                                              \

/*
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
//             ,  &Dem                                                                                                        \
//             ,  &Det                                                                                                        \
               ,  &Dio                                                                                                        \
               ,  &Dlt                                                                                                        \
               ,  &Ea                                                                                                         \
//             ,  &EcuM                                                                                                       \
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
//             ,  &NvM                                                                                                        \
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
//             ,  &SwcServiceEcuM                                                                                             \
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
//             ,  &(CfgGen_NvM.CfgDem)                                                                                        \
//             ,  &(CfgGen_NvM.CfgDet)                                                                                        \
               ,  &(CfgGen_NvM.CfgDio)                                                                                        \
               ,  &(CfgGen_NvM.CfgDlt)                                                                                        \
               ,  &(CfgGen_NvM.CfgEa)                                                                                         \
//             ,  &(CfgGen_NvM.CfgEcuM)                                                                                       \
               ,  &(CfgGen_NvM.CfgEep)                                                                                        \
               ,  &(CfgGen_NvM.CfgEth)                                                                                        \
               ,  &(CfgGen_NvM.CfgEthIf)                                                                                      \
//             ,  &(CfgGen_NvM.CfgFee)                                                                                        \
               ,  &(CfgGen_NvM.CfgFiM)                                                                                        \
//             ,  &(CfgGen_NvM.CfgFls)                                                                                        \
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
//             ,  &(CfgGen_NvM.CfgMemIf)                                                                                      \
               ,  &(CfgGen_NvM.CfgNm)                                                                                         \
//             ,  &(CfgGen_NvM.CfgNvM)                                                                                        \
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
//             ,  &(CfgGen_NvM.CfgSwcServiceEcuM)                                                                             \
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
//             ,  &EcuM                                                                                                       \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(CfgGen_NvM.CfgDet)                                                                                        \
               ,  &(CfgGen_NvM.CfgDem)                                                                                        \
               ,  &(CfgGen_NvM.CfgFls)                                                                                        \
               ,  &(CfgGen_NvM.CfgFee)                                                                                        \
               ,  &(CfgGen_NvM.CfgMemIf)                                                                                      \
               ,  &(CfgGen_NvM.CfgNvM)                                                                                        \
               ,  &(CfgGen_NvM.CfgSwcServiceEcuM)                                                                             \
//             ,  &(CfgGen_NvM.CfgEcuM)                                                                                       \
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
*/

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

