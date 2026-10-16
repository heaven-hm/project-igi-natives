#include "Weapon_EjectShell_7.h"
int32_t Weapon_EjectShell_7(void* a1)

{
    int32_t ctxB = 0;
    int32_t valA = *(a1 + 0x9c);

    if (valA > 0)
    {
        int32_t* dstD1 = a1 + 0x900;

        if (0 >= valA)
            goto label_47c5d3;

        while (true)
        {
            void* valA1 = *dstD1;

            if (!*(valA1 + 0x34))
            {
                if (*(valA1 + 0xc0))
                    Weapon_UpdateMuzzleFlash_7(a1, ctxB);

                *(*dstD1 + 0x30) = 0;
                int32_t objC2 = *(a1 + 0x9c) - 1;
                *(a1 + 0x9c) = objC2;
                *dstD1 = *(a1 + (objC2 << 2) + 0x900);
                *(a1 + (*(a1 + 0x9c) << 2) + 0x900) = 0;

                if (ctxB < *(a1 + 0x9c))
                    continue;
            }

        label_47c5d3:
            ctxB += 1;
            dstD1 = &dstD1[1];

            if (ctxB >= *(a1 + 0x9c))
                break;
        }
    }

    int32_t result = *(a1 + 0x9c);
    int32_t objC4 = 0;

    if (result > 0)
    {
        int32_t* tmpD2 = a1 + 0x900;

        do
        {
            void* valA6 = *tmpD2;
            tmpD2 = &tmpD2[1];
            objC4 += 1;
            *(valA6 + 0x34) -= 1;
            result = *(a1 + 0x9c);
        } while (objC4 < result);
    }

    return result;
}
