// Original IGI.EXE function: AI_UpdatePatrol_25 (VA 0x00467900; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_25.h"
int32_t AI_UpdatePatrol_25(int32_t* context)

{
    int32_t dest_val = 0;
    int32_t result = context[1];

    if (result > 0)
    {
        do
        {
            int32_t data_val = *context;

            if (*(data_val + (dest_val << 3)) == 4)
            {
                void* source_1 = *(data_val + (dest_val << 3) + 4);
                uint32_t data_3 = AI_MoveToNode_25();
                int32_t temp_1 = 0;
                temp_1 = *(source_1 + 0x1c);
                int32_t data_4 = *(((data_3 * 0x180 + temp_1) << 2) + &g_a96ae0);

                if (data_4)
                    data_4(source_1, 0);
            }

            result = context[1];
            dest_val += 1;
        } while (dest_val < result);
    }

    return result;
}
