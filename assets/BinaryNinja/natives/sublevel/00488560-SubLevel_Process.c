// Original IGI.EXE function: SubLevel_Process (VA 0x00488560; static CFG gate PASS, CFG score 1.000).
#include "SubLevel_Process.h"

void* SubLevel_Process(void* pThis, int32_t param)

{
    void* result = pThis;

    if (*(result + 0x72))
    {
        int32_t* i = *(result + 8);

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
                uint32_t result_val_5 = AI_CheckHearing_25();
                int32_t counter_val_2 = 0;
                counter_val_2 = i[7];
                result = *(((result_val_5 * 0x180 + counter_val_2) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, param);

                afa7e0_1 = g_afa7e0 - 1;
                g_afa7e0 = afa7e0_1;
                i = *((afa7e0_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
