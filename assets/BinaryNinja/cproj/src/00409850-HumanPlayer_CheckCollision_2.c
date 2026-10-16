#include "gi_platform.h"
#include "00409850-HumanPlayer_CheckCollision_2.h"
int32_t HumanPlayer_CheckCollision_2(void* a1, void* a2)

{
    void* v_8 = a2;
    int32_t tmpD = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (!(tmpD & 4))
    {
        void* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x1d;
        int32_t valA1 = *(tmpD1 + 0x74);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA1;
        return valA1(a1, a2);
    }

    if (tmpD & 0x10000)
    {
        void* tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x2e;
        int32_t valA4 = *(tmpD2 + 0xb8);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA4;
        return valA4(a1, a2);
    }

    if (tmpD & 0x20000)
    {
        void* tmpD3 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x2f;
        int32_t valA7 = *(tmpD3 + 0xbc);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA7;
        return valA7(a1, a2);
    }

    if (tmpD & 0x40000)
    {
        void* tmpD4 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x10;
        int32_t valA10 = *(tmpD4 + 0x40);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA10;
        return valA10(a1, a2);
    }

    long double fpu7 = (*(int32_t*)(uintptr_t)(a2 + 0x1dc));
    long double f0 = 0.0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a2 + 0x13c));
        long double f1_1 = 0.0f;
        x87_r7_1 - f1_1;
        result = (x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            void* tmpD5 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x1c;
            int32_t valA13 = *(tmpD5 + 0x70);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA13;
            return valA13(a1, a2);
        }
    }

    if (!(tmpD & 0x20))
    {
        int32_t* tmpD6 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
        int32_t valA16 = *tmpD6;
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA16;
        return valA16(a1, a2);
    }

    if (tmpD & 0x80)
    {
        void* tmpD7 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 3;
        int32_t valA19 = *(tmpD7 + 0xc);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA19;
        return valA19(a1, a2);
    }

    if (*(&tmpD + 1) & 1)
    {
        void* tmpD8 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 6;
        int32_t valA22 = *(tmpD8 + 0x18);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA22;
        return valA22(a1, a2);
    }

    if (!(*(&tmpD + 1) & 0x20))
        return result;

    void* tmpD9 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x1b;
    int32_t valA25 = *(tmpD9 + 0x6c);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA25;
    return valA25(a1, a2);
}
