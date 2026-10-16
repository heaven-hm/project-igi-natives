#include "004C6B20-DynObj_FindSymbol_8.h"
/* 0x004c6b20 DynObj_FindSymbol_8 full linked: callers=2 callees=1 */
int32_t* sub_4c6b20(void* a1, int32_t a2, int32_t a3, int32_t* a4)

{
    void* edx = *a4;
    void* var_14 = edx;

    if (a2 <= a3)
    {
        *a4 = edx;
        return a4;
    }

    void* ebp = a1;
    int32_t eax_20;

    do
    {
        int32_t ebx_5 = *(edx + 4);
        int32_t edi_1 = *(edx + 0x2c);
        void* esi_1 = *(edx + 8);
        int32_t var_c_1 = edi_1;
        int16_t eax_8;

        if (edi_1)
        {
            void* edx_1 = *(esi_1 + (ebx_5 << 2) + 0xc);
            int32_t ecx_4 = 0x8000;
            void* i = *(edx_1 + 0x2c);

            do
            {
                edi_1 = *(i + 0x5c);
                i = *(i + 0x58);
                ecx_4 |= edi_1;
            } while (i);

            *(edx_1 + 0x38) = ecx_4;
            int32_t edx_2 = 0x8000;
            int32_t* ecx_5 = esi_1 + 0xc;
            a1 = 8;
            bool cond:2_1;

            do
            {
                void* eax_9 = *ecx_5;

                if (eax_9)
                {
                    edi_1 = *(eax_9 + 0x3a);
                    edi_1 |= *(eax_9 + 0x38);
                    edx_2 |= edi_1;
                }

                ecx_5 = &ecx_5[1];
                cond:2_1 = a1 != 1;
                a1 -= 1;
            } while (cond:2_1);
            *(esi_1 + 0x3a) = edx_2;
            edx = var_14;
        }
        else
        {
            a1 = 0x8000;
            int32_t var_14_1 = 8;
            *(*(esi_1 + (ebx_5 << 2) + 0xc) + 0x38) = 0x8000;
            int32_t* ecx_3 = esi_1 + 0xc;
            bool cond:1_1;

            do
            {
                void* eax_3 = *ecx_3;

                if (eax_3)
                {
                    edi_1 = *(eax_3 + 0x3a);
                    edi_1 |= *(eax_3 + 0x38);
                    a1 |= edi_1;
                }

                ecx_3 = &ecx_3[1];
                cond:1_1 = var_14_1 != 1;
                var_14_1 -= 1;
            } while (cond:1_1);
            eax_8 = a1;
            *(esi_1 + 0x3a) = eax_8;
        }

        eax_8 = *(edx + 0x30);

        if (!eax_8 && !var_c_1)
        {
            int32_t* eax_13 = *(*(esi_1 + (ebx_5 << 2) + 0xc) + 0x3c);

            if (eax_13)
                sub_4e54e0(eax_13);

            int32_t* edi_2 = *(ebp + 0xd14);
            int32_t edx_4 = *(edi_2 + *(esi_1 + (ebx_5 << 2) + 0xc));
            int32_t eax_15 = *(ebp + 0xd08) - 1;
            *(ebp + 0xd08) = eax_15;

            if (edx_4 != eax_15)
            {
                int32_t ecx_7 = *(ebp + 0xd04);
                int32_t eax_18 = *(ecx_7 + (eax_15 << 2)) * *(ebp + 0xd10) + *(ebp + 0xd00);
                void* ebx_2 = *(ecx_7 + (edx_4 << 2));
                int32_t edi_3 = *(edi_2 + eax_18);
                *(ecx_7 + (edx_4 << 2)) = *(ecx_7 + (edi_3 << 2));
                *(*(ebp + 0xd04) + (edi_3 << 2)) = ebx_2;
                *(*(ebp + 0xd14) + eax_18) = edx_4;
            }

            *(esi_1 + (ebx_5 << 2) + 0xc) = 0;
            *(esi_1 + 0x30) &= ~(1 << (ebx_5 & 0x1f));
        }

        eax_20 = a3 << 1;
        edx = esi_1;
        var_14 = edx;
        a3 = eax_20;
    } while (a2 > eax_20);
    *a4 = edx;
    return a4;
}
