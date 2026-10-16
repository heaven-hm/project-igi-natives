#include "gi_platform.h"
#include "0050FAE0-Physics_ApplyImpulse_14.h"
int32_t* Physics_ApplyImpulse_14(void* a1)

{
    int32_t* i_2 = g_b041e8;

    if (i_2)
    {
        long double x87_r7_1 = 0.0f;
        long double x87_r6_2 = g_a7da20 * 255.0f;
        long double x87_r5_2 = g_a7da24 * 255.0f;
        long double x87_r4_2 = g_a7da28 * 255.0f;
        int32_t* valA1 = **&g_b041e4 * g_b041f0 + g_b041e0 + 0xc;
        char v_400;
        void* srcS1 = &v_400;
        int32_t i_3 = 0x100;
        float objC3 = *valA1;
        float tmpD2 = valA1[1];
        float valA2 = valA1[2];
        int32_t i;

        do
        {
            int32_t valA3 = objC3 * x87_r7_1 + x87_r6_2;
            int32_t tmpD3 = tmpD2 * x87_r7_1 + x87_r5_2;
            int32_t objC4 = valA2 * x87_r7_1 + x87_r4_2;

            if (valA3 > 0xff)
                valA3 = 0xff;

            if (tmpD3 > 0xff)
                tmpD3 = 0xff;

            if (objC4 > 0xff)
                objC4 = 0xff;

            srcS1 += 4;
            i = i_3;
            i_3 -= 1;
            *(srcS1 - 4) = (valA3 << 8 | tmpD3) << 8 | objC4;
            x87_r7_1 = x87_r7_1 + 1.0f;
        } while (i != 1);

        if ((*(int32_t*)(uintptr_t)(a1 + 0xdf4)))
        {
            Qhash_Init(1);
            Sys_PopStack_21((*(int32_t*)(uintptr_t)(a1 + 0xdf4)));
            Sys_PushStack_21((*(int32_t*)(uintptr_t)(a1 + 0xdf4)), &v_400, 1);
            Qhash_Reset();
        }

        Qhash_Init(1);
        DynObj_UpdateDynTree_7(a1);
        Qhash_Reset();
        Render_IllegalAllocInfo();
        int32_t dstD1 = 0;
        float* ctxB1 = &g_c310a0;

        for (int32_t i_1 = 0x19; i_1 > 0xfffffffa; )
        {
            long double x87_r7_5 = (1 << (i_1 & 0x1f)) * g_b16c6c;
            long double x87_r7_10 = (
                Display_OpenDevice_18(x87_r7_5 + x87_r7_5 + (0x40000000 >> (dstD1 & 0x1f))) - 130.0f) * g_a7da18;
            long double x87_r6_4 = 0.0f;
            x87_r6_4 - x87_r7_10;

            if (*(&((x87_r6_4 < x87_r7_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_4, x87_r7_10) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_5 = 255.0f;
                x87_r6_5 - x87_r7_10;

                if (*(&((x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa
                        | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_10 = 255.0f;
            }
            else
                x87_r7_10 = 0.0f;

            *ctxB1 = x87_r7_10;
            dstD1 += 1;
            i_1 -= 1;
            ctxB1 = &ctxB1[2];
        }

        long double x87_r7_14 = g_c310a0 - g_c310a8;
        i_2 = &g_c310a8;
        g_c310a4 = x87_r7_14 + x87_r7_14;

        do
        {
            long double x87_r7_17 = i_2[-2] - *i_2;
            i_2 = &i_2[2];
            i_2[-1] = x87_r7_17;
        } while (i_2 < 0xc31198);
    }

    return i_2;
}
