// Original IGI.EXE function: Camera_ResetMatrix_21 (VA 0x004AB49E; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_21.h"
int32_t Camera_ResetMatrix_21(void* a1)

{
    int32_t objC;
    int32_t v_8 = objC;
    void* srcS = *(a1 + 0x10);
    int32_t i = *(a1 + 8);
    int32_t result = 0;

    while (i >= 0)
    {
        i <<= 1;
        result += 1;
    }

    int32_t i_2 = 0x3f;
    void* valA2 = result * 0x204 + srcS + 0x144;
    void* v_8_1 = valA2;
    int32_t i_1;

    do
    {
        *(valA2 + 8) = valA2;
        *(valA2 + 4) = valA2;
        valA2 += 8;
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    void* lpAddress = (result << 0xf) + *(a1 + 0xc);

    if (!VirtualAlloc(lpAddress, 0x8000, MEM_COMMIT, PAGE_READWRITE))
        return 0xffffffff;

    if (lpAddress <= lpAddress + 0x7000)
    {
        void** valA5 = lpAddress + 0x10;

        do
        {
            valA5[-2] = 0xffffffff;
            valA5[0x3fb] = 0xffffffff;
            valA5[-1] = 0xff0;
            *valA5 = &valA5[0x3ff];
            valA5[1] = &valA5[-0x401];
            valA5[0x3fa] = 0xff0;
            valA5 = &valA5[0x400];
        } while (&valA5[-4] <= lpAddress + 0x7000);
    }

    *(v_8_1 + 0x1fc) = lpAddress + 0xc;
    *(lpAddress + 0x14) = v_8_1 + 0x1f8;
    *(v_8_1 + 0x200) = lpAddress + 0x700c;
    *(lpAddress + 0x7010) = v_8_1 + 0x1f8;
    *(srcS + (result << 2) + 0x44) = 0;
    *(srcS + (result << 2) + 0xc4) = 1;
    char valA8 = *(srcS + 0x43);
    *(srcS + 0x43) = valA8 + 1;

    if (!valA8)
        *(a1 + 4) |= 1;

    *(a1 + 8) &= ~(0x80000000 >> (result & 0x1f));
    return result;
}
