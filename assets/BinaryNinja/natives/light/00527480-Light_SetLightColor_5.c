// IGI native provenance: Light_SetLightColor_5 - 0x00527480 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00527480-Light_SetLightColor_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_SetLightColor_5.h"
uint32_t Light_SetLightColor_5()

{
    Sys_OpenFileStream_2(&g_ba1e00);
    DynObj_CreateMagicObject_4(g_a83d48);
    DynObj_CreateMagicObject_4(g_a83d30);
    QTask_CloseEvent_2(g_a83d4c);
    return QTask_CloseEvent_2(g_a83d34);
}
