#include "00453FB0-AI_UpdateOrders_5.h"
/* 0x00453fb0 AI_UpdateOrders_5 full linked: callers=0 callees=3 */
int32_t sub_453fb0(int32_t a1 @ edi, void* a2, void* a3)

{
    void* a = Table_GetAt(a3 + 0x4c4, 0);
    HumanPlayer_LoadParameters_13(a);
    void var_8;
    sub_4f23d0(a, &var_8);
    int32_t edx = *(a2 + 8);

    if (!(edx & 4))
    {
        void* eax_1 = *(a2 + 4);
        *(a2 + 0xc) = *(a2 + 0x10);
        *(a2 + 0x10) = 8;
        int32_t eax_2 = *(eax_1 + 0x20);
        *(a2 + 0x14) = eax_2;
        return eax_2(a2, a3, a1);
    }

    if (edx & 0x10000)
    {
        void* eax_4 = *(a2 + 4);
        *(a2 + 0xc) = *(a2 + 0x10);
        *(a2 + 0x10) = 9;
        int32_t eax_5 = *(eax_4 + 0x24);
        *(a2 + 0x14) = eax_5;
        return eax_5(a2, a3, a1);
    }

    if (edx & 0x20000)
    {
        void* eax_7 = *(a2 + 4);
        *(a2 + 0xc) = *(a2 + 0x10);
        *(a2 + 0x10) = 0xa;
        int32_t eax_8 = *(eax_7 + 0x28);
        *(a2 + 0x14) = eax_8;
        return eax_8(a2, a3, a1);
    }

    long double x87_r7 = *(a3 + 0x1c8);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(a3 + 0x4d1) = 1;

    if (!(edx & 1) || *(&edx + 1) & 2)
        return result;

    *(a2 + 0xc) = *(a2 + 0x10);

    if (!(edx & 0x200000))
    {
        void* eax_13 = *(a2 + 4);
        *(a2 + 0x10) = 7;
        int32_t eax_14 = *(eax_13 + 0x1c);
        *(a2 + 0x14) = eax_14;
        return eax_14(a2, a3, a1);
    }

    void* eax_10 = *(a2 + 4);
    *(a2 + 0x10) = 5;
    int32_t eax_11 = *(eax_10 + 0x14);
    *(a2 + 0x14) = eax_11;
    return eax_11(a2, a3, a1);
}
