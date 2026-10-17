// Original IGI.EXE function: AI_MoveToNode_16 (VA 0x0045D360; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_16.h"
int32_t* AI_MoveToNode_16(int32_t* context)

{
    int32_t* context_val = context;
    int32_t* result = Table_GetAt(&context_val[0x131], 0);

    if (!result)
    {
        int32_t source_1 = 0;
        result = HumanPlayer_UpdateAnimation_10();
        int32_t* dest_2 = result + 1;

        if (result != 0xffffffff)
        {
            context = dest_2;
            bool flag_0_1;

            do
            {
                source_1 += 1;

                if (source_1 >= dest_2)
                    source_1 = 0;

                int32_t* data_val = HumanPlayer_UpdateMotion_11(context_val, source_1);

                if (data_val)
                    Script_ExecuteLevelScript_12(&context_val[0x131], nullptr, data_val);

                result = context - 1;
                flag_0_1 = context != 1;
                context = result;
            } while (flag_0_1);
        }
    }

    return result;
}
