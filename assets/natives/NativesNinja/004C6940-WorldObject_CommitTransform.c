#include "004C6940-WorldObject_CommitTransform.h"
/* 0x004c6940 WorldObject_CommitTransform full linked: callers=84 callees=6 */
int32_t sub_4c6940(void* a1, void* a2, double* a3, float a4)

{
    int32_t* var_2c = *(a2 + 0x50);
    int32_t result = sub_4b3360(a3, a2 + 0x20);

    if (!result)
    {
    label_4c697e:
        int32_t var_1c_1 = a4;
        int32_t edx_2 = *(a1 + 0xde0);
        int32_t ecx_2 = *a3 + edx_2;
        int32_t var_28_1 = edx_2;
        int32_t edx_3 = *(a1 + 0xde4);
        int32_t eax_4 = *(a1 + 0xde8);
        int32_t ecx_4 = a3[1] + edx_3;
        void* ecx_6 = a3[2] + eax_4;
        int32_t eax_6 = *(a2 + 0x20) + var_28_1;
        int32_t ecx_8 = *(a2 + 0x28) + edx_3;
        var_28_1 = *(a2 + 0x30);
        *(a2 + 0x20) = *a3;
        *(a2 + 0x24) = *(a3 + 4);
        *(a2 + 0x28) = a3[1];
        *(a2 + 0x2c) = *(a3 + 0xc);
        *(a2 + 0x30) = a3[2];
        *(a2 + 0x34) = *(a3 + 0x14);
        *(a2 + 0x44) = a4;
        int32_t edx_13 = *var_2c;
        int32_t result_1 = sub_4c67e0(eax_6, ecx_8, var_28_1 + eax_4, ecx_2, ecx_4, ecx_6);
        result = sub_4c67e0(ecx_2 - var_1c_1, ecx_4 - var_1c_1, ecx_6 - var_1c_1, ecx_2 + var_1c_1,
            ecx_4 + var_1c_1, ecx_6 + var_1c_1);

        if (result > result_1)
        {
            result_1 = result;
        label_4c6aac:
            sub_4c6ce0(var_2c, a2);

            if (edx_13 >= result_1)
            {
                int32_t* edx_23 = var_2c;
                int32_t ecx_14 = 0x8000;
                void* i = edx_23[0xb];

                while (i)
                {
                    result_1 = *(i + 0x5c);
                    i = *(i + 0x58);
                    ecx_14 |= result_1;
                }

                edx_23[0xe] = ecx_14;
            }
            else
                sub_4c6b20(a1, result_1, edx_13, &var_2c);

            return sub_4c6d20(a1, var_2c, a2, result, ecx_2, ecx_4, ecx_6);
        }

        if (edx_13 != result_1 || result_1 != result)
            goto label_4c6aac;
    }
    else
    {
        long double x87_r7_1 = a4;
        long double temp0_1 = *(a2 + 0x44);
        x87_r7_1 - temp0_1;
        result = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4c697e;
    }

    return result;
}
