// Original IGI.EXE function: Sys_Alloctexture (VA 0x004B2180; static CFG gate FAIL, CFG score 0.551).
#include "Sys_Alloctexture.h"
int32_t Sys_Alloctexture()

{
    Sys_ExecuteBytecode_9(0x943b20);
    Sys_ResolveSymbol_8();
    g_546fa8 = Sys_RendermodeFailedToCr_2("AllocTexture");
    g_546fac = Sys_RendermodeFailedToCr_2("DeAllocTexture");
    g_546fb0 = Sys_RendermodeFailedToCr_2("DownloadTexture");
    g_546fa0 = Sys_RendermodeFailedToCr_2("BeginTextureList");
    g_546fa4 = Sys_RendermodeFailedToCr_2("EndTextureList");
    g_546fb4 = Sys_RendermodeFailedToCr_2("GetTMUs");
    g_546fb8 = Sys_RendermodeFailedToCr_2("SetActiveTMU");
    g_546fbc = Sys_RendermodeFailedToCr_2("GetActiveTMU");
    g_546f9c = Sys_RendermodeFailedToCr_2("RefreshTexture");
    g_546f98 = Sys_RendermodeFailedToCr_2("ReloadTexture");
    g_546f94 = Sys_RendermodeFailedToCr_2("GetTextureSize");
    g_546f90 = Sys_RendermodeFailedToCr_2("SetLOD");
    /* tailcall */
    return Physics_CheckHullCollision_9();
}
