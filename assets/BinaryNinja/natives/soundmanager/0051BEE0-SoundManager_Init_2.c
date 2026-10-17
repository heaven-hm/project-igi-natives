// Original IGI.EXE function: SoundManager_Init_2 (VA 0x0051BEE0; static CFG gate PASS, CFG score 1.000).
#include "SoundManager_Init_2.h"

int32_t SoundManager_Init_2(void* pThis, char* param)

{
    if (!param || !*param)
    {
        int32_t* i = *(pThis + 8);

        if (*i && i)
        {
            int32_t afa7e0_1 = g_afa7e0;

            do
            {
                int32_t* scratch_val_1 = *i;
                void* result_val_3;

                if (!scratch_val_1)
                    result_val_3 = nullptr;
                else
                {
                    int32_t result_val = *scratch_val_1;
                    int32_t result_val_1 = -(result_val);
                    result_val_3 = (result_val_1 - result_val_1) & scratch_val_1;
                }

                *((afa7e0_1 << 2) + &g_afa6e0) = result_val_3;
                g_afa7e0 = afa7e0_1 + 1;
                uint32_t result_val_5 = Script_ParseEnumReal32_8();
                int32_t counter_val_2 = 0;
                counter_val_2 = i[7];
                int32_t result_val_9 = *(((result_val_5 * 0x180 + counter_val_2) << 2) + &g_a96ae0);

                if (result_val_9)
                    result_val_9(i, 0);

                afa7e0_1 = g_afa7e0 - 1;
                g_afa7e0 = afa7e0_1;
                i = *((afa7e0_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    Script_Isexists(pThis + 0x6c, pThis);
    Script_Isexists(pThis + 0xbc, pThis);
    return 0;
}
