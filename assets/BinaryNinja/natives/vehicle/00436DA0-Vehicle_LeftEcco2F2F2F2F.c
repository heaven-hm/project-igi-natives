// Original IGI.EXE function: Vehicle_LeftEcco2F2F2F2F (VA 0x00436DA0; static CFG gate PASS, CFG score 0.952).
#include "Vehicle_LeftEcco2F2F2F2F.h"
int32_t Vehicle_LeftEcco2F2F2F2F(void* context)

{
    float* entity_val = context + 0x4c;
    int32_t i_3 = 4;
    float* item_14c = entity_val;
    int32_t i;

    do
    {
        long double fpu_val_7_2 = entity_val[-4] - 0.0111111114f;
        long double f0_1 = 0.0f;
        fpu_val_7_2 - f0_1;

        if (*(&((fpu_val_7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            fpu_val_7_2 = 0.0f;

        entity_val[-4] = fpu_val_7_2;
        long double fpu_val_7_5 = *entity_val - 0.0111111114f;
        long double f1_1 = 0.0f;
        fpu_val_7_5 - f1_1;

        if (*(&((fpu_val_7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            fpu_val_7_5 = 0.0f;

        *entity_val = fpu_val_7_5;
        entity_val = &entity_val[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);
    void* data_2 = g_57bdac;
    int32_t context_val = 0;
    long double fpu_val_7_7 = *(data_2 + 8);
    long double fpu6 = *(data_2 + 0x14);
    int32_t entity_1 = *(data_2 + 0x20);
    void* item_16c = nullptr;
    long double fpu_val_5_1 = item_16c - fpu6;
    int32_t item_150 = entity_1;
    float item_170 = 0.0f;
    item_150 = 0;
    float item_164 = fpu_val_5_1;
    long double fpu_val_6_3 = item_16c - fpu_val_7_7;
    float item_178 = item_164;
    item_16c = data_2 + 0x28;
    float item_158 = item_164;
    int32_t i_1 = 0;
    float item_160 = -(fpu_val_6_3);
    float temp_val = item_160;
    item_178 = -(item_164);
    float item_154 = temp_val;
    float item_174_1 = -(temp_val);
    float item_170_1 = -(item_170);
    double item_148;

    do
    {
        int32_t saved_target;
        double* temp_1 = &saved_target + i_1 + 0x70;
        memcpy(temp_1, item_16c, 0x18);
        float* source_2 = &item_158;
        int32_t entity_4 = context_val & 1;

        if (!entity_4)
            source_2 = &item_178;

        *(&item_148 + i_1) = *source_2;
        float* source_3 = &item_158;

        if (!entity_4)
            source_3 = &item_178;

        void item_140;
        *(&item_140 + i_1) = source_3[1];
        float* entity_5 = &item_158;

        if (!entity_4)
            entity_5 = &item_178;

        context_val += 1;
        void item_138;
        *(&item_138 + i_1) = entity_5[2];
        long double fpu_val_7_19 = *(&item_148 + i_1) * 40960.0;
        i_1 += 0x18;
        *(&item_160 + i_1) = fpu_val_7_19;
        *(&item_158 + i_1) = *(&item_158 + i_1) * 40960.0;
        *(&item_150 + i_1) = *(&item_150 + i_1) * 40960.0;
        *(&item_160 + i_1) = *(&item_160 + i_1) + *temp_1;
        void item_128;
        *(&item_158 + i_1) = *(&item_128 + i_1) + *(&item_158 + i_1);
        void item_120;
        *(&item_150 + i_1) = *(&item_120 + i_1) + *(&item_150 + i_1);
    } while (i_1 < 0x30);

    int32_t item_168 = Level_InitTextures_5(0);
    void** item_190 = &item_16c;
    char data_5 = Level_LoadObjects_4();
    double item_118[0x6];
    double* item_1a0 = &item_118;
    int32_t item_1a8 = Level_StartMission_4();
    void item_e8;
    DynObj_FindSymbol_11(item_1a8, &item_e8, item_1a0, &item_148, 2, data_5, item_190, 0x20000000);
    int32_t i_2 = 0;
    void item_88;
    double* source_4 = &item_88;

    do
    {
        if (source_4[-1])
        {
            long double fpu_val_7_30 = *source_4;
            long double f3_1 = 40960.0;
            fpu_val_7_30 - f3_1;

            if (*(&((fpu_val_7_30 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_30, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_30 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                item_178 = *source_4 * 0.000244140625;
                float data_9 = item_178;
                int32_t entity_6;

                if (data_9 <= 1)
                    entity_6 = 0;
                else if (data_9 > 2)
                {
                    int32_t entity_7 = 0;
                    entity_7 = data_9 > 4;
                    entity_6 = entity_7 + 2;
                }
                else
                    entity_6 = 1;

                if (!(i_2 & 1))
                {
                    long double fpu_val_7_37 = *(context + (entity_6 << 2) + 0x4c) + 1.0f;
                    long double f4_1 = 1.0f;
                    fpu_val_7_37 - f4_1;

                    if (!(*(&((fpu_val_7_37 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_37, f4_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_37 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        fpu_val_7_37 = 1.0f;

                    *(context + (entity_6 << 2) + 0x4c) = fpu_val_7_37;
                }
                else
                {
                    long double fpu_val_7_34 = *(context + (entity_6 << 2) + 0x3c) + 1.0f;
                    long double f5_1 = 1.0f;
                    fpu_val_7_34 - f5_1;

                    if (!(*(&((fpu_val_7_34 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_34, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_34 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        fpu_val_7_34 = 1.0f;

                    *(context + (entity_6 << 2) + 0x3c) = fpu_val_7_34;
                }
            }
        }

        i_2 += 1;
        source_4 = &source_4[0xe];
    } while (i_2 < 2);

    item_190 = *(context + 0x48);
    item_1a0 = *(context + 0x40);
    item_1a8 = *(context + 0x3c);
    SoundSys_Update3DPosition_11("Left ecco: %.2f %.2f %.2f %.2f\n");
    item_190 = *(context + 0x58);
    item_1a0 = *(context + 0x50);
    item_1a8 = *item_14c;
    return SoundSys_Update3DPosition_11("Right ecco: %.2f %.2f %.2f %.2f\n");
}
