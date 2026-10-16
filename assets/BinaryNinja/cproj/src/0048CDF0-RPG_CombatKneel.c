#include "gi_platform.h"
#include "0048CDF0-RPG_CombatKneel.h"
int32_t* RPG_CombatKneel(int32_t a1, int32_t* a2)

{
    int32_t* flagP = a2;
    int32_t srcS = a1;
    char* v_30 = "RPG Combat - Kneel";
    void* dstD1 = flagP[0xa] + 8;
    int32_t v_34 = 0xffffffff;
    int32_t v_38 = srcS;
    int32_t valA = *(dstD1 + 0x18);
    *(dstD1 + 0x18) = 0;
    FX_SmokeEmit_17(srcS, flagP[0xa] + 8);
    void* ctxB = (*(int32_t*)(uintptr_t)(srcS + 0x3de4));

    if (!ctxB)
        return AI_CombatTarget_2(srcS, flagP);

    int32_t valA2 = flagP[9];
    uint32_t valA3;

    if (!valA2)
    {
        a1 = (*(int32_t*)(uintptr_t)(ctxB + 0x29));
        a2 = FX_ExplosionSpawn_19(srcS);
        AI_WriteChannel(srcS, 1, 1.0f);
        valA3 = Locomotion_GetState(srcS, 1);

        if (valA3)
        {
            if (!(*(int32_t*)(uintptr_t)(ctxB + 0x29)))
            {
                *(dstD1 + 0x18) = valA + 1;

                if (valA + 1 > (*(int32_t*)(uintptr_t)(srcS + 0x3d50)))
                    return AI_CombatTarget_2(srcS, flagP);

                if (!(*(int32_t*)(uintptr_t)(ctxB + 0x28)))
                {
                    char* v_30_5 = "Turning to target";
                    int32_t v_34_4 = 0xffffffff;
                    int32_t v_38_1 = srcS;
                    char v_18;
                    AI_UpdatePatrol_3(&v_18, srcS);
                    return AI_UpdateOrders_3(srcS, &v_18, 0.0349065848.0f, 0);
                }
            }

            (*(int32_t*)(uintptr_t)(srcS + 0x3dd4)) = (*(int32_t*)(uintptr_t)(srcS + 0x3d48));
            int32_t valA12 = (*(int32_t*)(uintptr_t)(srcS + 0x3ddc));

            if (valA12 == 5)
            {
                flagP[6] = RPG_CombatStand;
                return valA12;
            }

            if (!a2 && (*(int32_t*)(uintptr_t)(srcS + 0x3dd0)) != 1)
            {
                void* valA15 = FX_FireBallUpdate_18(srcS, flagP, 0, FX_DebrisSpawn_19);
                (*(int32_t*)(uintptr_t)(srcS + 0x3dd0)) = 1;
                (*(int32_t*)(uintptr_t)(srcS + 0x3dd4)) = 0;
                return valA15;
            }

            valA3 = (*(int32_t*)(uintptr_t)(srcS + 0x3dd0));

            if (!valA3)
            {
                long double fp0_1;
                fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
                long double f0_1 = 0.400000006.0f;
                fp0_1 - f0_1;
                valA3 = (fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f0_1 ? 1 : 0) << 0xe;

                if (*(&valA3 + 1) & 1)
                {
                    flagP[6] = RPG_CombatStand;
                    (*(int32_t*)(uintptr_t)(srcS + 0x3dd0)) = 2;
                    return valA3;
                }
            }

            valA3 = a1;

            if (valA3)
            {
                AI_UpdatePatrol_3(srcS + 0x3e88, srcS);
                valA3 = Combat_BeginBurst(srcS, *(flagP[0xa] + 0x28));
                *(flagP[0xa] + 0x28) = 0;
                flagP[9] = FX_KneelFire;
                (*(int32_t*)(uintptr_t)(srcS + 0x3dd0)) = 0;
            }
        }
    }
    else
    {
        valA3 = valA2(srcS, flagP);

        if (valA3)
            flagP[9] = 0;
    }

    return valA3;
}
