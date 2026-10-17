// Original IGI.EXE function: EditCamera_Init_2 (VA 0x004DE970; static CFG gate PASS, CFG score 1.000).
#include "EditCamera_Init_2.h"

int32_t EditCamera_Init_2(void* pThis, int32_t param)

{
    void* result_val = *(pThis + 0xe8);
    int32_t afa7e0_1;

    if (!result_val)
        afa7e0_1 = g_afa7e0;
    else
    {
        int32_t* i_2 = *(result_val + 8);

        if (!*i_2)
            afa7e0_1 = g_afa7e0;
        else
        {
            int32_t* i = i_2;

            if (!i)
                afa7e0_1 = g_afa7e0;
            else
            {
                afa7e0_1 = g_afa7e0;

                do
                {
                    int32_t* scratch_val_1 = *i;
                    void* counter_val_4;

                    if (!scratch_val_1)
                        counter_val_4 = nullptr;
                    else
                    {
                        int32_t counter_val_1 = *scratch_val_1;
                        int32_t counter_val_2 = -(counter_val_1);
                        counter_val_4 = (counter_val_2 - counter_val_2) & scratch_val_1;
                    }

                    *((afa7e0_1 << 2) + &g_afa6e0) = counter_val_4;
                    g_afa7e0 = afa7e0_1 + 1;
                    uint32_t result_val_3 = DynObj_UpdateDynTree_12();
                    int32_t counter_val_5 = 0;
                    counter_val_5 = i[7];
                    int32_t result_val_7 = *(((result_val_3 * 0x180 + counter_val_5) << 2) + &g_a96ae0);

                    if (result_val_7)
                        result_val_7(i, param);

                    afa7e0_1 = g_afa7e0 - 1;
                    g_afa7e0 = afa7e0_1;
                    i = *((afa7e0_1 << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    void* counter_val_6 = *(pThis + 0x148);

    if (counter_val_6)
    {
        int32_t* i_1 = *(counter_val_6 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* scratch_val_2 = *i_1;
                void* counter_val_10;

                if (!scratch_val_2)
                    counter_val_10 = nullptr;
                else
                {
                    int32_t counter_val_7 = *scratch_val_2;
                    int32_t counter_val_8 = -(counter_val_7);
                    counter_val_10 = (counter_val_8 - counter_val_8) & scratch_val_2;
                }

                *((afa7e0_1 << 2) + &g_afa6e0) = counter_val_10;
                g_afa7e0 = afa7e0_1 + 1;
                uint32_t result_val_11 = DynObj_UpdateDynTree_12();
                int32_t result_val_12 = 0;
                result_val_12 = i_1[7];
                int32_t result_val_13 = *(((result_val_11 * 0x180 + result_val_12) << 2) + &g_a96ae0);

                if (result_val_13)
                    result_val_13(i_1, param);

                afa7e0_1 = g_afa7e0 - 1;
                g_afa7e0 = afa7e0_1;
                i_1 = *((afa7e0_1 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return afa7e0_1;
}
