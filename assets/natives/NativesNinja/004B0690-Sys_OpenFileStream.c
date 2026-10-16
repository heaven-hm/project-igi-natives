#include "004B0690-Sys_OpenFileStream.h"
/* 0x004b0690 Sys_OpenFileStream full linked: callers=3 callees=0 */
int32_t sub_4b0690(int32_t a1, int32_t* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    int32_t eax = *a2;

    if (eax)
    {
        int32_t ecx_1 = eax * 5;
        void* ecx_2 = a1 + (ecx_1 << 2);

        if (*(a1 + (ecx_1 << 2) - 8) == a3 && *(ecx_2 - 0xc) == a4 - 1
            && *(ecx_2 - 0x14) == a6)
        {
            *(ecx_2 - 4) += 1;
            int32_t result = *(ecx_2 - 0xc) + 1;
            *(ecx_2 - 0xc) = result;
            return result;
        }
    }

    int32_t* ecx_4 = a1 + eax * 0x14;
    ecx_4[4] = 0;
    ecx_4[3] = a3;
    ecx_4[2] = a4;
    ecx_4[1] = a5;
    *ecx_4 = a6;

    if (g_93aad8 <= eax + 1)
        g_93aad8 = eax + 1;

    *a2 = eax + 1;
    return eax + 1;
}
