#include "004C6E70-DynObj_UpdateDynTree_8.h"
/* 0x004c6e70 DynObj_UpdateDynTree_8 full linked: callers=7 callees=6 */
int32_t sub_4c6e70(void* a1, void* a2, double* a3, double* a4, double* a5)

{
    int32_t* var_4c = *(a2 + 0x50);
    int32_t result = sub_4b3360(a3, a2 + 0x20);

    if (!result)
    {
        int32_t edx_8 = *(a2 + 0x20) + *(a1 + 0xde0);
        int32_t edx_10 = *(a2 + 0x28) + *(a1 + 0xde4);
        int32_t edx_12 = *(a2 + 0x30) + *(a1 + 0xde8);
        int32_t ebx_4 = *a3 + *(a1 + 0xde0);
        int32_t ebx_6 = a3[1] + *(a1 + 0xde4);
        void* ebx_8 = a3[2] + *(a1 + 0xde8);
        int32_t ebx_10 = *a4 + *(a1 + 0xde0);
        int32_t ebx_12 = a4[1] + *(a1 + 0xde4);
        int32_t ebx_14 = a4[2] + *(a1 + 0xde8);
        int32_t ebx_16 = *a5 + *(a1 + 0xde0);
        int32_t ebx_18 = a5[1] + *(a1 + 0xde4);
        int32_t ebx_20 = a5[2] + *(a1 + 0xde8);
        *(a2 + 0x20) = *a3;
        *(a2 + 0x24) = *(a3 + 4);
        *(a2 + 0x28) = a3[1];
        *(a2 + 0x2c) = *(a3 + 0xc);
        *(a2 + 0x30) = a3[2];
        *(a2 + 0x34) = *(a3 + 0x14);
        long double x87_r7_14 = *a5 - *a4;
        long double x87_r6_2 = a5[1] - a4[1];
        long double x87_r5_2 = a5[2] - a4[2];
        int32_t* eax_4 = var_4c;
        *(a2 + 0x44) =
            sqrtl(x87_r5_2 * x87_r5_2 + x87_r6_2 * x87_r6_2 + x87_r7_14 * x87_r7_14) * 0.5f;
        int32_t ecx_5 = *eax_4;
        int32_t result_3 = sub_4c67e0(edx_8, edx_10, edx_12, ebx_4, ebx_6, ebx_8);
        result = sub_4c67e0(ebx_10, ebx_12, ebx_14, ebx_16 - 1, ebx_18 - 1, ebx_20 - 1);
        int32_t result_2 = result_3;

        if (result > result_2)
        {
            int32_t result_1 = result;
            result_2 = result;
        label_4c70f1:
            sub_4c6ce0(var_4c, a2);

            if (ecx_5 < result_2)
                sub_4c6b20(a1, result_2, ecx_5, &var_4c);

            return sub_4c6d20(a1, var_4c, a2, result, ebx_4, ebx_6, ebx_8);
        }

        if (ecx_5 != result_2 || result_2 != result)
            goto label_4c70f1;
    }

    return result;
}
