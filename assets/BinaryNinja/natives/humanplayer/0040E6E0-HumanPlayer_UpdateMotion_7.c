#include "HumanPlayer_UpdateMotion_7.h"
int32_t* HumanPlayer_UpdateMotion_7(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0.200000003f);
    __builtin_memset(a2 + 0x664, 0, 0x18);
    int32_t* result = AI_UpdateSensors_19(a2);
    *(a1 + 0x14) = HumanPlayer_CheckGround_7;
    return result;
}
