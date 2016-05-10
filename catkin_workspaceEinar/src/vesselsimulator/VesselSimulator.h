//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: VesselSimulator.h
//
// Code generated for Simulink model 'VesselSimulator'.
//
// Model version                  : 1.21
// Simulink Coder version         : 8.9 (R2015b) 13-Aug-2015
// C/C++ source code generated on : Sun Apr 10 13:39:52 2016
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_VesselSimulator_h_
#define RTW_HEADER_VesselSimulator_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef VesselSimulator_COMMON_INCLUDES_
# define VesselSimulator_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // VesselSimulator_COMMON_INCLUDES_

#include "VesselSimulator_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->ModelData.odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->ModelData.odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

// Block signals (auto storage)
typedef struct {
  real_T dv0[9];
  real_T dv1[9];
  SL_Bus_VesselSimulator_geometry_msgs_Vector3 In1;// '<S5>/In1'
  SL_Bus_VesselSimulator_geometry_msgs_Vector3 BusAssignment1;// '<S2>/Bus Assignment1' 
  real_T Product[3];                   // '<Root>/Product'
  real_T Gain[3];                      // '<S3>/Gain'
  real_T Product2[3];                  // '<S3>/Product2'
  real_T dv2[3];
} B_VesselSimulator_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SinkBlock_PWORK;               // '<S7>/SinkBlock'
  void *SourceBlock_PWORK;             // '<S4>/SourceBlock'
  robotics_slros_internal_block_T obj; // '<S4>/SourceBlock'
  robotics_slros_internal_blo_a_T obj_o;// '<S7>/SinkBlock'
  boolean_T objisempty;                // '<S7>/SinkBlock'
  boolean_T objisempty_l;              // '<S4>/SourceBlock'
} DW_VesselSimulator_T;

// Continuous states (auto storage)
typedef struct {
  real_T Integrator1_CSTATE[3];        // '<S3>/Integrator1'
  real_T Integrator2_CSTATE[3];        // '<S3>/Integrator2'
} X_VesselSimulator_T;

// State derivatives (auto storage)
typedef struct {
  real_T Integrator1_CSTATE[3];        // '<S3>/Integrator1'
  real_T Integrator2_CSTATE[3];        // '<S3>/Integrator2'
} XDot_VesselSimulator_T;

// State disabled
typedef struct {
  boolean_T Integrator1_CSTATE[3];     // '<S3>/Integrator1'
  boolean_T Integrator2_CSTATE[3];     // '<S3>/Integrator2'
} XDis_VesselSimulator_T;

#ifndef ODE3_INTG
#define ODE3_INTG

// ODE3 Integration Data
typedef struct {
  real_T *y;                           // output
  real_T *f[3];                        // derivatives
} ODE3_IntgData;

#endif

// Parameters (auto storage)
struct P_VesselSimulator_T_ {
  real_T C_nuParams[9];                // Variable: C_nuParams
                                       //  Referenced by: '<S3>/Constant1'

  real_T D[9];                         // Variable: D
                                       //  Referenced by: '<S3>/Gain1'

  real_T D_nuParams[9];                // Variable: D_nuParams
                                       //  Referenced by: '<S3>/Constant'

  real_T Tr[9];                        // Variable: Tr
                                       //  Referenced by: '<Root>/Thrust allocation Matrix'

  real_T invM[9];                      // Variable: invM
                                       //  Referenced by: '<S3>/Gain'

  SL_Bus_VesselSimulator_geometry_msgs_Vector3 Out1_Y0;// Computed Parameter: Out1_Y0
                                                       //  Referenced by: '<S5>/Out1'

  SL_Bus_VesselSimulator_geometry_msgs_Vector3 Constant_Value;// Computed Parameter: Constant_Value
                                                              //  Referenced by: '<S4>/Constant'

  SL_Bus_VesselSimulator_geometry_msgs_Vector3 Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                //  Referenced by: '<S6>/Constant'

  real_T Integrator1_IC[3];            // Expression: [0;0;0]
                                       //  Referenced by: '<S3>/Integrator1'

  real_T Integrator2_IC[3];            // Expression: [0; 0; 0]
                                       //  Referenced by: '<S3>/Integrator2'

};

// Real-time Model Data Structure
struct tag_RTM_VesselSimulator_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  ModelData:
  //  The following substructure contains information regarding
  //  the data used in the model.

  struct {
    X_VesselSimulator_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeY[6];
    real_T odeF[3][6];
    ODE3_IntgData intgData;
  } ModelData;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_VesselSimulator_T VesselSimulator_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_VesselSimulator_T VesselSimulator_B;

// Continuous states (auto storage)
extern X_VesselSimulator_T VesselSimulator_X;

// Block states (auto storage)
extern DW_VesselSimulator_T VesselSimulator_DW;

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void VesselSimulator_initialize(void);
  extern void VesselSimulator_step(void);
  extern void VesselSimulator_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_VesselSimulator_T *const VesselSimulator_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'VesselSimulator'
//  '<S1>'   : 'VesselSimulator/Subsystem'
//  '<S2>'   : 'VesselSimulator/U out1'
//  '<S3>'   : 'VesselSimulator/Vessel Dynamics'
//  '<S4>'   : 'VesselSimulator/Subsystem/Subscribe1'
//  '<S5>'   : 'VesselSimulator/Subsystem/Subscribe1/Enabled Subsystem'
//  '<S6>'   : 'VesselSimulator/U out1/Blank Message1'
//  '<S7>'   : 'VesselSimulator/U out1/Publish1'
//  '<S8>'   : 'VesselSimulator/Vessel Dynamics/C_nu1'
//  '<S9>'   : 'VesselSimulator/Vessel Dynamics/D_nu'
//  '<S10>'  : 'VesselSimulator/Vessel Dynamics/MATLAB Function'

#endif                                 // RTW_HEADER_VesselSimulator_h_

//
// File trailer for generated code.
//
// [EOF]
//
