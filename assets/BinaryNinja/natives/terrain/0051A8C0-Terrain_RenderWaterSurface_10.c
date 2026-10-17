// Original IGI.EXE function: Terrain_RenderWaterSurface_10 (VA 0x0051A8C0; static CFG gate FAIL, CFG score 0.778).
#include "Terrain_RenderWaterSurface_10.h"
void Terrain_RenderWaterSurface_10(float context)

{
    float temp_val = context;
    int32_t context_val;
    int32_t item_a0 = context_val;
    int32_t source_val = *(temp_val + 0x1f8);

    if (source_val < 3)
        return;

    void* data_1 = *(temp_val + 0x68);

    if (*(data_1 + 0xc4))
    {
        *(data_1 + 0x78) = *(*(temp_val + 0x6c) + 0x20) - *(data_1 + 0x20);
        void* data_2 = *(temp_val + 0x68);
        *(data_2 + 0x80) = *(*(temp_val + 0x6c) + 0x28) - *(data_2 + 0x28);
        void* data_3 = *(temp_val + 0x68);
        *(data_3 + 0x88) = *(*(temp_val + 0x6c) + 0x30) - *(data_3 + 0x30);
    }

    void* data_4 = *(temp_val + (source_val << 2) + 0x64);

    if (*(data_4 + 0xc4))
    {
        *(data_4 + 0x78) = *(data_4 + 0x20) - *(*(temp_val + (source_val << 2) + 0x60) + 0x20);
        void* data_5 = *(temp_val + (source_val << 2) + 0x64);
        *(data_5 + 0x80) = *(data_5 + 0x28) - *(*(temp_val + (source_val << 2) + 0x60) + 0x28);
        void* data_6 = *(temp_val + (source_val << 2) + 0x64);
        *(data_6 + 0x88) = *(data_6 + 0x30) - *(*(temp_val + (source_val << 2) + 0x60) + 0x30);
    }

    if (source_val - 1 > 1)
    {
        int32_t* data_7 = temp_val + 0x6c;
        int32_t item_98_1 = source_val - 2;
        bool flag_3_1;

        do
        {
            void* entity_9 = *data_7;

            if (*(entity_9 + 0xc4))
            {
                *(entity_9 + 0x78) = *(data_7[1] + 0x20) - *(data_7[-1] + 0x20);
                *(*data_7 + 0x80) = *(data_7[1] + 0x28) - *(data_7[-1] + 0x28);
                *(*data_7 + 0x88) = *(data_7[1] + 0x30) - *(data_7[-1] + 0x30);
                void* entity_14 = *data_7;
                *(entity_14 + 0x78) = *(entity_14 + 0x78) * 0.5;
                void* entity_15 = *data_7;
                *(entity_15 + 0x80) = *(entity_15 + 0x80) * 0.5;
                void* entity_16 = *data_7;
                *(entity_16 + 0x88) = *(entity_16 + 0x88) * 0.5;
            }

            data_7 = &data_7[1];
            flag_3_1 = item_98_1 != 1;
            item_98_1 -= 1;
        } while (flag_3_1);
    }

    int32_t flagP2 = 0;
    int32_t* context_5 = temp_val + 0x68;
    *(*(temp_val + (source_val << 2) + 0x64) + 0x98) = 0;
    float item_8c_1 = 0.00200000009f;
    void* item_94_1 = nullptr;
    *(*context_5 + 0x94) = 0;

    if (source_val - 1 <= 0)
        return;

    while (true)
    {
        float item_9c_1 = 0.0f;
        *(*context_5 + 0x98) = 0;
        int32_t data_10 = *context_5 + 0x20;
        double item_78;
        memcpy(&item_78, data_10, 0x18);
        double item_60;
        memcpy(&item_60, data_10, 0x18);
        int32_t saved_target;
        double item_70;
        double item_68;
        double item_58;
        double item_50;

        while (true)
        {
            item_9c_1 = item_9c_1 + item_8c_1;
            void item_18;
            int32_t data_12 = SplinePathDynCubeObj_OnEvent(&item_18, temp_val, item_94_1, item_9c_1);
            int32_t entity_22 = flagP2 & 1;
            void* data_13 = *context_5;
            flagP2 += 1;
            memcpy(&(&saved_target)[entity_22 * 6 + 0xd], data_12, 0x18);
            long double fpu_val_7_32 = item_68 - item_50;
            long double fpu_val_6_1 = item_70 - item_58;
            long double fpu_val_5_1 = item_78 - item_60;
            *(data_13 + 0x98) =
sqrtl Terrain_RenderWaterSurface_10(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_32 * fpu_val_7_32)
                + *(data_13 + 0x98);

            if (flagP2 >= 0x1f4)
                break;

            temp_val = context;
        }

        void* entity_23 = context_5[1];
        void* temp_2 = *context_5;
        long double fpu_val_7_38 = (*(entity_23 + 0x90) + *(temp_2 + 0x90)) * 0.5f * 0.277777791f;
        long double f1_1 = 0.0f;
        fpu_val_7_38 - f1_1;

        if (*(&((fpu_val_7_38 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_38, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_38 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            *(entity_23 + 0x94) = 0;
        else
            *(entity_23 + 0x94) = *(temp_2 + 0x98) * 0.000244140625f / fpu_val_7_38 + *(temp_2 + 0x94);

        item_8c_1 = 0.00100000005f;
        int32_t item_98_2 = 0;
        int32_t* item_90 = 0x9c;

        do
        {
            *(item_90 + *context_5) = 0;
            float item_9c_2 = item_98_2 * 0.100000001f;
            void item_48;
            int32_t data_17 = SplinePathDynCubeObj_OnEvent(&item_48, context, item_94_1, item_9c_2);
            memcpy(&item_78, data_17, 0x18);
            int32_t i = 0;
            memcpy(&item_60, data_17, 0x18);

            do
            {
                item_9c_2 = item_9c_2 + 0.00100000005f;
                void item_30;
                int32_t data_19 = SplinePathDynCubeObj_OnEvent(&item_30, context, item_94_1, item_9c_2);
                int32_t entity_28 = i & 1;
                float* data_21 = item_90 + *context_5;
                i += 1;
                memcpy(&(&saved_target)[entity_28 * 6 + 0xd], data_19, 0x18);
                long double fpu_val_7_50 = item_68 - item_50;
                long double fpu_val_6_7 = item_70 - item_58;
                long double fpu_val_5_3 = item_78 - item_60;
                *data_21 = sqrtl(fpu_val_5_3 * fpu_val_5_3 + fpu_val_6_7 * fpu_val_6_7 + fpu_val_7_50 * fpu_val_7_50)
                    + *data_21;
            } while (i < 0x64);

            item_98_2 += 1;
            item_90 = &item_90[1];
        } while (&item_90[1] < 0xc4);

        context_5 = &context_5[1];
        bool flag_7_1 = item_94_1 + 1 < source_val - 1;
        item_94_1 += 1;

        if (!flag_7_1)
            break;

        temp_val = context;
        flagP2 = 0;
    }
}
