// Original IGI.EXE function: Camera_UpdateViewCone (VA 0x004A2490; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone.h"
struct status_msg* Camera_UpdateViewCone(void* context, uint32_t param_2, float param_3, float param_4, float param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8)

{
    int32_t kind;
    kind = g_543d50;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[8] = param_2;
    result->head[9] = 0;
    result->head[0xa] = param_8;
    Sys_AllocateMemory_8(&result->head[0xb], 0, 0x40, 0x10, 0x10, 3, 0, 0);
    long double fpu7 = 0.0f;
    long double f0 = param_3;
    fpu7 - f0;
    result->head[0x16] = param_7;
    result->head[0x17] = param_7;
    result->head[0x14] = 0;
    result->head[0x15] = param_6;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_1 = 1.0f;
        long double f1_1 = param_3;
        fpu_val_7_1 - f1_1;

        if (*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            param_3 = 1.0f;
    }
    else
        param_3 = 0.0f;

    long double fpu_val_7_2 = 0.0f;
    long double f2 = param_4;
    fpu_val_7_2 - f2;

    if (*(&((fpu_val_7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f2 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_3 = 1.0f;
        long double f3_1 = param_4;
        fpu_val_7_3 - f3_1;

        if (*(&((fpu_val_7_3 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
            param_4 = 1.0f;
    }
    else
        param_4 = 0.0f;

    long double fpu_val_7_5 = param_5;
    long double fpu6 = 0.0f;
    fpu6 - fpu_val_7_5;

    if (*(&((fpu6 < fpu_val_7_5 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_5) ? 1 : 0) << 0xa
        | (fpu6 == fpu_val_7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_6_1 = 1.0f;
        fpu_val_6_1 - fpu_val_7_5;

        if (*(&((fpu_val_6_1 < fpu_val_7_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_5) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            fpu_val_7_5 = 1.0f;
    }
    else
        fpu_val_7_5 = 0.0f;

    result->head[0x1b] = fpu_val_7_5;
    result->head[0x19] = param_3;
    result->head[0x1a] = param_4;
    result->head[0x18] = g_543d54;
    char data_4 = QHash_ValueGet();

    if (!data_4)
        QHash_ValueSet();

    result->head[0x1c] = 0;
    result->head[0x1c] = Sys_DispatchOpcode_18(g_935c04);

    if (!data_4)
        Sys_DispatchOpcode_2();

    return result;
}
