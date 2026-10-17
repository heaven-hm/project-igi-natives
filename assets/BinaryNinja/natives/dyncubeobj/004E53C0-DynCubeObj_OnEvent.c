// Original IGI.EXE function: DynCubeObj_OnEvent (VA 0x004E53C0; static CFG gate FAIL, CFG score 0.833).
#include "DynCubeObj_OnEvent.h"
int32_t* DynCubeObj_OnEvent(int32_t context, int32_t param_2, int32_t param_3, double* param_4, float param_5)

{
    int32_t data_2;
    int32_t temp_val;
    temp_val = HIGHD(context * context);
    data_2 = LOWD(context * context);
    int32_t dest_1 = (data_2 + (temp_val & 7)) >> 3;
    int32_t* result = Mem_Alloc(dest_1 + 0xf, 4);
    result[2] = context;
    int32_t entity_val = g_b019e8;
    int32_t** data_7 = *(g_b019e4 + (entity_val << 2)) * g_b019f0 + g_b019e0;
    *(g_b019f4 + data_7) = entity_val;
    g_b019e8 += 1;
    *result = data_7;
    *data_7 = result;
    int32_t eflags;
    int32_t data_8;
    data_8 = __bsf_gprv_memv(context);
    result[1] = data_8;

    if (dest_1 > 0)
        memset(memset(&result[3], 0, dest_1 & 0xfffffffc), 0, dest_1 & 3);

    double* item_c = param_4;
    double item_44 = *param_4 - param_5;
    char temp_7 = g_a5e408;
    int32_t item_34 = 0;
    double item_3c = param_4[1] - param_5;
    long double fpu_val_7_5 = param_5 + *param_4;
    int32_t item_30 = 0xc1d00000;
    int32_t item_1c = 0;
    int32_t item_18 = 0x41d00000;
    int32_t* result_1 = result;
    int32_t item_10 = context;
    double item_2c = fpu_val_7_5;
    float item_8 = param_5;
    double item_24 = param_5 + param_4[1];
    DynObj_CreateMagicObject_9(param_2, temp_7, &result_1, &item_44, &item_2c, 0x20000000, param_3);
    return result;
}
