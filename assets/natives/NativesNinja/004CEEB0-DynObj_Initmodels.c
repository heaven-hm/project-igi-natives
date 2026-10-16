#include "004CEEB0-DynObj_Initmodels.h"
/* 0x004ceeb0 DynObj_Initmodels full linked: callers=1 callees=5 */
int32_t sub_4ceeb0()

{
    __builtin_memset(&g_a443a0, 0, 0xa8c0);
    g_a4ec60 = &g_a4ec64;
    g_a4ec68 = &g_a4ec60;
    g_a4ec64 = 0;
    g_a4ed6c = 0;
    g_a4edec = 0;
    g_a4edf0 = 0;
    g_548200 = sub_4b0e70("InitModels");
    g_548204 = sub_4b0e70("DeinitModels");
    g_548208 = sub_4b0e70("LoadModel");
    int32_t result = sub_4b0e70("UnloadModel");
    g_54820c = result;
    return result;
}
