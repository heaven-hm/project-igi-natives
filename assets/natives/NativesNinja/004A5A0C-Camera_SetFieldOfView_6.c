#include "004A5A0C-Camera_SetFieldOfView_6.h"
/* 0x004a5a0c Camera_SetFieldOfView_6 full linked: callers=2 callees=1 */
void* sub_4a5a0c(char* a1, char* a2)

{
    int32_t ebx;
    int32_t var_28 = ebx;
    char* esi = a2;
    char var_24[0x20];
    __builtin_memset(&var_24, 0, 0x20);
    char i;

    do
    {
        i = *esi;
        uint32_t i_1 = i;
        int32_t __saved_ebp;
        *(&__saved_ebp + (i_1 >> 3) - 0x20) |= 1 << (i_1 & 7);
        esi = &esi[1];
    } while (i);
    char* edx_1 = a1;

    if (!edx_1)
        edx_1 = g_936060;

    char eax_4;

    while (true)
    {
        eax_4 = *edx_1;
        uint32_t esi_1 = eax_4;

        if (!(var_24[esi_1 >> 3] & 1 << (esi_1 & 7)))
            break;

        if (!eax_4)
            break;

        edx_1 = &edx_1[1];
    }

    char* ebx_3 = edx_1;

    while (true)
    {
        eax_4 = *edx_1;

        if (!eax_4)
            goto label_4a5a96;

        uint32_t esi_3 = eax_4;

        if (var_24[esi_3 >> 3] & 1 << (esi_3 & 7))
        {
            *edx_1 = 0;
            edx_1 = &edx_1[1];
        label_4a5a96:
            int32_t eax_7 = ebx_3 - edx_1;
            int32_t eax_8 = -(eax_7);
            g_936060 = edx_1;
            return (eax_8 - eax_8) & ebx_3;
        }

        edx_1 = &edx_1[1];
    }
}
