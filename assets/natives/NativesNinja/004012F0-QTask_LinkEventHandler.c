#include "004012F0-QTask_LinkEventHandler.h"
/* 0x004012f0 QTask_LinkEventHandler full linked: callers=2 callees=3 */
int32_t* QTask_LinkEventHandler(int32_t a1, int16_t a2)

{
    char ebx = 0;
    g_567c58 += 1;
    uint32_t edi_1 = a2 * 0x30;

    if (!*(edi_1 + 0xaf5f04))
        goto label_401364;

    int32_t eax_3 = *(edi_1 + 0xaf5ef4);
    int32_t* result;

    if (eax_3 >= *(edi_1 + 0xaf5ef8))
    {
        ebx = 0;
    label_401364:
        Qhash_Init(1);
        result = Mem_Alloc(*(edi_1 + 0xaf5ee4), 4);
        Qhash_Reset();
    }
    else
    {
        ebx = 1;
        result = *(*(edi_1 + 0xaf5ef0) + (eax_3 << 2)) * *(edi_1 + 0xaf5efc) + *(edi_1 + 0xaf5eec);
        *(*(edi_1 + 0xaf5f00) + result) = eax_3;
        *(edi_1 + 0xaf5ef4) += 1;
    }

    result[1] = 0;
    *result = 0;
    result[5] = a1;
    *(result + 0x1e) = ebx;
    result[7] = a2;
    result[6] = 0;
    result[2] = &result[3];
    result[3] = 0;
    result[4] = &result[2];
    return result;
}
