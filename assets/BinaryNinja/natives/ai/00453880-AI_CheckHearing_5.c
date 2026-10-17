// Original IGI.EXE function: AI_CheckHearing_5 (VA 0x00453880; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_5.h"
int32_t* AI_CheckHearing_5(int32_t* context, int32_t param_2)

{
    int32_t* data_1 = *(*context + 8);
    int32_t source_val = *data_1;
    int32_t source_1 = -(source_val);
    int32_t dest_val = 0;
    int32_t* result = (source_1 - source_1) & data_1;

    if (result)
    {
        while (dest_val < param_2)
        {
            int32_t data_2 = PatrolPathCommand_Process(result);

            if (data_2 >= 2)
            {
                if (data_2 <= 3)
                    context[3] = result;
                else if (data_2 == 6)
                    context[2] = result;
            }

            int32_t* data_3 = *result;

            if (!data_3)
                result = nullptr;
            else
            {
                int32_t source_3 = *data_3;
                int32_t source_4 = -(source_3);
                result = (source_4 - source_4) & data_3;
            }

            dest_val += 1;

            if (!result)
                break;
        }
    }

    return result;
}
