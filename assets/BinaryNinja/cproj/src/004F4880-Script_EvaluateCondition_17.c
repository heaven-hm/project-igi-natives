#include "gi_platform.h"
#include "004F4880-Script_EvaluateCondition_17.h"
int32_t* Script_EvaluateCondition_17(int32_t a1, int32_t* a2, int32_t* a3, int32_t* a4, float a5)

{
    int32_t* result = Physics_CalculateSplineLength_7();
    int32_t* result_1 = a3;

    while (result_1[7] == result)
    {
        (*(int32_t*)(uintptr_t)(a1 + (*a2 << 3))) = result_1;
        (*(int32_t*)(uintptr_t)(a1 + (*a2 << 3) + 4)) = *a4;
        *a4 = a5 * result_1[0xe] + *a4;
        *a2 += 1;
        int32_t* valA2 = QTask_DeleteTask_2(result_1, Physics_CalculateSplineLength_7());

        if (valA2)
            Script_EvaluateCondition_17(a1, a2, valA2, a4, a5);

        result = QTask_TriggerEvent_2(result_1, Physics_CalculateSplineLength_7());
        a3 = result;

        if (!result)
            break;

        result_1 = result;
        result = Physics_CalculateSplineLength_7();
    }

    return result;
}
