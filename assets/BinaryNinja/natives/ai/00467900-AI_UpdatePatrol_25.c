// Original IGI.EXE function: AI_UpdatePatrol_25 (VA 0x00467900; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_25.h"
int32_t AI_UpdatePatrol_25(int32_t* a1)

{
    int32_t dstD = 0;
    int32_t result = a1[1];

    if (result > 0)
    {
        do
        {
            int32_t valA = *a1;

            if (*(valA + (dstD << 3)) == 4)
            {
                void* srcS1 = *(valA + (dstD << 3) + 4);
                uint32_t valA3 = AI_MoveToNode_25();
                int32_t tmpD1 = 0;
                tmpD1 = *(srcS1 + 0x1c);
                int32_t valA4 = *(((valA3 * 0x180 + tmpD1) << 2) + &g_a96ae0);

                if (valA4)
                    valA4(srcS1, 0);
            }

            result = a1[1];
            dstD += 1;
        } while (dstD < result);
    }

    return result;
}
