#include "0045AB00-AI_CombatTarget_13.h"
/* 0x0045ab00 AI_CombatTarget_13 full linked: callers=0 callees=4 */
int32_t sub_45ab00(int32_t a1 @ edi, void* a2, void* a3)

{
    void* a = Table_GetAt(a3 + 0x4c4, 0);
    HumanPlayer_LoadParameters_13(a);
    void var_8;
    sub_4f23d0(a, &var_8);
    int32_t ebx = *(a2 + 8);

    if (!(ebx & 4))
    {
        void* eax_1 = *(a2 + 4);
        *(a2 + 0xc) = *(a2 + 0x10);
        *(a2 + 0x10) = 0x1d;
        int32_t eax_2 = *(eax_1 + 0x74);
        *(a2 + 0x14) = eax_2;
        return eax_2(a2, a3, a1);
    }

    if (ebx & 0x10000)
    {
        void* edx_2 = *(a2 + 4);
        *(a2 + 0xc) = *(a2 + 0x10);
        *(a2 + 0x10) = 0x1e;
        int32_t eax_4 = *(edx_2 + 0x78);
        *(a2 + 0x14) = eax_4;
        return eax_4(a2, a3, a1);
    }

    if (ebx & 0x20000)
    {
        void* ecx_1 = *(a2 + 4);
        *(a2 + 0xc) = *(a2 + 0x10);
        *(a2 + 0x10) = 0x20;
        int32_t eax_7 = *(ecx_1 + 0x80);
        *(a2 + 0x14) = eax_7;
        return eax_7(a2, a3, a1);
    }

    sub_4f2350(a, 1);
    long double x87_r7 = *(a3 + 0x1c8);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(a3 + 0x4d1) = 1;

    if (!(*(a2 + 8) & 0x1000000))
    {
        if (!(ebx & 0x40000))
        {
            void* edx_4 = *(a2 + 4);
            *(a2 + 0xc) = *(a2 + 0x10);
            *(a2 + 0x10) = 2;
            int32_t eax_12 = *(edx_4 + 8);
            *(a2 + 0x14) = eax_12;
            return eax_12(a2, a3, a1);
        }

        void* eax_9 = *(a2 + 4);
        *(a2 + 0xc) = *(a2 + 0x10);
        *(a2 + 0x10) = 3;
        int32_t eax_10 = *(eax_9 + 0xc);
        *(a2 + 0x14) = eax_10;
        return eax_10(a2, a3, a1);
    }

    if (!(ebx & 0x80))
    {
        int32_t* ecx_3 = *(a2 + 4);
        *(a2 + 0xc) = *(a2 + 0x10);
        *(a2 + 0x10) = 0;
        int32_t eax_15 = *ecx_3;
        *(a2 + 0x14) = eax_15;
        return eax_15(a2, a3, a1);
    }

    if (!(ebx & 1) || *(&ebx + 1) & 2)
        return result;

    void* eax_17 = *(a2 + 4);
    *(a2 + 0xc) = *(a2 + 0x10);
    *(a2 + 0x10) = 0x11;
    int32_t eax_18 = *(eax_17 + 0x44);
    *(a2 + 0x14) = eax_18;
    return eax_18(a2, a3, a1);
}
