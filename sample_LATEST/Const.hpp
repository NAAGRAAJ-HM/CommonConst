#pragma once
/******************************************************************************/
/* File   : Const.hpp                                                         */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstApplSwcFoc.hpp"
#include "ConstProjectARA.hpp"
#include "ConstServiceBswM.hpp"
#include "ConstServiceCanNm.hpp"
#include "ConstServiceCanSm.hpp"
#include "ConstServiceCom.hpp"
#include "ConstServiceComM.hpp"
#include "ConstServiceCsm.hpp"
#include "ConstServiceDcm.hpp"
#include "ConstServiceDem.hpp"
#include "ConstServiceDet.hpp"
#include "ConstServiceDlt.hpp"
#include "ConstServiceEcuM.hpp"
#include "ConstServiceFiM.hpp"
#include "ConstServiceFrNm.hpp"
#include "ConstServiceIpduM.hpp"
#include "ConstServiceNm.hpp"
#include "ConstServiceNvM.hpp"
#include "ConstServiceOs.hpp"
#include "ConstServicePduR.hpp"
#include "ConstServiceSchM.hpp"
#include "ConstServiceSecOC.hpp"
#include "ConstServiceSokFm.hpp"
#include "ConstServiceStartUp.hpp"
#include "ConstServiceStbM.hpp"
#include "ConstServiceSwcEcuM.hpp"
#include "ConstServiceSwcOs.hpp"
#include "ConstServiceVkms.hpp"
#include "ConstServiceWdgM.hpp"
#include "ConstEcuabCanIf.hpp"
#include "ConstEcuabCanTp.hpp"
#include "ConstEcuabCryIf.hpp"
#include "ConstEcuabEa.hpp"
#include "ConstEcuabEthIf.hpp"
#include "ConstEcuabFee.hpp"
#include "ConstEcuabFrIf.hpp"
#include "ConstEcuabFrTp.hpp"
#include "ConstEcuabJ1939Tp.hpp"
#include "ConstEcuabLinIf.hpp"
#include "ConstEcuabLinTp.hpp"
#include "ConstEcuabMemIf.hpp"
#include "ConstEcuabWdgIf.hpp"
#include "ConstMcalAdc.hpp"
#include "ConstMcalCan.hpp"
#include "ConstMcalCry.hpp"
#include "ConstMcalDio.hpp"
#include "ConstMcalEep.hpp"
#include "ConstMcalEth.hpp"
#include "ConstMcalFls.hpp"
#include "ConstMcalFr.hpp"
#include "ConstMcalGpt.hpp"
#include "ConstMcalIcu.hpp"
#include "ConstMcalLin.hpp"
#include "ConstMcalMcu.hpp"
#include "ConstMcalOcu.hpp"
#include "ConstMcalPort.hpp"
#include "ConstMcalPwm.hpp"
#include "ConstMcalSpi.hpp"
#include "ConstMcalWdg.hpp"

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
      ConstApplSwcFoc_Type     ConstApplSwcFoc;
      ConstProjectARA_Type     ConstProjectARA;
      ConstServiceBswM_Type    ConstServiceBswM;
      ConstServiceCanNm_Type   ConstServiceCanNm;
      ConstServiceCanSm_Type   ConstServiceCanSm;
      ConstServiceCom_Type     ConstServiceCom;
      ConstServiceComM_Type    ConstServiceComM;
      ConstServiceCsm_Type     ConstServiceCsm;
      ConstServiceDcm_Type     ConstServiceDcm;
      ConstServiceDem_Type     ConstServiceDem;
      ConstServiceDet_Type     ConstServiceDet;
      ConstServiceDlt_Type     ConstServiceDlt;
      ConstServiceEcuM_Type    ConstServiceEcuM;
      ConstServiceFiM_Type     ConstServiceFiM;
      ConstServiceFrNm_Type    ConstServiceFrNm;
      ConstServiceIpduM_Type   ConstServiceIpduM;
      ConstServiceNm_Type      ConstServiceNm;
      ConstServiceNvM_Type     ConstServiceNvM;
      ConstServiceOs_Type      ConstServiceOs;
      ConstServicePduR_Type    ConstServicePduR;
      ConstServiceSchM_Type    ConstServiceSchM;
      ConstServiceSecOC_Type   ConstServiceSecOC;
      ConstServiceSokFm_Type   ConstServiceSokFm;
      ConstServiceStartUp_Type ConstServiceStartUp;
      ConstServiceStbM_Type    ConstServiceStbM;
      ConstServiceSwcEcuM_Type ConstServiceSwcEcuM;
      ConstServiceSwcOs_Type   ConstServiceSwcOs;
      ConstServiceVkms_Type    ConstServiceVkms;
      ConstServiceWdgM_Type    ConstServiceWdgM;
      ConstEcuabCanIf_Type     ConstEcuabCanIf;
      ConstEcuabCanTp_Type     ConstEcuabCanTp;
      ConstEcuabCryIf_Type     ConstEcuabCryIf;
      ConstEcuabEa_Type        ConstEcuabEa;
      ConstEcuabEthIf_Type     ConstEcuabEthIf;
      ConstEcuabFee_Type       ConstEcuabFee;
      ConstEcuabFrIf_Type      ConstEcuabFrIf;
      ConstEcuabFrTp_Type      ConstEcuabFrTp;
      ConstEcuabJ1939Tp_Type   ConstEcuabJ1939Tp;
      ConstEcuabLinIf_Type     ConstEcuabLinIf;
      ConstEcuabLinTp_Type     ConstEcuabLinTp;
      ConstEcuabMemIf_Type     ConstEcuabMemIf;
      ConstEcuabWdgIf_Type     ConstEcuabWdgIf;
      ConstMcalAdc_Type        ConstMcalAdc;
      ConstMcalCan_Type        ConstMcalCan;
      ConstMcalCry_Type        ConstMcalCry;
      ConstMcalDio_Type        ConstMcalDio;
      ConstMcalEep_Type        ConstMcalEep;
      ConstMcalEth_Type        ConstMcalEth;
      ConstMcalFls_Type        ConstMcalFls;
      ConstMcalFr_Type         ConstMcalFr;
      ConstMcalGpt_Type        ConstMcalGpt;
      ConstMcalIcu_Type        ConstMcalIcu;
      ConstMcalLin_Type        ConstMcalLin;
      ConstMcalMcu_Type        ConstMcalMcu;
      ConstMcalOcu_Type        ConstMcalOcu;
      ConstMcalPort_Type       ConstMcalPort;
      ConstMcalPwm_Type        ConstMcalPwm;
      ConstMcalSpi_Type        ConstMcalSpi;
      ConstMcalWdg_Type        ConstMcalWdg;
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

