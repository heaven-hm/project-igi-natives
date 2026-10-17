// Original IGI.EXE function: ProximityMine_Setup (VA 0x004755A0; static CFG gate PASS, CFG score 0.958).
#include "ProximityMine_Setup.h"
void* ProximityMine_Setup(void* a1, char* a2)

{
    void* tmpD = *(a1 + 0x128);
    int32_t srcS = *(a2 + 4);
    float* v_d0 = *(tmpD + 0x6e4);

    if (srcS)
        memcpy(a1 + 0x150, srcS, 0x18);

    void* valA1 = *(a2 + 8);
    void* result;
    int32_t objC2;

    if (!valA1)
    {
        objC2 = *(a1 + 0x80);
        *(a1 + 0x168) = *(a1 + 0x74);
        result = *(a1 + 0x8c);
        *(a1 + 0x16c) = objC2;
        *(a1 + 0x170) = result;
    }
    else
    {
        *(a1 + 0x168) = *(valA1 + 4);
        *(a1 + 0x16c) = *(*(a2 + 8) + 0x10);
        result = *(a2 + 8);
        *(a1 + 0x170) = *(result + 0x1c);
    }

    if (*a2)
    {
        result = *(a1 + 0x134);

        if (!result)
        {
            long double x87_r7_2 = *(tmpD + 0x650) * 4096f;
            float valA4 = *(a1 + 0x16c);
            float v_e8 = *(a1 + 0x168);
            float objC4 = *(a1 + 0x170);
            int32_t tmpD1 = *(a1 + 0x14);
            v_e8 = x87_r7_2 * v_e8;
            double v_58;
            memcpy(&v_58, a1 + 0x150, 0x18);
            float v_e4_2 = x87_r7_2 * valA4;
            double v_40 = v_e8 + v_58;
            void* v_e4_3 = a1;
            int32_t v_e0_2 = tmpD1;
            int32_t v_dc_1 = 0;
            int32_t v_d8_1 = 0x3f800000;
            double v_50;
            double v_38_1 = v_e4_2 + v_50;
            double v_48;
            double v_30_1 = x87_r7_2 * objC4 + v_48;
            char valA5 = Level_StartMission_2();
            int32_t v_c8;
            int32_t tmpD2 = DynObj_FindSymbol_11(Level_StartMission_4(), &v_c8, &v_58, &v_40, 1, valA5,
                &v_e8, 0xffffffff);
            void* result_1;
            result = result_1;

            if (result)
            {
                int32_t dstD2;

                if (!v_c8)
                    dstD2 = 0;
                else
                {
                    int16_t valA8 = AI_UpdateOrders_17();
                    tmpD2 = *(v_c8 + 0x1c);

                    if (!TaskType_IsDerivedFrom(tmpD2, valA8))
                        dstD2 = 0;
                    else
                        dstD2 = 1;
                }

                int32_t valA10 = v_c8;
                char valA13;

                if (valA10 && *(valA10 + 0x14))
                {
                    int16_t valA11 = AI_UpdateOrders_17();
                    tmpD2 = *(*(v_c8 + 0x14) + 0x1c);
                    valA13 = TaskType_IsDerivedFrom(tmpD2, valA11);
                }

                int32_t srcS2;

                if (!valA10 || !*(valA10 + 0x14) || !valA13)
                    srcS2 = 0;
                else
                    srcS2 = 1;

                if (!v_c8)
                    result = nullptr;
                else
                {
                    int16_t valA15 = Env_CheckAmbientArea_11();
                    objC2 = v_c8;

                    if (*(objC2 + 0x1c) == valA15)
                        result = 1;
                    else
                    {
                        int16_t valA16 = Env_ScanViewCone_8();

                        if (*(v_c8 + 0x1c) == valA16)
                            result = 1;
                        else
                        {
                            int16_t valA17 = Script_ExecuteLevelScript_16();
                            objC2 = *(v_c8 + 0x1c);

                            if (!TaskType_IsDerivedFrom(objC2, valA17))
                                result = nullptr;
                            else
                                result = 1;
                        }
                    }
                }

                if (!dstD2 && !srcS2 && !result)
                {
                    float v_90;
                    long double x87_r7_5 = v_90;
                    long double f0_1 = 0f;
                    x87_r7_5 - f0_1;
                    float v_8c;
                    float v_88;

                    if (!(*(&((x87_r7_5 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, f0_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_47581e:
                        long double x87_r7_8 = v_88;
                        long double x87_r6_9 = v_8c;
                        long double x87_r5_1 = v_90;
                        long double x87_r7_10 = 1.0 /
                            sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_9 * x87_r6_9 + x87_r7_8 * x87_r7_8);
                        v_90 = v_90 * x87_r7_10;
                        float v_8c_1 = v_8c * x87_r7_10;
                        float v_88_1 = v_88 * x87_r7_10;
                    }
                    else
                    {
                        long double x87_r7_6 = v_8c;
                        long double f1_1 = 0f;
                        x87_r7_6 - f1_1;

                        if (!(*(&((x87_r7_6 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_47581e;

                        long double x87_r7_7 = v_88;
                        long double f2_1 = 0f;
                        x87_r7_7 - f2_1;

                        if (!(*(&((x87_r7_7 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_7, f2_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_47581e;
                    }
                    float v_28[0xa];
                    WeaponType_SetCategory(&v_28, &v_90);
                    int32_t tmpD4 = v_d0[3];
                    int32_t objC8 = v_d0[2];
                    int32_t tmpD5 = v_d0[1];
                    v_d0 = *v_d0 * 30f;
                    void v_c0;
                    Mine_ProximityCreate(Script_FormatString(), &v_c0, &v_28, tmpD + 0x61c, v_d0,
                        tmpD5, objC8, tmpD4, a2[0x18]);
                    result = *(a1 + 0x144);

                    if (result > 0)
                    {
                        result -= 1;
                        *(a1 + 0x144) = result;
                    }

                    a2[1] = 1;
                }
            }
        }
    }

    *(a1 + 0x134) = *a2;
    return result;
}
