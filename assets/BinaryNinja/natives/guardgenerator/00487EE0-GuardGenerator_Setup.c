// Original IGI.EXE function: GuardGenerator_Setup (VA 0x00487EE0; static CFG gate PASS, CFG score 1.000).
#include "GuardGenerator_Setup.h"
int32_t* GuardGenerator_Setup(long double context , void* param_2)

{
    if (Script_FormatString_6(param_2 + 0x20))
    {
        Script_SpawnNewTask_7(param_2 + 0x20, param_2);
        *(param_2 + 0x70) = context;
    }

    int32_t* result;

    if (!*(param_2 + 0x70))
    {
        result = *(param_2 + 8);

        if (!*result || !result)
            *(param_2 + 0x72) = 0;
    }
    else
    {
        result = *(param_2 + 0x78);

        if (*(param_2 + 0x74) < result)
        {
            int32_t* dest_1 = *(param_2 + 8);

            if (!*dest_1 || !dest_1)
            {
                FX_TrailUpdate_9(param_2);
                result = *(param_2 + 0x74) + 1;
                *(param_2 + 0x72) = 1;
                *(param_2 + 0x74) = result;
            }
            else
            {
                result = AI_FireWeapon_19(dest_1);

                if (result)
                {
                    result = AI_TakeCover_19(dest_1);

                    if (!result)
                    {
                        int32_t* entity_2 = *(param_2 + 8);
                        int32_t data_4 = *entity_2;
                        int32_t data_5 = -(data_4);
                        QTask_FindType((data_5 - data_5) & entity_2);
                        FX_TrailUpdate_9(param_2);
                        result = *(param_2 + 0x74) + 1;
                        *(param_2 + 0x72) = 1;
                        *(param_2 + 0x74) = result;
                    }
                }
            }
        }
    }

    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_13;

            if (!source_1)
                data_13 = nullptr;
            else
            {
                int32_t data_10 = *source_1;
                int32_t data_11 = -(data_10);
                data_13 = (data_11 - data_11) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_13;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_14 = 0;
            g_afa7e0 = temp_2;
            data_14 = i[7];
            result = *((data_14 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    return result;
}
