// Original IGI.EXE function: Weapon_ReloadClip_2 (VA 0x00471F60; static CFG gate PASS, CFG score 1.000).
#include "Weapon_ReloadClip_2.h"
int32_t Weapon_ReloadClip_2(void* a1, int32_t a2, float a3, int32_t a4, int32_t* a5, int32_t a6, int32_t a7, int32_t a8)

{
    int32_t valA = 0;
    int32_t* objC = a1 + 0x2c44;
    int32_t* tmpD = objC;
    int32_t* srcS1;

    while (true)
    {
        if (*tmpD == a2)
        {
            srcS1 = a1 + valA * 0x2c + 0x2c44;

            if (srcS1)
                break;
        }
        else
        {
            valA += 1;
            tmpD = &tmpD[0xb];

            if (valA < 0xa)
                continue;
        }

        int32_t valA2 = 0;

        while (true)
        {
            if (!*objC)
            {
                srcS1 = a1 + valA2 * 0x2c + 0x2c44;
                srcS1[8] = Timer_Now();

                if (srcS1)
                    break;
            }
            else
            {
                valA2 += 1;
                objC = &objC[0xb];

                if (valA2 < 0xa)
                    continue;
            }

            int32_t objC2 = 0;
            float* tmpD3 = a1 + 0x2c5c;

            while (true)
            {
                long double x87_r7_1 = *tmpD3;
                long double f0_1 = a3;
                x87_r7_1 - f0_1;

                if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    srcS1 = a1 + objC2 * 0x2c + 0x2c44;
                    srcS1[8] = Timer_Now();

                    if (srcS1)
                        break;
                }
                else
                {
                    objC2 += 1;
                    tmpD3 = &tmpD3[0xb];

                    if (objC2 < 0xa)
                        continue;
                }

                return 0;
            }

            break;
        }

        break;
    }

    *srcS1 = a2;
    srcS1[6] = a3;
    srcS1[4] = 1;
    srcS1[5] = a4;
    srcS1[3] = a6;
    srcS1[7] = Timer_Now();
    srcS1[2] = a7;
    srcS1[1] = a8;
    srcS1[9] = *a5;
    srcS1[0xa] = a5[1];
    return 1;
}
