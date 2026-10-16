#include "004B2180-Sys_Alloctexture.h"
/* 0x004b2180 Sys_Alloctexture full linked: callers=1 callees=15 */
int32_t sub_4b2180()

{
    sub_4b2740(0x943b20);
    sub_4b26b0();
    g_546fa8 = sub_4b0e70("AllocTexture");
    g_546fac = sub_4b0e70("DeAllocTexture");
    g_546fb0 = sub_4b0e70("DownloadTexture");
    g_546fa0 = sub_4b0e70("BeginTextureList");
    g_546fa4 = sub_4b0e70("EndTextureList");
    g_546fb4 = sub_4b0e70("GetTMUs");
    g_546fb8 = sub_4b0e70("SetActiveTMU");
    g_546fbc = sub_4b0e70("GetActiveTMU");
    g_546f9c = sub_4b0e70("RefreshTexture");
    g_546f98 = sub_4b0e70("ReloadTexture");
    g_546f94 = sub_4b0e70("GetTextureSize");
    g_546f90 = sub_4b0e70("SetLOD");
    /* tailcall */
    return sub_509910();
}
