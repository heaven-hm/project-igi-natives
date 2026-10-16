#include "004F4880-Script_EvaluateCondition_17.h"
/* 0x004f4880 Script_EvaluateCondition_17 full linked: callers=2 callees=7 */
int32_t* sub_4f4880(int32_t a1, int32_t* a2, int32_t* a3, int32_t* a4, float a5)

{
    int32_t* result = sub_508610();
    int32_t* result_1 = a3;

    while (result_1[7] == result)
    {
        *(a1 + (*a2 << 3)) = result_1;
        *(a1 + (*a2 << 3) + 4) = *a4;
        *a4 = a5 * result_1[0xe] + *a4;
        *a2 += 1;
        int32_t* eax_2 = QTask_DeleteTask_2(result_1, sub_508610());

        if (eax_2)
            sub_4f4880(a1, a2, eax_2, a4, a5);

        result = QTask_TriggerEvent_2(result_1, sub_508610());
        a3 = result;

        if (!result)
            break;

        result_1 = result;
        result = sub_508610();
    }

    return result;
}
