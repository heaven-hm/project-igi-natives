#include "004BB110-Sys_ExecuteBytecode_26.h"
/* 0x004bb110 Sys_ExecuteBytecode_26 full linked: callers=1 callees=0 */
char* sub_4bb110(int32_t a1, void* a2)

{
    char* result = nullptr;
    char* esi = a2 + 1;

    if (*(a2 + 1) == 0x22)
    {
        *a1 = 0;
        return 0;
    }

    int32_t ebx;
    int32_t var_8 = ebx;
    char i;

    do
    {
        i = *esi;

        if (i != 0x5c)
            result[a1] = i;
        else
        {
            char ebx_1 = esi[1];
            esi = &esi[1];
            int32_t ecx = ebx_1;

            if (ecx == 0x6e)
                result[a1] = 0xa;
            else if (ecx == 0x72)
                result[a1] = 0xd;
            else if (ecx == 0x74)
                result[a1] = 9;
            else
                result[a1] = ebx_1;
        }

        i = esi[1];
        result = &result[1];
        esi = &esi[1];
    } while (i != 0x22);
    result[a1] = 0;
    return result;
}
