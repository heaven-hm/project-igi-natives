// Original IGI.EXE function: HumanPlayer_UpdateStamina_5 (VA 0x0040C510; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateStamina_5.h"
int32_t HumanPlayer_UpdateStamina_5(void* context, int32_t param_2)

{
    void* data_val = AI_CombatTarget_21(param_2);
    int32_t data_1 = *(param_2 + 0xd74);
    char context_val = 0;

    if (!data_1)
    {
        if (*(context + 8) & 1)
        {
            FX_DebrisSpawn_14(param_2, 0x55, 1, 0.0f);
            *(param_2 + 0xd74) = 1;
        }
    }
    else if (data_1 == 1)
    {
        int32_t data_3 = Render_TransformVertices_11(0, 0x53);

        if (*(param_2 + 0xd64) > *(param_2 + 0xd60) - data_3 * 0.000208333338f * 30.0f)
        {
            FX_DebrisSpawn_14(param_2, 0x53, 0, 0.200000003f);
            *(param_2 + 0xd74) = 2;
        }
    }

    long double fpu_val_7_4 = *(param_2 + 0x1d4);
    long double f2 = 0.0f;
    fpu_val_7_4 - f2;

    if (*(&((fpu_val_7_4 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f2 ? 1 : 0) << 0xe) + 1) & 0x40)
        context_val = 1;

    if (*(context + 8) & 0x20000)
        context_val = 1;

    int32_t result = *(param_2 + 0xd64);
    int32_t entity_3 = *(param_2 + 0xd60);

    if (result < entity_3)
    {
        result += 1;
        *(param_2 + 0xd64) = result;
    }

    if (*(param_2 + 0xd64) != entity_3)
    {
        if (!context_val)
            return result;

        Env_UpdateCameraLens_6(data_val);
    }
    else if (context_val)
        Env_UpdateCameraLens_6(data_val);
    else
        Env_TriggerAlarm_6(data_val);

    HumanPlayer_LoadParameters_6(param_2);
    AI_TakeCover_22(*(param_2 + 0x4ec));
    AI_UpdateOrders_20(param_2);
    AI_SelectTarget_20(param_2);
    AI_UpdatePatrol_21(param_2, nullptr);
    Human_ViewCam(param_2, 1);
    HumanPlayer_UpdateMotion_5(param_2);
    AI_CheckHearing_20(param_2);
    int32_t* entity_4 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_7 = *entity_4;
    *(context + 0x14) = data_7;
    return data_7(context, param_2);
}
