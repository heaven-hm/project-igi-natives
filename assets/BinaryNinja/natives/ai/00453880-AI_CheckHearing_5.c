// Original IGI.EXE function: AI_CheckHearing_5 (VA 0x00453880; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_5.h"
int32_t* AI_CheckHearing_5(int32_t* a1, int32_t a2)

{
    int32_t* valA1 = *(*a1 + 8);
    int32_t srcS = *valA1;
    int32_t srcS1 = -(srcS);
    int32_t dstD = 0;
    int32_t* result = (srcS1 - srcS1) & valA1;

    if (result)
    {
        while (dstD < a2)
        {
            int32_t valA2 = PatrolPathCommand_Process(result);

            if (valA2 >= 2)
            {
                if (valA2 <= 3)
                    a1[3] = result;
                else if (valA2 == 6)
                    a1[2] = result;
            }

            int32_t* valA3 = *result;

            if (!valA3)
                result = nullptr;
            else
            {
                int32_t srcS3 = *valA3;
                int32_t srcS4 = -(srcS3);
                result = (srcS4 - srcS4) & valA3;
            }

            dstD += 1;

            if (!result)
                break;
        }
    }

    return result;
}
