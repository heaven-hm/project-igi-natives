#include "0044FE50-Env_TriggerAlarm_13.h"
/* 0x0044fe50 Env_TriggerAlarm_13 full linked: callers=2 callees=4 */
int32_t sub_44fe50(void* a1, void** a2)

{
    sub_4af960(a2);
    int32_t* eax = a2[0xb];

    if (eax)
    {
        Qtask_UpdateList(eax);
        a2[0xb] = 0;
    }

    int32_t* eax_1 = a2[0xa];

    if (eax_1)
    {
        Qtask_UpdateList(eax_1);
        a2[0xa] = 0;
    }

    a2[1] = 0;
    *a2 = nullptr;
    sub_4af8f0(a1 + 0x810, a2);
    int32_t result = *(a1 + 0x8e0) - 1;
    *(a1 + 0x8e0) = result;
    return result;
}
