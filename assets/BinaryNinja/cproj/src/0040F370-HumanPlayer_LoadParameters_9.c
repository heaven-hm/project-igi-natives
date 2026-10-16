#include "gi_platform.h"
#include "0040F370-HumanPlayer_LoadParameters_9.h"
void* HumanPlayer_LoadParameters_9(void* a1, void* a2)

{
    HumanPlayer_CheckCollision_9(a2, 1.40129846e-45.0f);
    AI_AlertAllies_20(a2);
    void* objC = (*(int32_t*)(uintptr_t)(a2 + 0x2f0));
    (*(int32_t*)(uintptr_t)(a2 + 0x2f8)) = (*(int32_t*)(uintptr_t)(a2 + 0x2fc));
    (*(int32_t*)(uintptr_t)(a2 + 0x2fc)) = 0x2c;
    int32_t valA1 = *(objC + 0xb0);
    (*(int32_t*)(uintptr_t)(a2 + 0x300)) = valA1;
    valA1(a2 + 0x2ec, a2);
    void* result = AI_SelectTarget_22((*(int32_t*)(uintptr_t)(a2 + 0x4ec)), -0.610865235.0f, 0xbeb2b8c3, 0x3d6e4bae, 0x3d082b3f);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_40f3f0;
    return result;
}
