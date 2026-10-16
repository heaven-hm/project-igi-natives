#include "004D0B30-Render_Genericuvfromrenderm.h"
/* 0x004d0b30 Render_Genericuvfromrenderm full linked: callers=1 callees=14 */
int32_t sub_4d0b30()

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    int32_t var_4 = 0;

    for (void* i = &g_b817c0; i < &g_b81880; )
    {
        i += 0xc;
        long double x87_r7_2 = var_4 * 0.0666666701f;
        var_4 += 1;
        long double x87_r6_2 = x87_r7_2 * 0.699999988f;
        *(i - 8) = x87_r6_2;
        *(i - 0xc) = x87_r6_2;
        *(i - 4) = x87_r7_2 * x87_r7_2 * x87_r7_2 * 40f + 1f;
    }

    g_548364 = QTask_UnableToAllocateEven(0);
    g_548367 = QTask_UnableToAllocateEven(0);
    g_548366 = QTask_UnableToAllocateEven(0);
    g_548365 = QTask_UnableToAllocateEven(0);
    g_548368 = QTask_UnableToAllocateEven(0);
    g_54836c = QTask_UnableToAllocateEven_2(0);
    g_b817a0 = sub_4b0e70("GenericUVFromRenderModeUV");
    g_b8170c = sub_4b0e70("RenderModeUVFromGenericUV");
    g_b46d14 = sub_4b0e70("DrawRigidMesh");
    g_b81880 = sub_4b0e70("DrawBoneMesh");
    g_b46ce0 = sub_4b0e70("DrawSplineMesh");
    g_b818dc = sub_4b0e70("DrawLightmapMesh");
    g_a4ee78 = sub_4b0e70("ExcludeObject");
    sub_49a340();
    g_b81700 = 0x3f800000;
    g_b81704 = 0x3f800000;
    g_b81708 = 0x3f800000;
    return 0x3f800000;
}
