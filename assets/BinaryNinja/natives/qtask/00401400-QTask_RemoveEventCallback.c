#include "QTask_RemoveEventCallback.h"
int32_t QTask_RemoveEventCallback(int16_t a1, int32_t a2, int32_t a3)

{
    int32_t objC = g_567c6c + 1;
    g_536148 += 1;
    uint32_t srcS3 = a2 * 0x180;
    g_567c6c = objC;
    uint32_t valA4 = a1 + srcS3;
    *((valA4 << 2) + &g_a96ae0) = a3;
    *(valA4 + 0x54ff34) = objC == 1;
    int32_t ctxB = 0;

    for (int16_t* i = &g_af5ee8; i < 0xafa6e8; )
    {
        if (*(i + 0x1d) && *i == a1 && !*(srcS3 + ctxB + 0x54ff34))
            QTask_RemoveEventCallback(ctxB, a2, a3);

        i = &i[0x18];
        ctxB += 1;
    }

    QTask_DeleteTask();
    int32_t result = g_567c6c - 1;
    g_567c6c = result;
    return result;
}
