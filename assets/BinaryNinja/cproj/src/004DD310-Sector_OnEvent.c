#include "gi_platform.h"
#include "004DD310-Sector_OnEvent.h"
float Sector_OnEvent(float a1) __location("valA")

{
    float result = a1;
    int32_t tmpD = g_bcabd4;
    int32_t v_8 = g_bcabd0;
    g_a5e354 = result;
    int32_t v_10 = g_bcabd8;
    int32_t v_4 = tmpD;
    float result_1 = result;
    int32_t v_c = g_bcabdc;

    if (*(result + 0x6c))
    {
        if (result != g_a538d0)
            goto label_4dd381;

        result = g_a538cc;

        if (!result)
        {
            result_1 = g_a538d4;
    label_4dd381: ;
            g_a5e35c = Render_SkinBones_13(&g_a5e334);
            Render_ComputeNormals_12(&g_a5e330, &g_a5e310);
            int32_t objC3 = g_bcabd4;
            int32_t tmpD2 = g_bcabd8;
            float v_18 = g_bcabd0;
            int32_t valA2 = g_bcabdc;
            int32_t v_14_1 = objC3;
            int32_t v_20 = tmpD2;
            int32_t v_1c_1 = valA2;
            int32_t valA3 = DynObj_CreateMagicObject_16(result_1);

            if (valA3 != 0xffffffff)
                Render_ClipMesh_14(result_1, &v_18, &v_20, valA3);

            int32_t i = g_a5e340;
            int32_t srcS = 0;
            bool cond_1_1 = !i;

            if (i > 0)
            {
                do
                {
                    int32_t* valA7 = (*(int32_t*)(uintptr_t)(g_a5e33c + (srcS << 2))) * g_a5e348 + g_a5e338;
                    int32_t __saved_ebx_2 = valA7[5];
                    Render_DrawRigidMesh_15(valA7[6], valA7, &valA7[2]);
                    i = g_a5e340;
                    srcS += 1;
                } while (srcS < i);

                cond_1_1 = !i;
            }

            if (!cond_1_1)
            {
                int32_t* srcS1 = g_a5e34c;
                int32_t* objC6 = g_a5e33c;
                int32_t ctxB1 = g_a5e338;
                int32_t dstD1 = g_a5e348;

                do
                {
                    i -= 1;
                    int32_t tmpD7 = *(*objC6 * dstD1 + srcS1 + ctxB1);
                    g_a5e340 = i;

                    if (tmpD7 != i)
                    {
                        int32_t dstD2 = objC6[tmpD7];
                        int32_t valA11 = objC6[i] * dstD1 + ctxB1;
                        int32_t srcS2 = *(srcS1 + valA11);
                        objC6[tmpD7] = objC6[srcS2];
                        *(g_a5e33c + (srcS2 << 2)) = dstD2;
                        *(g_a5e34c + valA11) = tmpD7;
                        srcS1 = g_a5e34c;
                        dstD1 = g_a5e348;
                        objC6 = g_a5e33c;
                        ctxB1 = g_a5e338;
                        i = g_a5e340;
                    }
                } while (i);
            }

            return Display_CloseDevice_13(0xbcaba0, &v_8, &v_10);
        }
    }

    return result;
}
