#pragma once
/******************************************************************************/
/* File   : Const.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstAdc.hpp"
#include "ConstBswM.hpp"
#include "ConstCan.hpp"
#include "ConstCanIf.hpp"
#include "ConstCanNm.hpp"
#include "ConstCanSm.hpp"
#include "ConstCanTp.hpp"
#include "ConstCom.hpp"
#include "ConstComM.hpp"
#include "ConstCry.hpp"
#include "ConstCryIf.hpp"
#include "ConstCsm.hpp"
#include "ConstDem.hpp"
#include "ConstDet.hpp"
#include "ConstDio.hpp"
#include "ConstDlt.hpp"
#include "ConstEa.hpp"
#include "ConstEep.hpp"
#include "ConstEth.hpp"
#include "ConstEthIf.hpp"
#include "ConstFee.hpp"
#include "ConstFiM.hpp"
#include "ConstFls.hpp"
#include "ConstFr.hpp"
#include "ConstFrIf.hpp"
#include "ConstFrNm.hpp"
#include "ConstFrTp.hpp"
#include "ConstGpt.hpp"
#include "ConstIcu.hpp"
#include "ConstIpduM.hpp"
#include "ConstJ1939Tp.hpp"
#include "ConstLin.hpp"
#include "ConstLinIf.hpp"
#include "ConstLinTp.hpp"
#include "ConstMcu.hpp"
#include "ConstMemIf.hpp"
#include "ConstNm.hpp"
#include "ConstOcu.hpp"
#include "ConstPort.hpp"
#include "ConstPwm.hpp"
#include "ConstRte.hpp"
#include "ConstSecOC.hpp"
#include "ConstSokFm.hpp"
#include "ConstSpi.hpp"
#include "ConstStartUp.hpp"
#include "ConstStbM.hpp"
#include "ConstSwcApplFoc.hpp"
#include "ConstSwcServiceOs.hpp"
#include "ConstVkms.hpp"
#include "ConstWdg.hpp"
#include "ConstWdgIf.hpp"
#include "ConstWdgM.hpp"

#include "ConstDcm.hpp"
#include "ConstPduR.hpp"
#include "ConstSchM.hpp"
#include "ConstSwcServiceEcuM.hpp"
#include "ConstEcuM.hpp"
#include "ConstNvM.hpp"
#include "ConstOs.hpp"

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
      ConstAdc_Type            ConstAdc;
      ConstBswM_Type           ConstBswM;
      ConstCan_Type            ConstCan;
      ConstCanIf_Type          ConstCanIf;
      ConstCanNm_Type          ConstCanNm;
      ConstCanSm_Type          ConstCanSm;
      ConstCanTp_Type          ConstCanTp;
      ConstCom_Type            ConstCom;
      ConstComM_Type           ConstComM;
      ConstCry_Type            ConstCry;
      ConstCryIf_Type          ConstCryIf;
      ConstCsm_Type            ConstCsm;
      ConstDem_Type            ConstDem;
      ConstDet_Type            ConstDet;
      ConstDio_Type            ConstDio;
      ConstDlt_Type            ConstDlt;
      ConstEa_Type             ConstEa;
      ConstEep_Type            ConstEep;
      ConstEth_Type            ConstEth;
      ConstEthIf_Type          ConstEthIf;
      ConstFee_Type            ConstFee;
      ConstFiM_Type            ConstFiM;
      ConstFls_Type            ConstFls;
      ConstFr_Type             ConstFr;
      ConstFrIf_Type           ConstFrIf;
      ConstFrNm_Type           ConstFrNm;
      ConstFrTp_Type           ConstFrTp;
      ConstGpt_Type            ConstGpt;
      ConstIcu_Type            ConstIcu;
      ConstIpduM_Type          ConstIpduM;
      ConstJ1939Tp_Type        ConstJ1939Tp;
      ConstLin_Type            ConstLin;
      ConstLinIf_Type          ConstLinIf;
      ConstLinTp_Type          ConstLinTp;
      ConstMcu_Type            ConstMcu;
      ConstMemIf_Type          ConstMemIf;
      ConstNm_Type             ConstNm;
      ConstOcu_Type            ConstOcu;
      ConstPort_Type           ConstPort;
      ConstPwm_Type            ConstPwm;
      ConstRte_Type            ConstRte;
      ConstSecOC_Type          ConstSecOC;
      ConstSokFm_Type          ConstSokFm;
      ConstSpi_Type            ConstSpi;
      ConstStartUp_Type        ConstStartUp;
      ConstStbM_Type           ConstStbM;
      ConstSwcApplFoc_Type     ConstSwcApplFoc;
      ConstVkms_Type           ConstVkms;
      ConstWdg_Type            ConstWdg;
      ConstWdgIf_Type          ConstWdgIf;
      ConstWdgM_Type           ConstWdgM;
      ConstDcm_Type            ConstDcm;
      ConstPduR_Type           ConstPduR;
      ConstSchM_Type           ConstSchM;
      ConstSwcServiceEcuM_Type ConstSwcServiceEcuM;
      ConstEcuM_Type           ConstEcuM;
      ConstNvM_Type            ConstNvM;
      ConstOs_Type             ConstOs;
      ConstSwcServiceOs_Type   ConstSwcServiceOs;
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

