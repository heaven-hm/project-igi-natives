// Original IGI.EXE function: Script_FormatString_14 (VA 0x004F3EF0; static CFG gate PASS, CFG score 0.889).
#include "Script_FormatString_14.h"
void* const Script_FormatString_14(int32_t context, int32_t param_2)

{
    void* const data_1;

    if (param_2)
        data_1 = *(context + 0x20154);

    if (!param_2 || param_2 < data_1)
    {
        data_1 = nullptr;
        memset(context + 0x6c, 0, 0x88);
        *(context + 0x20154) = 0;

        if (param_2 >= 0)
        {
            int32_t i_1 = param_2 + 1;
            int32_t i;

            do
            {
                data_1 = Script_SpawnNewTask_15(context);
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }
    else if (param_2 > data_1)
    {
        int32_t entity_2;

        do
        {
            Script_SpawnNewTask_15(context);
            entity_2 = *(context + 0x20154) + 1;
            *(context + 0x20154) = entity_2;
        } while (param_2 > entity_2);

        return entity_2;
    }

    return data_1;
}
