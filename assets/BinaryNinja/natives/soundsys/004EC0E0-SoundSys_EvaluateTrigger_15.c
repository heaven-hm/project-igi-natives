// Original IGI.EXE function: SoundSys_EvaluateTrigger_15 (VA 0x004EC0E0; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_EvaluateTrigger_15.h"
int32_t SoundSys_EvaluateTrigger_15(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t temp_3 = g_a5ef84;
    int32_t result = 0;

    if (temp_3 <= 0)
        return result;

    int32_t* entity_1 = &g_a5ec80;

    do
    {
        if (*entity_1 == context)
        {
            int32_t data_1 = result * 0xc;
            int32_t item_c = param_2;
            int32_t item_4_1 = param_3;
            int32_t item_8_1 = *(data_1 + &g_a5ec88);
            int32_t temp_1 = 0;
            temp_1 = *(data_1 + 0xa5ec84);
            return (*(((temp_1 + *g_54db80 * 0x180) << 2) + &g_a96ae0))(0, &item_c);
        }

        result += 1;
        entity_1 = &entity_1[3];
    } while (result < temp_3);

    return result;
}
