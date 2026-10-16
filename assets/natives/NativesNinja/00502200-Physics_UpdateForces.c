#include "00502200-Physics_UpdateForces.h"
/* 0x00502200 Physics_UpdateForces full linked: callers=2 callees=4 */
int32_t* sub_502200(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* result = QTask_DeleteTask_2(sub_4f1030(a2), g_a7a620);
    int32_t i_1 = a3;

    if (i_1)
    {
        int32_t i;

        do
        {
            result = QTask_TriggerEvent_2(result, g_a7a620);
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    memcpy(a1, &result[0x3e], 0x18);
    return result;
}
