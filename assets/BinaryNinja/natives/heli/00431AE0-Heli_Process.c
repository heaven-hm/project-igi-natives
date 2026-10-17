// Original IGI.EXE function: Heli_Process (VA 0x00431AE0; static CFG gate PASS, CFG score 1.000).
#include "Heli_Process.h"
int32_t* Heli_Process(void* context)

{
    Script_EvaluateCondition_16(context);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), context);
    DynObj_CreateMagicObject_4(*(context + 0x748));
    Vehicle_InitPlane_2(context);
    Script_CallNativeHandler_6(context + 0x758);
    Script_CallNativeHandler_6(context + 0x7a8);
    Script_CallNativeHandler_6(context + 0x7f8);
    DynObj_TryingToRemoveUnrigi(Level_InitSprites_4(), context);
    return FX_TrailUpdate_13(context + 0x8c0);
}
