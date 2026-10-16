#include "Human_StateAnimation.h"
int32_t Human_StateAnimation(void* a1, int32_t a2, float a3)

{
    int32_t* valA1 = *(a1 + 0x338) + (a2 << 3);
    return FX_DebrisSpawn_14(a1, *valA1, valA1[1], a3);
}
