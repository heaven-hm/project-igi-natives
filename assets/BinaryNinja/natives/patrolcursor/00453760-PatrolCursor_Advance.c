// Original IGI.EXE function: PatrolCursor_Advance (VA 0x00453760; static CFG gate PASS, CFG score 1.000).
#include "PatrolCursor_Advance.h"
int32_t* PatrolCursor_Advance(int32_t* context)

{
    int32_t* result = PatrolPath_OnTick(context);

    if (result)
    {
        int32_t data_1 = PatrolPathCommand_Process(result);

        if (data_1 == 6)
        {
            if (result == context[2])
                return 0;

            context[1] = result;
            context[2] = result;
            int32_t* result_1 = PatrolPath_OnTick(context);

            if (result_1 == result || !result_1)
                return 0;

            result = result_1;
            data_1 = PatrolPathCommand_Process(result_1);
        }

        if (data_1 >= 2)
        {
            if (data_1 <= 3)
            {
                int32_t data_3 = context[3];
                context[3] = result;
                context[4] = data_3;
            }
            else if (data_1 == 6)
            {
                Error_Show("END command following END command");

                while (true)
                    /* nop */
            }
        }

        context[1] = result;
    }

    return result;
}
