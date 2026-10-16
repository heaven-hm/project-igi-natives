#include "004B7850-Sys_FreeMemory_21.h"
/* 0x004b7850 Sys_FreeMemory_21 full linked: callers=1 callees=2 */
char* sub_4b7850(char* a1, void* a2)

{
    char* ebp = a1;
    void* ecx = a2;
    int32_t edx = *(ebp + 4);
    char* edi = &ebp[0x10];
    char* result = edx * ecx + edi;
    a1 = edi;

    if (ecx >= 1)
    {
        int32_t i = 0;

        if (*(ebp + 6) - ecx > 0)
        {
            a1 = result;
            int16_t* var_8_1 = ecx * 2;

            do
            {
                int32_t eax_3 = *(ebp + 0xc);
                int16_t ebx_4 = *(var_8_1 + eax_3);
                *(eax_3 + (i << 1)) = ebx_4;

                if (edx > 0)
                {
                    char* eax_4 = edi;
                    int32_t var_4_1 = edx;
                    bool cond:4_1;

                    do
                    {
                        ebx_4 = *(a1 - edi + eax_4);
                        *eax_4 = ebx_4;
                        eax_4 = &eax_4[1];
                        cond:4_1 = var_4_1 != 1;
                        var_4_1 -= 1;
                    } while (cond:4_1);
                    ecx = a2;
                }

                edi = &edi[edx];
                i += 1;
                a1 = &a1[edx];
                var_8_1 = &var_8_1[1];
                result = *(ebp + 6) - ecx;
            } while (i < result);

            a1 = edi;
        }

        while (i < *(ebp + 6))
        {
            result = *(ebp + 0xc);
            *(result + (i << 1)) = 0;

            if (edx > 0)
            {
                result = nullptr;
                __builtin_memset(__builtin_memset(edi, 0, edx & 0xfffffffc), 0, edx & 3);
                edi = a1;
            }

            edi = &edi[edx];
            i += 1;
            a1 = edi;
        }
    }

    return result;
}
