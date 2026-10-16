#include "gi_platform.h"
#include "00410F70-HumanPlayer_UpdateStamina_9.h"
int32_t* HumanPlayer_UpdateStamina_9(void* a1)

{
    int32_t* result = AI_FireWeapon_19(a1);

    if (!result)
    {
        void* v_20 = a1;
        char v_18;
        memcpy(&v_18, a1 + 0x20, 0x18);
        int32_t i = 0;
        result = Level_LoadObjects_5();

        if (*result > 0)
        {
            int32_t srcS2 = 8;

            do
            {
                int32_t objC1 = 0;
                objC1 = *(*(Level_LoadObjects_5() + srcS2) + 0x1c);
                uint32_t valA3 = Level_LoadObjects_3();
                int32_t* v_30 = &v_20;
                ((int(*)())(uintptr_t)(*(((objC1 + valA3 * 0x180) << 2) + &g_a96ae0)))(
                    *(Level_LoadObjects_5() + srcS2), v_30);
                i += 1;
                srcS2 += 4;
                result = Level_LoadObjects_5();
            } while (i < *result);
        }
    }

    return result;
}
