// Original IGI.EXE function: Weapon_ComputeAccuracy_7 (VA 0x0047C4C0; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_ComputeAccuracy_7.h"
void* Weapon_ComputeAccuracy_7(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)

{
    int32_t result = 0;
    int32_t* tmpD = a1 + 0x548;

    while (*tmpD)
    {
        result += 1;
        tmpD = &tmpD[0x32];

        if (result >= 5)
            return result;
    }

    int32_t valA = result * 5;
    *(a1 + (*(a1 + 0x9c) << 2) + 0x900) = a1 + valA * 0x28 + 0x518;
    *(a1 + 0x9c) += 1;
    memcpy(a1 + valA * 0x28 + 0x518, a2, 0x18);
    memcpy(a1 + valA * 0x28 + 0x530, a3, 0x18);
    *(a1 + valA * 0x28 + 0x550) = a4;
    *(a1 + valA * 0x28 + 0x54c) = a7;
    *(a1 + valA * 0x28 + 0x548) = 1;
    *(a1 + valA * 0x28 + 0x554) = a5;
    *(a1 + valA * 0x28 + 0x558) = a6;
    *(a1 + valA * 0x28 + 0x5d8) = 0;
    return a1 + valA * 0x28 + 0x518;
}
