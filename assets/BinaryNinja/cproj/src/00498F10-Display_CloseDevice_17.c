#include "gi_platform.h"
#include "00498F10-Display_CloseDevice_17.h"
int32_t Display_CloseDevice_17(float a1)

{
    void* srcS2 = (((*(int32_t*)(uintptr_t)(a1 + 0x5644)) + (*(int32_t*)(uintptr_t)(a1 + 0x5640)) * 0x18 + 0x8b) << 5) + a1;
    double v_30 = (g_bcab18 - 36864.0) * 4.0690104166666664e-05 + 0.5;
    double v_10 = Camera_ApplyBandFilter_5(v_30) * 24576.0f;
    Display_SetDisplayMode_17(a1);
    int32_t v_38 = *(&v_10 + 4);
    Display_SyncVSync_17(a1, v_10);
    int32_t result_1 = 9;
    int32_t result;
    bool cond_0_1;

    do
    {
        int32_t i_1 = 9;
        int32_t i;

        do
        {
            if ((*(srcS2 + 0x1c) & *(srcS2 + 0x3c) & *(srcS2 + 0x33c) & *(srcS2 + 0x31c)) == 0x20)
            {
                long double x87_r7_6 = *(srcS2 + 0x18);
                long double x87_r6_1 = *(srcS2 + 0x318);
                x87_r6_1 - x87_r7_6;
                long double x87_r7_7;

                if (!(*(&((x87_r6_1 < x87_r7_6 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_1, x87_r7_6) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_7 = *(srcS2 + 0x318);
                else
                    x87_r7_7 = *(srcS2 + 0x18);

                long double x87_r6_2 = *(srcS2 + 0x38);
                long double x87_r5_1 = *(srcS2 + 0x338);
                x87_r5_1 - x87_r6_2;
                long double x87_r6_3;

                if (!(*(&((x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
                        | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    x87_r6_3 = *(srcS2 + 0x338);
                else
                    x87_r6_3 = *(srcS2 + 0x38);

                x87_r7_7 - x87_r6_3;
                long double x87_r7_11;

                if (*(&((x87_r7_7 < x87_r6_3 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r7_7 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r7_12 = *(srcS2 + 0x38);
                    long double x87_r6_6 = *(srcS2 + 0x338);
                    x87_r6_6 - x87_r7_12;

                    if (!(*(&((x87_r6_6 < x87_r7_12 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_6, x87_r7_12) ? 1 : 0) << 0xa
                            | (x87_r6_6 == x87_r7_12 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_11 = *(srcS2 + 0x338);
                    else
                        x87_r7_11 = *(srcS2 + 0x38);
                }
                else
                {
                    long double x87_r7_10 = *(srcS2 + 0x18);
                    long double x87_r6_5 = *(srcS2 + 0x318);
                    x87_r6_5 - x87_r7_10;

                    if (!(*(&((x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa
                            | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_11 = *(srcS2 + 0x318);
                    else
                        x87_r7_11 = *(srcS2 + 0x18);
                }

                *(&v_30 + 4) = x87_r7_11;
                v_30 = 0x10;
                void** valA5 = Sys_AllocateMemory_19(sub_499430, 0x10);
                valA5[2] = v_10;
                *valA5 = a1;
                valA5[1] = srcS2;
                valA5[3] = *(&v_10 + 4);
            }

            srcS2 += 0x20;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        srcS2 += 0x1e0;
        result = result_1 - 1;
        cond_0_1 = result_1 != 1;
        result_1 = result;
    } while (cond_0_1);
    return result;
}
