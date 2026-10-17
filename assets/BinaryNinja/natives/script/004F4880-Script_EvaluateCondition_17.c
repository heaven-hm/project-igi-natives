// Original IGI.EXE function: Script_EvaluateCondition_17 (VA 0x004F4880; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_17.h"
int32_t* Script_EvaluateCondition_17(int32_t context, int32_t* param_2, int32_t* param_3, int32_t* param_4, float param_5)

{
    int32_t* result = Physics_CalculateSplineLength_7();
    int32_t* result_1 = param_3;

    while (result_1[7] == result)
    {
        *(context + (*param_2 << 3)) = result_1;
        *(context + (*param_2 << 3) + 4) = *param_4;
        *param_4 = param_5 * result_1[0xe] + *param_4;
        *param_2 += 1;
        int32_t* data_2 = QTask_DeleteTask_2(result_1, Physics_CalculateSplineLength_7());

        if (data_2)
            Script_EvaluateCondition_17(context, param_2, data_2, param_4, param_5);

        result = QTask_TriggerEvent_2(result_1, Physics_CalculateSplineLength_7());
        param_3 = result;

        if (!result)
            break;

        result_1 = result;
        result = Physics_CalculateSplineLength_7();
    }

    return result;
}
