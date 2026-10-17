// Original IGI.EXE function: AI_AlertAllies_29 (VA 0x0046C980; static CFG gate PASS, CFG score 0.896).
#include "AI_AlertAllies_29.h"
struct status_msg* AI_AlertAllies_29(void* a1, int32_t a2, float* a3, int32_t a4)

{
    float v_b4 = 0f;
    float v_b0 = 0f;
    float v_ac = 0f;
    int32_t kind = Qhash_Init(1);
    kind = g_5be2e0;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    int32_t v_d8 = a4;
    memcpy(&result->sprite[0x3c], a2, 0x18);
    Game_DataSymbolLoad(&result->sprite[0x7c], "%d");
    uint32_t valA2 = Script_ParseEnumReal32_8();
    int32_t tmpD1 = 0;
    tmpD1 = result->head[7];
    int32_t valA3 = *(((valA2 * 0x180 + tmpD1) << 2) + &g_a96ae0);

    if (valA3)
        valA3(result, 0);

    Sys_Atan2UndefinedInOrig(a3, &v_b4, &v_b0, &v_ac);
    long double fpu7 = v_b4;
    long double f0 = -90f;
    fpu7 - f0;
    long double x87_r7_1;
    long double f1_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        x87_r7_1 = v_b4;
        f1_1 = 90f;
        x87_r7_1 - f1_1;
        v_b4 = 0f;
    }

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1 || !(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1)
            & 0x41))
        v_b4 = 3.14159274f;

    long double x87_r7_2 = v_b0;
    long double f2 = 0f;
    x87_r7_2 - f2;
    v_b0 = -1.57079637f;

    if (!(*(&((x87_r7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2) ? 1 : 0) << 0xa
            | (x87_r7_2 == f2 ? 1 : 0) << 0xe) + 1) & 1))
        v_b0 = 1.57079637f;

    Sys_ReadFileBlock_12(&result->head[0x1c], v_b4, v_b0, v_ac);
    double v_a0[0x2];
    memcpy(&v_a0, a2, 0x18);
    double v_90;
    double v_90_1 = v_90 + 2048.0;
    double v_88;
    memcpy(&v_88, a2, 0x18);
    double v_78;
    double v_78_1 = v_78 - 204800.0;
    struct status_msg* result_1 = result;
    char valA8 = Level_LoadObjects_4();
    void v_a8;
    void v_70;
    DynObj_FindSymbol_11(Level_StartMission_4(), &v_70, &v_a0, &v_88, 1, valA8, &v_a8, 0xffffffff);
    int32_t v_18;

    if (!v_18)
    {
        memcpy(&result->sprite[0x54], a2, 0x18);
        Qhash_Reset();
        return result;
    }

    void v_68;
    memcpy(&result->sprite[0x54], &v_68, 0x18);
    result->sprite[0x64] = result->sprite[0x64] + 409.60000000000002;
    Qhash_Reset();
    return result;
}
