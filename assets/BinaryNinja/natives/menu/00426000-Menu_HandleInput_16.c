// Original IGI.EXE function: Menu_HandleInput_16 (VA 0x00426000; static CFG gate PASS, CFG score 1.000).
#include "Menu_HandleInput_16.h"
int32_t Menu_HandleInput_16(void* context)

{
    void* dest_val = *(context + 0x4c);

    if (!*(dest_val + 0x91d))
    {
        *(context + 0x74) = 0;
        *(context + 0x78) = 0;
        return 0;
    }

    void* data_1 = *(context + 0x74);

    if (data_1 && AI_FireWeapon_19(data_1))
    {
        *(context + 0x74) = 0;
        *(context + 0x78) = 0;
        return 0;
    }

    void* data_4 = *(context + 0x4c);

    if (*(data_4 + 0x2ed0))
    {
        *(context + 0x78) = 0x258;
        *(context + 0x74) = *(data_4 + 0x2ed0);
        return 1;
    }

    int32_t* i_1 = *(dest_val + 0xaa8);

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (*(i_1 + 0x29) && *i_1[2])
        {
            *(context + 0x78) = 0x258;
            *(context + 0x74) = *i_1[2];
            return 1;
        }

        i_1 = i;
    }

    int32_t data_7 = *(context + 0x78);

    if (!data_7)
    {
        *(context + 0x74) = 0;
        return 0;
    }

    *(context + 0x78) = data_7 - 1;
    return 1;
}
