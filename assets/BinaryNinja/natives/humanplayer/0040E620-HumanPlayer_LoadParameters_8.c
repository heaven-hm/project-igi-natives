// Original IGI.EXE function: HumanPlayer_LoadParameters_8 (VA 0x0040E620; static CFG gate PASS, CFG score 0.944).
#include "HumanPlayer_LoadParameters_8.h"
char HumanPlayer_LoadParameters_8(void* context, float param_2)

{
    FallLanding(param_2);
    char result = *(context + 8);

    if (result & 4)
    {
        memset(param_2 + 0x664, 0, 0x18);

        if (result & 1)
        {
            void* data_val = Table_GetAt(param_2 + 0x4c4, 0);

            if (data_val)
            {
                Script_ParseEnumInt32_13(data_val);
                Script_ExecuteLevelScript_12(param_2 + 0x4c4, nullptr, nullptr);
                void* entity_1 = *(param_2 + 0xcfc);
                *(param_2 + 0xd04) = *(param_2 + 0xd08);
                *(param_2 + 0xd08) = 1;
                int32_t data_2 = *(entity_1 + 4);
                *(param_2 + 0xd0c) = data_2;
                data_2(param_2 + 0xcf8, param_2);
            }

            result = Script_EvaluateCondition_12(param_2);
            *(context + 0x14) = sub_45c740;
        }
    }

    return result;
}
