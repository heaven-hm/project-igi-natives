#include "gi_platform.h"
#include "004D0B30-Render_Genericuvfromrenderm.h"
int32_t Render_Genericuvfromrenderm()

{
    int32_t objC;
    int32_t v_4_1 = objC;
    int32_t v_4 = 0;

    for (void* i = &g_b817c0; i < &g_b81880; )
    {
        i += 0xc;
        long double x87_r7_2 = v_4 * 0.0666666701.0f;
        v_4 += 1;
        long double x87_r6_2 = x87_r7_2 * 0.699999988.0f;
        *(i - 8) = x87_r6_2;
        *(i - 0xc) = x87_r6_2;
        *(i - 4) = x87_r7_2 * x87_r7_2 * x87_r7_2 * 40.0f + 1.0f;
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
