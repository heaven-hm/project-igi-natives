#include "Terrain_Glowreadbufferprimit.h"
int32_t Terrain_Glowreadbufferprimit()

{
    int32_t objC;
    int32_t v_4_1 = objC;
    long double fpu7 = 0f;
    void* objC1 = nullptr;
    long double f3_1;

    do
    {
        long double x87_r6_1 = 0f;
        long double x87_r5_2 = fpu7 - 16f;
        long double f2_1;

        do
        {
            long double x87_r4_3 = x87_r6_1 - 16f;
            long double x87_r4_6 = sqrtl(x87_r4_3 * x87_r4_3 + x87_r5_2 * x87_r5_2);
            long double f1_1 = 16f;
            x87_r4_6 - f1_1;
            char valA3;

            valA3 = !(*(&((x87_r4_6 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_6, f1_1) ? 1 : 0) << 0xa
                | (x87_r4_6 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1) ? 0 : 1;

            x87_r6_1 = x87_r6_1 + 1f;
            f2_1 = 32f;
            x87_r6_1 - f2_1;
            *(objC1 + 0xa7dc64) = valA3;
            objC1 += 1;
        } while (*(&((x87_r6_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f2_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == f2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1);
        fpu7 = fpu7 + 1f;
        f3_1 = 32f;
        fpu7 - f3_1;
    } while (*(&((fpu7 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f3_1) ? 1 : 0) << 0xa
        | (fpu7 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1);
    long double fp0;
    bool c1;
    bool c2_4;
    fp0 = __fcos(0.19634954631328583);
    int32_t v_4 = 0;
    void* i = &g_a7dbe0;
    long double x87_r7_4 = 1f / fp0;

    do
    {
        i += 8;
        long double x87_r6_5 = v_4 * 0.392699093f;
        v_4 += 1;
        long double fp0_1;
        bool c1_1;
        bool c2_5;
        fp0_1 = __fcos(x87_r6_5);
        *(i - 8) = fp0_1 * x87_r7_4;
        long double fp0_2;
        bool c1_2;
        bool c2_6;
        fp0_2 = __fsin(x87_r6_5);
        *(i - 4) = fp0_2 * x87_r7_4;
    } while (i < &g_a7dc60);

    int32_t valA4 = Display_RestoreDevice_14("GlowReadBufferPrimitive");
    g_a7dbd8 = valA4;
    Display_SetGammaRamp_14(valA4, Terrain_UpdateWaterWaves_2);
    int32_t valA5 = Display_RestoreDevice_14("GlowInstancePrimitive");
    g_a7dc60 = valA5;
    return Display_SetGammaRamp_14(valA5, Terrain_ConnectGraphNode_2);
}
