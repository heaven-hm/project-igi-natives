#include "Gun_MagFill.h"
char* Gun_MagFill(int32_t* a1, char* a2)

{
    int32_t* srcS = a1;
    bool cond_0 = !*a2;
    void* flagP = srcS[0x4a];
    int32_t* ctxB = srcS[0x4b];
    a1 = nullptr;

    if (!cond_0)
    {
        srcS[0x51] = *(flagP + 0x648);
        return a2;
    }

    void* dstD = srcS[5];
    uint32_t valA1 = Weapon_ReloadClip_8();
    int32_t valA2 = 0;
    valA2 = *(dstD + 0x1c);
    int32_t valA3 = *(((valA1 * 0x180 + valA2) << 2) + &g_a96ae0);

    if (valA3)
        valA3(dstD, &a1);

    int32_t* valA5 = Weapon_UpdateMuzzleFlash_8(a1, *ctxB);

    if (valA5)
    {
        int32_t objC2 = valA5[1];

        if (objC2)
        {
            int32_t dstD1 = srcS[0x51];
            int32_t tmpD4 = *(flagP + 0x648);
            int32_t tmpD5 = tmpD4 - dstD1;

            if (tmpD4 != dstD1)
            {
                if (objC2 >= tmpD5)
                {
                    valA5[1] = objC2 - tmpD5;
                    int32_t valA7 = srcS[0x51] + tmpD5;
                    srcS[0x51] = valA7;
                    return valA7;
                }

                srcS[0x51] = dstD1 + objC2;
                valA5[1] = 0;
            }
        }
    }

    return valA5;
}
