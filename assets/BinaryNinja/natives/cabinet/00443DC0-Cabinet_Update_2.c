// Original IGI.EXE function: Cabinet_Update_2 (VA 0x00443DC0; static CFG gate PASS, CFG score 1.000).
#include "Cabinet_Update_2.h"

int32_t Cabinet_Update_2(float pThis, int32_t param)

{
    *(param + 0xc) = pThis + 0x20;
    *(param + 0x10) = pThis + 0x70;
    long double x87_r7 = *(pThis + 0x9c);
    long double x87_r6 = *(pThis + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(pThis + 0xa0);
    else
        x87_r7_1 = *(pThis + 0x9c);

    long double x87_r6_1 = *(pThis + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(pThis + 0x9c);
        long double x87_r6_2 = *(pThis + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(pThis + 0xa0);
        else
            x87_r7_3 = *(pThis + 0x9c);
    }
    else
        x87_r7_3 = *(pThis + 0x98);

    *(param + 0x14) = Render_ComputeNormals(*(pThis + 0x6c)) * x87_r7_3;
    AI_TakeCover_25(param);
    AI_UpdateOrders_25(param);
    return AI_RmS(param);
}
