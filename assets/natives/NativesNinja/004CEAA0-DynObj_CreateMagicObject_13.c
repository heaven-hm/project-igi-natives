#include "004CEAA0-DynObj_CreateMagicObject_13.h"
/* 0x004ceaa0 DynObj_CreateMagicObject_13 full linked: callers=12 callees=0 */
void* sub_4ceaa0(void* a1, int32_t a2, int32_t* a3)

{
    int32_t eax = *(a1 + 4);
    int32_t* ecx = a1 + 0xc;
    int32_t eax_2 = *ecx;

    if (a2
        != (((eax_2 & 0xff0000) | eax_2 >> 0x10) >> 8 | ((eax_2 & 0xff00) | eax_2 << 0x10) << 8))
    {
        int32_t eax_6;

        do
        {
            int32_t eax_4 = ecx[1];
            ecx = ecx + (((((eax_4 & 0xff0000) | eax_4 >> 0x10) >> 8
                | ((eax_4 & 0xff00) | eax_4 << 0x10) << 8) + 3) & 0xfffffffc) + 8;

            if (ecx >= (((eax & 0xff0000) | eax >> 0x10) >> 8 | (eax << 0x10 | (eax & 0xff00)) << 8)
                    + a1 + 8)
                return 0;

            eax_6 = *ecx;
        } while (a2 !=
            (((eax_6 & 0xff0000) | eax_6 >> 0x10) >> 8 | ((eax_6 & 0xff00) | eax_6 << 0x10) << 8));
    }

    if (a3)
    {
        int32_t eax_8 = ecx[1];
        *a3 = ((eax_8 & 0xff0000) | eax_8 >> 0x10) >> 8 | ((eax_8 & 0xff00) | eax_8 << 0x10) << 8;
    }

    return &ecx[2];
}
