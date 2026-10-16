#include "004C5CE0-DynObj_CreateMagicObject_7.h"
/* 0x004c5ce0 DynObj_CreateMagicObject_7 full linked: callers=2 callees=17 */
int32_t sub_4c5ce0(int32_t* a1)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    int32_t* esi = a1;
    void* eax = esi[0x370];

    if (eax)
    {
        sub_4b0d10(eax);
        esi[0x370] = 0;
    }

    void* eax_1 = esi[0x371];

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        esi[0x371] = 0;
    }

    void* eax_2 = esi[0x36f];

    if (eax_2)
    {
        sub_5177f0(eax_2);
        esi[0x36f] = 0;
    }

    int32_t* eax_3 = esi[0x37d];

    if (eax_3)
    {
        sub_4b7d30(eax_3);
        sub_4b0d10(esi[0x37d]);
        esi[0x37d] = 0;
    }

    if (esi[0x373])
    {
        void* ebp_1 = nullptr;

        for (int32_t* i = nullptr; i < 0xc00; )
        {
            void* eax_5 = *(i + esi[0x373]);

            if (eax_5 && !*(ebp_1 + 0xb81a20))
            {
                sub_4b0d10(eax_5);
                *(i + esi[0x373]) = 0;
            }

            i = &i[3];
            ebp_1 += 1;
        }
    }

    if (esi[0x374])
    {
        void* ebp_2 = nullptr;

        for (int32_t* i_1 = nullptr; i_1 < 0xc00; )
        {
            void* eax_7 = *(i_1 + esi[0x374]);

            if (eax_7 && !*(ebp_2 + 0xb81920))
            {
                sub_4b0d10(eax_7);
                *(i_1 + esi[0x374]) = 0;
            }

            i_1 = &i_1[3];
            ebp_2 += 1;
        }
    }

    int32_t eax_8 = esi[2];

    if (eax_8)
        Resource_Flush(eax_8);

    int32_t eax_9 = esi[3];

    if (eax_9)
    {
        Resource_Flush(eax_9);
        sub_4d1220();
    }

    int32_t eax_10 = esi[1];

    if (eax_10)
        Resource_Flush(eax_10);

    int32_t eax_11 = esi[0x373];

    if (eax_11)
        Resource_Flush(eax_11);

    int32_t eax_12 = esi[0x374];

    if (eax_12)
        Resource_Flush(eax_12);

    for (int32_t* i_2 = &g_b81b28; i_2 < 0xb97b28; i_2 = &i_2[0xb])
    {
        if (i_2[-1])
            Struct_Clear36(i_2);
    }

    int32_t* ebp_3 = &esi[4];
    int32_t var_4 = 6;
    a1 = ebp_3;
    bool cond:1_1;

    do
    {
        int32_t* eax_13 = *(*ebp_3 + 0x3c);

        if (eax_13)
            sub_4e54e0(eax_13);

        int32_t* edi_1 = esi[0x345];
        int32_t edx_3 = *(edi_1 + *ebp_3);
        int32_t eax_16 = esi[0x342] - 1;
        esi[0x342] = eax_16;

        if (edx_3 != eax_16)
        {
            int32_t ecx_3 = esi[0x341];
            int32_t ebp_4 = *(ecx_3 + (edx_3 << 2));
            int32_t eax_19 = *(ecx_3 + (eax_16 << 2)) * esi[0x344] + esi[0x340];
            int32_t edi_2 = *(edi_1 + eax_19);
            *(ecx_3 + (edx_3 << 2)) = *(ecx_3 + (edi_2 << 2));
            *(esi[0x341] + (edi_2 << 2)) = ebp_4;
            ebp_3 = a1;
            *(esi[0x345] + eax_19) = edx_3;
        }

        ebp_3 = &ebp_3[1];
        cond:1_1 = var_4 != 1;
        a1 = ebp_3;
        var_4 -= 1;
    } while (cond:1_1);
    sub_4b0b70(&esi[0x340]);
    return sub_4b0d10(esi);
}
