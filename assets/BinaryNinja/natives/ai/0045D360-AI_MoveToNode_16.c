#include "AI_MoveToNode_16.h"
int32_t* AI_MoveToNode_16(int32_t* a1)

{
    int32_t* ctxB = a1;
    int32_t* result = Table_GetAt(&ctxB[0x131], 0);

    if (!result)
    {
        int32_t srcS1 = 0;
        result = HumanPlayer_UpdateAnimation_10();
        int32_t* dstD2 = result + 1;

        if (result != 0xffffffff)
        {
            a1 = dstD2;
            bool cond_0_1;

            do
            {
                srcS1 += 1;

                if (srcS1 >= dstD2)
                    srcS1 = 0;

                int32_t* valA = HumanPlayer_UpdateMotion_11(ctxB, srcS1);

                if (valA)
                    Script_ExecuteLevelScript_12(&ctxB[0x131], nullptr, valA);

                result = a1 - 1;
                cond_0_1 = a1 != 1;
                a1 = result;
            } while (cond_0_1);
        }
    }

    return result;
}
