#include "Heli_Process.h"
int32_t* Heli_Process(void* a1)

{
    Script_EvaluateCondition_16(a1);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), a1);
    DynObj_CreateMagicObject_4(*(a1 + 0x748));
    Vehicle_InitPlane_2(a1);
    Script_CallNativeHandler_6(a1 + 0x758);
    Script_CallNativeHandler_6(a1 + 0x7a8);
    Script_CallNativeHandler_6(a1 + 0x7f8);
    DynObj_TryingToRemoveUnrigi(Level_InitSprites_4(), a1);
    return FX_TrailUpdate_13(a1 + 0x8c0);
}
