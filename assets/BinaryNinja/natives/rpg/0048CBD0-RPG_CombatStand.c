#include "RPG_CombatStand.h"
int32_t* RPG_CombatStand(void* a1, int32_t* a2)

{
    int32_t* flagP = a2;
    void* srcS = a1;
    char* v_30 = "RPG Combat - Stand";
    void* dstD1 = flagP[0xa] + 8;
    int32_t v_34 = 0xffffffff;
    void* v_38 = srcS;
    int32_t valA = *(dstD1 + 0x18);
    *(dstD1 + 0x18) = 0;
    FX_SmokeEmit_17(srcS, dstD1);
    void* ctxB = *(srcS + 0x3de4);

    if (!ctxB)
        return AI_CombatTarget_2(srcS, flagP);

    int32_t valA2 = flagP[9];
    uint32_t valA3;

    if (!valA2)
    {
        a1 = *(ctxB + 0x29);
        a2 = FX_ExplosionSpawn_19(srcS);
        valA3 = Locomotion_GetState(srcS, 0);

        if (valA3)
        {
            if (!*(ctxB + 0x29))
            {
                *(dstD1 + 0x18) = valA + 1;

                if (valA + 1 > *(srcS + 0x3d50))
                    return AI_CombatTarget_2(srcS, flagP);

                if (!*(ctxB + 0x28))
                {
                    char* v_30_5 = "Turning to target";
                    int32_t v_34_4 = 0xffffffff;
                    void* v_38_2 = srcS;
                    void v_18;
                    AI_UpdatePatrol_3(&v_18, srcS);
                    return AI_UpdateOrders_3(srcS, &v_18, 0.0349065848f, 0);
                }
            }

            bool cond_0_1 = *(srcS + 0x3ddc) != 5;
            *(srcS + 0x3dd4) = *(srcS + 0x3d48);

            if (!cond_0_1)
            {
                AI_UpdateOrders_3(srcS, *(srcS + 0x3aa8) + 0x110, 0.0349065848f, 1);
                return AI_WriteChannel(srcS, 9, 1f);
            }

            if (!a2 && *(srcS + 0x3dd0) != 1)
            {
                void* valA16 = FX_FireBallUpdate_18(srcS, flagP, RPG_CombatKneel, FX_DebrisSpawn_19);
                *(srcS + 0x3dd0) = 1;
                *(srcS + 0x3dd4) = 0;
                return valA16;
            }

            valA3 = *(srcS + 0x3dd0);

            if (!valA3)
            {
                long double fp0_1;
                fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
                long double f0_1 = 0.400000006f;
                fp0_1 - f0_1;
                valA3 = (fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                    | (fp0_1 == f0_1 ? 1 : 0) << 0xe;

                if (*(&valA3 + 1) & 1)
                {
                    flagP[6] = RPG_CombatKneel;
                    *(srcS + 0x3dd0) = 2;
                    return valA3;
                }
            }

            valA3 = a1;

            if (valA3)
            {
                AI_UpdatePatrol_3(srcS + 0x3e88, srcS);
                valA3 = Combat_BeginBurst(srcS, *(flagP[0xa] + 0x28));
                *(flagP[0xa] + 0x28) = 0;
                flagP[9] = StandFire;
                *(srcS + 0x3dd0) = 0;
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
