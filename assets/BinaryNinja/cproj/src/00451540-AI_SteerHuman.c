#include "gi_platform.h"
#include "00451540-AI_SteerHuman.h"
int32_t AI_SteerHuman(long double a1 , long double a2 , void* a3)

{
    int32_t* srcS = (*(int32_t*)(uintptr_t)(a3 + 0xe0));
    int32_t* v_34 = srcS;

    if (!*srcS || !srcS)
        return 2;

    void* v_60;
    double* v_58;
    void* v_54;
    void* v_50;
    double v_30;

    if (srcS[8] == 1)
    {
        if (!(*(int32_t*)(uintptr_t)(a3 + 0x3e4a)))
        {
            v_50 = (*(int32_t*)(uintptr_t)(a3 + 0x3b6c));
            v_54 = Script_ExecuteLevelScript_23(v_50, (*(int32_t*)(uintptr_t)(a3 + 0x3e2c)));
            v_58 = &v_30;
            Script_CallNativeHandler_23(v_58, v_54);
            int32_t v_18_1 = 0;
            int32_t v_14_1 = 0xbff00000;
            void* v_10_1 = nullptr;
            int32_t i_1 = 0;

            if (*Level_StartMission_3() > 0)
            {
                int32_t dstD1 = 8;
                int32_t* valA12;
                int32_t i;

                do
                {
                    int32_t objC2 = 0;
                    objC2 = *(*(Level_StartMission_3() + dstD1) + 0x1c);
                    int32_t srcS3 = *(((objC2 + AI_FireWeapon() * 0x180) << 2) + &g_a96ae0);

                    if (srcS3)
                    {
                        double* v_4c_2 = &v_30;
                        v_50 = *(Level_StartMission_3() + dstD1);
                        srcS3(v_50, v_4c_2);
                    }

                    dstD1 += 4;
                    i = i_1 + 1;
                    i_1 = i;
                    valA12 = Level_StartMission_3();
                } while (i < *valA12);
                srcS = v_34;
            }

            int32_t* valA13 = (*(int32_t*)(uintptr_t)(a3 + 0x3e4c));

            if (valA13)
            {
                Qtask_UpdateList(valA13);
                (*(int32_t*)(uintptr_t)(a3 + 0x3e4c)) = 0;
            }

            if (v_10_1)
                (*(int32_t*)(uintptr_t)(a3 + 0x3e4c)) = QTask_LinkEventHandler_2(v_10_1);

            (*(int32_t*)(uintptr_t)(a3 + 0x3e4a)) = 1;
        }

        int32_t* valA16 = (*(int32_t*)(uintptr_t)(a3 + 0x3e4c));

        if (valA16)
        {
            void* dstD2 = *valA16;

            if (dstD2)
            {
                int32_t valA17 = Env_CheckAmbientArea_9(dstD2);

                if (valA17 == 1)
                {
    label_451683: ;
                    Env_ScanViewCone_9(dstD2);
                    AI_UpdateOrders_3(a3, &srcS[2], 0.0349065848.0f, 1);
                    return 1;
                }

                if (valA17 == 2)
                {
                    char* v_4c_7 = "Waiting for door to open";
                    int32_t v_50_2 = 0xffffffff;
                    void* v_54_2 = a3;
                    char v_58_2 = 1;
                    float v_5c_1 = 0.0349065848.0f;
                    v_60 = &srcS[2];
                    AI_UpdateOrders_3(a3, v_60, v_5c_1, v_58_2);
                    return 1;
                }

                if (valA17 == 3)
                    goto label_451683;
            }
        }
    }

    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(srcS + 8)) - (*(int32_t*)(uintptr_t)(a3 + 0x20));
    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(srcS + 0x10)) - (*(int32_t*)(uintptr_t)(a3 + 0x28));
    long double x87_r5_1 = (*(int32_t*)(uintptr_t)(srcS + 0x18)) - (*(int32_t*)(uintptr_t)(a3 + 0x30));
    v_30 = (*(int32_t*)(uintptr_t)(a3 + 0x68)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a3 + 0x5c)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a3 + 0x50)) * x87_r7_1;
    double v_28 =
        (*(int32_t*)(uintptr_t)(a3 + 0x6c)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a3 + 0x60)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a3 + 0x54)) * x87_r7_1;
    double v_20 =
        (*(int32_t*)(uintptr_t)(a3 + 0x70)) * x87_r5_1 + (*(int32_t*)(uintptr_t)(a3 + 0x64)) * x87_r6_1 + (*(int32_t*)(uintptr_t)(a3 + 0x58)) * x87_r7_1;
    memcpy(&v_60, &v_30, 0x18);
    WeaponType_GetConfig(v_58, v_54);
    float v_3c = -(a1);
    AI_CheckVisibility_3(a3 + 0x20);
    float v_38_1 = a2;
    v_50 = v_3c;
    v_58 = v_38_1;
    char* v_5c_2 = "A:  %f, G:  %f";
    v_60 = 0xffffffff;
    void* v_64_2 = a3;
    long double x87_r1_3 = -((*(int32_t*)(uintptr_t)(a3 + 0x3ec8)));
    long double x87_r0_1 = v_38_1;
    x87_r0_1 - x87_r1_3;

    if (*(&((x87_r0_1 < x87_r1_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_1, x87_r1_3) ? 1 : 0) << 0xa
            | (x87_r0_1 == x87_r1_3 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        v_38_1 = x87_r1_3;
    else
    {
        long double x87_r1_5 = (*(int32_t*)(uintptr_t)(a3 + 0x3ec8));
        long double f1_1 = v_38_1;
        x87_r1_5 - f1_1;

        if (*(&((x87_r1_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_5, f1_1) ? 1 : 0) << 0xa
                | (x87_r1_5 == f1_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            v_38_1 = (*(int32_t*)(uintptr_t)(a3 + 0x3ec8));
    }

    long double x87_r1_7 = -((*(int32_t*)(uintptr_t)(a3 + 0x3ecc)));
    long double x87_r0_2 = v_3c;
    x87_r0_2 - x87_r1_7;

    if (*(&((x87_r0_2 < x87_r1_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r0_2, x87_r1_7) ? 1 : 0) << 0xa
            | (x87_r0_2 == x87_r1_7 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        v_3c = x87_r1_7;
    else
    {
        long double x87_r1_9 = (*(int32_t*)(uintptr_t)(a3 + 0x3ecc));
        long double f4_1 = v_3c;
        x87_r1_9 - f4_1;

        if (*(&((x87_r1_9 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_9, f4_1) ? 1 : 0) << 0xa
                | (x87_r1_9 == f4_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            v_3c = (*(int32_t*)(uintptr_t)(a3 + 0x3ecc));
    }

    v_50 = v_3c;
    v_58 = v_38_1;
    char* v_5c_3 = "CA: %f, CG: %f";
    v_60 = 0xffffffff;
    void* v_64_3 = a3;
    long double x87_r1_12 = v_30;
    long double f6 = 0.0;
    x87_r1_12 - f6;

    if (*(&((x87_r1_12 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_12, f6) ? 1 : 0) << 0xa
            | (x87_r1_12 == f6 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        x87_r1_12 = -(x87_r1_12);

    long double f7 = 1228.8;
    x87_r1_12 - f7;

    if (*(&((x87_r1_12 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_12, f7) ? 1 : 0) << 0xa
        | (x87_r1_12 == f7 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41)
    {
        long double x87_r1_13 = v_28;
        long double f8_1 = 0.0;
        x87_r1_13 - f8_1;

        if (*(&((x87_r1_13 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_13, f8_1) ? 1 : 0) << 0xa
                | (x87_r1_13 == f8_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            x87_r1_13 = -(x87_r1_13);

        long double f9_1 = 1228.8;
        x87_r1_13 - f9_1;

        if (*(&((x87_r1_13 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r1_13, f9_1) ? 1 : 0) << 0xa
            | (x87_r1_13 == f9_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41)
        {
            (*(int32_t*)(uintptr_t)(a3 + 0x3e2c)) = v_34[9];
            Camera_ApplyHandiCam_33(v_34);
            int32_t* v_54_3 = &g_58a9c8;
            v_34[1] = 0;
            *v_34 = 0;
            Camera_SetFieldOfView_33(v_54_3, v_34);

            if ((*(int32_t*)(uintptr_t)(a3 + 0x3e4a)))
            {
                int32_t* valA28 = (*(int32_t*)(uintptr_t)(a3 + 0x3e4c));

                if (valA28)
                {
                    Qtask_UpdateList(valA28);
                    (*(int32_t*)(uintptr_t)(a3 + 0x3e4c)) = 0;
                }

                (*(int32_t*)(uintptr_t)(a3 + 0x3e4a)) = 0;
            }

            return 0;
        }
    }

    (*(int32_t*)(uintptr_t)(a3 + 0x3c84)) = 0x3f800000;
    (*(int32_t*)(uintptr_t)(a3 + 0x3c74)) = v_3c * 0.318309873.0f;
    (*(int32_t*)(uintptr_t)(a3 + 0x3c78)) = v_38_1 * 0.318309873.0f;
    return 1;
}
