// Original IGI.EXE function: GunShotEffect_LoadParameters (VA 0x00438440; static CFG gate PASS, CFG score 0.986).
#include "GunShotEffect_LoadParameters.h"
int32_t GunShotEffect_LoadParameters(int32_t* a1 @ 0x8)

{
    int32_t* srcS = *a1;
    char* ctxB = a1[1];
    int32_t result;
    int32_t flagP;

    if (!*srcS)
        flagP = 0;
    else
    {
        int16_t valA = Render_DrawRigidMesh_12();
        int32_t objC;
        objC = *(*srcS + 0x1c);
        result = TaskType_IsDerivedFrom(objC, valA);
        flagP = result;
    }

    result = ctxB[1];

    if (result && !flagP)
    {
        uint32_t valA3 = Sys_FreeMemory_14(Level_SetMission_5(), 3);
        result = FX_DebrisSpawn(*a1 + 8, 1, flagP, flagP, 0x45000000, flagP, flagP, valA3 + 2, flagP, flagP,
            &ctxB[0x32], &g_567c74, 0xffffffff, 2, 0x46a00000, &a1[2], 0x3f060a92, 0x43aa0000,
            0x442a0000, flagP);
    }

    if (*srcS)
    {
        result = a1[5];
        int32_t dstD1;

        if (result)
            dstD1 = *(ctxB + 0x58);

        if (result && dstD1)
        {
        label_4384f6:
            uint32_t valA6 = Weapon_CheckAmmo_8();
            int32_t tmpD4 = 0;
            tmpD4 = *(*srcS + 0x1c);
            result = valA6 * 0x180 + tmpD4;

            if (*((result << 2) + &g_a96ae0))
            {
                int32_t valA9 = *(ctxB + 0x54);
                int32_t v_38_1 = dstD1 + 0x18;
                int32_t dstD3 = *srcS;
                int32_t* v_40 = srcS;
                int32_t v_3c_1 = 0;
                int32_t v_34_1 = valA9;
                uint32_t valA11 = Weapon_CheckAmmo_8();
                int32_t tmpD5 = 0;
                tmpD5 = *(dstD3 + 0x1c);
                result = (*(((valA11 * 0x180 + tmpD5) << 2) + &g_a96ae0))(dstD3, &v_40);
            }
        }
        else
        {
            dstD1 = *(ctxB + 0x5c);

            if (dstD1)
                goto label_4384f6;
        }
    }

    if (*ctxB && !flagP)
    {
        result = Sys_CheckHeap_13(Level_SetMission_5());

        if (result & 1)
        {
            uint32_t tmpD7 = g_57be7c + 0x18;
            int32_t v_4c = flagP;
            int32_t v_48 = flagP;
            int32_t v_44_1 = flagP;
            int32_t v_58 = 0x42fe0000;
            int32_t v_54_1 = 0x42fe0000;
            int32_t v_50_1 = 0x42fe0000;
            float v_6c = 163.839996f;
            int32_t v_68_1 = 0x4323d70a;
            void* valA14 = Level_StartMission_4();
            struct status_msg* valA16 = Script_FormatString_30(Script_FormatString(), valA14, tmpD7, &v_4c, &v_58,
                &v_6c, 0x48c80000, 0x1080000, flagP, 0x3db60b61, flagP, 2, flagP);
            double v_30 = srcS[0xe];
            double v_28_1 = srcS[0xf];
            double v_20_1 = srcS[0x10];
            Sys_FreeMemory_11(&v_30);
            long double x87_r7_5 = v_6c * 3.0;
            v_30 = x87_r7_5 * v_30;
            double v_28_2 = x87_r7_5 * v_28_1;
            double v_20_2 = x87_r7_5 * v_20_1;
            v_30 = v_30 + *(srcS + 8);
            double v_28_3 = v_28_2 + *(srcS + 0x10);
            long double x87_r7_12 = v_20_2 + *(srcS + 0x18);
            int32_t v_64 = flagP;
            int32_t v_60_1 = flagP;
            int32_t v_5c_1 = flagP;
            double v_20_3 = x87_r7_12;
            long double x87_r6_6 = v_6c * 0.25;
            void v_18;
            memcpy(&v_18, &v_30, 0x18);
            double v_8_1 = x87_r6_6 + x87_r7_12;
            float v_5c_2 = (Sys_AllocateMemory_14(Level_SetMission_5()) * 0.75 + 0.14999999999999999)
                * 4096000f * 9.25925906e-06f;
            float v_70_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.25 + 0.75;
            long double x87_r7_23 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
            Script_SpawnNewTask_31(valA16, &v_30, &v_64, v_70_1,
                (x87_r7_23 + x87_r7_23) * 0.052359879f + 0.0127990814f, flagP, 0x3f800000, 0xf, 0x1e);
            float v_5c_3 = v_5c_2 * 1.25f;
            long double x87_r7_30 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
            return Script_SpawnNewTask_31(valA16, &v_18, &v_64, v_70_1,
                (x87_r7_30 + x87_r7_30) * 0.052359879f + 0.0127990814f, flagP, 0x3f800000, 0xf, 0x1e);
        }
    }

    return result;
}
