// Original IGI.EXE function: Script_ExecuteLevelScript_14 (VA 0x004F3D30; static CFG gate FAIL, CFG score 0.833).
#include "Script_ExecuteLevelScript_14.h"
int32_t Script_ExecuteLevelScript_14(void* context, int32_t* param_2)

{
    int32_t* item_28 = *(context + 0x2014c);
    void* data_1 = Script_ExecuteLevelScript_4(item_28);
    int32_t result = *param_2;
    int32_t item_14;
    memcpy(&item_14, param_2, 0x14);
    item_14 = result + 0xe8;
    memcpy(result, context + 0x6c, 0xe8);

    if (data_1)
    {
        uint32_t data_3 = Script_FormatString_15();
        int32_t data_4 = 0;
        data_4 = *(data_1 + 0x1c);
        result = *(((data_3 * 0x180 + data_4) << 2) + &g_a96ae0);

        if (result)
        {
            item_28 = &item_14;
            return result(data_1, item_28);
        }
    }

    return result;
}
