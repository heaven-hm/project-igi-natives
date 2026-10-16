#include "004ECF50-ForceAccumulator_Add.h"
/* 0x004ecf50 ForceAccumulator_Add full linked: callers=18 callees=1 */
void* sub_4ecf50(void* a1, int32_t a2)

{
    memcpy(*(a1 + 0x54) + *(a1 + 0x5c) * 0x18, a2, 0x18);
    *(a1 + 0x5c) += 1;
    return a1;
}
