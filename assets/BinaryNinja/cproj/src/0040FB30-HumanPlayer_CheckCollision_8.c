#include "gi_platform.h"
#include "0040FB30-HumanPlayer_CheckCollision_8.h"
int32_t HumanPlayer_CheckCollision_8(void* a1, void* a2)

{
    int32_t dstD = (*(int32_t*)(uintptr_t)(a2 + 0x4ec));
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(a2 + 0x4c4, 0);
    int32_t tmpD;
    int32_t result = Bones_PlayAnimation(dstD + 0x68, 0,
        *(HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1) + 0x684), 0, 0.0f);
    (*(int32_t*)(uintptr_t)(a2 + 0xd6c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40fb90;
    return result;
}
