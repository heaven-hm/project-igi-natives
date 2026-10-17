// Original IGI.EXE function: Particle_FadeParticles_6 (VA 0x00532400; static CFG gate FAIL, CFG score 0.833).
#include "Particle_FadeParticles_6.h"
int32_t Particle_FadeParticles_6()

{
    Display_SetGammaRamp_16();
    Camera_ResetMatrix_32(1);
    FX_Germany();
    Sys_PopStack_13();
    Sys_CloseFileStream_2();
    Sys_PopStack_3();
    Sys_PushStack_2();
    Display_DisplayCanOnlyBeOpen();
    Sys_ReadFileBlock_16();
    Sys_Allocpalette();
    Sys_Alloctexture();
    Display_SwapBuffers_8();
    Sys_QvertexRegisterstrip();
    FX_CouldNotCreateDirect_2();
    FX_CouldNotCreateDirect();
    Physics_CouldNotCreateDirect();
    Display_SetDisplayMode_13();
    Display_Transcontextprimitiv();
    Display_ClearSurfaces();
    Sys_Sortrender();
    /* tailcall */
    return Display_CheckCapabilities();
}
