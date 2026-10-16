#include "0046C980-AI_AlertAllies_29.h"
/* 0x0046c980 AI_AlertAllies_29 full linked: callers=1 callees=16 */
struct status_msg* sub_46c980(void* a1, int32_t a2, float* a3, int32_t a4)

{
    float var_b4 = 0f;
    float var_b0 = 0f;
    float var_ac = 0f;
    int32_t kind = Qhash_Init(1);
    kind = g_5be2e0;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    int32_t var_d8 = a4;
    memcpy(&result->sprite[0x3c], a2, 0x18);
    Game_DataSymbolLoad(&result->sprite[0x7c], "%d");
    uint32_t eax_2 = sub_4f1a70();
    int32_t edx_1 = 0;
    edx_1 = result->head[7];
    int32_t eax_3 = *(((eax_2 * 0x180 + edx_1) << 2) + &g_a96ae0);

    if (eax_3)
        eax_3(result, 0);

    sub_4b3c50(a3, &var_b4, &var_b0, &var_ac);
    long double x87_r7 = var_b4;
    long double temp0 = -90f;
    x87_r7 - temp0;
    long double x87_r7_1;
    long double temp1_1;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        x87_r7_1 = var_b4;
        temp1_1 = 90f;
        x87_r7_1 - temp1_1;
        var_b4 = 0f;
    }

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1 || !(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1)
            & 0x41))
        var_b4 = 3.14159274f;

    long double x87_r7_2 = var_b0;
    long double temp2 = 0f;
    x87_r7_2 - temp2;
    var_b0 = -1.57079637f;

    if (!(*(&((x87_r7_2 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp2 ? 1 : 0) << 0xe) + 1) & 1))
        var_b0 = 1.57079637f;

    sub_4b38e0(&result->head[0x1c], var_b4, var_b0, var_ac);
    double var_a0[0x2];
    memcpy(&var_a0, a2, 0x18);
    double var_90;
    double var_90_1 = var_90 + 2048.0;
    double var_88;
    memcpy(&var_88, a2, 0x18);
    double var_78;
    double var_78_1 = var_78 - 204800.0;
    struct status_msg* result_1 = result;
    char eax_8 = Level_LoadObjects_4();
    void var_a8;
    void var_70;
    sub_4cc2a0(Level_StartMission_4(), &var_70, &var_a0, &var_88, 1, eax_8, &var_a8, 0xffffffff);
    int32_t var_18;

    if (!var_18)
    {
        memcpy(&result->sprite[0x54], a2, 0x18);
        Qhash_Reset();
        return result;
    }

    void var_68;
    memcpy(&result->sprite[0x54], &var_68, 0x18);
    result->sprite[0x64] = result->sprite[0x64] + 409.60000000000002;
    Qhash_Reset();
    return result;
}
