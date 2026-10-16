#include "004CF9D0-DynObj_RegisterSymbol_15.h"
/* 0x004cf9d0 DynObj_RegisterSymbol_15 full linked: callers=3 callees=15 */
int32_t* sub_4cf9d0(int32_t* a1)

{
    sub_4af960(a1);
    int32_t i = 0;

    if (a1[0x11] > 0)
    {
        void* ebx_1 = nullptr;

        do
        {
            sub_4b7d30(ebx_1 + a1[0xf]);
            i += 1;
            ebx_1 += 0xc;
        } while (i < a1[0x11]);
    }

    void* eax_4 = a1[0xf];

    if (eax_4)
    {
        sub_4b0d10(eax_4);
        a1[0xf] = 0;
    }

    int32_t i_1 = 0;

    if (a1[0x10] > 0)
    {
        void* edi = nullptr;

        do
        {
            int32_t ecx_1 = a1[0xe];

            if (*(edi + ecx_1 + 4))
                sub_4b7d30(edi + ecx_1);

            i_1 += 1;
            edi += 0xc;
        } while (i_1 < a1[0x10]);
    }

    void* eax_8 = a1[0xe];

    if (eax_8)
    {
        sub_4b0d10(eax_8);
        a1[0xe] = 0;
    }

    int32_t i_10 = a1[0x10];

    if (i_10 - 1 >= 0)
    {
        int32_t i_8 = i_10;
        int32_t edi_2 = (i_10 - 1) * 0x24;
        int32_t i_2;

        do
        {
            Struct_Clear36(edi_2 + a1[0xd]);
            edi_2 -= 0x24;
            i_2 = i_8;
            i_8 -= 1;
        } while (i_2 != 1);
    }

    void* eax_10 = a1[0xd];

    if (eax_10)
    {
        sub_4b0d10(eax_10);
        a1[0xd] = 0;
    }

    int32_t* i_6 = a1[9];

    for (int32_t* i_3 = i_6[1]; i_3; i_3 = i_3[1])
    {
        sub_4cfbb0(i_6);
        i_6 = i_3;
    }

    int32_t* i_7 = a1[6];

    for (int32_t* i_4 = i_7[1]; i_4; i_4 = i_4[1])
    {
        sub_4cfb30(i_7);
        i_7 = i_4;
    }

    int32_t* i_9 = a1[0xc];

    for (int32_t* i_5 = i_9[1]; i_5; i_5 = i_5[1])
    {
        sub_4af960(i_9);
        sub_4b0d10(i_9);
        i_9 = i_5;
    }

    Resource_Flush(a1[3]);

    if (!a1[0x12])
        Resource_Flush(a1[2]);

    sub_4b0d10(a1);
    return sub_4cf050();
}
