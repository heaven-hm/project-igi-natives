// Original IGI.EXE function: HumanPlayer_UpdateStamina_2 (VA 0x00409090; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateStamina_2.h"
int32_t HumanPlayer_UpdateStamina_2(void* a1, void* a2)

{
    void* v_8 = a2;
    int32_t tmpD = *(a1 + 8);

    if (!(tmpD & 4))
    {
        void* tmpD1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t valA1 = *(tmpD1 + 0x74);
        *(a1 + 0x14) = valA1;
        return valA1(a1, a2);
    }

    if (tmpD & 0x10000)
    {
        void* tmpD2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x2e;
        int32_t valA4 = *(tmpD2 + 0xb8);
        *(a1 + 0x14) = valA4;
        return valA4(a1, a2);
    }

    if (tmpD & 0x20000)
    {
        void* tmpD3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x2f;
        int32_t valA7 = *(tmpD3 + 0xbc);
        *(a1 + 0x14) = valA7;
        return valA7(a1, a2);
    }

    if (tmpD & 0x40000)
    {
        void* tmpD4 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xc;
        int32_t valA10 = *(tmpD4 + 0x30);
        *(a1 + 0x14) = valA10;
        return valA10(a1, a2);
    }

    long double fpu7 = *(a2 + 0x1dc);
    long double f0 = 0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_1 = *(a2 + 0x13c);
        long double f1_1 = 0f;
        x87_r7_1 - f1_1;
        result = (x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            void* tmpD5 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0x1c;
            int32_t valA13 = *(tmpD5 + 0x70);
            *(a1 + 0x14) = valA13;
            return valA13(a1, a2);
        }
    }

    if (tmpD & 0x40)
    {
        void* tmpD6 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 5;
        int32_t valA16 = *(tmpD6 + 0x14);
        *(a1 + 0x14) = valA16;
        return valA16(a1, a2);
    }

    if (tmpD & 0x20)
    {
        void* tmpD7 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 6;
        int32_t valA19 = *(tmpD7 + 0x18);
        *(a1 + 0x14) = valA19;
        return valA19(a1, a2);
    }

    if (!(*(&tmpD + 1) & 1))
    {
        int32_t* tmpD8 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0;
        int32_t valA22 = *tmpD8;
        *(a1 + 0x14) = valA22;
        return valA22(a1, a2);
    }

    if (!(*(&tmpD + 1) & 0x20))
        return result;

    void* tmpD9 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0x17;
    int32_t valA25 = *(tmpD9 + 0x5c);
    *(a1 + 0x14) = valA25;
    return valA25(a1, a2);
}
