#include "004AC786-Camera_ApplyPostProcess_24.h"
/* 0x004ac786 Camera_ApplyPostProcess_24 full linked: callers=1 callees=0 */
int32_t sub_4ac786(int32_t a1, int32_t a2)

{
    int32_t temp0 = a2 / 0x20;

    if (*(a1 + (temp0 << 2)) & ~(0xffffffff << ((0x1f - a2 % 0x20) & 0x1f)))
        return 0;

    int32_t esi_1 = temp0 + 1;

    if (esi_1 >= 3)
        return 1;

    int32_t* eax_5 = a1 + (esi_1 << 2);

    while (true)
    {
        if (*eax_5)
            return 0;

        esi_1 += 1;
        eax_5 = &eax_5[1];

        if (esi_1 >= 3)
            return 1;
    }
}
