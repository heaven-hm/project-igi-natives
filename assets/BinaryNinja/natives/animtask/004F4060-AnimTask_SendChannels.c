// Original IGI.EXE function: AnimTask_SendChannels (VA 0x004F4060; static CFG gate PASS, CFG score 1.000).
#include "AnimTask_SendChannels.h"
void* AnimTask_SendChannels(void* context)

{
    void* result = Script_ExecuteLevelScript_4(*(context + 0x2014c));
    void* result_1 = result;

    if (result_1)
    {
        int32_t item_8 = *(context + 0x20154);
        void* item_4_1 = context + 0x6c;
        uint32_t data_2 = Script_ParseEnumReal32_15();
        int32_t data_3 = 0;
        data_3 = *(result_1 + 0x1c);
        result = *(((data_2 * 0x180 + data_3) << 2) + &g_a96ae0);

        if (result)
            return result(result_1, &item_8);
    }

    return result;
}
