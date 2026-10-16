#include "004B0A80-Sys_AllocateMemory_2.h"
/* 0x004b0a80 Sys_AllocateMemory_2 full linked: callers=1 callees=1 */
int32_t sub_4b0a80(int32_t a1, int32_t a2, char* a3, int32_t a4)

{
    char* ecx = nullptr;
    int32_t result = a2 - 1;

    if (result <= 0)
    {
        *a1 = 0;
        return result;
    }

    char* ebx = a3;

    do
    {
        result = *ebx;

        if (!result)
            break;

        if (result != 0x2f)
        {
            ecx[a1] = result;
            ecx = &ecx[1];
        }
        else
        {
            result = ebx[1];
            ebx = &ebx[1];

            if (result < 0x30 || result > 0x39)
            {
                ecx[a1] = result;
                ecx = &ecx[1];
            }
            else
            {
                sub_4b0a10(&ecx[a1], a2 - ecx, a4, result - 0x30);
                int32_t edi_1 = a1;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond:0_1 = 0 != *edi_1;
                    edi_1 += 1;
                    i -= 1;

                    if (!cond:0_1)
                        break;
                }

                ecx = ~i - 1;
            }
        }

        result = a2 - 1;
        ebx = &ebx[1];
    } while (ecx < result);

    ecx[a1] = 0;
    return result;
}
