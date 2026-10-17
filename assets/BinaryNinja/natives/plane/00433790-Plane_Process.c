// Original IGI.EXE function: Plane_Process (VA 0x00433790; static CFG gate PASS, CFG score 1.000).
#include "Plane_Process.h"
int32_t* Plane_Process(void* context)

{
    Script_EvaluateCondition_16(context);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    DynObj_CreateMagicObject_4(*(context + 0x828));
    Script_CallNativeHandler_6(context + 0x838);
    return Vehicle_UpdateCockpit_3(context);
}
