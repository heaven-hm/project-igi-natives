// Original IGI.EXE function: FX_FireBallUpdate_9 (VA 0x004871C0; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_9.h"
int32_t FX_FireBallUpdate_9(void* context, int32_t param_2)

{
    int32_t data_val = g_c28b44;
    int32_t result = Display_GetActiveMode();
    int32_t* source_val = param_2;
    int32_t entity_val = g_c28b48;

    if (!source_val)
        return result;

    int32_t data_2;
    int32_t temp_1;
    temp_1 = HIGHD(Sys_CloseFileStream_17(source_val));
    data_2 = LOWD(Sys_CloseFileStream_17(source_val));
    int32_t data_6;
    int32_t temp_2;
    temp_2 = HIGHD(Sys_ExecuteBytecode_17(source_val));
    data_6 = LOWD(Sys_ExecuteBytecode_17(source_val));
    long double fpu_val_7_9 = *(context + 0x4e8);
    long double f0_1 = 1.0f;
    fpu_val_7_9 - f0_1;
    long double fpu_val_7_10;

    if (!(*(&((fpu_val_7_9 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_10 = 2.0f - *(context + 0x4e8);
    else
        fpu_val_7_10 = *(context + 0x4e8);

    void* item_20_1 = context;
    return Sys_AllocateMemory_15(source_val, data_val * 0.5f - ((data_2 - temp_1) >> 1),
        entity_val * 0.875f - ((data_6 - temp_2) >> 1), 128.0f, 128.0f, 128.0f,
        fpu_val_7_10 * 0.699999988f + 0.300000012f, 0, 0, 0x80000, 0);
}
