// Original IGI.EXE function: Level_CheckQTaskID_6 (VA 0x00416EF0; static CFG gate PASS, CFG score 1.000).
#include "Level_CheckQTaskID_6.h"
void* Level_CheckQTaskID_6(void* a1)

{
    void* result = a1;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            int32_t* valA = *i;
            int32_t* i_1 = i;

            if (!valA)
                i = nullptr;
            else
            {
                int32_t srcS = *valA;
                int32_t srcS1 = -(srcS);
                i = (srcS1 - srcS1) & valA;
            }

            int16_t valA1 = Script_ExecuteLevelScript_21();

            if (i_1[7] != valA1)
                result = Level_CheckQTaskID_6(i_1);
            else
                result = QTask_FindType(i_1);
        } while (i);
    }

    return result;
}
