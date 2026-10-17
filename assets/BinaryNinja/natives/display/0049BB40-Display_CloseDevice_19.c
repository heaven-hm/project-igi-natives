// IGI native provenance: Display_CloseDevice_19 - 0x0049BB40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049BB40-Display_CloseDevice_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_19.h"
int32_t Display_CloseDevice_19()

{
    int32_t data_val = DynObj_ParseConfigFile_15();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_val, sub_49df60);
    int32_t data_2 = DynObj_UpdateDynTree_15();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_2, Mesh_SkinBones);
    int32_t data_4 = DynObj_LinkDynamicCube_15();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_4, sub_49c850);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_b817a0, sub_49faf0);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_b8170c, sub_49faf0);
    int32_t data_9 = DynObj_RemoveSymbol_15();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_9, Display_RestoreDevice_20);
    int32_t data_11 = DynObj_InsertHashItem_13();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_11, Display_ClearSurfaces_20);
    int32_t data_13 = DynObj_LookupHashItem_13();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_13, sub_49fe60);
    int32_t data_15 = DynObj_RegisterSymbol_13();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_15, Display_ClearSurfaces_19);
    int32_t data_17 = DynObj_FindSymbol_13();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_17, sub_49c800);

    for (int32_t* i = &g_721560; i < 0x724458; i = &i[0x3ea])
    {
        i[1] = 0;
        *i = 0;
    }

    void* temp_val = g_bcade8;
    g_72350c = 0;
    g_7205b0 = Sys_DispatchOpcode_19(temp_val, sub_49d730);
    int32_t data_21 = Sys_DispatchOpcode_19(g_bcad7c, sub_49db10);
    void* entity_1 = g_bcadac;
    g_7ac09c = data_21;
    int32_t data_22 = Sys_DispatchOpcode_19(entity_1, Display_SetGammaRamp_19);
    void* temp_1 = g_bcade8;
    g_7234b8 = data_22;
    g_723504 = Sys_DispatchOpcode_19(temp_1, sub_49d960);
    int32_t data_25 = Sys_DispatchOpcode_19(g_bcadac, Display_CreateSurface_19);
    void* entity_2 = g_bcad7c;
    g_7addd4 = data_25;
    int32_t data_26 = Sys_DispatchOpcode_19(entity_2, sub_49db10);
    void* temp_2 = g_bcadac;
    g_7205b8 = data_26;
    g_7205bc = Sys_DispatchOpcode_19(temp_2, Display_OpenDevice_20);
    g_723508 = Sys_DispatchOpcode_19(g_bcadac, Display_CloseDevice_20);
    Display_CloseDevice_8(Display_SetDisplayMode_19);
    int32_t data_30 = Render_DrawSplineMesh_4();
    return QTask_RemoveEventCallback(SoundSys_EvaluateTrigger_2(), data_30, Display_SyncVSync_19);
}
