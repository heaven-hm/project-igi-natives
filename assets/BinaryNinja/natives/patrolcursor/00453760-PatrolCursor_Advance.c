#include "PatrolCursor_Advance.h"
int32_t* PatrolCursor_Advance(int32_t* a1)

{
    int32_t* result = PatrolPath_OnTick(a1);

    if (result)
    {
        int32_t valA1 = PatrolPathCommand_Process(result);

        if (valA1 == 6)
        {
            if (result == a1[2])
                return 0;

            a1[1] = result;
            a1[2] = result;
            int32_t* result_1 = PatrolPath_OnTick(a1);

            if (result_1 == result || !result_1)
                return 0;

            result = result_1;
            valA1 = PatrolPathCommand_Process(result_1);
        }

        if (valA1 >= 2)
        {
            if (valA1 <= 3)
            {
                int32_t valA3 = a1[3];
                a1[3] = result;
                a1[4] = valA3;
            }
            else if (valA1 == 6)
            {
                Error_Show("END command following END command");

                while (true)
                    /* nop */
            }
        }

        a1[1] = result;
    }

    return result;
}
