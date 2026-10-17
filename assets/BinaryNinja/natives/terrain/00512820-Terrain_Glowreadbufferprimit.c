// Original IGI.EXE function: Terrain_Glowreadbufferprimit (VA 0x00512820; static CFG gate PASS, CFG score 1.000).
#include "Terrain_Glowreadbufferprimit.h"
int32_t Terrain_Glowreadbufferprimit()

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    long double fpu7 = 0.0f;
    void* entity_1 = nullptr;
    long double f3_1;

    do
    {
        long double fpu_val_6_1 = 0.0f;
        long double fpu_val_5_2 = fpu7 - 16.0f;
        long double f2_1;

        do
        {
            long double fpu_val_4_3 = fpu_val_6_1 - 16.0f;
            long double fpu_val_4_6 = sqrtl(fpu_val_4_3 * fpu_val_4_3 + fpu_val_5_2 * fpu_val_5_2);
            long double f1_1 = 16.0f;
            fpu_val_4_6 - f1_1;
            char data_3;

            data_3 = !(*(&((fpu_val_4_6 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_4_6, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_4_6 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1) ? 0 : 1;

            fpu_val_6_1 = fpu_val_6_1 + 1.0f;
            f2_1 = 32.0f;
            fpu_val_6_1 - f2_1;
            *(entity_1 + 0xa7dc64) = data_3;
            entity_1 += 1;
        } while (*(&((fpu_val_6_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1);
        fpu7 = fpu7 + 1.0f;
        f3_1 = 32.0f;
        fpu7 - f3_1;
    } while (*(&((fpu7 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f3_1) ? 1 : 0) << 0xa
        | (fpu7 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1);
    long double fp0;
    bool c1;
    bool c2_4;
    fp0 = __fcos(0.19634954631328583);
    int32_t item_4 = 0;
    void* i = &g_a7dbe0;
    long double fpu_val_7_4 = 1.0f / fp0;

    do
    {
        i += 8;
        long double fpu_val_6_5 = item_4 * 0.392699093f;
        item_4 += 1;
        long double fp0_1;
        bool c1_1;
        bool c2_5;
        fp0_1 = __fcos(fpu_val_6_5);
        *(i - 8) = fp0_1 * fpu_val_7_4;
        long double fp0_2;
        bool c1_2;
        bool c2_6;
        fp0_2 = __fsin(fpu_val_6_5);
        *(i - 4) = fp0_2 * fpu_val_7_4;
    } while (i < &g_a7dc60);

    int32_t data_4 = Display_RestoreDevice_14("GlowReadBufferPrimitive");
    g_a7dbd8 = data_4;
    Display_SetGammaRamp_14(data_4, Terrain_UpdateWaterWaves_2);
    int32_t data_5 = Display_RestoreDevice_14("GlowInstancePrimitive");
    g_a7dc60 = data_5;
    return Display_SetGammaRamp_14(data_5, Terrain_ConnectGraphNode_2);
}
