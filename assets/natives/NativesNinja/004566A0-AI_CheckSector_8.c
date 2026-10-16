#include "004566A0-AI_CheckSector_8.h"
/* 0x004566a0 AI_CheckSector_8 full linked: callers=0 callees=4 */
int32_t sub_4566a0(void* a1, void* a2)

{
    sub_463770(a2);
    int32_t eax = *(a1 + 8);

    if (!(eax & 4))
    {
        void* ecx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xb;
        int32_t eax_2 = *(ecx_1 + 0x2c);
        *(a1 + 0x14) = eax_2;
        return eax_2(a1, a2);
    }

    if (eax & 0x20000)
    {
        void* eax_4 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xd;
        int32_t eax_5 = *(eax_4 + 0x34);
        *(a1 + 0x14) = eax_5;
        return eax_5(a1, a2);
    }

    void* eax_7 = *(a2 + 0x6ec);

    if (eax_7)
    {
        struct status_msg* eax_10 = sub_4e6b00(sub_4f0ee0(), eax_7 + 0x114);

        if (eax_10)
            sub_4e6c30(eax_10, a2 + 0x6a8);
    }

    *(a2 + 0x664) = 0;
    *(a2 + 0x668) = 0;
    *(a2 + 0x66c) = 0;
    int32_t* eax_11 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_12 = *eax_11;
    *(a1 + 0x14) = eax_12;
    return eax_12(a1, a2);
}
