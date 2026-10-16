#include "004C6D20-DynObj_LookupHashItem_8.h"
/* 0x004c6d20 DynObj_LookupHashItem_8 full linked: callers=4 callees=2 */
void* sub_4c6d20(void* a1, int32_t* a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void* a7)

{
    int32_t* esi = a2;
    int32_t ecx = 0x8000;
    void* i = esi[0xb];
    uint32_t ebp = *esi;

    while (i)
    {
        void* edx;
        edx = *(i + 0x5c);
        i = *(i + 0x58);
        ecx |= edx;
    }

    int32_t eax = esi[0xd];
    esi[0xe] = ecx;
    *(a1 + (eax << 2) + 0xe8) = 0;

    while (ebp != a4)
    {
        int32_t edi_1 = 0;
        *(esi + 0x3a) |= *(a3 + 0x5c);

        if (a5 & ebp)
            edi_1 = 1;

        if (a6 & ebp)
            edi_1 |= 2;

        if (a7 & ebp)
            edi_1 |= 4;

        ebp u>>= 1;
        esi[0xc] |= 1 << (edi_1 & 0x1f);

        if (!esi[edi_1 + 3])
        {
            int32_t ecx_5 = *(a1 + 0xd08);
            int32_t* eax_7 = *(*(a1 + 0xd04) + (ecx_5 << 2)) * *(a1 + 0xd10) + *(a1 + 0xd00);
            *(*(a1 + 0xd14) + eax_7) = ecx_5;
            *(a1 + 0xd08) += 1;
            esi[edi_1 + 3] = eax_7;
            void* var_24_1 = a1;
            sub_4c5c90(eax_7, edi_1, ebp, esi[0xd]);
            *(esi[edi_1 + 3] + 8) = esi;
        }

        esi = esi[edi_1 + 3];
    }

    esi[0xe] |= *(a3 + 0x5c);
    return sub_4c6e30(esi, a3);
}
