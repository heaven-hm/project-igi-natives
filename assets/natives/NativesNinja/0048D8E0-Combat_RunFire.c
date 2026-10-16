#include "0048D8E0-Combat_RunFire.h"
/* 0x0048d8e0 Combat_RunFire full linked: callers=5 callees=12 */
int32_t sub_48d8e0(void* a1 @ ebp, int32_t a2 @ esi, int32_t a3 @ edi, void* a4)

{
    void* ebp = a4;
    void* esi = *(ebp + 0x14);
    a4 = 0;
    void* a;

    if (!sub_48efe0(ebp, 4))
        a = Table_GetAt(esi + 0x4c4, 0);
    else
    {
        int32_t esi_1 = **(esi + 0x7b4);
        sub_475310(esi_1, ebp + 0x38, ebp + 0x78);
        a = Table_GetAt(esi_1 + 0x20c, 0);
    }

    double var_18;
    memcpy(&var_18, ebp + 0x3e88, 0x18);
    double var_30 = var_18 - *(ebp + 0x3e70);
    double var_10;
    double var_28 = var_10 - *(ebp + 0x3e78);
    double var_8;
    double var_20 = var_8 - *(ebp + 0x3e80);

    if (!sub_4b3320(&var_30))
    {
        var_30 = var_30 * *(ebp + 0x3dc8);
        double var_28_1 = var_28 * *(ebp + 0x3dc8);
        double var_20_1 = var_20 * *(ebp + 0x3dc8);
        *(ebp + 0x3e70) = var_30 + *(ebp + 0x3e70);
        *(ebp + 0x3e78) = var_28_1 + *(ebp + 0x3e78);
        *(ebp + 0x3e80) = var_20_1 + *(ebp + 0x3e80);
    }

    struct collision_set* eax_3 = HumanPlayer_LoadParameters_13(a, a3, a2, a1);
    int32_t var_40;
    sub_4f23d0(a, &var_40);
    int32_t eax_4 = *(eax_3 + 0x610);

    if (eax_4 >= 0 && eax_4 <= 2)
    {
        if (!*(ebp + 0x3e54) || !var_40)
        {
            int32_t eax_10 = *(ebp + 0x3e50) + 1;
            *(ebp + 0x3e50) = eax_10;
            eax_10 = 1;
            return eax_10;
        }

        sub_48ef70(ebp, 6, 1f);
        eax_4 = 1;

        if (*(eax_3 + 0x64c) != 1)
            eax_4 = 0;

        int32_t ecx_3 = var_40;
        bool ebx_1;

        if (ecx_3 != *(ebp + 0x3e58))
        {
            int32_t edx_3 = *(ebp + 0x3e54);
            *(ebp + 0x3e58) = ecx_3;
            ebx_1 = !eax_4;
            *(ebp + 0x3e54) = edx_3 - 1;

            if (!eax_4)
                *(ebp + 0x3e60) = 0;
            else
            {
                long double st0_1;
                st0_1 = sub_4b4770(Level_SetMission_5());
                *(ebp + 0x3e60) = (st0_1 * *(ebp + 0x3d84) + *(ebp + 0x3d80)) * 30f;
            }
        }

        if (ecx_3 == *(ebp + 0x3e58) || ebx_1)
        {
            eax_4 = sub_4525b0(ebp, ebp + 0x3e70, 0.0349065848f, 0);

            if (eax_4)
            {
                int32_t eax_8 = *(ebp + 0x3e60);

                if (!eax_8)
                {
                    *(ebp + 0x3c8c) = 0x3f800000;
                    eax_8 = 0;
                    return eax_8;
                }

                eax_4 = eax_8 - 1;
                *(ebp + 0x3e60) = eax_4;
            }
        }
    }

    eax_4 = 0;
    return eax_4;
}
