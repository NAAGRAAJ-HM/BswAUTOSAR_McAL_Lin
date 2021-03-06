/******************************************************************************/
/* File   : Lin.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Lin.hpp"
#include "infLin_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LIN_AR_RELEASE_VERSION_MAJOR                                           4
#define LIN_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(LIN_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible LIN_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(LIN_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible LIN_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Lin, LIN_VAR) Lin;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LIN_CODE) module_Lin::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, LIN_CONST,       LIN_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   LIN_CONFIG_DATA, LIN_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Lin_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstLin_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == Lin_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Lin_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Lin_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  LIN_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LIN_CODE) module_Lin::DeInitFunction(
   void
){
#if(STD_ON == Lin_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Lin_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Lin_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  LIN_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LIN_CODE) module_Lin::MainFunction(
   void
){
#if(STD_ON == Lin_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Lin_InitCheck)
   }
   else{
#if(STD_ON == Lin_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  LIN_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LIN_CODE) module_Lin::CheckWakeup(
   void
){
}

FUNC(void, LIN_CODE) module_Lin::SendFrame(
   void
){
}

FUNC(void, LIN_CODE) module_Lin::GoToSleep(
   void
){
}

FUNC(void, LIN_CODE) module_Lin::GoToSleepInternal(
   void
){
}

FUNC(void, LIN_CODE) module_Lin::Wakeup(
   void
){
}

FUNC(void, LIN_CODE) module_Lin::WakeupInternal(
   void
){
}

FUNC(void, LIN_CODE) module_Lin::GetStatus(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

