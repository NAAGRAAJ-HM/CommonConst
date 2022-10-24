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

#include "Cfg.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define Const_DefaultInit                                                                                                  \
      {CONSTMCALADC_AR_RELEASE_VERSION_MAJOR,          CONSTMCALADC_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEBSWM_AR_RELEASE_VERSION_MAJOR,         CONSTSERVICEBSWM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALCAN_AR_RELEASE_VERSION_MAJOR,          CONSTMCALCAN_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABCANIF_AR_RELEASE_VERSION_MAJOR,        CONSTECUABCANIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECANNM_AR_RELEASE_VERSION_MAJOR,        CONSTSERVICECANNM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECANSM_AR_RELEASE_VERSION_MAJOR,        CONSTSERVICECANSM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABCANTP_AR_RELEASE_VERSION_MAJOR,        CONSTECUABCANTP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECOM_AR_RELEASE_VERSION_MAJOR,          CONSTSERVICECOM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECOMM_AR_RELEASE_VERSION_MAJOR,         CONSTSERVICECOMM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALCRY_AR_RELEASE_VERSION_MAJOR,          CONSTMCALCRY_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABCRYIF_AR_RELEASE_VERSION_MAJOR,        CONSTECUABCRYIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICECSM_AR_RELEASE_VERSION_MAJOR,          CONSTSERVICECSM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEDEM_AR_RELEASE_VERSION_MAJOR,          CONSTSERVICEDEM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEDET_AR_RELEASE_VERSION_MAJOR,          CONSTSERVICEDET_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALDIO_AR_RELEASE_VERSION_MAJOR,          CONSTMCALDIO_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEDLT_AR_RELEASE_VERSION_MAJOR,          CONSTSERVICEDLT_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABEA_AR_RELEASE_VERSION_MAJOR,           CONSTECUABEA_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALEEP_AR_RELEASE_VERSION_MAJOR,          CONSTMCALEEP_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALETH_AR_RELEASE_VERSION_MAJOR,          CONSTMCALETH_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABETHIF_AR_RELEASE_VERSION_MAJOR,        CONSTECUABETHIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABFEE_AR_RELEASE_VERSION_MAJOR,          CONSTECUABFEE_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEFIM_AR_RELEASE_VERSION_MAJOR,          CONSTSERVICEFIM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALFLS_AR_RELEASE_VERSION_MAJOR,          CONSTMCALFLS_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALFR_AR_RELEASE_VERSION_MAJOR,           CONSTMCALFR_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABFRIF_AR_RELEASE_VERSION_MAJOR,         CONSTECUABFRIF_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEFRNM_AR_RELEASE_VERSION_MAJOR,         CONSTSERVICEFRNM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABFRTP_AR_RELEASE_VERSION_MAJOR,         CONSTECUABFRTP_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALGPT_AR_RELEASE_VERSION_MAJOR,          CONSTMCALGPT_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALICU_AR_RELEASE_VERSION_MAJOR,          CONSTMCALICU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEIPDUM_AR_RELEASE_VERSION_MAJOR,        CONSTSERVICEIPDUM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABJ1939TP_AR_RELEASE_VERSION_MAJOR,      CONSTECUABJ1939TP_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALLIN_AR_RELEASE_VERSION_MAJOR,          CONSTMCALLIN_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABLINIF_AR_RELEASE_VERSION_MAJOR,        CONSTECUABLINIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABLINTP_AR_RELEASE_VERSION_MAJOR,        CONSTECUABLINTP_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALMCU_AR_RELEASE_VERSION_MAJOR,          CONSTMCALMCU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABMEMIF_AR_RELEASE_VERSION_MAJOR,        CONSTECUABMEMIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICENM_AR_RELEASE_VERSION_MAJOR,           CONSTSERVICENM_AR_RELEASE_VERSION_MINOR,           0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALOCU_AR_RELEASE_VERSION_MAJOR,          CONSTMCALOCU_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEPDUR_AR_RELEASE_VERSION_MAJOR,         CONSTSERVICEPDUR_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALPORT_AR_RELEASE_VERSION_MAJOR,         CONSTMCALPORT_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALPWM_AR_RELEASE_VERSION_MAJOR,          CONSTMCALPWM_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTRTE_AR_RELEASE_VERSION_MAJOR,          CONSTRTE_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICESECOC_AR_RELEASE_VERSION_MAJOR,        CONSTSERVICESECOC_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICESOKFM_AR_RELEASE_VERSION_MAJOR,        CONSTSERVICESOKFM_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALSPI_AR_RELEASE_VERSION_MAJOR,          CONSTMCALSPI_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICESTARTUP_AR_RELEASE_VERSION_MAJOR,      CONSTSERVICESTARTUP_AR_RELEASE_VERSION_MINOR,      0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICESTBM_AR_RELEASE_VERSION_MAJOR,         CONSTSERVICESTBM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTAPPLSWCFOC_AR_RELEASE_VERSION_MAJOR,   CONSTAPPLSWCFOC_AR_RELEASE_VERSION_MINOR,   0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEVKMS_AR_RELEASE_VERSION_MAJOR,         CONSTSERVICEVKMS_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTMCALWDG_AR_RELEASE_VERSION_MAJOR,          CONSTMCALWDG_AR_RELEASE_VERSION_MINOR,          0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTECUABWDGIF_AR_RELEASE_VERSION_MAJOR,        CONSTECUABWDGIF_AR_RELEASE_VERSION_MINOR,        0x00,0xFF,0x01,'0','1','0'} \
   ,  {CONSTSERVICEWDGM_AR_RELEASE_VERSION_MAJOR,         CONSTSERVICEWDGM_AR_RELEASE_VERSION_MINOR,         0x00,0xFF,0x01,'0','1','0'} \
   ,  {                                                                                                                \
            {CONSTSERVICEDCM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICEDCM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}         \
         ,  ServiceDcm_SizeinfServiceDcmClients                                                                                      \
         ,  {                                                                                                          \
                  &McalAdc                                                                                                 \
               ,  &ServiceBswM                                                                                                \
               ,  &McalCan                                                                                                 \
               ,  &EcuabCanIf                                                                                               \
               ,  &ServiceCanNm                                                                                               \
               ,  &ServiceCanSm                                                                                               \
               ,  &EcuabCanTp                                                                                               \
               ,  &ServiceCom                                                                                                 \
               ,  &ServiceComM                                                                                                \
               ,  &McalCry                                                                                                 \
               ,  &EcuabCryIf                                                                                               \
               ,  &ServiceCsm                                                                                                 \
               ,  &ServiceDcm                                                                                                 \
               ,  &ServiceDem                                                                                                 \
               ,  &ServiceDet                                                                                                 \
               ,  &McalDio                                                                                                 \
               ,  &ServiceDlt                                                                                                 \
               ,  &EcuabEa                                                                                                  \
               ,  &ServiceEcuM                                                                                                \
               ,  &McalEep                                                                                                 \
               ,  &McalEth                                                                                                 \
               ,  &EcuabEthIf                                                                                               \
               ,  &EcuabFee                                                                                                 \
               ,  &ServiceFiM                                                                                                 \
               ,  &McalFls                                                                                                 \
               ,  &McalFr                                                                                                  \
               ,  &EcuabFrIf                                                                                                \
               ,  &ServiceFrNm                                                                                                \
               ,  &EcuabFrTp                                                                                                \
               ,  &McalGpt                                                                                                 \
               ,  &McalIcu                                                                                                 \
               ,  &ServiceIpduM                                                                                               \
               ,  &EcuabJ1939Tp                                                                                             \
               ,  &McalLin                                                                                                 \
               ,  &EcuabLinIf                                                                                               \
               ,  &EcuabLinTp                                                                                               \
               ,  &McalMcu                                                                                                 \
               ,  &EcuabMemIf                                                                                               \
               ,  &ServiceNm                                                                                                  \
               ,  &ServiceNvM                                                                                                 \
               ,  &McalOcu                                                                                                 \
               ,  &ServiceOs                                                                                                  \
               ,  &ServicePduR                                                                                                \
               ,  &McalPort                                                                                                \
               ,  &McalPwm                                                                                                 \
               ,  &ProjectARA                                                                                                 \
               ,  &ServiceSchM                                                                                                \
               ,  &ServiceSecOC                                                                                               \
               ,  &ServiceSokFm                                                                                               \
               ,  &McalSpi                                                                                                 \
               ,  &ServiceStartUp                                                                                             \
               ,  &ServiceStbM                                                                                                \
               ,  &ApplSwcFoc                                                                                          \
               ,  &ServiceSwcEcuM                                                                                      \
               ,  &ServiceSwcOs                                                                                        \
               ,  &ServiceVkms                                                                                                \
               ,  &McalWdg                                                                                                 \
               ,  &EcuabWdgIf                                                                                               \
               ,  &ServiceWdgM                                                                                                \
            }                                                                                                          \
         ,  {                                                                                                          \
                  "McalAdc"                                                                                                \
               ,  "ServiceBswM"                                                                                               \
               ,  "McalCan"                                                                                                \
               ,  "EcuabCanIf"                                                                                              \
               ,  "ServiceCanNm"                                                                                              \
               ,  "ServiceCanSm"                                                                                              \
               ,  "EcuabCanTp"                                                                                              \
               ,  "ServiceCom"                                                                                                \
               ,  "ServiceComM"                                                                                               \
               ,  "McalCry"                                                                                                \
               ,  "EcuabCryIf"                                                                                              \
               ,  "ServiceCsm"                                                                                                \
               ,  "ServiceDcm"                                                                                                \
               ,  "ServiceDem"                                                                                                \
               ,  "ServiceDet"                                                                                                \
               ,  "McalDio"                                                                                                \
               ,  "ServiceDlt"                                                                                                \
               ,  "EcuabEa"                                                                                                 \
               ,  "ServiceEcuM"                                                                                               \
               ,  "McalEep"                                                                                                \
               ,  "McalEth"                                                                                                \
               ,  "EcuabEthIf"                                                                                              \
               ,  "EcuabFee"                                                                                                \
               ,  "ServiceFiM"                                                                                                \
               ,  "McalFls"                                                                                                \
               ,  "McalFr"                                                                                                 \
               ,  "EcuabFrIf"                                                                                               \
               ,  "ServiceFrNm"                                                                                               \
               ,  "EcuabFrTp"                                                                                               \
               ,  "McalGpt"                                                                                                \
               ,  "McalIcu"                                                                                                \
               ,  "ServiceIpduM"                                                                                              \
               ,  "EcuabJ1939Tp"                                                                                            \
               ,  "McalLin"                                                                                                \
               ,  "EcuabLinIf"                                                                                              \
               ,  "EcuabLinTp"                                                                                              \
               ,  "McalMcu"                                                                                                \
               ,  "EcuabMemIf"                                                                                              \
               ,  "ServiceNm"                                                                                                 \
               ,  "ServiceNvM"                                                                                                \
               ,  "McalOcu"                                                                                                \
               ,  "ServiceOs"                                                                                                 \
               ,  "ServicePduR"                                                                                               \
               ,  "McalPort"                                                                                               \
               ,  "McalPwm"                                                                                                \
               ,  "ProjectARA"                                                                                                \
               ,  "ServiceSchM"                                                                                               \
               ,  "ServiceSecOC"                                                                                              \
               ,  "ServiceSokFm"                                                                                              \
               ,  "McalSpi"                                                                                                \
               ,  "ServiceStartUp"                                                                                            \
               ,  "ServiceStbM"                                                                                               \
               ,  "ApplSwcFoc"                                                                                         \
               ,  "ServiceSwcEcuM"                                                                                     \
               ,  "ServiceSwcOs"                                                                                       \
               ,  "ServiceVkms"                                                                                               \
               ,  "McalWdg"                                                                                                \
               ,  "EcuabWdgIf"                                                                                              \
               ,  "ServiceWdgM"                                                                                               \
            }                                                                                                          \
      }                                                                                                                \
                                                                                                                       \
   ,  {                                                                                                                \
            {CONSTSERVICESCHM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICESCHM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}       \
         ,  ServiceSchM_SizeServiceSchMClients                                                                                       \
         ,  {                                                                                                          \
                  &ServiceEcuM                                                                                                \
               ,  &ServiceNvM                                                                                                 \
               ,  &EcuabCanIf                                                                                               \
               ,  &ServicePduR                                                                                                \
               ,  &ServiceDcm                                                                                                 \
            }                                                                                                          \
      }                                                                                                                \
                                                                                                                       \
   ,  {                                                                                                                       \
            {CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  SizeDriverInitData_One                                                                                            \
         ,  {                                                                                                                 \
                  &McalAdc                                                                                                        \
               ,  &McalCan                                                                                                        \
               ,  &EcuabCanIf                                                                                                      \
               ,  &ServiceCanNm                                                                                                      \
               ,  &ServiceCanSm                                                                                                      \
               ,  &EcuabCanTp                                                                                                      \
               ,  &ServiceCom                                                                                                        \
               ,  &ServiceComM                                                                                                       \
               ,  &McalCry                                                                                                        \
               ,  &EcuabCryIf                                                                                                      \
               ,  &ServiceCsm                                                                                                        \
               ,  &ServiceDcm                                                                                                        \
/*             ,  &ServiceDem*/                                                                                                      \
/*             ,  &ServiceDet*/                                                                                                      \
               ,  &McalDio                                                                                                        \
               ,  &ServiceDlt                                                                                                        \
               ,  &EcuabEa                                                                                                         \
/*             ,  &ServiceEcuM*/                                                                                                     \
               ,  &McalEep                                                                                                        \
               ,  &McalEth                                                                                                        \
               ,  &EcuabEthIf                                                                                                      \
/*             ,  &EcuabFee*/                                                                                                      \
               ,  &ServiceFiM                                                                                                        \
/*             ,  &McalFls*/                                                                                                      \
               ,  &McalFr                                                                                                         \
               ,  &EcuabFrIf                                                                                                       \
               ,  &ServiceFrNm                                                                                                       \
               ,  &EcuabFrTp                                                                                                       \
               ,  &McalGpt                                                                                                        \
               ,  &McalIcu                                                                                                        \
               ,  &ServiceIpduM                                                                                                      \
               ,  &EcuabJ1939Tp                                                                                                    \
               ,  &McalLin                                                                                                        \
               ,  &EcuabLinIf                                                                                                      \
               ,  &EcuabLinTp                                                                                                      \
               ,  &McalMcu                                                                                                        \
/*             ,  &EcuabMemIf*/                                                                                                    \
               ,  &ServiceNm                                                                                                         \
/*             ,  &ServiceNvM*/                                                                                                      \
               ,  &McalOcu                                                                                                        \
               ,  &ServiceOs                                                                                                         \
               ,  &ServicePduR                                                                                                       \
               ,  &McalPort                                                                                                       \
               ,  &McalPwm                                                                                                        \
               ,  &ProjectARA                                                                                                        \
               ,  &ServiceSecOC                                                                                                      \
               ,  &ServiceSokFm                                                                                                      \
               ,  &McalSpi                                                                                                        \
               ,  &ServiceStartUp                                                                                                    \
               ,  &ServiceStbM                                                                                                       \
               ,  &ApplSwcFoc                                                                                                 \
/*             ,  &ServiceSwcEcuM*/                                                                                           \
               ,  &ServiceSwcOs                                                                                               \
               ,  &ServiceVkms                                                                                                       \
               ,  &McalWdg                                                                                                        \
               ,  &EcuabWdgIf                                                                                                      \
               ,  &ServiceWdgM                                                                                                       \
                                                                                                                              \
               ,  &ServiceBswM                                                                                                       \
               ,  &ServiceSchM                                                                                                       \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(Const.ConstMcalAdc)                                                                                           \
               ,  &(Const.ConstMcalCan)                                                                                           \
               ,  &(Const.ConstEcuabCanIf)                                                                                         \
               ,  &(Const.ConstServiceCanNm)                                                                                         \
               ,  &(Const.ConstServiceCanSm)                                                                                         \
               ,  &(Const.ConstEcuabCanTp)                                                                                         \
               ,  &(Const.ConstServiceCom)                                                                                           \
               ,  &(Const.ConstServiceComM)                                                                                          \
               ,  &(Const.ConstMcalCry)                                                                                           \
               ,  &(Const.ConstEcuabCryIf)                                                                                         \
               ,  &(Const.ConstServiceCsm)                                                                                           \
               ,  &(Const.ConstServiceDcm)                                                                                           \
/*             ,  &(Const.ConstServiceDem)*/                                                                                         \
/*             ,  &(Const.ConstServiceDet)*/                                                                                         \
               ,  &(Const.ConstMcalDio)                                                                                           \
               ,  &(Const.ConstServiceDlt)                                                                                           \
               ,  &(Const.ConstEcuabEa)                                                                                            \
/*             ,  &(Const.ConstServiceEcuM)*/                                                                                        \
               ,  &(Const.ConstMcalEep)                                                                                           \
               ,  &(Const.ConstMcalEth)                                                                                           \
               ,  &(Const.ConstEcuabEthIf)                                                                                         \
/*             ,  &(Const.ConstEcuabFee)*/                                                                                         \
               ,  &(Const.ConstServiceFiM)                                                                                           \
/*             ,  &(Const.ConstMcalFls)*/                                                                                         \
               ,  &(Const.ConstMcalFr)                                                                                            \
               ,  &(Const.ConstEcuabFrIf)                                                                                          \
               ,  &(Const.ConstServiceFrNm)                                                                                          \
               ,  &(Const.ConstEcuabFrTp)                                                                                          \
               ,  &(Const.ConstMcalGpt)                                                                                           \
               ,  &(Const.ConstMcalIcu)                                                                                           \
               ,  &(Const.ConstServiceIpduM)                                                                                         \
               ,  &(Const.ConstEcuabJ1939Tp)                                                                                       \
               ,  &(Const.ConstMcalLin)                                                                                           \
               ,  &(Const.ConstEcuabLinIf)                                                                                         \
               ,  &(Const.ConstEcuabLinTp)                                                                                         \
               ,  &(Const.ConstMcalMcu)                                                                                           \
/*             ,  &(Const.ConstEcuabMemIf)*/                                                                                       \
               ,  &(Const.ConstServiceNm)                                                                                            \
/*             ,  &(Const.ConstServiceNvM)*/                                                                                         \
               ,  &(Const.ConstMcalOcu)                                                                                           \
               ,  &(Const.ConstServiceOs)                                                                                            \
               ,  &(Const.ConstServicePduR)                                                                                          \
               ,  &(Const.ConstMcalPort)                                                                                          \
               ,  &(Const.ConstMcalPwm)                                                                                           \
               ,  &(Const.ConstProjectARA)                                                                                           \
               ,  &(Const.ConstServiceSecOC)                                                                                         \
               ,  &(Const.ConstServiceSokFm)                                                                                         \
               ,  &(Const.ConstMcalSpi)                                                                                           \
               ,  &(Const.ConstServiceStartUp)                                                                                       \
               ,  &(Const.ConstServiceStbM)                                                                                          \
               ,  &(Const.ConstApplSwcFoc)                                                                                    \
/*             ,  &(Const.ConstServiceSwcEcuM)*/                                                                              \
               ,  &(Const.ConstServiceSwcOs)                                                                                  \
               ,  &(Const.ConstServiceVkms)                                                                                          \
               ,  &(Const.ConstMcalWdg)                                                                                           \
               ,  &(Const.ConstEcuabWdgIf)                                                                                         \
               ,  &(Const.ConstServiceWdgM)                                                                                          \
                                                                                                                              \
               ,  &(Const.ConstServiceBswM)                                                                                          \
               ,  &(Const.ConstServiceSchM)                                                                                          \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(CfgGen_ServiceNvM.CfgMcalAdc)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgMcalCan)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabCanIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceCanNm)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceCanSm)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgEcuabCanTp)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceCom)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceComM)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalCry)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabCryIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceCsm)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceDcm)                                                                                        \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceDem)*/                                                                                      \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceDet)*/                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalDio)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceDlt)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabEa)                                                                                         \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceEcuM)*/                                                                                     \
               ,  &(CfgGen_ServiceNvM.CfgMcalEep)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgMcalEth)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabEthIf)                                                                                      \
