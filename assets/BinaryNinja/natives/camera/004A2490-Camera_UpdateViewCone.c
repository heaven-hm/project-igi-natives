// Original IGI.EXE function: Camera_UpdateViewCone (VA 0x004A2490; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone.h"
struct status_msg* Camera_UpdateViewCone(void* a1, uint32_t a2, float a3, float a4, float a5, uint32_t a6, uint32_t a7, uint32_t a8)

{
    int32_t kind;
    kind = g_543d50;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    result->head[9] = 0;
    result->head[0xa] = a8;
    Sys_AllocateMemory_8(&result->head[0xb], 0, 0x40, 0x10, 0x10, 3, 0, 0);
    long double fpu7 = 0f;
    long double f0 = a3;
    fpu7 - f0;
    result->head[0x16] = a7;
    result->head[0x17] = a7;
    result->head[0x14] = 0;
    result->head[0x15] = a6;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_1 = 1f;
        long double f1_1 = a3;
        x87_r7_1 - f1_1;

        if (*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            a3 = 1f;
    }
    else
        a3 = 0f;

    long double x87_r7_2 = 0f;
    long double f2 = a4;
    x87_r7_2 - f2;

    if (*(&((x87_r7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2) ? 1 : 0) << 0xa
        | (x87_r7_2 == f2 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_3 = 1f;
        long double f3_1 = a4;
        x87_r7_3 - f3_1;

        if (*(&((x87_r7_3 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
            a4 = 1f;
    }
    else
        a4 = 0f;

    long double x87_r7_5 = a5;
    long double fpu6 = 0f;
    fpu6 - x87_r7_5;

    if (*(&((fpu6 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_5) ? 1 : 0) << 0xa
        | (fpu6 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
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
    char valA4 = QHash_ValueGet();

    if (!valA4)
        QHash_ValueSet();

    result->head[0x1c] = 0;
    result->head[0x1c] = Sys_DispatchOpcode_18(g_935c04);

    if (!valA4)
        Sys_DispatchOpcode_2();

    return result;
}
