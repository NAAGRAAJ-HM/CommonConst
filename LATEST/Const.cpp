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
   ,  {CONSTCAN_AR_RELEASE_VERSION_MAJOR,          CONSTCAN_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCANIF_AR_RELEASE_VERSION_MAJOR,        CONSTCANIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCANNM_AR_RELEASE_VERSION_MAJOR,        CONSTCANNM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCANSM_AR_RELEASE_VERSION_MAJOR,        CONSTCANSM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCANTP_AR_RELEASE_VERSION_MAJOR,        CONSTCANTP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCOM_AR_RELEASE_VERSION_MAJOR,          CONSTCOM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCOMM_AR_RELEASE_VERSION_MAJOR,         CONSTCOMM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCRY_AR_RELEASE_VERSION_MAJOR,          CONSTCRY_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCRYIF_AR_RELEASE_VERSION_MAJOR,        CONSTCRYIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTCSM_AR_RELEASE_VERSION_MAJOR,          CONSTCSM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDEM_AR_RELEASE_VERSION_MAJOR,          CONSTDEM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDET_AR_RELEASE_VERSION_MAJOR,          CONSTDET_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDIO_AR_RELEASE_VERSION_MAJOR,          CONSTDIO_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTDLT_AR_RELEASE_VERSION_MAJOR,          CONSTDLT_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTEA_AR_RELEASE_VERSION_MAJOR,           CONSTEA_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTEEP_AR_RELEASE_VERSION_MAJOR,          CONSTEEP_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTETH_AR_RELEASE_VERSION_MAJOR,          CONSTETH_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTETHIF_AR_RELEASE_VERSION_MAJOR,        CONSTETHIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFEE_AR_RELEASE_VERSION_MAJOR,          CONSTFEE_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFIM_AR_RELEASE_VERSION_MAJOR,          CONSTFIM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFLS_AR_RELEASE_VERSION_MAJOR,          CONSTFLS_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFR_AR_RELEASE_VERSION_MAJOR,           CONSTFR_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFRIF_AR_RELEASE_VERSION_MAJOR,         CONSTFRIF_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFRNM_AR_RELEASE_VERSION_MAJOR,         CONSTFRNM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTFRTP_AR_RELEASE_VERSION_MAJOR,         CONSTFRTP_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTGPT_AR_RELEASE_VERSION_MAJOR,          CONSTGPT_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTICU_AR_RELEASE_VERSION_MAJOR,          CONSTICU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTIPDUM_AR_RELEASE_VERSION_MAJOR,        CONSTIPDUM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTJ1939TP_AR_RELEASE_VERSION_MAJOR,      CONSTJ1939TP_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTLIN_AR_RELEASE_VERSION_MAJOR,          CONSTLIN_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTLINIF_AR_RELEASE_VERSION_MAJOR,        CONSTLINIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTLINTP_AR_RELEASE_VERSION_MAJOR,        CONSTLINTP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCU_AR_RELEASE_VERSION_MAJOR,          CONSTMCU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMEMIF_AR_RELEASE_VERSION_MAJOR,        CONSTMEMIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTNM_AR_RELEASE_VERSION_MAJOR,           CONSTNM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTOCU_AR_RELEASE_VERSION_MAJOR,          CONSTOCU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTPDUR_AR_RELEASE_VERSION_MAJOR,         CONSTPDUR_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTPORT_AR_RELEASE_VERSION_MAJOR,         CONSTPORT_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTPWM_AR_RELEASE_VERSION_MAJOR,          CONSTPWM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTRTE_AR_RELEASE_VERSION_MAJOR,          CONSTRTE_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSECOC_AR_RELEASE_VERSION_MAJOR,        CONSTSECOC_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSOKFM_AR_RELEASE_VERSION_MAJOR,        CONSTSOKFM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSPI_AR_RELEASE_VERSION_MAJOR,          CONSTSPI_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSTARTUP_AR_RELEASE_VERSION_MAJOR,      CONSTSTARTUP_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSTBM_AR_RELEASE_VERSION_MAJOR,         CONSTSTBM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR,   CONSTSWCAPPLFOC_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTVKMS_AR_RELEASE_VERSION_MAJOR,         CONSTVKMS_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTWDG_AR_RELEASE_VERSION_MAJOR,          CONSTWDG_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTWDGIF_AR_RELEASE_VERSION_MAJOR,        CONSTWDGIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTWDGM_AR_RELEASE_VERSION_MAJOR,         CONSTWDGM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {                                                                                                                \
            {CONSTDCM_AR_RELEASE_VERSION_MAJOR, CONSTDCM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}         \
         ,  Dcm_SizeinfDcmClients                                                                                      \
         ,  {                                                                                                          \
                  &Adc                                                                                                 \
               ,  &BswM                                                                                                \
               ,  &Can                                                                                                 \
               ,  &CanIf                                                                                               \
               ,  &CanNm                                                                                               \
               ,  &CanSm                                                                                               \
               ,  &CanTp                                                                                               \
               ,  &Com                                                                                                 \
               ,  &ComM                                                                                                \
               ,  &Cry                                                                                                 \
               ,  &CryIf                                                                                               \
               ,  &Csm                                                                                                 \
               ,  &Dcm                                                                                                 \
               ,  &Dem                                                                                                 \
               ,  &Det                                                                                                 \
               ,  &Dio                                                                                                 \
               ,  &Dlt                                                                                                 \
               ,  &Ea                                                                                                  \
               ,  &EcuM                                                                                                \
               ,  &Eep                                                                                                 \
               ,  &Eth                                                                                                 \
               ,  &EthIf                                                                                               \
               ,  &Fee                                                                                                 \
               ,  &FiM                                                                                                 \
               ,  &Fls                                                                                                 \
               ,  &Fr                                                                                                  \
               ,  &FrIf                                                                                                \
               ,  &FrNm                                                                                                \
               ,  &FrTp                                                                                                \
               ,  &Gpt                                                                                                 \
               ,  &Icu                                                                                                 \
               ,  &IpduM                                                                                               \
               ,  &J1939Tp                                                                                             \
               ,  &Lin                                                                                                 \
               ,  &LinIf                                                                                               \
               ,  &LinTp                                                                                               \
               ,  &Mcu                                                                                                 \
               ,  &MemIf                                                                                               \
               ,  &Nm                                                                                                  \
               ,  &NvM                                                                                                 \
               ,  &Ocu                                                                                                 \
               ,  &Os                                                                                                  \
               ,  &PduR                                                                                                \
               ,  &Port                                                                                                \
               ,  &Pwm                                                                                                 \
               ,  &Rte                                                                                                 \
               ,  &SchM                                                                                                \
               ,  &SecOC                                                                                               \
               ,  &SokFm                                                                                               \
               ,  &Spi                                                                                                 \
               ,  &StartUp                                                                                             \
               ,  &StbM                                                                                                \
               ,  &SwcApplFoc                                                                                          \
               ,  &SwcServiceEcuM                                                                                      \
               ,  &SwcServiceOs                                                                                        \
               ,  &Vkms                                                                                                \
               ,  &Wdg                                                                                                 \
               ,  &WdgIf                                                                                               \
               ,  &WdgM                                                                                                \
            }                                                                                                          \
/*#if(STD_ON == _ReSIM)*/                                                                                              \
         ,  {                                                                                                          \
                  "Adc"                                                                                                \
               ,  "BswM"                                                                                               \
               ,  "Can"                                                                                                \
               ,  "CanIf"                                                                                              \
               ,  "CanNm"                                                                                              \
               ,  "CanSm"                                                                                              \
               ,  "CanTp"                                                                                              \
               ,  "Com"                                                                                                \
               ,  "ComM"                                                                                               \
               ,  "Cry"                                                                                                \
               ,  "CryIf"                                                                                              \
               ,  "Csm"                                                                                                \
               ,  "Dcm"                                                                                                \
               ,  "Dem"                                                                                                \
               ,  "Det"                                                                                                \
               ,  "Dio"                                                                                                \
               ,  "Dlt"                                                                                                \
               ,  "Ea"                                                                                                 \
               ,  "EcuM"                                                                                               \
               ,  "Eep"                                                                                                \
               ,  "Eth"                                                                                                \
               ,  "EthIf"                                                                                              \
               ,  "Fee"                                                                                                \
               ,  "FiM"                                                                                                \
               ,  "Fls"                                                                                                \
               ,  "Fr"                                                                                                 \
               ,  "FrIf"                                                                                               \
               ,  "FrNm"                                                                                               \
               ,  "FrTp"                                                                                               \
               ,  "Gpt"                                                                                                \
               ,  "Icu"                                                                                                \
               ,  "IpduM"                                                                                              \
               ,  "J1939Tp"                                                                                            \
               ,  "Lin"                                                                                                \
               ,  "LinIf"                                                                                              \
               ,  "LinTp"                                                                                              \
               ,  "Mcu"                                                                                                \
               ,  "MemIf"                                                                                              \
               ,  "Nm"                                                                                                 \
               ,  "NvM"                                                                                                \
               ,  "Ocu"                                                                                                \
               ,  "Os"                                                                                                 \
               ,  "PduR"                                                                                               \
               ,  "Port"                                                                                               \
               ,  "Pwm"                                                                                                \
               ,  "Rte"                                                                                                \
               ,  "SchM"                                                                                               \
               ,  "SecOC"                                                                                              \
               ,  "SokFm"                                                                                              \
               ,  "Spi"                                                                                                \
               ,  "StartUp"                                                                                            \
               ,  "StbM"                                                                                               \
               ,  "SwcApplFoc"                                                                                         \
               ,  "SwcServiceEcuM"                                                                                     \
               ,  "SwcServiceOs"                                                                                       \
               ,  "Vkms"                                                                                               \
               ,  "Wdg"                                                                                                \
               ,  "WdgIf"                                                                                              \
               ,  "WdgM"                                                                                               \
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
               ,  &CanIf                                                                                               \
               ,  &PduR                                                                                                \
               ,  &Dcm                                                                                                 \
            }                                                                                                          \
      }                                                                                                                \
                                                                                                                       \
   ,  {                                                                                                                       \
            {CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MAJOR, CONSTSWCSERVICEECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  SizeDriverInitData_One                                                                                            \
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
                  &(Const.ConstAdc)                                                                                           \
               ,  &(Const.ConstCan)                                                                                           \
               ,  &(Const.ConstCanIf)                                                                                         \
               ,  &(Const.ConstCanNm)                                                                                         \
               ,  &(Const.ConstCanSm)                                                                                         \
               ,  &(Const.ConstCanTp)                                                                                         \
               ,  &(Const.ConstCom)                                                                                           \
               ,  &(Const.ConstComM)                                                                                          \
               ,  &(Const.ConstCry)                                                                                           \
               ,  &(Const.ConstCryIf)                                                                                         \
               ,  &(Const.ConstCsm)                                                                                           \
               ,  &(Const.ConstDcm)                                                                                           \
/*             ,  &(Const.ConstDem)*/                                                                                         \
/*             ,  &(Const.ConstDet)*/                                                                                         \
               ,  &(Const.ConstDio)                                                                                           \
               ,  &(Const.ConstDlt)                                                                                           \
               ,  &(Const.ConstEa)                                                                                            \
/*             ,  &(Const.ConstEcuM)*/                                                                                        \
               ,  &(Const.ConstEep)                                                                                           \
               ,  &(Const.ConstEth)                                                                                           \
               ,  &(Const.ConstEthIf)                                                                                         \
/*             ,  &(Const.ConstFee)*/                                                                                         \
               ,  &(Const.ConstFiM)                                                                                           \
/*             ,  &(Const.ConstFls)*/                                                                                         \
               ,  &(Const.ConstFr)                                                                                            \
               ,  &(Const.ConstFrIf)                                                                                          \
               ,  &(Const.ConstFrNm)                                                                                          \
               ,  &(Const.ConstFrTp)                                                                                          \
               ,  &(Const.ConstGpt)                                                                                           \
               ,  &(Const.ConstIcu)                                                                                           \
               ,  &(Const.ConstIpduM)                                                                                         \
               ,  &(Const.ConstJ1939Tp)                                                                                       \
               ,  &(Const.ConstLin)                                                                                           \
               ,  &(Const.ConstLinIf)                                                                                         \
               ,  &(Const.ConstLinTp)                                                                                         \
               ,  &(Const.ConstMcu)                                                                                           \
/*             ,  &(Const.ConstMemIf)*/                                                                                       \
               ,  &(Const.ConstNm)                                                                                            \
/*             ,  &(Const.ConstNvM)*/                                                                                         \
               ,  &(Const.ConstOcu)                                                                                           \
               ,  &(Const.ConstOs)                                                                                            \
               ,  &(Const.ConstPduR)                                                                                          \
               ,  &(Const.ConstPort)                                                                                          \
               ,  &(Const.ConstPwm)                                                                                           \
               ,  &(Const.ConstRte)                                                                                           \
               ,  &(Const.ConstSecOC)                                                                                         \
               ,  &(Const.ConstSokFm)                                                                                         \
               ,  &(Const.ConstSpi)                                                                                           \
               ,  &(Const.ConstStartUp)                                                                                       \
               ,  &(Const.ConstStbM)                                                                                          \
               ,  &(Const.ConstSwcApplFoc)                                                                                    \
/*             ,  &(Const.ConstSwcServiceEcuM)*/                                                                              \
               ,  &(Const.ConstSwcServiceOs)                                                                                  \
               ,  &(Const.ConstVkms)                                                                                          \
               ,  &(Const.ConstWdg)                                                                                           \
               ,  &(Const.ConstWdgIf)                                                                                         \
               ,  &(Const.ConstWdgM)                                                                                          \
                                                                                                                              \
               ,  &(Const.ConstBswM)                                                                                          \
               ,  &(Const.ConstSchM)                                                                                          \
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

