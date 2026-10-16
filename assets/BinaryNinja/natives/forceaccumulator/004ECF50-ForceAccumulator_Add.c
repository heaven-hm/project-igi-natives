#include "ForceAccumulator_Add.h"
void* ForceAccumulator_Add(void* a1, int32_t a2)

{
    memcpy(*(a1 + 0x54) + *(a1 + 0x5c) * 0x18, a2, 0x18);
    *(a1 + 0x5c) += 1;
    return a1;
}
