#include "004B1EE0-Sys_ReadFileBlock_7.h"
/* 0x004b1ee0 Sys_ReadFileBlock_7 full linked: callers=2 callees=0 */
char* sub_4b1ee0(char* a1, int32_t a2, char* a3)

{
    char* ebp = nullptr;
    int32_t edi = 0;

    if (a2 > 0)
    {
        char* ecx_1 = a3;
        char* esi_2 = a1 - ecx_1;

        do
        {
            char edx_1 = *ecx_1;

            if (!edx_1)
                break;

            if (edx_1 == 0x5c || edx_1 == 0x2f)
                ebp = esi_2 + ecx_1;

            *(esi_2 + ecx_1) = edx_1;
            edi += 1;
            ecx_1 = &ecx_1[1];
        } while (edi < a2);

        if (ebp)
        {
            *ebp = 0;
            return a1;
        }
    }

    *a1 = 0;
    return a1;
}
