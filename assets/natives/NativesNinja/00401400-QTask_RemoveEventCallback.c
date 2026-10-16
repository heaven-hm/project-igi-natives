#include "00401400-QTask_RemoveEventCallback.h"
/* 0x00401400 QTask_RemoveEventCallback full linked: callers=1000 callees=2 */
int32_t QTask_RemoveEventCallback(int16_t a1, int32_t a2, int32_t a3)

{
    int32_t ecx = g_567c6c + 1;
    g_536148 += 1;
    uint32_t esi_3 = a2 * 0x180;
    g_567c6c = ecx;
    uint32_t eax_4 = a1 + esi_3;
    *((eax_4 << 2) + &g_a96ae0) = a3;
    *(eax_4 + 0x54ff34) = ecx == 1;
    int32_t ebx = 0;

    for (int16_t* i = &g_af5ee8; i < 0xafa6e8; )
    {
        if (*(i + 0x1d) && *i == a1 && !*(esi_3 + ebx + 0x54ff34))
            QTask_RemoveEventCallback(ebx, a2, a3);

        i = &i[0x18];
        ebx += 1;
    }

    QTask_DeleteTask();
    int32_t result = g_567c6c - 1;
    g_567c6c = result;
    return result;
}
