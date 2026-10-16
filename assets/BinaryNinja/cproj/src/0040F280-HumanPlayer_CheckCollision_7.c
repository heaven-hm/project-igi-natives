#include "gi_platform.h"
#include "0040F280-HumanPlayer_CheckCollision_7.h"
int32_t HumanPlayer_CheckCollision_7(void* a1, int32_t* a2)

{
    char result = AI_CheckSector_22(a2[0x13b]);

    if (result)
    {
        int32_t* valA1 = HumanPlayer_UpdateMotion_11(a2, a2[0x353]);

        if (valA1)
            Script_ExecuteLevelScript_12(&a2[0x131], nullptr, valA1);

        a2[0x353] = 0xffffffff;
        HumanPlayer_CheckCollision_9(a2, 1.40129846e-44.0f);
        result = AI_SelectTarget_22(a2[0x13b], 0.0f, 0, 0x3d6e4bae, 0x3d082b3f);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_ApplyRecoil_7;
    }

    return result;
}
