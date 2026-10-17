// Original IGI.EXE function: Vehicle_InitPlane_9 (VA 0x0043D960; static CFG gate PASS, CFG score 0.963).
#include "Vehicle_InitPlane_9.h"
int32_t Vehicle_InitPlane_9(float a1)

{
    float ctxB = a1;
    int32_t result = *(ctxB + 0x180);
    char v_55 = 1;

    if (result != 0xffffffff)
    {
        float v_54_1 = Physics_SimulateRigidBody(result);
        a1 = *(ctxB + 0x184);
        long double x87_r7_2 = a1;
        long double f1_1 = v_54_1;
        x87_r7_2 - f1_1;

        if (!(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            *(ctxB + 0x184) = v_54_1;
            a1 = v_54_1 - 0.100000001f;
        }

        long double x87_r7_5 = a1;
        long double f2_1 = 0f;
        x87_r7_5 - f2_1;
        int16_t valA1 = (x87_r7_5 < f2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, f2_1) ? 1 : 0) << 0xa | (x87_r7_5 == f2_1 ? 1 : 0) << 0xe;

        if (*(&valA1 + 1) & 1)
        {
            a1 = 0f;
            *(ctxB + 0x184) = 0;
        }

        valA1 = *(ctxB + 0x18c);
        char* v_78;
        float v_50;
        double v_40;
        double v_28;
        double v_20;
        double v_18;
        double* flagP1;

        if (!valA1)
        {
            float* __saved_edi_3 = &v_50;
            int32_t v_6c_2 = 0;
            int32_t v_70_2 = 0;
            flagP1 = ctxB + 0xf0;
            int32_t tmpD4 = *(ctxB + 0x180);
            v_78 = &v_55;
            v_50 = 0f;
            int32_t v_4c_1 = 0;
            int32_t v_48_1 = 0;
            result = Script_ParseEnumReal32_32(tmpD4, &v_28, flagP1, v_78, a1, v_70_2, __saved_edi_3);
            result = v_55;

            if (result)
            {
                result = *(ctxB + 0x18d);

                if (!result)
                {
                    float v_10;
                    v_50 = v_28 * *(ctxB + 0x120) + v_10 * *(ctxB + 0x128)
                        + *(&v_20 + 4) * *(ctxB + 0x124);
                    float v_c;
                    float v_4c_2 = *(&v_28 + 4) * *(ctxB + 0x120) + v_c * *(ctxB + 0x128)
                        + v_18 * *(ctxB + 0x124);
                    float v_8;
                    float v_48_2 = v_20 * *(ctxB + 0x120) + v_8 * *(ctxB + 0x128)
                        + *(&v_18 + 4) * *(ctxB + 0x124);
                    float v_44_1 = v_28 * *(ctxB + 0x12c) + v_10 * *(ctxB + 0x134)
                        + *(&v_20 + 4) * *(ctxB + 0x130);
                    v_40 = *(&v_28 + 4) * *(ctxB + 0x12c) + v_c * *(ctxB + 0x134)
                        + v_18 * *(ctxB + 0x130);
                    *(&v_40 + 4) = v_20 * *(ctxB + 0x12c) + v_8 * *(ctxB + 0x134)
                        + *(&v_18 + 4) * *(ctxB + 0x130);
                    float v_38_1 = v_10 * *(ctxB + 0x140) + *(&v_20 + 4) * *(ctxB + 0x13c)
                        + v_28 * *(ctxB + 0x138);
                    float v_34_1 = v_c * *(ctxB + 0x140) + v_18 * *(ctxB + 0x13c)
                        + *(&v_28 + 4) * *(ctxB + 0x138);
                    result = *(ctxB + 0x144);
                    int32_t v_4;
                    int32_t v_2c_1 = result + v_4 + 1;
                    float v_30_1 = v_8 * *(ctxB + 0x140) + *(&v_18 + 4) * *(ctxB + 0x13c)
                        + v_20 * *(ctxB + 0x138);
                    memcpy(ctxB + 0x70, &v_50, 0x28);
                }

                goto label_43dc50;
            }
        }
        else
        {
            void* valA2 = Physics_CheckHullCollision(*(ctxB + 0x180));
            Physics_UpdateForces(&v_50, *(ctxB + 0x180), 0);
            int32_t tmpD2 = *(ctxB + 0x180);
            v_78 = valA2 - 1;
            result = Physics_UpdateForces(&v_28, tmpD2, v_78);
            long double x87_r7_7 = *(ctxB + 0x184) / v_54_1;
            flagP1 = ctxB + 0xf0;
            *flagP1 = (v_28 - v_50) * x87_r7_7 + v_50;
            int32_t v_48;
            *(ctxB + 0xf8) = (v_20 - v_48) * x87_r7_7 + v_48;
            *(ctxB + 0x100) = (v_18 - v_40) * x87_r7_7 + v_40;
        label_43dc50:
            result = v_55;

            if (result)
            {
                long double x87_r7_47 = *(ctxB + 0x9c);
                long double x87_r6_48 = *(ctxB + 0xa0);
                x87_r6_48 - x87_r7_47;
                long double x87_r7_48;

                if (!(*(&((x87_r6_48 < x87_r7_47 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_48, x87_r7_47) ? 1 : 0) << 0xa
                        | (x87_r6_48 == x87_r7_47 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_48 = *(ctxB + 0xa0);
                else
                    x87_r7_48 = *(ctxB + 0x9c);

                long double x87_r6_49 = *(ctxB + 0x98);
                x87_r6_49 - x87_r7_48;
                long double x87_r7_50;

                if (*(&((x87_r6_49 < x87_r7_48 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_49, x87_r7_48) ? 1 : 0) << 0xa
                    | (x87_r6_49 == x87_r7_48 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r7_51 = *(ctxB + 0x9c);
                    long double x87_r6_50 = *(ctxB + 0xa0);
                    x87_r6_50 - x87_r7_51;

                    if (!(*(&((x87_r6_50 < x87_r7_51 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_50, x87_r7_51) ? 1 : 0) << 0xa
                            | (x87_r6_50 == x87_r7_51 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_50 = *(ctxB + 0xa0);
                    else
                        x87_r7_50 = *(ctxB + 0x9c);
                }
                else
                    x87_r7_50 = *(ctxB + 0x98);

                float __saved_edi_5 = Render_ComputeNormals(*(ctxB + 0x6c)) * x87_r7_50;
                return WorldObject_CommitTransform(Level_StartMission_4(), ctxB, flagP1, __saved_edi_5);
            }
        }
    }

    return result;
}
