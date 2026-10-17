// Original IGI.EXE function: EditRigidObj_OnEvent (VA 0x004F2400; static CFG gate FAIL, CFG score 0.833).
#include "EditRigidObj_OnEvent.h"
int32_t EditRigidObj_OnEvent(void* a1, int32_t* a2)

{
    float* valA = a2[1];
    double v_30 = valA[2] * *(a1 + 0x168) + valA[1] * *(a1 + 0x160) + *valA * *(a1 + 0x158);
    double v_28 = valA[5] * *(a1 + 0x168) + valA[4] * *(a1 + 0x160) + valA[3] * *(a1 + 0x158);
    double v_20 = valA[8] * *(a1 + 0x168) + valA[7] * *(a1 + 0x160) + valA[6] * *(a1 + 0x158);
    memcpy(a1 + 0xf0, &v_30, 0x18);
    *(a1 + 0xf0) = **a2 + *(a1 + 0xf0);
    *(a1 + 0xf8) = *(*a2 + 8) + *(a1 + 0xf8);
    *(a1 + 0x100) = *(*a2 + 0x10) + *(a1 + 0x100);
    float* valA3 = a2[1];
    v_30 = *(a1 + 0x170) * *valA3 + valA3[2] * *(a1 + 0x188) + valA3[1] * *(a1 + 0x17c);
    *(&v_30 + 4) =
        *(a1 + 0x174) * *valA3 + valA3[2] * *(a1 + 0x18c) + valA3[1] * *(a1 + 0x180);
    v_28 = *(a1 + 0x178) * *valA3 + valA3[2] * *(a1 + 0x190) + valA3[1] * *(a1 + 0x184);
    *(&v_28 + 4) =
        valA3[5] * *(a1 + 0x188) + valA3[3] * *(a1 + 0x170) + valA3[4] * *(a1 + 0x17c);
    v_20 = valA3[5] * *(a1 + 0x18c) + valA3[3] * *(a1 + 0x174) + valA3[4] * *(a1 + 0x180);
    *(&v_20 + 4) =
        valA3[5] * *(a1 + 0x190) + valA3[3] * *(a1 + 0x178) + valA3[4] * *(a1 + 0x184);
    float v_18 =
        valA3[8] * *(a1 + 0x188) + valA3[6] * *(a1 + 0x170) + valA3[7] * *(a1 + 0x17c);
    float v_14 =
        valA3[8] * *(a1 + 0x18c) + valA3[6] * *(a1 + 0x174) + valA3[7] * *(a1 + 0x180);
    int32_t v_c = valA3[9] + *(a1 + 0x194) + 1;
    float v_10 =
        valA3[8] * *(a1 + 0x190) + valA3[6] * *(a1 + 0x178) + valA3[7] * *(a1 + 0x184);
    long double x87_r7_54 = *(a1 + 0x9c);
    long double x87_r6_48 = *(a1 + 0xa0);
    x87_r6_48 - x87_r7_54;
    memcpy(a1 + 0x108, &v_30, 0x28);
    long double x87_r7_55;

    if (!(*(&((x87_r6_48 < x87_r7_54 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_48, x87_r7_54) ? 1 : 0) << 0xa
            | (x87_r6_48 == x87_r7_54 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_55 = *(a1 + 0xa0);
    else
        x87_r7_55 = *(a1 + 0x9c);

    long double x87_r6_49 = *(a1 + 0x98);
    x87_r6_49 - x87_r7_55;
    long double x87_r7_57;

    if (*(&((x87_r6_49 < x87_r7_55 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_49, x87_r7_55) ? 1 : 0) << 0xa
        | (x87_r6_49 == x87_r7_55 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_58 = *(a1 + 0x9c);
        long double x87_r6_50 = *(a1 + 0xa0);
        x87_r6_50 - x87_r7_58;

        if (!(*(&((x87_r6_50 < x87_r7_58 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_50, x87_r7_58) ? 1 : 0) << 0xa
                | (x87_r6_50 == x87_r7_58 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_57 = *(a1 + 0xa0);
        else
            x87_r7_57 = *(a1 + 0x9c);
    }
    else
        x87_r7_57 = *(a1 + 0x98);

    float v_4c_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_57;
    void* v_58 = *(a1 + 0x68);
    WorldObject_CommitTransform(v_58, a1, a1 + 0xf0, v_4c_1);
    memcpy(a1 + 0x70, a1 + 0x108, 0x28);
    int32_t* i_1 = *(a1 + 8);
    void* v_38 = a1 + 0xf0;
    void* v_34 = a1 + 0x108;
    int32_t result = *i_1;

    if (result)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t objC4 = g_afa7e0;

            do
            {
                int32_t* tmpD3 = *i;
                void* valA12;

                if (!tmpD3)
                    valA12 = nullptr;
                else
                {
                    int32_t valA9 = *tmpD3;
                    int32_t valA10 = -(valA9);
                    valA12 = (valA10 - valA10) & tmpD3;
                }

                *((objC4 << 2) + &g_afa6e0) = valA12;
                g_afa7e0 = objC4 + 1;
                uint32_t valA14 = DynObj_CreateMagicObject_6();
                int32_t tmpD4 = 0;
                tmpD4 = i[7];
                result = *(((valA14 * 0x180 + tmpD4) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &v_38);

                objC4 = g_afa7e0 - 1;
                g_afa7e0 = objC4;
                i = *((objC4 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
