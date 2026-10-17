// Original IGI.EXE function: ComputerHilight_Setup (VA 0x004687A0; static CFG gate PASS, CFG score 1.000).
#include "ComputerHilight_Setup.h"
int32_t ComputerHilight_Setup(long double context , int32_t* param_2, void* param_3)

{
    int32_t* dest_val = param_2;
    Script_SpawnNewTask_7(&dest_val[0xe], dest_val);
    int32_t result = context;

    if (result)
    {
        int32_t flagP1 = 0;
        *(param_3 + 0x18) = dest_val[0xa4];
        *(param_3 + 0x1c) = dest_val[0xad];
        *(param_3 + 0x20) = dest_val[0xb6];
        *(param_3 + 0x24) = &dest_val[0xb7];
        *(param_3 + 0x28) = &dest_val[0xf7];
        result = dest_val[0x63];

        if (result > 0)
        {
            param_2 = &dest_val[0x64];

            do
            {
                void* data_3 = Script_ExecuteLevelScript_4(*param_2);

                if (data_3)
                {
                    uint32_t data_5 = AI_CheckHearing_25();
                    int32_t entity_4 = 0;
                    entity_4 = *(data_3 + 0x1c);
                    int32_t data_9 = *(((data_5 * 0x180 + entity_4) << 2) + &g_a96ae0);

                    if (data_9)
                        data_9(data_3, param_3);
                }

                result = dest_val[0x63];
                flagP1 += 1;
                param_2 = &param_2[1];
            } while (flagP1 < result);
        }
    }

    return result;
}
