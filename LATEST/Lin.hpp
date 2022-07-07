#pragma once
/******************************************************************************/
/* File   : Lin.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgLin.hpp"
#include "Lin_core.hpp"
#include "infLin_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Lin:
      INTERFACES_EXPORTED_LIN
      public abstract_module
   ,  public class_Lin_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, LIN_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, LIN_CONFIG_DATA, LIN_APPL_CONST) lptrCfgModule
      );
      FUNC(void, LIN_CODE) DeInitFunction (void);
      FUNC(void, LIN_CODE) MainFunction   (void);
      LIN_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Lin, LIN_VAR) Lin;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
