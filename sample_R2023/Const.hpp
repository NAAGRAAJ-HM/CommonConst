#pragma once
/******************************************************************************/
/* File   : Const.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infApplSwcFoc_ServiceNvM_Types.hpp"
#include "infProjectARA_ServiceNvM_Types.hpp"
#include "infServiceBswM_ServiceNvM_Types.hpp"
#include "infServiceCanNm_ServiceNvM_Types.hpp"
#include "infServiceCanSm_ServiceNvM_Types.hpp"
#include "infServiceCom_ServiceNvM_Types.hpp"
#include "infServiceComM_ServiceNvM_Types.hpp"
#include "infServiceCsm_ServiceNvM_Types.hpp"
#include "infServiceDcm_ServiceNvM_Types.hpp"
#include "infServiceDem_ServiceNvM_Types.hpp"
#include "infServiceDet_ServiceNvM_Types.hpp"
#include "infServiceDlt_ServiceNvM_Types.hpp"
#include "infServiceEcuM_ServiceNvM_Types.hpp"
#include "infServiceFiM_ServiceNvM_Types.hpp"
#include "infServiceFrNm_ServiceNvM_Types.hpp"
#include "infServiceIpduM_ServiceNvM_Types.hpp"
#include "infServiceNm_ServiceNvM_Types.hpp"
#include "infServiceNvM_ServiceNvM_Types.hpp"
#include "infServiceOs_ServiceNvM_Types.hpp"
#include "infServicePduR_ServiceNvM_Types.hpp"
#include "infServiceSchM_ServiceNvM_Types.hpp"
#include "infServiceSecOC_ServiceNvM_Types.hpp"
#include "infServiceSokFm_ServiceNvM_Types.hpp"
#include "infServiceStartUp_ServiceNvM_Types.hpp"
#include "infServiceStbM_ServiceNvM_Types.hpp"
#include "infServiceSwcEcuM_ServiceNvM_Types.hpp"
#include "infServiceSwcIoHwAb_ServiceNvM_Types.hpp"
#include "infServiceSwcOs_ServiceNvM_Types.hpp"
#include "infServiceVkms_ServiceNvM_Types.hpp"
#include "infServiceWdgM_ServiceNvM_Types.hpp"
#include "infEcuabCanIf_ServiceNvM_Types.hpp"
#include "infEcuabCanTp_ServiceNvM_Types.hpp"
#include "infEcuabCryIf_ServiceNvM_Types.hpp"
#include "infEcuabEa_ServiceNvM_Types.hpp"
#include "infEcuabEthIf_ServiceNvM_Types.hpp"
#include "infEcuabFee_ServiceNvM_Types.hpp"
#include "infEcuabFrIf_ServiceNvM_Types.hpp"
#include "infEcuabFrTp_ServiceNvM_Types.hpp"
#include "infEcuabJ1939Tp_ServiceNvM_Types.hpp"
#include "infEcuabLinIf_ServiceNvM_Types.hpp"
#include "infEcuabLinTp_ServiceNvM_Types.hpp"
#include "infEcuabMemIf_ServiceNvM_Types.hpp"
#include "infEcuabWdgIf_ServiceNvM_Types.hpp"
#include "infMcalAdc_ServiceNvM_Types.hpp"
#include "infMcalCan_ServiceNvM_Types.hpp"
#include "infMcalCry_ServiceNvM_Types.hpp"
#include "infMcalDio_ServiceNvM_Types.hpp"
#include "infMcalEep_ServiceNvM_Types.hpp"
#include "infMcalEth_ServiceNvM_Types.hpp"
#include "infMcalFls_ServiceNvM_Types.hpp"
#include "infMcalFr_ServiceNvM_Types.hpp"
#include "infMcalGpt_ServiceNvM_Types.hpp"
#include "infMcalIcu_ServiceNvM_Types.hpp"
#include "infMcalLin_ServiceNvM_Types.hpp"
#include "infMcalMcu_ServiceNvM_Types.hpp"
#include "infMcalOcu_ServiceNvM_Types.hpp"
#include "infMcalPort_ServiceNvM_Types.hpp"
#include "infMcalPwm_ServiceNvM_Types.hpp"
#include "infMcalSpi_ServiceNvM_Types.hpp"
#include "infMcalWdg_ServiceNvM_Types.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class Const_Type{
   public:
      ConstApplSwcFoc_Type       ConstApplSwcFoc;
      ConstProjectARA_Type       ConstProjectARA;
      ConstServiceBswM_Type      ConstServiceBswM;
      ConstServiceCanNm_Type     ConstServiceCanNm;
      ConstServiceCanSm_Type     ConstServiceCanSm;
      ConstServiceCom_Type       ConstServiceCom;
      ConstServiceComM_Type      ConstServiceComM;
      ConstServiceCsm_Type       ConstServiceCsm;
      ConstServiceDcm_Type       ConstServiceDcm;
      ConstServiceDem_Type       ConstServiceDem;
      ConstServiceDet_Type       ConstServiceDet;
      ConstServiceDlt_Type       ConstServiceDlt;
      ConstServiceEcuM_Type      ConstServiceEcuM;
      ConstServiceFiM_Type       ConstServiceFiM;
      ConstServiceFrNm_Type      ConstServiceFrNm;
      ConstServiceIpduM_Type     ConstServiceIpduM;
      ConstServiceNm_Type        ConstServiceNm;
      ConstServiceNvM_Type       ConstServiceNvM;
      ConstServiceOs_Type        ConstServiceOs;
      ConstServicePduR_Type      ConstServicePduR;
      ConstServiceSchM_Type      ConstServiceSchM;
      ConstServiceSecOC_Type     ConstServiceSecOC;
      ConstServiceSokFm_Type     ConstServiceSokFm;
      ConstServiceStartUp_Type   ConstServiceStartUp;
      ConstServiceStbM_Type      ConstServiceStbM;
      ConstServiceSwcEcuM_Type   ConstServiceSwcEcuM;
      ConstServiceSwcIoHwAb_Type ConstServiceSwcIoHwAb;
      ConstServiceSwcOs_Type     ConstServiceSwcOs;
      ConstServiceVkms_Type      ConstServiceVkms;
      ConstServiceWdgM_Type      ConstServiceWdgM;
      ConstEcuabCanIf_Type       ConstEcuabCanIf;
      ConstEcuabCanTp_Type       ConstEcuabCanTp;
      ConstEcuabCryIf_Type       ConstEcuabCryIf;
      ConstEcuabEa_Type          ConstEcuabEa;
      ConstEcuabEthIf_Type       ConstEcuabEthIf;
      ConstEcuabFee_Type         ConstEcuabFee;
      ConstEcuabFrIf_Type        ConstEcuabFrIf;
      ConstEcuabFrTp_Type        ConstEcuabFrTp;
      ConstEcuabJ1939Tp_Type     ConstEcuabJ1939Tp;
      ConstEcuabLinIf_Type       ConstEcuabLinIf;
      ConstEcuabLinTp_Type       ConstEcuabLinTp;
      ConstEcuabMemIf_Type       ConstEcuabMemIf;
      ConstEcuabWdgIf_Type       ConstEcuabWdgIf;
      ConstMcalAdc_Type          ConstMcalAdc;
      ConstMcalCan_Type          ConstMcalCan;
      ConstMcalCry_Type          ConstMcalCry;
      ConstMcalDio_Type          ConstMcalDio;
      ConstMcalEep_Type          ConstMcalEep;
      ConstMcalEth_Type          ConstMcalEth;
      ConstMcalFls_Type          ConstMcalFls;
      ConstMcalFr_Type           ConstMcalFr;
      ConstMcalGpt_Type          ConstMcalGpt;
      ConstMcalIcu_Type          ConstMcalIcu;
      ConstMcalLin_Type          ConstMcalLin;
      ConstMcalMcu_Type          ConstMcalMcu;
      ConstMcalOcu_Type          ConstMcalOcu;
      ConstMcalPort_Type         ConstMcalPort;
      ConstMcalPwm_Type          ConstMcalPwm;
      ConstMcalSpi_Type          ConstMcalSpi;
      ConstMcalWdg_Type          ConstMcalWdg;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
extern const Const_Type Const;

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

