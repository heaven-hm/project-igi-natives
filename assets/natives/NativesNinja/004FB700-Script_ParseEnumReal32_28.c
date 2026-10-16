#include "004FB700-Script_ParseEnumReal32_28.h"
/* 0x004fb700 Script_ParseEnumReal32_28 full linked: callers=13 callees=9 */
int32_t sub_4fb700(void* a1, char* a2)

{
    void* ebp;

    if (!a2)
    {
        ebp = a1;
        sub_4eced0(ebp + 0xf0, 1000f, 9420.7998f, 20070.4004f, 6144f);
        *(ebp + 0x68c) = 0;
    }
    else
    {
        ebp = a1;
        *(ebp + 0x1b4) = a2;
        long double x87_r7_2 = *(sub_4ee1b0(a2) + 8) * 4096f;
        long double x87_r7_4 = *(sub_4ee1b0(*(ebp + 0x1b4)) + 4) * 4096f;
        long double x87_r7_6 = *sub_4ee1b0(*(ebp + 0x1b4)) * 4096f;
        sub_4eced0(ebp + 0xf0, *(*(ebp + 0x1b4) + 8), x87_r7_6, x87_r7_4, x87_r7_2);
        void* edx_1 = *(ebp + 0x1b4);
        int32_t i_1 = 0x16;
        *(ebp + 0xfc) = *(ebp + 0xfc) * 1.00999999f;
        *(ebp + 0x100) = *(ebp + 0x100) * 1.00999999f;
        *(ebp + 0x104) = *(ebp + 0x104) * 1.00999999f;
        *(ebp + 0x68c) = *(edx_1 + 0x148);
        char* eax_7 = ebp + 0x1d5;
        int32_t i;

        do
        {
            *eax_7 = 0;
            eax_7 = &eax_7[0x38];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        a1 = nullptr;

        if (*(ebp + 0x68c) > 0)
        {
            int32_t edi_1 = 0;
            int32_t* esi_2 = ebp + 0x1bc;
            bool cond:0_1;

            do
            {
                esi_2[1] = *(edi_1 + *(ebp + 0x1b4) + 0x154);
                *esi_2 = *(edi_1 + *(ebp + 0x1b4) + 0x150);
                esi_2[2] = *(edi_1 + *(ebp + 0x1b4) + 0x158);
                esi_2[6] = 1;
                *(esi_2 + 0x19) = 1;
                *(esi_2 + 0x1a) = 0;
                esi_2[7] = *(edi_1 + *(ebp + 0x1b4) + 0x15c);
                esi_2[8] = *(edi_1 + *(ebp + 0x1b4) + 0x160);
                esi_2[0xd] = 0;
                void* var_c;
                sub_4d09e0(&var_c, ebp, *(edi_1 + *(ebp + 0x1b4) + 0x14c), &a2[0x138]);
                int32_t* eax_13 = &esi_2[3];
                edi_1 += 0x18;
                esi_2 = &esi_2[0xe];
                *eax_13 = var_c;
                int32_t var_8;
                eax_13[1] = var_8;
                int32_t var_4;
                eax_13[2] = var_4;
                cond:0_1 = a1 + 1 < *(ebp + 0x68c);
                a1 += 1;
            } while (cond:0_1);
        }
    }

    memcpy(ebp + 0x6c0, ebp + 0x20, 0x18);
    *(ebp + 0x708) = 0;
    memcpy(ebp + 0x694, ebp + 0x70, 0x28);
    *(ebp + 0x1b8) = 0;
    *(ebp + 0x690) = 0;
    __builtin_memset(ebp + 0x70c, 0, 0x14);
    *(ebp + 0x6dc) = 0x3f800000;
    *(ebp + 0x6e0) = 0;
    *(ebp + 0x6e4) = 0;
    *(ebp + 0x6e8) = 0;
    *(ebp + 0x6ec) = 0x3f800000;
    *(ebp + 0x6f0) = 0;
    *(ebp + 0x6f4) = 0;
    *(ebp + 0x6f8) = 0;
    *(ebp + 0x6fc) = 0x3f800000;
    *(ebp + 0x700) = 0;
    return 0x3f800000;
}
