// IGI native provenance: Particle_FadeParticles_6 - 0x00532400 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00532400-Particle_FadeParticles_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
