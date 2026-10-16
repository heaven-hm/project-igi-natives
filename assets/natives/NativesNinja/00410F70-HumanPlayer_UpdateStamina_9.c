#include "00410F70-HumanPlayer_UpdateStamina_9.h"
/* 0x00410f70 HumanPlayer_UpdateStamina_9 full linked: callers=1 callees=7 */
int32_t* HumanPlayer_UpdateStamina_9(void* a1)

{
    int32_t* result = sub_463170(a1);

    if (!result)
    {
        void* var_20 = a1;
        void var_18;
        memcpy(&var_18, a1 + 0x20, 0x18);
        int32_t i = 0;
        result = Level_LoadObjects_5();

        if (*result > 0)
        {
            int32_t esi_2 = 8;

            do
            {
                int32_t ecx_1 = 0;
                ecx_1 = *(*(Level_LoadObjects_5() + esi_2) + 0x1c);
                uint32_t eax_3 = Level_LoadObjects_3();
                int32_t* var_30 = &var_20;
                (*(((ecx_1 + eax_3 * 0x180) << 2) + &g_a96ae0))(
                    *(Level_LoadObjects_5() + esi_2), var_30);
                i += 1;
                esi_2 += 4;
                result = Level_LoadObjects_5();
            } while (i < *result);
        }
    }

    return result;
}
