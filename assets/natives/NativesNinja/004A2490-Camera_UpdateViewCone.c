#include "004A2490-Camera_UpdateViewCone.h"
/* 0x004a2490 Camera_UpdateViewCone full linked: callers=1 callees=6 */
struct status_msg* sub_4a2490(void* a1, uint32_t a2, float a3, float a4, float a5, uint32_t a6, uint32_t a7, uint32_t a8)

{
    int32_t kind;
    kind = g_543d50;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    result->head[9] = 0;
    result->head[0xa] = a8;
    sub_4b2320(&result->head[0xb], 0, 0x40, 0x10, 0x10, 3, 0, 0);
    long double x87_r7 = 0f;
    long double temp0 = a3;
    x87_r7 - temp0;
    result->head[0x16] = a7;
    result->head[0x17] = a7;
    result->head[0x14] = 0;
    result->head[0x15] = a6;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_1 = 1f;
        long double temp1_1 = a3;
        x87_r7_1 - temp1_1;

        if (*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1)
            a3 = 1f;
    }
    else
        a3 = 0f;

    long double x87_r7_2 = 0f;
    long double temp2 = a4;
    x87_r7_2 - temp2;

    if (*(&((x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp2 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_3 = 1f;
        long double temp3_1 = a4;
        x87_r7_3 - temp3_1;

        if (*(&((x87_r7_3 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
            a4 = 1f;
    }
    else
        a4 = 0f;

    long double x87_r7_5 = a5;
    long double x87_r6 = 0f;
    x87_r6 - x87_r7_5;

    if (*(&((x87_r6 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_5) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r6_1 = 1f;
        x87_r6_1 - x87_r7_5;

        if (*(&((x87_r6_1 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_5 = 1f;
    }
    else
        x87_r7_5 = 0f;

    result->head[0x1b] = x87_r7_5;
    result->head[0x19] = a3;
    result->head[0x1a] = a4;
    result->head[0x18] = g_543d54;
    char eax_4 = QHash_ValueGet();

    if (!eax_4)
        QHash_ValueSet();

    result->head[0x1c] = 0;
    result->head[0x1c] = sub_4b7000(g_935c04);

    if (!eax_4)
        sub_4b0d50();

    return result;
}
