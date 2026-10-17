// Original IGI.EXE function: Level_CheckQTaskID_6 (VA 0x00416EF0; static CFG gate PASS, CFG score 1.000).
#include "Level_CheckQTaskID_6.h"
void* Level_CheckQTaskID_6(void* context)

{
    void* result = context;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            int32_t* data_val = *i;
            int32_t* i_1 = i;

            if (!data_val)
                i = nullptr;
            else
            {
                int32_t source_val = *data_val;
                int32_t source_1 = -(source_val);
                i = (source_1 - source_1) & data_val;
            }

            int16_t data_1 = Script_ExecuteLevelScript_21();

            if (i_1[7] != data_1)
                result = Level_CheckQTaskID_6(i_1);
            else
                result = QTask_FindType(i_1);
        } while (i);
    }

    return result;
}
