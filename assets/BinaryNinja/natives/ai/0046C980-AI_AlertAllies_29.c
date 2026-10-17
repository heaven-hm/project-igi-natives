// IGI native provenance: AI_AlertAllies_29 - 0x0046C980 - CFG score 89.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046C980-AI_AlertAllies_29.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_AlertAllies_29.h"
struct status_msg* AI_AlertAllies_29(void* context, int32_t param_2, float* param_3, int32_t param_4)

{
    float item_b4 = 0.0f;
    float item_b0 = 0.0f;
    float item_ac = 0.0f;
    int32_t kind = Qhash_Init(1);
    kind = g_5be2e0;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    int32_t item_d8 = param_4;
    memcpy(&result->sprite[0x3c], param_2, 0x18);
    Game_DataSymbolLoad(&result->sprite[0x7c], "%d");
    uint32_t data_2 = Script_ParseEnumReal32_8();
    int32_t temp_1 = 0;
    temp_1 = result->head[7];
    int32_t data_3 = *(((data_2 * 0x180 + temp_1) << 2) + &g_a96ae0);

    if (data_3)
        data_3(result, 0);

    Sys_Atan2UndefinedInOrig(param_3, &item_b4, &item_b0, &item_ac);
    long double fpu7 = item_b4;
    long double f0 = -90.0f;
    fpu7 - f0;
    long double fpu_val_7_1;
    long double f1_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        fpu_val_7_1 = item_b4;
        f1_1 = 90.0f;
        fpu_val_7_1 - f1_1;
        item_b4 = 0.0f;
    }

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1 || !(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1)
            & 0x41))
        item_b4 = 3.14159274f;

    long double fpu_val_7_2 = item_b0;
    long double f2 = 0.0f;
    fpu_val_7_2 - f2;
    item_b0 = -1.57079637f;

    if (!(*(&((fpu_val_7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f2 ? 1 : 0) << 0xe) + 1) & 1))
        item_b0 = 1.57079637f;

    Sys_ReadFileBlock_12(&result->head[0x1c], item_b4, item_b0, item_ac);
    double item_a0[0x2];
    memcpy(&item_a0, param_2, 0x18);
    double item_90;
    double item_90_1 = item_90 + 2048.0;
    double item_88;
    memcpy(&item_88, param_2, 0x18);
    double item_78;
    double item_78_1 = item_78 - 204800.0;
    struct status_msg* result_1 = result;
    char data_8 = Level_LoadObjects_4();
    void item_a8;
    void item_70;
    DynObj_FindSymbol_11(Level_StartMission_4(), &item_70, &item_a0, &item_88, 1, data_8, &item_a8, 0xffffffff);
    int32_t item_18;

    if (!item_18)
    {
        memcpy(&result->sprite[0x54], param_2, 0x18);
        Qhash_Reset();
        return result;
    }

    void item_68;
    memcpy(&result->sprite[0x54], &item_68, 0x18);
    result->sprite[0x64] = result->sprite[0x64] + 409.60000000000002;
    Qhash_Reset();
    return result;
}
