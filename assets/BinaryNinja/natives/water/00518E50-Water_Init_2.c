// Original IGI.EXE function: Water_Init_2 (VA 0x00518E50; static CFG gate PASS, CFG score 1.000).
#include "Water_Init_2.h"

int32_t Water_Init_2(void* pThis, int32_t* param)

{
    int32_t edx = 0;
    int32_t result = param[1];
    int32_t* ebx = param[2];
    double* ecx = *param;

    if (result > 0)
    {
        do
        {
            long double x87_r7_1 = *ecx;
            long double temp0_1 = *(pThis + 0x4be8);
            x87_r7_1 - temp0_1;

            if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_2 = *ecx;
                long double temp1_1 = *(pThis + 0x4c00);
                x87_r7_2 - temp1_1;

                if (*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    long double x87_r7_3 = ecx[1];
                    long double temp2_1 = *(pThis + 0x4bf0);
                    x87_r7_3 - temp2_1;

                    if (!(*(&((x87_r7_3 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        long double x87_r7_4 = ecx[1];
                        long double temp3_1 = *(pThis + 0x4c08);
                        x87_r7_4 - temp3_1;

                        if (*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                            | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double x87_r7_7 = *(pThis + 0x4b78) * 0.5f + *(pThis + 0x4b8c);
                            long double temp4_1 = ecx[2];
                            x87_r7_7 - temp4_1;

                            if (!(*(&((x87_r7_7 < temp4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_7, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r7_7 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                *ebx = *(g_a44344 + 0xd64);
                        }
                    }
                }
            }

            result = param[1];
            ecx = &ecx[3];
            ebx = &ebx[1];
            edx += 1;
        } while (edx < result);
    }

    return result;
}
