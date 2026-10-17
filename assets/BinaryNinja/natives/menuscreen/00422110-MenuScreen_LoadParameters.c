// Original IGI.EXE function: MenuScreen_LoadParameters (VA 0x00422110; static CFG gate PASS, CFG score 1.000).
#include "MenuScreen_LoadParameters.h"
int32_t MenuScreen_LoadParameters(void* context)

{
    int32_t data_val = *(context + 0x44);

    if (data_val)
    {
        void* data_1 = Menu_RequestScreen_4(data_val);

        if (data_1)
        {
            if (*(data_1 + 4) && Script_FormatString_6(context + 0xac))
                Script_SpawnNewTask_7(context + 0xac, context);

            *(data_1 + 4) = 0;
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(context);
}
