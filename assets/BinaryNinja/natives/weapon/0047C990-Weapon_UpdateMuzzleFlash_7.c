#include "Weapon_UpdateMuzzleFlash_7.h"
void* Weapon_UpdateMuzzleFlash_7(void* a1, int32_t a2)

{
    void* objC1 = *(a1 + (a2 << 2) + 0x900);
    void* tmpD = *(a1 + 0x914);
    int32_t ctxB = *(objC1 + 0xbc);
    *(objC1 + 0xc0) = 0;
    int32_t dstD1 = *(tmpD + 0x9c) - 1;
    *(tmpD + 0x9c) = dstD1;
    memcpy(ctxB * 0x50 + a1 + 0x918, dstD1 * 0x50 + a1 + 0x918, 0x50);
    int32_t srcS1 = *(a1 + 0x9c);
    int32_t objC7 = 0;

    if (srcS1 > 0)
    {
        int32_t* flagP1 = a1 + 0x900;

        while (true)
        {
            void* dstD3 = *flagP1;

            if (*(dstD3 + 0xc0) && *(dstD3 + 0xbc) == *(tmpD + 0x9c))
            {
                *(*(a1 + (objC7 << 2) + 0x900) + 0xbc) = ctxB;
                break;
            }

            objC7 += 1;
            flagP1 = &flagP1[1];

            if (objC7 >= srcS1)
                return a1;
        }
    }

    return a1;
}
