#include "HumanPlayer_UpdateMotion_8.h"
int32_t HumanPlayer_UpdateMotion_8(void* a1, void* a2)

{
    int32_t dstD = *(a2 + 0x4ec);
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(a2 + 0x4c4, 0);
    int32_t tmpD;
    void* valA2 = HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
    *(a2 + 0x4d2) = 1;
    int32_t result = Bones_PlayAnimation(dstD + 0x68, 0, *(valA2 + 0x688), 0, 0f);
    *(a1 + 0x14) = sub_40fd70;
    return result;
}
