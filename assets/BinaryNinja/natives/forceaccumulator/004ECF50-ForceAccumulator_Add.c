// Original IGI.EXE function: ForceAccumulator_Add (VA 0x004ECF50; static CFG gate FAIL, CFG score 0.667).
#include "ForceAccumulator_Add.h"
void* ForceAccumulator_Add(void* context, int32_t param_2)

{
    memcpy(*(context + 0x54) + *(context + 0x5c) * 0x18, param_2, 0x18);
    *(context + 0x5c) += 1;
    return context;
}
