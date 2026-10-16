#include "004BCEC0-Sys_CloseFileStream_28.h"
/* 0x004bcec0 Sys_CloseFileStream_28 full linked: callers=8 callees=4 */
int32_t sub_4bcec0(int32_t* a1, int32_t* a2, float* a3)

{
    int32_t* eax_7 = a1;
    int32_t ecx_1 = *(eax_7[0xa] + (eax_7[7] << 2));
    int32_t* var_30;

    if (ecx_1 == 1)
    {
        int32_t* __saved_edi = nullptr;
        var_30 = nullptr;
        sub_4bccc0(eax_7, a2, var_30, __saved_edi);
        *a3 = *a2;
        return 1;
    }

    if (ecx_1 == 2)
    {
        int32_t* __saved_edi_1 = nullptr;
        var_30 = nullptr;
        sub_4bccc0(eax_7, a3, var_30, __saved_edi_1);
        *a2 = *a3;
        return 2;
    }

    int32_t* __saved_edi_2 = &a1;
    var_30 = eax_7;

    if (sub_4bcd90(var_30, __saved_edi_2))
    {
        int32_t* eax_4 = a1;
        int32_t ecx_3 = *eax_4;

        if (!ecx_3 || ecx_3 == 2)
        {
            int32_t edx_2 = eax_4[6];
            var_30 = nullptr;
            int32_t var_18;
            int32_t eax_5 = eax_4[4](&var_18, edx_2, var_30);
            int32_t result = a1[1];
            memcpy(&var_18, eax_5, 0x18);

            if (result == 1)
            {
                long double x87_r7_2 = var_18;
                *a2 = var_18;
                *a3 = x87_r7_2;
                return result;
            }

            if (result == 2)
            {
                double var_10;
                *a2 = var_10;
                *a3 = var_10;
                return result;
            }
        }
    }

    return 0;
}
