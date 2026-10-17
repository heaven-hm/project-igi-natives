// Original IGI.EXE function: AI_AlertAllies_2 (VA 0x004512A0; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_2.h"
int32_t* AI_AlertAllies_2(int32_t* a1, void* a2, char a3)

{
    int32_t tmpD = a1[0x4a];

    if (tmpD == 1)
    {
        a1[0x4a] = 0;
        return AI_MoveToNode_2(a1);
    }

    int32_t objC = 0;

    if (tmpD > 0)
    {
        int32_t* srcS1 = &a1[4];

        while (*srcS1 != *(a2 + 0x14))
        {
            objC += 1;
            srcS1 = &srcS1[1];

            if (objC >= tmpD)
                return a1;
        }

        a1[0x4a] = tmpD - 1;
        a1[objC + 4] = a1[tmpD + 3];
        a1[objC + 0x24] = a1[a1[0x4a] + 0x24];

        if (a3)
            a1[0x4b] += 1;
    }

    return a1;
}
