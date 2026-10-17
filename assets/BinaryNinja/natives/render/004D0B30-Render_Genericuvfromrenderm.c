// IGI native provenance: Render_Genericuvfromrenderm - 0x004D0B30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0B30-Render_Genericuvfromrenderm.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_Genericuvfromrenderm.h"
int32_t Render_Genericuvfromrenderm()

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    int32_t item_4 = 0;

    for (void* i = &g_b817c0; i < &g_b81880; )
    {
        i += 0xc;
        long double fpu_val_7_2 = item_4 * 0.0666666701f;
        item_4 += 1;
        long double fpu_val_6_2 = fpu_val_7_2 * 0.699999988f;
        *(i - 8) = fpu_val_6_2;
        *(i - 0xc) = fpu_val_6_2;
        *(i - 4) = fpu_val_7_2 * fpu_val_7_2 * fpu_val_7_2 * 40.0f + 1.0f;
    }

    g_548364 = QTask_UnableToAllocateEvent(0);
    g_548367 = QTask_UnableToAllocateEvent(0);
    g_548366 = QTask_UnableToAllocateEvent(0);
    g_548365 = QTask_UnableToAllocateEvent(0);
    g_548368 = QTask_UnableToAllocateEvent(0);
    g_54836c = QTask_UnableToAllocateEven_2(0);
    g_b817a0 = Sys_RendermodeFailedToCr_2("GenericUVFromRenderModeUV");
    g_b8170c = Sys_RendermodeFailedToCr_2("RenderModeUVFromGenericUV");
    g_b46d14 = Sys_RendermodeFailedToCr_2("DrawRigidMesh");
    g_b81880 = Sys_RendermodeFailedToCr_2("DrawBoneMesh");
    g_b46ce0 = Sys_RendermodeFailedToCr_2("DrawSplineMesh");
    g_b818dc = Sys_RendermodeFailedToCr_2("DrawLightmapMesh");
    g_a4ee78 = Sys_RendermodeFailedToCr_2("ExcludeObject");
    Display_SyncVSync_18();
    g_b81700 = 0x3f800000;
    g_b81704 = 0x3f800000;
    g_b81708 = 0x3f800000;
    return 0x3f800000;
}
