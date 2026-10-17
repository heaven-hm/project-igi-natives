// Original IGI.EXE function: TextBox_LoadParameters (VA 0x0041AE20; static CFG gate PASS, CFG score 1.000).
#include "TextBox_LoadParameters.h"
int32_t TextBox_LoadParameters(long double context , void* param_2)

{
    if (Script_FormatString_6(param_2 + 0x21f4))
    {
        Script_SpawnNewTask_7(param_2 + 0x21f4, param_2);
        int32_t entity_1 = *(param_2 + 0x21a0);
        int32_t data_1 = 0;

        if (entity_1 > 0)
        {
            int32_t* temp_1 = param_2 + 0x19c;

            do
            {
                if (context == *temp_1)
                {
                    *(param_2 + 0x219c) = data_1;
                    break;
                }

                data_1 += 1;
                temp_1 = &temp_1[0x42];
            } while (data_1 < entity_1);
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(param_2);
}
