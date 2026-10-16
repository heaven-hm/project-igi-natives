#include "004F2400-EditRigidObj_OnEvent.h"
/* 0x004f2400 EditRigidObj_OnEvent full linked: callers=0 callees=6 */
int32_t sub_4f2400(void* a1, int32_t* a2)

{
    float* eax = a2[1];
    double var_30 = eax[2] * *(a1 + 0x168) + eax[1] * *(a1 + 0x160) + *eax * *(a1 + 0x158);
    double var_28 = eax[5] * *(a1 + 0x168) + eax[4] * *(a1 + 0x160) + eax[3] * *(a1 + 0x158);
    double var_20 = eax[8] * *(a1 + 0x168) + eax[7] * *(a1 + 0x160) + eax[6] * *(a1 + 0x158);
    memcpy(a1 + 0xf0, &var_30, 0x18);
    *(a1 + 0xf0) = **a2 + *(a1 + 0xf0);
    *(a1 + 0xf8) = *(*a2 + 8) + *(a1 + 0xf8);
    *(a1 + 0x100) = *(*a2 + 0x10) + *(a1 + 0x100);
    float* eax_3 = a2[1];
    var_30 = *(a1 + 0x170) * *eax_3 + eax_3[2] * *(a1 + 0x188) + eax_3[1] * *(a1 + 0x17c);
    *(&var_30 + 4) =
        *(a1 + 0x174) * *eax_3 + eax_3[2] * *(a1 + 0x18c) + eax_3[1] * *(a1 + 0x180);
    var_28 = *(a1 + 0x178) * *eax_3 + eax_3[2] * *(a1 + 0x190) + eax_3[1] * *(a1 + 0x184);
    *(&var_28 + 4) =
        eax_3[5] * *(a1 + 0x188) + eax_3[3] * *(a1 + 0x170) + eax_3[4] * *(a1 + 0x17c);
    var_20 = eax_3[5] * *(a1 + 0x18c) + eax_3[3] * *(a1 + 0x174) + eax_3[4] * *(a1 + 0x180);
    *(&var_20 + 4) =
        eax_3[5] * *(a1 + 0x190) + eax_3[3] * *(a1 + 0x178) + eax_3[4] * *(a1 + 0x184);
    float var_18 =
        eax_3[8] * *(a1 + 0x188) + eax_3[6] * *(a1 + 0x170) + eax_3[7] * *(a1 + 0x17c);
    float var_14 =
        eax_3[8] * *(a1 + 0x18c) + eax_3[6] * *(a1 + 0x174) + eax_3[7] * *(a1 + 0x180);
    int32_t var_c = eax_3[9] + *(a1 + 0x194) + 1;
    float var_10 =
        eax_3[8] * *(a1 + 0x190) + eax_3[6] * *(a1 + 0x178) + eax_3[7] * *(a1 + 0x184);
    long double x87_r7_54 = *(a1 + 0x9c);
    long double x87_r6_48 = *(a1 + 0xa0);
    x87_r6_48 - x87_r7_54;
    memcpy(a1 + 0x108, &var_30, 0x28);
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

    float var_4c_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_57;
    void* var_58 = *(a1 + 0x68);
    sub_4c6940(var_58, a1, a1 + 0xf0, var_4c_1);
    memcpy(a1 + 0x70, a1 + 0x108, 0x28);
    int32_t* i_1 = *(a1 + 8);
    void* var_38 = a1 + 0xf0;
    void* var_34 = a1 + 0x108;
    int32_t result = *i_1;

    if (result)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t ecx_4 = g_afa7e0;

            do
            {
                int32_t* edx_3 = *i;
                void* eax_12;

                if (!edx_3)
                    eax_12 = nullptr;
                else
                {
                    int32_t eax_9 = *edx_3;
                    int32_t eax_10 = -(eax_9);
                    eax_12 = (eax_10 - eax_10) & edx_3;
                }

                *((ecx_4 << 2) + &g_afa6e0) = eax_12;
                g_afa7e0 = ecx_4 + 1;
                uint32_t eax_14 = sub_4c5800();
                int32_t edx_4 = 0;
                edx_4 = i[7];
                result = *(((eax_14 * 0x180 + edx_4) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &var_38);

                ecx_4 = g_afa7e0 - 1;
                g_afa7e0 = ecx_4;
                i = *((ecx_4 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
