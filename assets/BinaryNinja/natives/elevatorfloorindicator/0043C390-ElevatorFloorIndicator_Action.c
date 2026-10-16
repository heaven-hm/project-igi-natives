#include "ElevatorFloorIndicator_Action.h"
void* ElevatorFloorIndicator_Action(void* a1, int32_t* a2)

{
    float* valA = a2[1];
    double v_30 = valA[2] * *(a1 + 0x140) + valA[1] * *(a1 + 0x138) + *valA * *(a1 + 0x130);
    double v_28 = valA[5] * *(a1 + 0x140) + valA[4] * *(a1 + 0x138) + valA[3] * *(a1 + 0x130);
    double v_20 = valA[8] * *(a1 + 0x140) + valA[7] * *(a1 + 0x138) + valA[6] * *(a1 + 0x130);
    memcpy(a1 + 0xf0, &v_30, 0x18);
    *(a1 + 0xf0) = **a2 + *(a1 + 0xf0);
    *(a1 + 0xf8) = *(*a2 + 8) + *(a1 + 0xf8);
    *(a1 + 0x100) = *(*a2 + 0x10) + *(a1 + 0x100);
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

    float v_4c_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_21;
    void* v_58 = *(a1 + 0x68);
    WorldObject_CommitTransform(v_58, a1, a1 + 0xf0, v_4c_1);
    float* valA6 = a2[1];
    v_30 = *(a1 + 0x160) * valA6[2] + *(a1 + 0x148) * *valA6 + *(a1 + 0x154) * valA6[1];
    *(&v_30 + 4) =
        *(a1 + 0x164) * valA6[2] + *(a1 + 0x14c) * *valA6 + *(a1 + 0x158) * valA6[1];
    v_28 = *(a1 + 0x168) * valA6[2] + *(a1 + 0x150) * *valA6 + *(a1 + 0x15c) * valA6[1];
    *(&v_28 + 4) =
        *(a1 + 0x154) * valA6[4] + valA6[5] * *(a1 + 0x160) + valA6[3] * *(a1 + 0x148);
    v_20 = *(a1 + 0x158) * valA6[4] + valA6[5] * *(a1 + 0x164) + valA6[3] * *(a1 + 0x14c);
    *(&v_20 + 4) =
        *(a1 + 0x15c) * valA6[4] + valA6[5] * *(a1 + 0x168) + valA6[3] * *(a1 + 0x150);
    float v_18 =
        *(a1 + 0x154) * valA6[7] + valA6[8] * *(a1 + 0x160) + valA6[6] * *(a1 + 0x148);
    float v_14 =
        *(a1 + 0x158) * valA6[7] + valA6[8] * *(a1 + 0x164) + valA6[6] * *(a1 + 0x14c);
    void* result = a1 + 0x108;
    int32_t v_c = valA6[9] + *(a1 + 0x16c) + 1;
    float v_10 =
        *(a1 + 0x15c) * valA6[7] + valA6[8] * *(a1 + 0x168) + valA6[6] * *(a1 + 0x150);
    void* result_1 = result;
    memcpy(result, &v_30, 0x28);
    memcpy(a1 + 0x70, &v_30, 0x28);
    int32_t* i_1 = *(a1 + 8);
    void* v_38 = a1 + 0xf0;

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t objC5 = g_afa7e0;

            do
            {
                int32_t* tmpD3 = *i;
                void* valA11;

                if (!tmpD3)
                    valA11 = nullptr;
                else
                {
                    int32_t valA8 = *tmpD3;
                    int32_t valA9 = -(valA8);
                    valA11 = (valA9 - valA9) & tmpD3;
                }

                *((objC5 << 2) + &g_afa6e0) = valA11;
                g_afa7e0 = objC5 + 1;
                uint32_t valA13 = DynObj_CreateMagicObject_6();
                int32_t valA14 = 0;
                valA14 = i[7];
                result = *(((valA13 * 0x180 + valA14) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &v_38);

                objC5 = g_afa7e0 - 1;
                g_afa7e0 = objC5;
                i = *((objC5 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
