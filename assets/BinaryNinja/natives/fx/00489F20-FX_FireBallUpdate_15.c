#include "FX_FireBallUpdate_15.h"
int32_t FX_FireBallUpdate_15(void* a1, int32_t a2, int32_t a3, float a4)

{
    return Bones_PlayAnimation(*(a1 + 0x4ec) + 0x68, 0, a2, a3, a4);
}
