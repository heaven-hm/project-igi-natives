// Original IGI.EXE function: Physics_EvaluateAreaCriteria_11 (VA 0x0050A620; static CFG gate PASS, CFG score 1.000).
#include "Physics_EvaluateAreaCriteria_11.h"
long double Physics_EvaluateAreaCriteria_11(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t i_1 = param_2 * param_3;
    int32_t entity_2 = i_1 * 0xff;
    param_2 = entity_2;

    if (i_1 > 0)
    {
        int32_t* temp_1 = context;
        int32_t i;

        do
        {
            int32_t source_1 = *temp_1;
            temp_1 = &temp_1[1];
            entity_2 -= source_1 >> 0x18;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    int32_t item_4 = 0;
    return entity_2 / param_2;
}
