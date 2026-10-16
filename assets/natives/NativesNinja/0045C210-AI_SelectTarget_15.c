#include "0045C210-AI_SelectTarget_15.h"
/* 0x0045c210 AI_SelectTarget_15 full linked: callers=0 callees=4 */
int32_t sub_45c210(void* a1, void* a2)

{
    sub_463770(a2);
    int32_t result = *(a1 + 8);

    if (result & 0x10000)
    {
        void* ecx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t eax_1 = *(ecx_1 + 0x78);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (result & 0x20000)
    {
        void* eax_3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t eax_4 = *(eax_3 + 0x80);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    if (!(result & 4))
        return result;

    void* eax_6 = *(a2 + 0x6ec);

    if (eax_6)
    {
        struct status_msg* eax_9 = sub_4e6b00(sub_4f0ee0(), eax_6 + 0x114);

        if (eax_9)
            sub_4e6c30(eax_9, a2 + 0x6a8);
    }

    *(a2 + 0x664) = 0;
    *(a2 + 0x668) = 0;
    *(a2 + 0x66c) = 0;
    int32_t* eax_10 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_11 = *eax_10;
    *(a1 + 0x14) = eax_11;
    return eax_11(a1, a2);
}
