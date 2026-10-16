#include "gi_platform.h"
#include "0048D080-Guard_CombatStand.h"
int32_t* Guard_CombatStand(int32_t a1, int32_t* a2)

{
    char* v_34 = "Guard Combat - Stand";
    void* dstD1 = a2[0xa] + 8;
    int32_t v_38 = 0xffffffff;
    int32_t v_3c = a1;
    int32_t* valA = *(dstD1 + 0x18);
    *(dstD1 + 0x18) = 0;
    FX_SmokeEmit_17(a1, a2[0xa] + 8);
    void* ctxB = (*(int32_t*)(uintptr_t)(a1 + 0x3de4));

    if (!ctxB)
        return AI_CombatTarget_2(a1, a2);

    int32_t valA2 = a2[9];
    int32_t valA3;

    if (!valA2)
    {
        valA3 = Locomotion_GetState(a1, 0);

        if (valA3)
        {
            if (!(*(int32_t*)(uintptr_t)(ctxB + 0x29)))
            {
                Combat_SetAimMode((*(int32_t*)(uintptr_t)(a1 + 0x3aa8)), a1, 0xffffffff);
                *(dstD1 + 0x18) = valA + 1;

                if (valA + 1 > (*(int32_t*)(uintptr_t)(a1 + 0x3d50)))
                    return AI_CombatTarget_2(a1, a2);

                if (!(*(int32_t*)(uintptr_t)(ctxB + 0x28)))
                {
                    char* v_34_4 = "Turning to target";
                    int32_t v_38_6 = 0xffffffff;
                    int32_t v_3c_2 = a1;
                    char v_18;
                    AI_UpdatePatrol_3(&v_18, a1);
                    return AI_UpdateOrders_3(a1, &v_18, 0.0349065848.0f, 0);
                }
            }

            int32_t valA10 = FX_ExplosionSpawn_19(a1);

            if (!valA10)
            {
                FX_FireBallUpdate_18(a1, a2, valA10, Combat_Reload);
                void* valA11 = (*(int32_t*)(uintptr_t)(a1 + 0x3aa8));
                (*(int32_t*)(uintptr_t)(a1 + 0x3dd4)) = 0;
                return Combat_SetAimMode(valA11, a1, 1);
            }

            long double x87_r7_2 = Sys_AllocateMemory_14(Level_SetMission_5()) * (*(int32_t*)(uintptr_t)(a1 + 0x3d7c));
            bool cond_0_1 = (*(int32_t*)(uintptr_t)(a1 + 0x3ddc)) != 5;
            (*(int32_t*)(uintptr_t)(a1 + 0x3dd4)) = x87_r7_2 + (*(int32_t*)(uintptr_t)(a1 + 0x3d78));

            if (!cond_0_1)
            {
                AI_UpdateOrders_3(a1, (*(int32_t*)(uintptr_t)(a1 + 0x3aa8)) + 0x110, 0.0349065848.0f, 1);
                AI_WriteChannel(a1, 9, 1.0f);
            }
            else if ((*(int32_t*)(uintptr_t)(ctxB + 0x29)))
            {
                if (AI_UpdateOrders_2((*(int32_t*)(uintptr_t)(a1 + 0x3aa8)), 0) >= 4)
                    return Combat_SetAimMode((*(int32_t*)(uintptr_t)(a1 + 0x3aa8)), a1, 2);

                Combat_SetAimMode((*(int32_t*)(uintptr_t)(a1 + 0x3aa8)), a1, 0);
                AI_UpdatePatrol_3(a1 + 0x3e88, a1);
                uint32_t valA19 = Combat_BeginBurst(a1, (*(int32_t*)(uintptr_t)(a2[0xa] + 0x28)));
                (*(int32_t*)(uintptr_t)(a2[0xa] + 0x28)) = 0;
                a2[9] = StandFire;
                return valA19;
            }

            return Combat_SetAimMode((*(int32_t*)(uintptr_t)(a1 + 0x3aa8)), a1, 0xffffffff);
        }
    }
    else
    {
        valA3 = valA2(a1, a2);

        if (valA3)
            a2[9] = 0;
    }

    return valA3;
}
