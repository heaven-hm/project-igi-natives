// Original IGI.EXE function: FX_TrailUpdate_6 (VA 0x004860F0; static CFG gate PASS, CFG score 1.000).
#include "FX_TrailUpdate_6.h"
int32_t FX_TrailUpdate_6(int32_t context, int32_t param_2, float param_3, float param_4)

{
    float item_4 = param_3;
    float item_8 = param_4;
    int32_t temp_val = param_2 * 0x40b;
    void* source_val = context + (temp_val << 2);
    int32_t* data_6 = *(context + (temp_val << 2) + 0x3c);

    if (data_6 && *(source_val + 0x24) > 9)
        Sys_ResolveSymbol_14(data_6, param_3, param_4, 128.0f, 128.0f, 128.0f, 0, 0, 0);

    void* data_7 = *(source_val + 0x3c);

    if (data_7)
        param_3 = Sys_CloseFileStream_17(data_7) + param_3;

    int32_t* source_1 = source_val + 0x30;
    int32_t i_1 = 3;
    long double fpu_val_7_6 = param_4 + 2.0f;
    param_4 = fpu_val_7_6;
    int32_t i;

    do
    {
        *(*source_1 + 0x14) = 0;
        *(*source_1 + 0x18) = 0x42f00000;
        *(*source_1 + 0x1c) = 0;
        *(*source_1 + 4) = param_3 + 3.0f;
        *(*source_1 + 8) = fpu_val_7_6;
        Sys_CloseFileStream_18(*source_1);
        long double fpu_val_7_7 = Sys_AllocateMemory_22(*source_1);
        source_1 = &source_1[1];
        i = i_1;
        i_1 -= 1;
        fpu_val_7_6 = fpu_val_7_7 + param_4;
        param_4 = fpu_val_7_6;
    } while (i != 1);
    return FX_ExplosionSpawn_7(context, param_2, item_4, item_8, 0);
}
