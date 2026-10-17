// Original IGI.EXE function: Script_EvaluateCondition_6 (VA 0x004F13C0; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_6.h"
int32_t Script_EvaluateCondition_6(void* a1, void* a2)

{
    int32_t result = 0;
    int32_t objC = *(a1 + 0x4c);

    if (objC > 0)
    {
        int32_t* tmpD1 = a1 + 0xc;

        do
        {
            if (**tmpD1 == a2)
                return result;

            result += 1;
            tmpD1 = &tmpD1[1];
        } while (result < objC);
    }

    *(a1 + (*(a1 + 0x4c) << 2) + 0xc) = QTask_LinkEventHandler_2(a2);
    result = *(a1 + 0x4c) + 1;
    *(a1 + 0x4c) = result;
    return result;
}
