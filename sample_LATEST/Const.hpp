#pragma once
/******************************************************************************/
/* File   : Const.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstProjectARA.hpp"
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
#include "ConstApplSwcFoc.hpp"

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
      ConstMcalAdc_Type            ConstMcalAdc;
      ConstServiceBswM_Type           ConstServiceBswM;
      ConstMcalCan_Type            ConstMcalCan;
      ConstEcuabCanIf_Type          ConstEcuabCanIf;
      ConstServiceCanNm_Type          ConstServiceCanNm;
      ConstServiceCanSm_Type          ConstServiceCanSm;
      ConstEcuabCanTp_Type          ConstEcuabCanTp;
      ConstServiceCom_Type            ConstServiceCom;
      ConstServiceComM_Type           ConstServiceComM;
      ConstMcalCry_Type            ConstMcalCry;
      ConstEcuabCryIf_Type          ConstEcuabCryIf;
      ConstServiceCsm_Type            ConstServiceCsm;
      ConstServiceDem_Type            ConstServiceDem;
      ConstServiceDet_Type            ConstServiceDet;
      ConstMcalDio_Type            ConstMcalDio;
      ConstServiceDlt_Type            ConstServiceDlt;
      ConstEcuabEa_Type             ConstEcuabEa;
      ConstMcalEep_Type            ConstMcalEep;
      ConstMcalEth_Type            ConstMcalEth;
      ConstEcuabEthIf_Type          ConstEcuabEthIf;
      ConstEcuabFee_Type            ConstEcuabFee;
      ConstServiceFiM_Type            ConstServiceFiM;
      ConstMcalFls_Type            ConstMcalFls;
      ConstMcalFr_Type             ConstMcalFr;
      ConstEcuabFrIf_Type           ConstEcuabFrIf;
      ConstServiceFrNm_Type           ConstServiceFrNm;
      ConstEcuabFrTp_Type           ConstEcuabFrTp;
      ConstMcalGpt_Type            ConstMcalGpt;
      ConstMcalIcu_Type            ConstMcalIcu;
      ConstServiceIpduM_Type          ConstServiceIpduM;
      ConstEcuabJ1939Tp_Type        ConstEcuabJ1939Tp;
      ConstMcalLin_Type            ConstMcalLin;
      ConstEcuabLinIf_Type          ConstEcuabLinIf;
      ConstEcuabLinTp_Type          ConstEcuabLinTp;
      ConstMcalMcu_Type            ConstMcalMcu;
      ConstEcuabMemIf_Type          ConstEcuabMemIf;
      ConstServiceNm_Type             ConstServiceNm;
      ConstMcalOcu_Type            ConstMcalOcu;
      ConstServicePduR_Type           ConstServicePduR;
      ConstMcalPort_Type           ConstMcalPort;
      ConstMcalPwm_Type            ConstMcalPwm;
      ConstProjectARA_Type            ConstProjectARA;
      ConstServiceSecOC_Type          ConstServiceSecOC;
      ConstServiceSokFm_Type          ConstServiceSokFm;
      ConstMcalSpi_Type            ConstMcalSpi;
      ConstServiceStartUp_Type        ConstServiceStartUp;
      ConstServiceStbM_Type           ConstServiceStbM;
      ConstApplSwcFoc_Type     ConstApplSwcFoc;
      ConstServiceVkms_Type           ConstServiceVkms;
      ConstMcalWdg_Type            ConstMcalWdg;
      ConstEcuabWdgIf_Type          ConstEcuabWdgIf;
      ConstServiceWdgM_Type           ConstServiceWdgM;

      ConstServiceDcm_Type            ConstServiceDcm;
      ConstServiceSchM_Type           ConstServiceSchM;
      ConstServiceSwcEcuM_Type ConstServiceSwcEcuM;
      ConstServiceEcuM_Type           ConstServiceEcuM;
      ConstServiceNvM_Type            ConstServiceNvM;
      ConstServiceOs_Type             ConstServiceOs;
      ConstServiceSwcOs_Type   ConstServiceSwcOs;
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

