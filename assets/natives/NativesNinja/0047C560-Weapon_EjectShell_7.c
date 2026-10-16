#include "0047C560-Weapon_EjectShell_7.h"
/* 0x0047c560 Weapon_EjectShell_7 full linked: callers=1 callees=1 */
int32_t sub_47c560(void* a1)

{
    int32_t ebx = 0;
    int32_t eax = *(a1 + 0x9c);

    if (eax > 0)
    {
        int32_t* edi_1 = a1 + 0x900;

        if (0 >= eax)
            goto label_47c5d3;

        while (true)
        {
            void* eax_1 = *edi_1;

            if (!*(eax_1 + 0x34))
            {
                if (*(eax_1 + 0xc0))
                    sub_47c990(a1, ebx);

                *(*edi_1 + 0x30) = 0;
                int32_t ecx_2 = *(a1 + 0x9c) - 1;
                *(a1 + 0x9c) = ecx_2;
                *edi_1 = *(a1 + (ecx_2 << 2) + 0x900);
                *(a1 + (*(a1 + 0x9c) << 2) + 0x900) = 0;

                if (ebx < *(a1 + 0x9c))
                    continue;
            }

        label_47c5d3:
            ebx += 1;
            edi_1 = &edi_1[1];

            if (ebx >= *(a1 + 0x9c))
                break;
        }
    }

    int32_t result = *(a1 + 0x9c);
    int32_t ecx_4 = 0;

    if (result > 0)
    {
        int32_t* edx_2 = a1 + 0x900;

        do
        {
            void* eax_6 = *edx_2;
            edx_2 = &edx_2[1];
            ecx_4 += 1;
            *(eax_6 + 0x34) -= 1;
            result = *(a1 + 0x9c);
        } while (ecx_4 < result);
    }

    return result;
}
