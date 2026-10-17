// Original IGI.EXE function: Gunner_Combat (VA 0x0048D340; static CFG gate PASS, CFG score 0.967).
#include "Gunner_Combat.h"
int32_t* Gunner_Combat(long double a1 @ fp1, int32_t a2, int32_t* a3)

{
    int32_t* srcS = a3;
    void* valA = *(a2 + 0x14);
    char* v_64 = "Gunner Combat - Stand";
    void* dstD1 = srcS[0xa] + 8;
    int32_t v_68 = 0xffffffff;
    int32_t v_6c = a2;
    int32_t v_4c = 0;
    void* v_70 = dstD1;
    FX_SmokeEmit_17(a2, v_70);
    void* valA1 = *(a2 + 0x3de4);

    if (!valA1)
        return AI_CombatTarget_2(a2, srcS);

    int32_t valA3 = *(a2 + 0x3ac8);
    void* v_78;

    if (valA3 != 0xffffffff)
    {
        void* valA4 = Script_ExecuteLevelScript_4(valA3);

        if (!valA4)
        {
            int32_t v_64_3 = *(a2 + 0x3ac8);
            Warning_Show("Stationary gun ID #%d not found");
        label_48d3f5:

            if (valA4)
            {
                double v_38;
                int64_t* v_68_3 = &v_38;
                AI_UpdatePatrol_3(v_68_3, a2);
                long double x87_r7_2 = v_38 - *(valA4 + 0xf0);
                double v_30;
                long double x87_r6_2 = v_30 - *(valA4 + 0xf8);
                double v_30_1 = x87_r6_2;
                double v_28;
                long double x87_r5_2 = v_28 - *(valA4 + 0x100);
                double v_28_1 = x87_r5_2;
                double v_20 = *(valA4 + 0x120) * x87_r5_2 + *(valA4 + 0x114) * x87_r6_2
                    + *(valA4 + 0x108) * x87_r7_2;
                double v_18_1 = *(valA4 + 0x124) * x87_r5_2 + *(valA4 + 0x118) * x87_r6_2
                    + *(valA4 + 0x10c) * x87_r7_2;
                double v_10_1 = *(valA4 + 0x128) * x87_r5_2 + *(valA4 + 0x11c) * x87_r6_2
                    + *(valA4 + 0x110) * x87_r7_2;
                memcpy(&v_38, &v_20, 0x18);
                v_38 = -(v_20);
                double v_30_2 = -(v_30_1);
                double v_28_2 = -(v_28_1);
                memcpy(&v_78, &v_38, 0x18);
                WeaponType_InitType();
                long double fpu0;
                float v_50 = fpu0;
                memcpy(&v_78, &v_38, 0x18);
                WeaponType_GetConfig();
                float v_54_1 = a1;
                v_68_3 = a1;
                v_70 = v_50;
                char* v_74_1 = "Gun->Tgt: A:%1.3f, G:%1.3f";
                v_78 = 0xffffffff;
                int32_t v_7c_1 = a2;
                char* v_80_1 = "Gun params:";
                int32_t v_84_1 = 0xffffffff;
                int32_t v_88_1 = a2;
                v_68_3 = *(valA4 + 0x1e0) * 0.0174532924f;
                v_70 = *(valA4 + 0x1e4) * 0.0174532924f;
                v_78 = *(valA4 + 0x1e8) * 0.0174532924f;
                char* v_7c_2 = "MG:%1.3f, A-:%1.3f, A+:%1.3f";
                int32_t v_80_2 = 0xffffffff;
                int32_t v_84_2 = a2;
                long double x87_r1_7 = v_54_1;
                long double f1_1 = 0f;
                x87_r1_7 - f1_1;
                long double x87_r1_8 = v_54_1;

                if (*(&((x87_r1_7 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r1_7, f1_1) ? 1 : 0) << 0xa
                        | (x87_r1_7 == f1_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
                    x87_r1_8 = -(x87_r1_8);

                long double x87_r0_2 = *(valA4 + 0x1e8) * 0.0174532924f;
                x87_r1_8 - x87_r0_2;

                if (*(&((x87_r1_8 < x87_r0_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r1_8, x87_r0_2) ? 1 : 0) << 0xa
                    | (x87_r1_8 == x87_r0_2 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                {
                    long double x87_r1_11 = *(valA4 + 0x1e4) * 0.0174532924f;
                    long double f2_1 = v_50;
                    x87_r1_11 - f2_1;

                    if (*(&((x87_r1_11 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r1_11, f2_1) ? 1 : 0) << 0xa
                        | (x87_r1_11 == f2_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                    {
                        long double x87_r1_13 = *(valA4 + 0x1e0) * 0.0174532924f;
                        long double f3_1 = v_50;
                        x87_r1_13 - f3_1;

                        if (!(*(&((x87_r1_13 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r1_13, f3_1) ? 1 : 0) << 0xa
                            | (x87_r1_13 == f3_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
                        {
                            char* v_64_5 = "Target is in guncone";
                            int32_t v_68_4 = 0xffffffff;
                            int32_t v_6c_1 = a2;
                            v_4c = 1;
                        }
                    }
                }
            }
        }
        else if (!*(valA4 + 0x21c) || *(valA4 + 0x208) == valA)
            goto label_48d3f5;

        srcS = a3;
    }

    char valA9;
    int32_t objC2;
    valA9 = Locomotion_GetState(a2, 4);

    if (!valA9)
    {
        int32_t valA30 = v_4c;

        if (!valA30)
            *(dstD1 + 0x14) = 0x1e;
        else
        {
            int32_t valA31 = *(dstD1 + 0x14);

            if (!valA31)
            {
🚫🚫                /* unimplemented  {fild fp0, dword [ctxB+0x3ac8]} */
                int32_t v_64_16 = objC2;
🚫🚫🚫                float v_64_17 = /* float v_64_17 = unimplemented  {fstp dword [esp], fp0} */;
                /* unimplemented  {fstp dword [esp], fp0} */
                return AI_WriteChannel(a2, 4, v_64_17);
            }

            valA30 = valA31 - 1;
            *(dstD1 + 0x14) = valA30;
        }

        if (*(a2 + 0x3e00) != 0xffffffff)
            return Guard_CombatStand(a2, srcS);

        char* v_64_18 = "No primary weapon";
        int32_t v_68_16 = 0xffffffff;
        int32_t v_6c_9 = a2;
        return valA30;
    }

    int32_t objC3 = *(dstD1 + 0x18);
    *(dstD1 + 0x18) = 0;

    if (v_4c)
        *(dstD1 + 0x14) = 0x1e;
    else
    {
        int32_t valA11 = *(dstD1 + 0x14);

        if (!valA11)
        {
            AI_WriteChannel(a2, 4, 1f);
            int32_t v_70_1 = 0xffffffff;
            v_78 = *(a2 + 0x3aa8);
            return Combat_SetAimMode(v_78, a2, v_70_1);
        }

        *(dstD1 + 0x14) = valA11 - 1;
    }

    Weapon_FireBullet_4(**(valA + 0x7b4), a2 + 0x38, a2 + 0x78);

    if (!*(valA1 + 0x29))
    {
        Combat_SetAimMode(*(a2 + 0x3aa8), a2, 0xffffffff);
        *(dstD1 + 0x18) = objC3 + 1;

        if (objC3 + 1 <= *(a2 + 0x3d50))
        {
            srcS[9] = 0;
            return AI_UpdateOrders_3(a2, *(a2 + 0x3aa8) + 0x110, 0.0349065848f, 0);
        }

        return AI_CombatTarget_2(a2, srcS);
    }

    int32_t valA22 = srcS[9];

    if (valA22)
    {
        int32_t* valA23 = valA22(a2, srcS);

        if (!valA23)
            return valA23;

        srcS[9] = 0;
    }

    if (AI_UpdateOrders_2(*(a2 + 0x3aa8), 0) >= 4)
        return Combat_SetAimMode(*(a2 + 0x3aa8), a2, 2);

    Combat_SetAimMode(*(a2 + 0x3aa8), a2, 0);
    void* objC9 = AI_UpdatePatrol_3(a2 + 0x3e88, a2);
    objC9 = *(srcS[0xa] + 0x28);
    v_78 = objC9;
    uint32_t valA27 = Combat_BeginBurst(a2, v_78);
    *(srcS[0xa] + 0x28) = 0;
    srcS[9] = StandFire;
    return valA27;
}
