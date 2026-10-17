// Original IGI.EXE function: HumanPlayer_UpdateStamina_5 (VA 0x0040C510; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateStamina_5.h"
int32_t HumanPlayer_UpdateStamina_5(void* a1, int32_t a2)

{
    void* valA = AI_CombatTarget_21(a2);
    int32_t valA1 = *(a2 + 0xd74);
    char ctxB = 0;

    if (!valA1)
    {
        if (*(a1 + 8) & 1)
        {
            FX_DebrisSpawn_14(a2, 0x55, 1, 0f);
            *(a2 + 0xd74) = 1;
        }
    }
    else if (valA1 == 1)
    {
        int32_t valA3 = Render_TransformVertices_11(0, 0x53);

        if (*(a2 + 0xd64) > *(a2 + 0xd60) - valA3 * 0.000208333338f * 30f)
        {
            FX_DebrisSpawn_14(a2, 0x53, 0, 0.200000003f);
            *(a2 + 0xd74) = 2;
        }
    }

    long double x87_r7_4 = *(a2 + 0x1d4);
    long double f2 = 0f;
    x87_r7_4 - f2;

    if (*(&((x87_r7_4 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2) ? 1 : 0) << 0xa
            | (x87_r7_4 == f2 ? 1 : 0) << 0xe) + 1) & 0x40)
        ctxB = 1;

    if (*(a1 + 8) & 0x20000)
        ctxB = 1;

    int32_t result = *(a2 + 0xd64);
    int32_t objC3 = *(a2 + 0xd60);

    if (result < objC3)
    {
        result += 1;
        *(a2 + 0xd64) = result;
    }

    if (*(a2 + 0xd64) != objC3)
    {
        if (!ctxB)
            return result;

        Env_UpdateCameraLens_6(valA);
    }
    else if (ctxB)
        Env_UpdateCameraLens_6(valA);
    else
        Env_TriggerAlarm_6(valA);

    HumanPlayer_LoadParameters_6(a2);
    AI_TakeCover_22(*(a2 + 0x4ec));
    AI_UpdateOrders_20(a2);
    AI_SelectTarget_20(a2);
    AI_UpdatePatrol_21(a2, nullptr);
    Human_ViewCam(a2, 1);
    HumanPlayer_UpdateMotion_5(a2);
    AI_CheckHearing_20(a2);
    int32_t* objC4 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA7 = *objC4;
    *(a1 + 0x14) = valA7;
    return valA7(a1, a2);
}
