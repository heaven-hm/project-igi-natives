#include "0047C990-Weapon_UpdateMuzzleFlash_7.h"
/* 0x0047c990 Weapon_UpdateMuzzleFlash_7 full linked: callers=1 callees=1 */
void* sub_47c990(void* a1, int32_t a2)

{
    void* ecx_1 = *(a1 + (a2 << 2) + 0x900);
    void* edx = *(a1 + 0x914);
    int32_t ebx = *(ecx_1 + 0xbc);
    *(ecx_1 + 0xc0) = 0;
    int32_t edi_1 = *(edx + 0x9c) - 1;
    *(edx + 0x9c) = edi_1;
    memcpy(ebx * 0x50 + a1 + 0x918, edi_1 * 0x50 + a1 + 0x918, 0x50);
    int32_t esi_1 = *(a1 + 0x9c);
    int32_t ecx_7 = 0;

    if (esi_1 > 0)
    {
        int32_t* ebp_1 = a1 + 0x900;

        while (true)
        {
            void* edi_3 = *ebp_1;

            if (*(edi_3 + 0xc0) && *(edi_3 + 0xbc) == *(edx + 0x9c))
            {
                *(*(a1 + (ecx_7 << 2) + 0x900) + 0xbc) = ebx;
                break;
            }

            ecx_7 += 1;
            ebp_1 = &ebp_1[1];

            if (ecx_7 >= esi_1)
                return a1;
        }
    }

    return a1;
}
