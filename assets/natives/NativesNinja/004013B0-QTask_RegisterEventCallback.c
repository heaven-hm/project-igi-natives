#include "004013B0-QTask_RegisterEventCallback.h"
/* 0x004013b0 QTask_RegisterEventCallback full linked: callers=1 callees=2 */
int32_t* QTask_RegisterEventCallback(void* a1, int16_t a2, int32_t a3)

{
    int32_t* result = QTask_LinkEventHandler(a1, a2);

    if (a1)
        sub_4af910(a1 + 8, result);

    int32_t ecx = 0;
    ecx = result[7];
    int32_t eax = *((ecx << 2) + &g_a96ae0);

    if (eax)
        eax(result, a3);

    return result;
}
