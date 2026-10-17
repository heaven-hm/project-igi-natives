// Original IGI.EXE function: ForceAccumulator_Add (VA 0x004ECF50; static CFG gate FAIL, CFG score 0.667).
#include "ForceAccumulator_Add.h"
void* ForceAccumulator_Add(void* a1, int32_t a2)

{
    memcpy(*(a1 + 0x54) + *(a1 + 0x5c) * 0x18, a2, 0x18);
    *(a1 + 0x5c) += 1;
    return a1;
}
