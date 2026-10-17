// Original IGI.EXE function: DynObj_Initmodels (VA 0x004CEEB0; static CFG gate PASS, CFG score 0.933).
#include "DynObj_Initmodels.h"
int32_t DynObj_Initmodels()

{
    __builtin_memset(&g_a443a0, 0, 0xa8c0);
    g_a4ec60 = &g_a4ec64;
    g_a4ec68 = &g_a4ec60;
    g_a4ec64 = 0;
    g_a4ed6c = 0;
    g_a4edec = 0;
    g_a4edf0 = 0;
    g_548200 = Sys_RendermodeFailedToCr_2("InitModels");
    g_548204 = Sys_RendermodeFailedToCr_2("DeinitModels");
    g_548208 = Sys_RendermodeFailedToCr_2("LoadModel");
    int32_t result = Sys_RendermodeFailedToCr_2("UnloadModel");
    g_54820c = result;
    return result;
}
