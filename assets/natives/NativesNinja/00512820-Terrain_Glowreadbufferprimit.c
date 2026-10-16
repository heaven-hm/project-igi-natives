#include "00512820-Terrain_Glowreadbufferprimit.h"
/* 0x00512820 Terrain_Glowreadbufferprimit full linked: callers=1 callees=4 */
int32_t sub_512820()

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    long double x87_r7 = 0f;
    void* ecx_1 = nullptr;
    long double temp3_1;

    do
    {
        long double x87_r6_1 = 0f;
        long double x87_r5_2 = x87_r7 - 16f;
        long double temp2_1;

        do
        {
            long double x87_r4_3 = x87_r6_1 - 16f;
            long double x87_r4_6 = sqrtl(x87_r4_3 * x87_r4_3 + x87_r5_2 * x87_r5_2);
            long double temp1_1 = 16f;
            x87_r4_6 - temp1_1;
            char eax_3;

            eax_3 = !(*(&((x87_r4_6 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_6, temp1_1) ? 1 : 0) << 0xa
                | (x87_r4_6 == temp1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1) ? 0 : 1;

            x87_r6_1 = x87_r6_1 + 1f;
            temp2_1 = 32f;
            x87_r6_1 - temp2_1;
            *(ecx_1 + 0xa7dc64) = eax_3;
            ecx_1 += 1;
        } while (*(&((x87_r6_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1);
        x87_r7 = x87_r7 + 1f;
        temp3_1 = 32f;
        x87_r7 - temp3_1;
    } while (*(&((x87_r7 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp3_1) ? 1 : 0) << 0xa
        | (x87_r7 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1);
    long double st0;
    bool c1;
    bool c2_4;
    st0 = __fcos(0.19634954631328583);
    int32_t var_4 = 0;
    void* i = &g_a7dbe0;
    long double x87_r7_4 = 1f / st0;

    do
    {
        i += 8;
        long double x87_r6_5 = var_4 * 0.392699093f;
        var_4 += 1;
        long double st0_1;
        bool c1_1;
        bool c2_5;
        st0_1 = __fcos(x87_r6_5);
        *(i - 8) = st0_1 * x87_r7_4;
        long double st0_2;
        bool c1_2;
        bool c2_6;
        st0_2 = __fsin(x87_r6_5);
        *(i - 4) = st0_2 * x87_r7_4;
    } while (i < &g_a7dc60);

    int32_t eax_4 = sub_4978d0("GlowReadBufferPrimitive");
    g_a7dbd8 = eax_4;
    sub_4978f0(eax_4, sub_5127e0);
    int32_t eax_5 = sub_4978d0("GlowInstancePrimitive");
    g_a7dc60 = eax_5;
    return sub_4978f0(eax_5, sub_512940);
}
