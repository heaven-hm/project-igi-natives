#include "Particle_ResetEmitters_6.h"
int32_t Particle_ResetEmitters_6()

{
    j_AVIFileExit();
    Sys_CloseFileStream_19();
    Display_ClearSurfaces();
    Display_OpenDevice_15();
    Physics_EvaluateAreaCriteria_10();
    FX_DebrisSpawn_27();
    Display_SetDisplayMode();
    Sys_PushStack_15();
    Display_SetDisplayMode_9();
    Sys_ResolveSymbol_7();
    Sys_DispatchOpcode_21();
    Sys_CloseFileStream_16();
    Display_CheckCapabilities_3();
    Sys_ResolveSymbol_3();
    j_AnimSound_LoadParameters();
    Mem_DeallocAll();
    FX_SmokeEmit_21();
    j_AnimSound_LoadParameters();
    /* tailcall */
    return AnimSound_LoadParameters();
}
