#include "0048ECC0-FX_FireBallUpdate_21.h"
/* 0x0048ecc0 FX_FireBallUpdate_21 full linked: callers=0 callees=9 */
int32_t sub_48ecc0(int32_t a1, int32_t* a2)

{
    int32_t esi_1 = a2[0xa] + 8;
    void* eax_2 = Table_GetAt(*(a1 + 0x14) + 0x4c4, 0);
    int32_t var_24 = *(esi_1 + 4);
    int32_t var_28 = *esi_1;
    char* var_2c = "Fire At Node - %d, %d";
    int32_t var_30 = 0xffffffff;
    int32_t var_34 = a1;
    int32_t eax_4 = *(esi_1 + 4);
    *(esi_1 + 4) = eax_4 - 1;

    if (eax_4 < 0 || !eax_2)
        return sub_450ff0(a1, a2);

    int32_t var_8;
    sub_4f23d0(eax_2, &var_8);
    int32_t eax_5 = var_8;

    if (!eax_5)
    {
        eax_5 = *(esi_1 + 0x10);

        if (eax_5)
        {
            *(a1 + 0x3c94) = 0x3f800000;
            return eax_5;
        }

        sub_4f2350(eax_2, 1);
        *(esi_1 + 0x11) = 0;
    }

    sub_4f9770(a1 + 0x3e88, sub_4f9720(*(a1 + 0x3b6c), *esi_1));
    char eax_10;

    if (!*(esi_1 + 0x11))
    {
        sub_48b9c0(eax_2, esi_1, a1, a1, 0);
        *(esi_1 + 0x11) = 1;
        eax_10 = *(esi_1 + 0x11);
    }

    if (*(esi_1 + 0x11) || eax_10)
    {
        int32_t eax_11 = *(esi_1 + 0xc);

        if (eax_11 >= 0)
        {
            *(esi_1 + 0xc) = eax_11 - 1;
            return eax_11 - 1;
        }

        eax_10 = sub_48d8e0(eax_2, esi_1, a1, a1);

        if (eax_10)
        {
            int32_t ecx_2 = *(esi_1 + 8);
            *(esi_1 + 0x11) = 0;
            *(esi_1 + 0xc) = ecx_2;
        }
    }

    return eax_10;
}
