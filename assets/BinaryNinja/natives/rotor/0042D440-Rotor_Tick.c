// IGI native provenance: Rotor_Tick - 0x0042D440 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042D440-Rotor_Tick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Rotor_Tick.h"
void* Rotor_Tick(float context)

{
    float context_val = context;
    void* result = *(context_val + 0x13c);
    void* source_val = *(context_val + 0x130);
    char* dest_val = *(result + 0x2d4);
    float item_30;

    if (*dest_val)
    {
        long double fpu_val_7_3 = *(*(source_val + 0x1b4) + 8) * *(source_val + 0x720) * 44.6008873f;
        context = fpu_val_7_3;
        long double f1_1 = 0.0f;
        fpu_val_7_3 - f1_1;
        result = (fpu_val_7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            long double fpu_val_7_4 = 0.0f;
            long double fpu_val_6_1 = *(source_val + 0x74);
            int32_t data_val = *(source_val + 0x8c);
            float temp_1 = *(source_val + 0x80);
            float item_3c = fpu_val_6_1;
            long double f2_1 = 0.0f;
            fpu_val_6_1 - f2_1;
            int32_t item_34_1 = data_val;
            int32_t temp_2 = *(source_val + 0x84);
            int32_t item_28_1 = *(source_val + 0x90);
            item_30 = *(source_val + 0x78);
            int32_t item_2c_1 = temp_2;
            long double fpu_val_6_2;
            long double f3_1;

            if (*(&((fpu_val_6_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            {
                fpu_val_6_2 = temp_1;
                f3_1 = 0.0f;
                fpu_val_6_2 - f3_1;
            }

            if (!(*(&((fpu_val_6_1 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_1, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                (fpu_val_6_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            {
                int32_t item_34_2 = 0;
                fpu_val_7_4 = Sys_PushStack_10(&item_3c, &item_30);
            }

            long double fp0_2;
            bool c1_1;
            bool c2_4;
            fp0_2 = __fcos(fpu_val_7_4);
            int32_t item_c_1 = 0;
            int32_t item_8_1 = 0;
            int32_t item_4_1 = 0;
            int32_t item_18 = 0;
            float item_10_1 = context;
            float item_14_1 = fp0_2 * context;
            result = ForceAccumulator_Add(source_val + 0xf0, &item_18);
        }
    }

    long double fpu_val_7_8 = *(source_val + 0x720);
    long double f0 = 0.0f;
    fpu_val_7_8 - f0;
    result = (fpu_val_7_8 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_8 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        result = dest_val[1];

        if ((result || *dest_val) && !*(source_val + 0x1b8))
        {
            int32_t item_24_1 = 0;
            int32_t item_20_1 = 0x46000000;
            int32_t item_1c_1 = 0;
            item_30 = 0.0f;
            int32_t item_2c_2 = 0;
            int32_t item_28_2 = 0;

            if (result)
                item_30 = -((*(*(source_val + 0x1b4) + 8) * *(source_val + 0x720) * 2.5f));
            else if (*dest_val)
                item_30 = *(*(source_val + 0x1b4) + 8) * *(source_val + 0x720) * 2.5f;

            result = ForceAccumulator_Add(source_val + 0xf0, &item_30);
        }
    }

    *(context_val + 0x138) = *(dest_val + 0xc) * *(dest_val + 8) * *(source_val + 0x720) + *(context_val + 0x138);
    int32_t* i_1 = *(context_val + 8);

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t temp_4 = g_afa7e0;

            do
            {
                int32_t* source_1 = *i;
                void* data_9;

                if (!source_1)
                    data_9 = nullptr;
                else
                {
                    int32_t data_6 = *source_1;
                    int32_t data_7 = -(data_6);
                    data_9 = (data_7 - data_7) & source_1;
                }

                *((temp_4 << 2) + &g_afa6e0) = data_9;
                int32_t temp_5 = temp_4 + 1;
                int32_t data_10 = 0;
                g_afa7e0 = temp_5;
                data_10 = i[7];
                result = *((data_10 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    temp_5 = g_afa7e0;
                }

                i = *((temp_5 << 2) + &g_afa6dc);
                temp_4 = temp_5 - 1;
                g_afa7e0 = temp_4;
            } while (i);
        }
    }

    return result;
}
