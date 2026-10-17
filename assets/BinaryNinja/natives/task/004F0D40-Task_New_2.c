// Original IGI.EXE function: Task_New_2 (VA 0x004F0D40; static CFG gate PASS, CFG score 1.000).
#include "Task_New_2.h"
int32_t Task_New_2(int32_t context, int32_t param_2, int32_t param_3, void* param_4, int32_t param_5)

{
    int32_t item_4 = param_3;

    for (int32_t* i = &g_a71890; i < &g_a75890; i = &i[1])
    {
        int32_t* data_val = *i;

        if (data_val)
        {
            Qtask_UpdateList(data_val);
            *i = 0;
        }
    }

    Script_SetSymbolContext("Task_New", g_a758a4);
    int32_t* data_2 = Qvm_Load(param_4);

    if (data_2)
    {
        Script_Init(param_4, 1, 0, 0);
        Qvm_Execute(data_2);
        Qvm_Cleanup(data_2);
        *(&item_4 + 3) = 1;
        int32_t data_3 = Script_ParseEnumReal32_8();
        QTask_ProcessQueue_2(g_a758a4, data_3, (&item_4 + 3));
        *(g_a758a4 + 0x24) = 0;
        *(g_a758a4 + 0x28) = 0;
        *(g_a758a4 + 0x2c) = param_5;
        int32_t result = 0x3e8 / param_5;
        *(g_a758a4 + 0x30) = result;
        return result;
    }

    void* item_10_2 = param_4;
    Error_Show("Level_Load(): Couldn't load script: %s");

    while (true)
        /* nop */
}
