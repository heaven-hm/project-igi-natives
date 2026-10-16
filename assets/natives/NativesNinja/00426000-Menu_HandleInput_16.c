#include "00426000-Menu_HandleInput_16.h"
/* 0x00426000 Menu_HandleInput_16 full linked: callers=1 callees=1 */
int32_t Menu_HandleInput_16(void* a1)

{
    void* edi = *(a1 + 0x4c);

    if (!*(edi + 0x91d))
    {
        *(a1 + 0x74) = 0;
        *(a1 + 0x78) = 0;
        return 0;
    }

    void* eax_1 = *(a1 + 0x74);

    if (eax_1 && sub_463170(eax_1))
    {
        *(a1 + 0x74) = 0;
        *(a1 + 0x78) = 0;
        return 0;
    }

    void* eax_4 = *(a1 + 0x4c);

    if (*(eax_4 + 0x2ed0))
    {
        *(a1 + 0x78) = 0x258;
        *(a1 + 0x74) = *(eax_4 + 0x2ed0);
        return 1;
    }

    int32_t* i_1 = *(edi + 0xaa8);

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

    int32_t eax_7 = *(a1 + 0x78);

    if (!eax_7)
    {
        *(a1 + 0x74) = 0;
        return 0;
    }

    *(a1 + 0x78) = eax_7 - 1;
    return 1;
}
