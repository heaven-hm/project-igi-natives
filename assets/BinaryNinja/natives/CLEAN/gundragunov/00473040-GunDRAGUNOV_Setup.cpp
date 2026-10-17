// IGI native provenance: GunDRAGUNOV_Setup - 0x00473040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00473040-GunDRAGUNOV_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunDRAGUNOV_Setup.h"
int32_t GunDRAGUNOV_Setup(float context, int32_t param_2)

{
    int32_t data_val = g_c28b44;
    int32_t entity_val = g_c28b48;

    if (!*(context + 0x1b0))
        return (*(((FX_DebrisSpawn_8() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0))(context, param_2);

    context = data_val;
    param_2 = context / Sys_CloseFileStream_17(g_5be360 + 0x18);
    long double fpu_val_7_3 = entity_val;
    float item_18 = fpu_val_7_3;
    float item_c = fpu_val_7_3 * 0.5f;
    float item_8 = context * 0.5f;
    float item_4 = -(param_2);
    Sys_FreeMemory_15(g_5be360 + 0x18, item_4, item_4, item_8, item_4, item_4, item_c, item_8, item_c, 128.0f,
        128.0f, 128.0f, 0, 0x1000000, 0);
    float item_4_1 = context + param_2;
    Sys_FreeMemory_15(g_5be360 + 0x18, item_4_1, item_4, item_8, item_4, item_4_1, item_c, item_8, item_c,
        128.0f, 128.0f, 128.0f, 0, 0x1000000, 0);
    param_2 = item_18 + param_2;
    Sys_FreeMemory_15(g_5be360 + 0x18, item_4, param_2, item_8, param_2, item_4, item_c, item_8, item_c, 128.0f,
        128.0f, 128.0f, 0, 0x1000000, 0);
    Sys_FreeMemory_15(g_5be360 + 0x18, item_4_1, param_2, item_8, param_2, item_4_1, item_c, item_8, item_c, 128.0f,
        128.0f, 128.0f, 0, 0x1000000, 0);
    int32_t data_15 = Sys_ExecuteBytecode_17(g_5be364 + 0x18);
    int32_t data_16;
    int32_t temp_5;
    temp_5 = HIGHD(data_15);
    data_16 = LOWD(data_15);
    int32_t data_19;
    int32_t temp_6;
    temp_6 = HIGHD(entity_val);
    data_19 = LOWD(entity_val);
    param_2 = ((data_19 - temp_6) >> 1) - ((data_16 - temp_5) >> 1);
    float item_4_3 = data_15 + param_2;
    Sys_FreeMemory_15(g_5be364 + 0x18, 0, param_2, context, param_2, 0, item_4_3, context, item_4_3, 128.0f, 128.0f,
        128.0f, 0, 0x1000000, 0);
    int32_t data_27 = Sys_CloseFileStream_17(g_5be35c + 0x18);
    int32_t data_28;
    int32_t temp_9;
    temp_9 = HIGHD(data_27);
    data_28 = LOWD(data_27);
    int32_t data_31;
    int32_t temp_10;
    temp_10 = HIGHD(data_val);
    data_31 = LOWD(data_val);
    context = ((data_31 - temp_10) >> 1) - ((data_28 - temp_9) >> 1);
    param_2 = data_27 + context;
    return Sys_FreeMemory_15(g_5be35c + 0x18, context, 0, param_2, 0, context, item_18, param_2, item_18, 128.0f, 128.0f,
        128.0f, 0, 0x1000000, 0);
}
