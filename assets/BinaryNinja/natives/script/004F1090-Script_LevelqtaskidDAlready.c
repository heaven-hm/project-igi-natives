// Original IGI.EXE function: Script_LevelqtaskidDAlready (VA 0x004F1090; static CFG gate PASS, CFG score 1.000).
#include "Script_LevelqtaskidDAlready.h"
int32_t* Script_LevelqtaskidDAlready(int32_t context, void* param_2)

{
    int32_t* data_val = *((context << 2) + &g_a71890);

    if (data_val)
    {
        if (!*data_val)
            Qtask_UpdateList(data_val);
        else
        {
            int32_t item_8_1 = context;
            Error_Show("LevelQTaskID %d already defined");

            while (true)
                /* nop */
        }
    }

    int32_t* result = QTask_LinkEventHandler_2(param_2);
    *((context << 2) + &g_a71890) = result;
    return result;
}
