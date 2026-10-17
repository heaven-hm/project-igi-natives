// Original IGI.EXE function: QTask_LinkEventHandler (VA 0x004012F0; static CFG gate PASS, CFG score 1.000).
#include "QTask_LinkEventHandler.h"
int32_t* QTask_LinkEventHandler(int32_t a1, int16_t a2)

{
    char ctxB = 0;
    g_567c58 += 1;
    uint32_t dstD1 = a2 * 0x30;

    if (!*(dstD1 + 0xaf5f04))
        goto label_401364;

    int32_t valA3 = *(dstD1 + 0xaf5ef4);
    int32_t* result;

    if (valA3 >= *(dstD1 + 0xaf5ef8))
    {
        ctxB = 0;
    label_401364:
        Qhash_Init(1);
        result = Mem_Alloc(*(dstD1 + 0xaf5ee4), 4);
        Qhash_Reset();
    }
    else
    {
        ctxB = 1;
        result = *(*(dstD1 + 0xaf5ef0) + (valA3 << 2)) * *(dstD1 + 0xaf5efc) + *(dstD1 + 0xaf5eec);
        *(*(dstD1 + 0xaf5f00) + result) = valA3;
        *(dstD1 + 0xaf5ef4) += 1;
    }

    result[1] = 0;
    *result = 0;
    result[5] = a1;
    *(result + 0x1e) = ctxB;
    result[7] = a2;
    result[6] = 0;
    result[2] = &result[3];
    result[3] = 0;
    result[4] = &result[2];
    return result;
}
