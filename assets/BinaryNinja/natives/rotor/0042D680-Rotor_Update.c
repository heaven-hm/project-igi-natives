// Original IGI.EXE function: Rotor_Update (VA 0x0042D680; static CFG gate PASS, CFG score 0.889).
#include "Rotor_Update.h"
void* Rotor_Update(void* a1, float a2)

{
    int32_t* flagP = a2;
    float* valA = flagP[1];
    double v_40 = valA[2] * *(a1 + 0x100) + valA[1] * *(a1 + 0xf8) + *valA * *(a1 + 0xf0);
    double v_38 = valA[5] * *(a1 + 0x100) + valA[4] * *(a1 + 0xf8) + valA[3] * *(a1 + 0xf0);
    double* valA1 = *flagP;
    double v_30 = valA[8] * *(a1 + 0x100) + valA[7] * *(a1 + 0xf8) + valA[6] * *(a1 + 0xf0);
    long double x87_r7_12 = v_40;
    double v_18;
    memcpy(&v_18, &v_40, 0x18);
    v_18 = x87_r7_12 + *valA1;
    double v_10;
    double v_10_1 = v_10 + valA1[1];
    double v_8;
    double v_8_1 = v_8 + valA1[2];
    long double x87_r7_18 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_18;
    long double x87_r7_19;

    if (!(*(&((x87_r6_12 < x87_r7_18 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_18) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_19 = *(a1 + 0xa0);
    else
        x87_r7_19 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_19;
    long double x87_r7_21;

    if (*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_22 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_22;

        if (!(*(&((x87_r6_14 < x87_r7_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_22) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_22 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_21 = *(a1 + 0xa0);
        else
            x87_r7_21 = *(a1 + 0x9c);
    }
    else
        x87_r7_21 = *(a1 + 0x98);

    float v_54_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_21;
    double* i_1 = &v_18;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, i_1, v_54_1);
    float* valA5 = flagP[1];
    v_40 = *(a1 + 0x120) * valA5[2] + *(a1 + 0x108) * *valA5 + valA5[1] * *(a1 + 0x114);
    *(&v_40 + 4) =
        *(a1 + 0x124) * valA5[2] + *(a1 + 0x10c) * *valA5 + valA5[1] * *(a1 + 0x118);
    v_38 = *(a1 + 0x128) * valA5[2] + *(a1 + 0x110) * *valA5 + valA5[1] * *(a1 + 0x11c);
    *(&v_38 + 4) =
        valA5[4] * *(a1 + 0x114) + *(a1 + 0x120) * valA5[5] + *(a1 + 0x108) * valA5[3];
    v_30 = valA5[4] * *(a1 + 0x118) + *(a1 + 0x124) * valA5[5] + *(a1 + 0x10c) * valA5[3];
    *(&v_30 + 4) =
        valA5[4] * *(a1 + 0x11c) + *(a1 + 0x128) * valA5[5] + *(a1 + 0x110) * valA5[3];
    float v_28 =
        valA5[7] * *(a1 + 0x114) + *(a1 + 0x120) * valA5[8] + *(a1 + 0x108) * valA5[6];
    float v_24 =
        valA5[7] * *(a1 + 0x118) + *(a1 + 0x124) * valA5[8] + *(a1 + 0x10c) * valA5[6];
    void* result = a1 + 0x70;
    int32_t v_1c = valA5[9] + *(a1 + 0x12c) + 1;
    float v_20 =
        valA5[7] * *(a1 + 0x11c) + *(a1 + 0x128) * valA5[8] + *(a1 + 0x110) * valA5[6];
    memcpy(result, &v_40, 0x28);
    double* i = *(a1 + 8);
    void* result_1 = *i;

    if (result_1 && i)
    {
        *(&v_40 + 4) = result;
        result = result_1;
        v_40 = a1 + 0x20;

        if (result && i)
        {
            int32_t objC1 = g_afa7e0;

            do
            {
                int32_t* tmpD1 = *i;
                void* valA10;

                if (!tmpD1)
                    valA10 = nullptr;
                else
                {
                    int32_t valA7 = *tmpD1;
                    int32_t valA8 = -(valA7);
                    valA10 = (valA8 - valA8) & tmpD1;
                }

                *((objC1 << 2) + &g_afa6e0) = valA10;
                g_afa7e0 = objC1 + 1;
                uint32_t valA12 = MagicObj_GetEventId();
                int32_t valA13 = 0;
                valA13 = *(i + 0x1c);
                result = *(((valA12 * 0x180 + valA13) << 2) + &g_a96ae0);

                if (result)
                {
                    double* v_54_2 = &v_40;
                    i_1 = i;
                    result = result(i_1, v_54_2);
                }

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
