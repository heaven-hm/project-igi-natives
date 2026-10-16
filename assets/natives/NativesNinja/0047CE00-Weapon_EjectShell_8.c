#include "0047CE00-Weapon_EjectShell_8.h"
/* 0x0047ce00 Weapon_EjectShell_8 full linked: callers=4 callees=0 */
int32_t* sub_47ce00(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t edx = 0;
    int32_t eax = *a1;
    int32_t* ecx_1;

    if (eax > 0)
    {
        ecx_1 = &a1[1];

        while (*ecx_1 != a2)
        {
            edx += 1;
            ecx_1 = &ecx_1[3];

            if (edx >= eax)
                goto label_47ce28;
        }
    }

    int32_t* result;

    if (eax <= 0 || !ecx_1)
    {
    label_47ce28:
        ecx_1 = &a1[eax * 3 + 1];
        result = &ecx_1[1];
        *ecx_1 = a2;
        *result = a3;
        *a1 += 1;
    }
    else
    {
        result = &ecx_1[1];
        *result = ecx_1[1] + a3;
    }

    int32_t esi_1 = ecx_1[2];

    if (esi_1 != 0xffffffff)
    {
        int32_t edx_4 = *result;

        if (edx_4 < 0)
        {
            *result = 0;
            return result;
        }

        if (edx_4 > esi_1)
            *result = ecx_1[2];
    }

    return result;
}
