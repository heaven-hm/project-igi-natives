#include "00508E40-Sync_Setup.h"
/* 0x00508e40 Sync_Setup full linked: callers=0 callees=3 */
int32_t sub_508e40(int32_t* a1)

{
    int32_t* ebx = a1;
    int32_t eax = ebx[8];
    int32_t* esi;

    if (!eax)
    {
        a1 = &ebx[0x19b];
        esi = &ebx[0x19b];
    }
    else
    {
        esi = &ebx[0xd2];
        a1 = esi;
    }

    int32_t i = 0;
    ebx[8] = eax ^ 1;
    int32_t eax_2 = *esi;

    if (eax_2 <= 0)
    {
        *esi = 0;
        return eax_2;
    }

    int32_t* esi_1 = &esi[2];
    int32_t eax_8;

    do
    {
        int32_t* eax_3 = ebx[0x264];
        int32_t ecx_2 = eax_3[2] + ((*esi_1 * *eax_3 + esi_1[-1]) << 1);
        void var_28;
        __builtin_memset(&var_28, 0, 0x28);
        int32_t var_24_1 = sub_491dc0();
        int32_t var_4_1 = 0;
        int32_t var_8_1 = ecx_2;
        int32_t var_14_1 = *esi_1;
        int32_t var_1c_1 = *ebx[0x264] << 2;
        int32_t var_18_1 = esi_1[-1];
        int32_t var_10_1 = esi_1[1];
        int32_t var_c_1 = esi_1[2];
        eax_8 = sub_491d70(&var_28);
        i += 1;
        esi_1 = &esi_1[4];
    } while (i < *a1);

    *a1 = 0;
    return eax_8;
}
