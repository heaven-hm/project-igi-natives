#include "004092A0-HumanPlayer_HandleInput_2.h"
/* 0x004092a0 HumanPlayer_HandleInput_2 full linked: callers=0 callees=1 */
int32_t HumanPlayer_HandleInput_2(void* a1, void* a2)

{
    void* var_8 = a2;
    int32_t edx = *(a1 + 8);

    if (!(edx & 4))
    {
        void* edx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t eax_1 = *(edx_1 + 0x74);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (edx & 0x10000)
    {
        void* edx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x2e;
        int32_t eax_4 = *(edx_2 + 0xb8);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    if (edx & 0x20000)
    {
        void* edx_3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x2f;
        int32_t eax_7 = *(edx_3 + 0xbc);
        *(a1 + 0x14) = eax_7;
        return eax_7(a1, a2);
    }

    if (edx & 0x40000)
    {
        void* edx_4 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xd;
        int32_t eax_10 = *(edx_4 + 0x34);
        *(a1 + 0x14) = eax_10;
        return eax_10(a1, a2);
    }

    long double x87_r7 = *(a2 + 0x1dc);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_1 = *(a2 + 0x13c);
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;
        result = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            void* edx_5 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0x1c;
            int32_t eax_13 = *(edx_5 + 0x70);
            *(a1 + 0x14) = eax_13;
            return eax_13(a1, a2);
        }
    }

    if (!(*(&edx + 1) & 1))
    {
        void* edx_6 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 7;
        int32_t eax_16 = *(edx_6 + 0x1c);
        *(a1 + 0x14) = eax_16;
        return eax_16(a1, a2);
    }

    if (!(edx & 0x40))
    {
        void* edx_7 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 4;
        int32_t eax_19 = *(edx_7 + 0x10);
        *(a1 + 0x14) = eax_19;
        return eax_19(a1, a2);
    }

    if (!(*(&edx + 1) & 0x20))
        return result;

    void* edx_8 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0x18;
    int32_t eax_22 = *(edx_8 + 0x60);
    *(a1 + 0x14) = eax_22;
    return eax_22(a1, a2);
}
