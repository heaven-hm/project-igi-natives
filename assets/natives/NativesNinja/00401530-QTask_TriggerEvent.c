#include "00401530-QTask_TriggerEvent.h"
/* 0x00401530 QTask_TriggerEvent full linked: callers=623 callees=2 */
int32_t QTask_TriggerEvent(int16_t a1, int32_t a2, int32_t a3)

{
    int32_t ecx = g_567c70 + 1;
    g_536148 += 1;
    g_567c70 = ecx;
    int32_t esi_1 = a2 * 0x180;
    int32_t eax_2 = a1 + esi_1;
    *((eax_2 << 2) + &g_a96ae0) = a3;
    *(eax_2 + 0x54ff34) = ecx == 1;
    int32_t ebx = 0;

    for (int16_t* i = &g_af5ee8; i < 0xafa6e8; )
    {
        if (*(i + 0x1d) && *i == a1 && !*(esi_1 + ebx + 0x54ff34))
            QTask_TriggerEvent(ebx, a2, a3);

        i = &i[0x18];
        ebx += 1;
    }

    QTask_DeleteTask();
    int32_t result = g_567c70 - 1;
    g_567c70 = result;
    return result;
}
