// IGI native provenance: Water_Init_2 - 0x00518E50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518E50-Water_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Water_Init_2.h"

int32_t Water_Init_2(void* pThis, int32_t* param)

{
    int32_t scratch_val = 0;
    int32_t result = param[1];
    int32_t* base_ptr = param[2];
    double* counter_val = *param;

    if (result > 0)
    {
        do
        {
            long double fpu_val_7_1 = *counter_val;
            long double temp0_1 = *(pThis + 0x4be8);
            fpu_val_7_1 - temp0_1;

            if (!(*(&((fpu_val_7_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_1, temp0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double fpu_val_7_2 = *counter_val;
                long double temp1_1 = *(pThis + 0x4c00);
                fpu_val_7_2 - temp1_1;

                if (*(&((fpu_val_7_2 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_2, temp1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double fpu_val_7_3 = counter_val[1];
                    long double temp2_1 = *(pThis + 0x4bf0);
                    fpu_val_7_3 - temp2_1;

                    if (!(*(&((fpu_val_7_3 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_3, temp2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_3 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        long double fpu_val_7_4 = counter_val[1];
                        long double temp3_1 = *(pThis + 0x4c08);
                        fpu_val_7_4 - temp3_1;

                        if (*(&((fpu_val_7_4 < temp3_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_4, temp3_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double fpu_val_7_7 = *(pThis + 0x4b78) * 0.5f + *(pThis + 0x4b8c);
                            long double temp4_1 = counter_val[2];
                            fpu_val_7_7 - temp4_1;

                            if (!(*(&((fpu_val_7_7 < temp4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_7, temp4_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_7 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                *base_ptr = *(g_a44344 + 0xd64);
                        }
                    }
                }
            }

            result = param[1];
            counter_val = &counter_val[3];
            base_ptr = &base_ptr[1];
            scratch_val += 1;
        } while (scratch_val < result);
    }

    return result;
}
