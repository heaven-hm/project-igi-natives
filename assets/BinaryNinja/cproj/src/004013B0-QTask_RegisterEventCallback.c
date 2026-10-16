#include "gi_platform.h"
#include "004013B0-QTask_RegisterEventCallback.h"
int32_t* QTask_RegisterEventCallback(void* a1, int16_t a2, int32_t a3)

{
    int32_t* result = QTask_LinkEventHandler(a1, a2);

    if (a1)
        Camera_ApplyLineFilter_33(a1 + 8, result);

    int32_t objC = 0;
    objC = result[7];
    int32_t valA = *((objC << 2) + &g_a96ae0);

    if (valA)
        valA(result, a3);

    return result;
}
