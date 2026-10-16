#include "gi_platform.h"
#include "004D12C0-Render_ClipMesh_3.h"
int32_t Render_ClipMesh_3(int32_t a1)

{
    int32_t dstD = 1;
    Terrain_RenderWaterSurface(a1);
    DynObj_ParseConfigFile_11(a1, 0x11, 0, &g_bcab08, 0x20000000);
    char* srcS = g_b16c98;
    int32_t v_8;

    if (g_a538d0)
    {
        int32_t i = 0;

        if (g_b12c20 > 0)
        {
            do
            {
                void* valA5 = (*(int32_t*)(uintptr_t)(srcS + 4));
                long double fp0_1;
                long double x87_r6_2;

                if (*(valA5 + 0x1c) != g_c30064)
                {
                    fp0_1 = Sys_PushStack_11(0xb16c80, valA5 + 0x20);
                    x87_r6_2 = g_b04264 * g_b04264;
                    x87_r6_2 - fp0_1;
                }

                if (*(valA5 + 0x1c) != g_c30064 && !(*(&((x87_r6_2 < fp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, fp0_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == fp0_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    if (!dstD)
                    {
                        long double x87_r7_3 = g_bcabc0 + g_bcabb8;
                        int32_t valA9 = g_bcabbc;
                        v_8 = g_bcabb8;
                        float v_10 = x87_r7_3;
                        int32_t v_4_1 = valA9;
                        float v_c_1 = g_bcabc4 + g_bcabbc;
                        Display_CloseDevice_13(0xbcaba0, &v_8, &v_10);
                    }

                    void* valA10 = (*(int32_t*)(uintptr_t)(srcS + 4));
                    int32_t objC6 = 0;
                    objC6 = *srcS;
                    int32_t tmpD4 = 0;
                    tmpD4 = *(valA10 + 0x1c);
                    ((int(*)())(uintptr_t)(*(((objC6 * 0x180 + tmpD4) << 2) + &g_a96ae0)))(valA10, *(valA10 + 0x48));
                    dstD = 1;
                }
                else if (g_54843c)
                {
                    if (dstD)
                        Display_CloseDevice_13(0xbcaba0, &g_b12b78, &g_b16c60);

                    void* valA12 = (*(int32_t*)(uintptr_t)(srcS + 4));
                    int32_t objC10 = 0;
                    objC10 = *srcS;
                    int32_t tmpD6 = 0;
                    tmpD6 = *(valA12 + 0x1c);
                    ((int(*)())(uintptr_t)(*(((objC10 * 0x180 + tmpD6) << 2) + &g_a96ae0)))(valA12, *(valA12 + 0x48));
                    dstD = 0;
                }

                srcS = &srcS[8];
                i += 1;
            } while (i < g_b12c20);
        }
    }
    else
    {
        int32_t i_1 = 0;

        if (g_b12c20 > 0)
        {
            do
            {
                void* valA2 = (*(int32_t*)(uintptr_t)(srcS + 4));
                int32_t objC1 = 0;
                objC1 = *srcS;
                int32_t tmpD1 = 0;
                tmpD1 = *(valA2 + 0x1c);
                ((int(*)())(uintptr_t)(*(((objC1 * 0x180 + tmpD1) << 2) + &g_a96ae0)))(valA2, *(valA2 + 0x48));
                srcS = &srcS[8];
                i_1 += 1;
            } while (i_1 < g_b12c20);
        }
    }

    DynObj_ParseConfigFile_11(a1, 0x12, 0, &g_bcab08, 0x20000000);
    int32_t objC14 = g_b12c20;
    v_8 = g_b16c98;
    int32_t v_4_2 = objC14;
    return (Render_DrawRigidMesh_4(g_a538e4, &v_8), 0);
}