/*             ,  &(CfgGen_ServiceNvM.CfgEcuabFee)*/                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceFiM)                                                                                        \
/*             ,  &(CfgGen_ServiceNvM.CfgMcalFls)*/                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalFr)                                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgEcuabFrIf)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgServiceFrNm)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgEcuabFrTp)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalGpt)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgMcalIcu)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceIpduM)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgEcuabJ1939Tp)                                                                                    \
               ,  &(CfgGen_ServiceNvM.CfgMcalLin)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabLinIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgEcuabLinTp)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalMcu)                                                                                        \
/*             ,  &(CfgGen_ServiceNvM.CfgEcuabMemIf)*/                                                                                    \
               ,  &(CfgGen_ServiceNvM.CfgServiceNm)                                                                                         \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceNvM)*/                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalOcu)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceOs)                                                                                         \
               ,  &(CfgGen_ServiceNvM.CfgServicePduR)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalPort)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalPwm)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgProjectARA)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceSecOC)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceSokFm)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgMcalSpi)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceStartUp)                                                                                    \
               ,  &(CfgGen_ServiceNvM.CfgServiceStbM)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgApplSwcFoc)                                                                                 \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceSwcEcuM)*/                                                                           \
               ,  &(CfgGen_ServiceNvM.CfgServiceSwcOs)                                                                               \
               ,  &(CfgGen_ServiceNvM.CfgServiceVkms)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgMcalWdg)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabWdgIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceWdgM)                                                                                       \
                                                                                                                              \
               ,  &(CfgGen_ServiceNvM.CfgServiceBswM)                                                                                       \
               ,  &(CfgGen_ServiceNvM.CfgServiceSchM)                                                                                       \
            }                                                                                                                 \
         ,  SizeDriverInitData_Zero                                                                                           \
         ,  {                                                                                                                 \
                  &ServiceDet                                                                                                        \
               ,  &ServiceDem                                                                                                        \
               ,  &McalFls                                                                                                        \
               ,  &EcuabFee                                                                                                        \
               ,  &EcuabMemIf                                                                                                      \
               ,  &ServiceNvM                                                                                                        \
               ,  &ServiceSwcEcuM                                                                                             \
/*             ,  &ServiceEcuM*/                                                                                                     \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(Const.ConstServiceDet)                                                                                           \
               ,  &(Const.ConstServiceDem)                                                                                           \
               ,  &(Const.ConstMcalFls)                                                                                           \
               ,  &(Const.ConstEcuabFee)                                                                                           \
               ,  &(Const.ConstEcuabMemIf)                                                                                         \
               ,  &(Const.ConstServiceNvM)                                                                                           \
               ,  &(Const.ConstServiceSwcEcuM)                                                                                \
/*             ,  &(Const.ConstServiceEcuM)*/                                                                                        \
            }                                                                                                                 \
         ,  {                                                                                                                 \
                  &(CfgGen_ServiceNvM.CfgServiceDet)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceDem)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgMcalFls)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabFee)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgEcuabMemIf)                                                                                      \
               ,  &(CfgGen_ServiceNvM.CfgServiceNvM)                                                                                        \
               ,  &(CfgGen_ServiceNvM.CfgServiceSwcEcuM)                                                                             \
/*             ,  &(CfgGen_ServiceNvM.CfgServiceEcuM)*/                                                                                     \
            }                                                                                                                 \
         ,  &ServiceEcuM                                                                                                             \
         ,  &ServiceSchM                                                                                                             \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTSERVICEECUM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICEECUM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}              \
         ,  &McalMcu                                                                                                              \
         ,  &ServiceOs                                                                                                               \
         ,  &ServiceSwcEcuM                                                                                                   \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTSERVICENVM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICENVM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                \
         ,  &EcuabMemIf                                                                                                            \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTSERVICEOS_AR_RELEASE_VERSION_MAJOR, CONSTSERVICEOS_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'}                  \
         ,  &ServiceEcuM                                                                                                             \
         ,  &ServiceSwcOs                                                                                                     \
      }                                                                                                                       \
                                                                                                                              \
   ,  {                                                                                                                       \
            {CONSTSERVICESWCOS_AR_RELEASE_VERSION_MAJOR, CONSTSERVICESWCOS_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  &ServiceSchM                                                                                                             \
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
//   Const_DefaultInit
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

