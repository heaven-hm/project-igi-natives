#include "Display_CloseDevice_19.h"
int32_t Display_CloseDevice_19()

{
    int32_t valA = DynObj_ParseConfigFile_15();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA, sub_49df60);
    int32_t valA2 = DynObj_UpdateDynTree_15();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA2, Mesh_SkinBones);
    int32_t valA4 = DynObj_LinkDynamicCube_15();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA4, sub_49c850);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_b817a0, sub_49faf0);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_b8170c, sub_49faf0);
    int32_t valA9 = DynObj_RemoveSymbol_15();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA9, Display_RestoreDevice_20);
    int32_t valA11 = DynObj_InsertHashItem_13();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA11, Display_ClearSurfaces_20);
    int32_t valA13 = DynObj_LookupHashItem_13();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA13, sub_49fe60);
    int32_t valA15 = DynObj_RegisterSymbol_13();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA15, Display_ClearSurfaces_19);
    int32_t valA17 = DynObj_FindSymbol_13();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA17, sub_49c800);

    for (int32_t* i = &g_721560; i < 0x724458; i = &i[0x3ea])
    {
        i[1] = 0;
        *i = 0;
    }

    void* tmpD = g_bcade8;
    g_72350c = 0;
    g_7205b0 = Sys_DispatchOpcode_19(tmpD, sub_49d730);
    int32_t valA21 = Sys_DispatchOpcode_19(g_bcad7c, sub_49db10);
    void* objC1 = g_bcadac;
    g_7ac09c = valA21;
    int32_t valA22 = Sys_DispatchOpcode_19(objC1, Display_SetGammaRamp_19);
    void* tmpD1 = g_bcade8;
    g_7234b8 = valA22;
    g_723504 = Sys_DispatchOpcode_19(tmpD1, sub_49d960);
    int32_t valA25 = Sys_DispatchOpcode_19(g_bcadac, Display_CreateSurface_19);
    void* objC2 = g_bcad7c;
    g_7addd4 = valA25;
    int32_t valA26 = Sys_DispatchOpcode_19(objC2, sub_49db10);
    void* tmpD2 = g_bcadac;
    g_7205b8 = valA26;
    g_7205bc = Sys_DispatchOpcode_19(tmpD2, Display_OpenDevice_20);
    g_723508 = Sys_DispatchOpcode_19(g_bcadac, Display_CloseDevice_20);
    Display_CloseDevice_8(Display_SetDisplayMode_19);
    int32_t valA30 = Render_DrawSplineMesh_4();
    return QTask_RemoveEventCallback(SoundSys_EvaluateTrigger_2(), valA30, Display_SyncVSync_19);
}
