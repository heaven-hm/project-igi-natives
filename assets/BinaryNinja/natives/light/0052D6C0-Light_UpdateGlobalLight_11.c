// Original IGI.EXE function: Light_UpdateGlobalLight_11 (VA 0x0052D6C0; static CFG gate PASS, CFG score 1.000).
#include "Light_UpdateGlobalLight_11.h"
void* Light_UpdateGlobalLight_11(int32_t context)

{
    float item_14 = 0.0f;
    int32_t item_40 = 0;
    float item_10 = 0.0f;
    long double fpu7 = *(context + 0x4a9c);
    float item_c = 0.0f;
    long double f3 = 268435456.0;
    fpu7 - f3;
    double item_24;

    if (*(&((fpu7 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f3) ? 1 : 0) << 0xa
            | (fpu7 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        *(context + 0x4ab4) = 1;
    else
    {
        item_24 = fpu7 * 3.7252902984619141e-09;
        *(context + 0x4ab4) = item_24;
    }

    *(context + 0x3c) = 0;
    *(context + 0x10) = *(context + 0x4840);
    *(context + 0x14) = *(context + 0x4844);
    *(context + 0x18) = *(context + 0x4848);
    *(context + 0x1c) = *(context + 0x484c);
    int32_t data_4 = *(context + 0x4a9c) << 1;
    int32_t entity_3 = 0;
    int32_t f2 = *(context + 0x4ab4);
    *(context + 0x38) = 0;
    *(context + 0x2c) = 0xffffffff;
    *(context + 0x24) = 0;
    int32_t item_44_1 = 0;
    *(context + 0x30) = COMBINE(0, data_4) / f2;
    int32_t data_6 = *(context + 0x4ab4);

    if (data_6 > 0)
    {
        void* item_48_1 = context + 0x48;

        do
        {
            int32_t i = 0;

            if (data_6 > 0)
            {
                void* entity_4 = item_48_1;
                int32_t item_38_1 = 0;

                do
                {
                    *(entity_4 + 0x24) = 0;
                    int32_t item_30_1 = 0;
                    uint32_t f0_1 = COMBINE(0, *(context + 0x4a9c)) / *(context + 0x4ab4);
                    int32_t item_28_1 = 0;
                    item_24 = i;
                    *(&item_24 + 4) = 0;
                    entity_4 += 0x30;
                    *(entity_4 - 0x38) = f0_1 * entity_3 + *(context + 0x4840);
                    *(entity_4 - 0x30) = (COMBINE(0, *(context + 0x4a9c)) / *(context + 0x4ab4)) * item_24
                        + *(context + 0x4848);
                    int32_t data_11 = *(context + 0x4a9c);
                    int32_t f2_3 = *(context + 0x4ab4);
                    *(entity_4 - 0x10) = 0;
                    *(entity_4 - 0x1c) = 0;
                    *(entity_4 - 0x24) = 0;
                    i += 1;
                    *(entity_4 - 0x18) = COMBINE(0, data_11) / f2_3;
                } while (i < *(context + 0x4ab4));

                entity_3 = item_44_1;
            }

            data_6 = *(context + 0x4ab4);
            entity_3 += 1;
            item_44_1 = entity_3;
            item_48_1 += 0x180;
        } while (entity_3 < data_6);
    }

    long double fpu_val_7_6 = *(context + 0x4a84) * 0.100000001f;
    *(context + 0x4aa8) = 0;
    *(context + 0x4ab8) = 0;
    *(context + 0x4a88) = fpu_val_7_6;
    Light_CalculateAttenuation_11(context);
    int32_t data_14 = *(context + 0x4890);
    int32_t entity_5 = *(context + 0x4894);
    *(context + 0x48a0) = -(*(context + 0x4888));
    *(context + 0x4898) = data_14;
    *(context + 0x489c) = entity_5;
    Sys_ReadFileBlock_10(context + 0x4898);
    item_24 = 0;
    *(&item_24 + 4) = 0x3ff00000;
    int32_t item_1c = 0;
    int32_t item_18 = 0;
    long double fp0 = Sys_ExecuteBytecode_10(context + 0x4898, &item_24);
    item_24 = fp0 * *(context + 0x4898);
    item_1c = fp0 * *(context + 0x48a0);
    *(context + 0x48a8) = Sys_CloseFileStream_10(&item_24);
    item_24 = 0;
    *(&item_24 + 4) = 0;
    int32_t item_1c_1 = 0;
    int32_t item_18_1 = 0x3ff00000;
    long double fp0_2 = Sys_ExecuteBytecode_10(context + 0x4898, &item_24);
    item_24 = fp0_2 * *(context + 0x4898);
    item_1c_1 = fp0_2 * *(context + 0x48a0);
    void* result;
    long double fp0_3;
    fp0_3 = Sys_CloseFileStream_10(&item_24);
    *(context + 0x48b0) = fp0_3;
    *(context + 0x4a98) = *(context + 0x4a80) / *(context + 0x4a84);
    int32_t i_2 = g_b041e8;
    long double fpu_val_7_17;

    if (i_2 <= 0)
        fpu_val_7_17 = item_14;
    else
    {
        fpu_val_7_17 = item_14;
        long double fpu_val_6_11 = item_10;
        int32_t* entity_6 = g_b041e4;
        long double fpu_val_5_2 = item_c;
        int32_t i_1;

        do
        {
            result = g_b041f0 * *entity_6 + g_b041e0;
            entity_6 = &entity_6[1];
            i_1 = i_2;
            i_2 -= 1;
            fpu_val_7_17 = fpu_val_7_17 + *(result + 0xc);
            fpu_val_6_11 = fpu_val_6_11 + *(result + 0x10);
            fpu_val_5_2 = fpu_val_5_2 + *(result + 0x14);
        } while (i_1 != 1);
        item_c = fpu_val_5_2;
        item_10 = fpu_val_6_11;
    }

    long double fpu_val_7_19 = fpu_val_7_17 + *(context + 0x4a54);
    *(context + 0x4ac8) = 0;
    *(context + 0x4ac4) = 0;
    *(context + 0x4ac0) = 0;
    *(context + 0x4a6c) = fpu_val_7_19;
    *(context + 0x4a70) = item_10 + *(context + 0x4a58);
    *(context + 0x4a74) = item_c + *(context + 0x4a5c);
    return result;
}
