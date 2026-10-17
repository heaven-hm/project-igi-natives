// Original IGI.EXE function: Menu_HandleInput_16 (VA 0x00426000; static CFG gate PASS, CFG score 1.000).
#include "Menu_HandleInput_16.h"
int32_t Menu_HandleInput_16(void* a1)

{
    void* dstD = *(a1 + 0x4c);

    if (!*(dstD + 0x91d))
    {
        *(a1 + 0x74) = 0;
        *(a1 + 0x78) = 0;
        return 0;
    }

    void* valA1 = *(a1 + 0x74);

    if (valA1 && AI_FireWeapon_19(valA1))
    {
        *(a1 + 0x74) = 0;
        *(a1 + 0x78) = 0;
        return 0;
    }

    void* valA4 = *(a1 + 0x4c);

    if (*(valA4 + 0x2ed0))
    {
        *(a1 + 0x78) = 0x258;
        *(a1 + 0x74) = *(valA4 + 0x2ed0);
        return 1;
    }

    int32_t* i_1 = *(dstD + 0xaa8);

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (*(i_1 + 0x29) && *i_1[2])
        {
            *(a1 + 0x78) = 0x258;
            *(a1 + 0x74) = *i_1[2];
            return 1;
        }

        i_1 = i;
    }

    int32_t valA7 = *(a1 + 0x78);

    if (!valA7)
    {
        *(a1 + 0x74) = 0;
        return 0;
    }

    *(a1 + 0x78) = valA7 - 1;
    return 1;
}
