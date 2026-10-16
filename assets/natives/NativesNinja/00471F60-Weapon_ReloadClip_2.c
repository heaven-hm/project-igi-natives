#include "00471F60-Weapon_ReloadClip_2.h"
/* 0x00471f60 Weapon_ReloadClip_2 full linked: callers=1 callees=3 */
int32_t sub_471f60(void* a1, int32_t a2, float a3, int32_t a4, int32_t* a5, int32_t a6, int32_t a7, int32_t a8)

{
    int32_t eax = 0;
    int32_t* ecx = a1 + 0x2c44;
    int32_t* edx = ecx;
    int32_t* esi_1;

    while (true)
    {
        if (*edx == a2)
        {
            esi_1 = a1 + eax * 0x2c + 0x2c44;

            if (esi_1)
                break;
        }
        else
        {
            eax += 1;
            edx = &edx[0xb];

            if (eax < 0xa)
                continue;
        }

        int32_t eax_2 = 0;

        while (true)
        {
            if (!*ecx)
            {
                esi_1 = a1 + eax_2 * 0x2c + 0x2c44;
                esi_1[8] = Timer_Now();

                if (esi_1)
                    break;
            }
            else
            {
                eax_2 += 1;
                ecx = &ecx[0xb];

                if (eax_2 < 0xa)
                    continue;
            }

            int32_t ecx_2 = 0;
            float* edx_3 = a1 + 0x2c5c;

            while (true)
            {
                long double x87_r7_1 = *edx_3;
                long double temp0_1 = a3;
                x87_r7_1 - temp0_1;

                if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    esi_1 = a1 + ecx_2 * 0x2c + 0x2c44;
                    esi_1[8] = Timer_Now();

                    if (esi_1)
                        break;
                }
                else
                {
                    ecx_2 += 1;
                    edx_3 = &edx_3[0xb];

                    if (ecx_2 < 0xa)
                        continue;
                }

                return 0;
            }

            break;
        }

        break;
    }

    *esi_1 = a2;
    esi_1[6] = a3;
    esi_1[4] = 1;
    esi_1[5] = a4;
    esi_1[3] = a6;
    esi_1[7] = Timer_Now();
    esi_1[2] = a7;
    esi_1[1] = a8;
    esi_1[9] = *a5;
    esi_1[0xa] = a5[1];
    return 1;
}
