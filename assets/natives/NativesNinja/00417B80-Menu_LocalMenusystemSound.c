#include "00417B80-Menu_LocalMenusystemSound.h"
/* 0x00417b80 Menu_LocalMenusystemSound full linked: callers=2 callees=12 */
int32_t Menu_LocalMenusystemSound(void* a1)

{
    int32_t i = 0;

    if (*(a1 + 0x2664) > 0)
    {
        int32_t* ebp_1 = a1 + 0x824;

        do
        {
            sub_4b66a0(ebp_1);
            i += 1;
            ebp_1 = &ebp_1[0x16];
        } while (i < *(a1 + 0x2664));
    }

    int32_t i_1 = 0;

    if (*(a1 + 0x2668) > 0)
    {
        int32_t* ebp_2 = a1 + 0x1e24;

        do
        {
            sub_4b6e30(*ebp_2);
            i_1 += 1;
            ebp_2 = &ebp_2[0x11];
        } while (i_1 < *(a1 + 0x2668));
    }

    int32_t i_2 = 0;

    if (*(a1 + 0x2666) > 0)
    {
        int32_t* ebp_3 = a1 + 0x2a4;

        do
        {
            sub_4b66a0(ebp_3);
            i_2 += 1;
            ebp_3 = &ebp_3[0x16];
        } while (i_2 < *(a1 + 0x2666));
    }

    void* i_4 = *(a1 + 0x260);

    if (i_4)
    {
        void* i_3;

        do
        {
            i_3 = *(i_4 + 0x84);
            Qhash_Init(1);
            sub_4b0d10(i_4);
            Qhash_Reset();
            i_4 = i_3;
        } while (i_3);
    }

    char eax_1 = *(a1 + 0x26bf);
    *(a1 + 0x2664) = 0;
    *(a1 + 0x2668) = 0;
    *(a1 + 0x2666) = 0;
    *(a1 + 0x260) = 0;

    if (eax_1)
    {
        Qhash_Init(1);
        sub_4e67d0("LOCAL:menusystem/sound/sounds.res");
        *(a1 + 0x26bf) = 0;
        Qhash_Reset();
    }

    int32_t eax_2 = *(a1 + 0x1d4);

    if (eax_2)
    {
        Resource_Flush(eax_2);
        *(a1 + 0x1d4) = 0;
    }

    int32_t eax_3 = *(a1 + 0x1d8);

    if (eax_3)
    {
        Resource_Flush(eax_3);
        *(a1 + 0x1d8) = 0;
    }

    int32_t result = *(a1 + 0x25c);
    int32_t ebp_4 = 0;

    if (result > 0)
    {
        int32_t* edi = a1 + 0x1dc;

        do
        {
            Resource_Flush(*edi);
            *edi = 0;
            result = *(a1 + 0x25c);
            ebp_4 += 1;
            edi = &edi[1];
        } while (ebp_4 < result);
    }

    *(a1 + 0x25c) = 0;
    return result;
}
