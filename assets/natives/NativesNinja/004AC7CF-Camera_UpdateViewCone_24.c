#include "004AC7CF-Camera_UpdateViewCone_24.h"
/* 0x004ac7cf Camera_UpdateViewCone_24 full linked: callers=1 callees=2 */
int32_t sub_4ac7cf(int32_t a1, int32_t a2)

{
    int32_t temp0 = a2 / 0x20;
    int32_t* edi = a1 + (temp0 << 2);
    int32_t i = sub_4ada58(*edi, 1 << ((0x1f - a2 % 0x20) & 0x1f), edi);
    int32_t esi_1 = temp0 - 1;

    if (temp0 - 1 >= 0)
    {
        int32_t* edi_1 = a1 + (esi_1 << 2);

        while (i)
        {
            i = sub_4ada58(*edi_1, 1, edi_1);
            esi_1 -= 1;
            edi_1 -= 4;

            if (esi_1 < 0)
                break;
        }
    }

    return i;
}
