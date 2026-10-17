// Original IGI.EXE function: Physics_CalculateSplineLength_12 (VA 0x0050AA70; static CFG gate FAIL, CFG score 0.667).
#include "Physics_CalculateSplineLength_12.h"
int32_t* Physics_CalculateSplineLength_12(int32_t context, int32_t param_2 , float param_3)

{
    long double fpu7 = param_3;
    long double f0 = 0.200000003f;
    fpu7 - f0;
    void* source_val = nullptr;
    int32_t* data_val;
    data_val = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&data_val + 1) & 0x41 || param_2 & 0x20000000)
    {
        long double fpu_val_7_1 = param_3;
        long double f1_1 = 0.0f;
        fpu_val_7_1 - f1_1;
        data_val = (fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe;

        if (*(&data_val + 1) & 0x41 || param_2 & 0x20000000)
        {
            int32_t i_8 = g_a7cebc;
            int32_t temp_2 = 0xffffffff;

            if (i_8 > 0)
            {
                data_val = &g_a7c180;
                int32_t i_5 = i_8;
                int32_t i;

                do
                {
                    int32_t entity_3 = *data_val;

                    if (entity_3 > temp_2)
                    {
                        temp_2 = entity_3;
                        source_val = &data_val[-0x10];
                    }

                    data_val = &data_val[0x11];
                    i = i_5;
                    i_5 -= 1;
                } while (i != 1);
            }
        }
        else
        {
            int32_t i_7 = g_a7cebc;
            int32_t temp_1 = 0xffffffff;

            if (i_7 > 0)
            {
                int32_t* data_2 = &g_a7c180;
                int32_t i_4 = i_7;
                int32_t i_1;

                do
                {
                    int32_t entity_2 = *data_2;

                    if (entity_2 > temp_1 && data_2[-4])
                    {
                        temp_1 = entity_2;
                        source_val = &data_2[-0x10];
                    }

                    data_2 = &data_2[0x11];
                    i_1 = i_4;
                    i_4 -= 1;
                } while (i_1 != 1);
                memcpy(context, source_val, 0x20);
                return data_2;
            }
        }
    }
    else
    {
        int32_t i_6 = g_a7cebc;
        int32_t temp_val = 0xffffffff;

        if (i_6 > 0)
        {
            int32_t* data_1 = &g_a7c170;
            int32_t i_3 = i_6;
            int32_t i_2;

            do
            {
                int32_t entity_1 = *data_1;

                if (entity_1 > temp_val)
                {
                    temp_val = entity_1;
                    source_val = &data_1[-0xc];
                }

                data_1 = &data_1[0x11];
                i_2 = i_3;
                i_3 -= 1;
            } while (i_2 != 1);
            memcpy(context, source_val, 0x20);
            return data_1;
        }
    }

    memcpy(context, source_val, 0x20);
    return data_val;
}
