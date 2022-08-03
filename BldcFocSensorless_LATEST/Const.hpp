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
#include "ConstDem.hpp"
#include "ConstDet.hpp"
#include "ConstDio.hpp"
#include "ConstDlt.hpp"
#include "ConstFee.hpp"
#include "ConstFiM.hpp"
#include "ConstFls.hpp"
#include "ConstGpt.hpp"
#include "ConstIcu.hpp"
#include "ConstMcu.hpp"
#include "ConstMemIf.hpp"
#include "ConstOcu.hpp"
#include "ConstPort.hpp"
#include "ConstPwm.hpp"
#include "ConstRte.hpp"
#include "ConstSpi.hpp"
#include "ConstStartUp.hpp"
#include "ConstSwcApplFoc.hpp"
#include "ConstSwcServiceOs.hpp"

#include "ConstDcm.hpp"
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
      ConstDem_Type            ConstDem;
      ConstDet_Type            ConstDet;
      ConstDio_Type            ConstDio;
      ConstDlt_Type            ConstDlt;
      ConstFee_Type            ConstFee;
      ConstFiM_Type            ConstFiM;
      ConstFls_Type            ConstFls;
      ConstGpt_Type            ConstGpt;
      ConstIcu_Type            ConstIcu;
      ConstMcu_Type            ConstMcu;
      ConstMemIf_Type          ConstMemIf;
      ConstOcu_Type            ConstOcu;
      ConstPort_Type           ConstPort;
      ConstPwm_Type            ConstPwm;
      ConstRte_Type            ConstRte;
      ConstSpi_Type            ConstSpi;
      ConstStartUp_Type        ConstStartUp;
      ConstSwcApplFoc_Type     ConstSwcApplFoc;

      ConstDcm_Type            ConstDcm;
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

