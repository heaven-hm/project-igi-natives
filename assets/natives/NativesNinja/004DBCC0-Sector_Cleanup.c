#include "004DBCC0-Sector_Cleanup.h"
/* 0x004dbcc0 Sector_Cleanup full linked: callers=0 callees=5 */
int32_t sub_4dbcc0(int32_t* a1, int32_t* a2)

{
    int32_t result = a1[0x52];

    if (result)
    {
        void var_a0;
        memcpy(&var_a0, *a2, 0x18);
        void var_88;
        memcpy(&var_88, &var_a0, 0x18);
        long double x87_r7_1;

        if (!a2[1])
            x87_r7_1 = 0f;
        else
            x87_r7_1 = 409.600006f;

        double var_90;
        double var_90_1 = x87_r7_1 + var_90;
        long double x87_r7_3 = a1[0x27];
        long double x87_r6_1 = a1[0x28];
        x87_r6_1 - x87_r7_3;
        long double x87_r7_4;

        if (!(*(&((x87_r6_1 < x87_r7_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_4 = a1[0x28];
        else
            x87_r7_4 = a1[0x27];

        long double x87_r6_2 = a1[0x26];
        x87_r6_2 - x87_r7_4;
        long double x87_r7_6;

        if (*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_7 = a1[0x27];
            long double x87_r6_3 = a1[0x28];
            x87_r6_3 - x87_r7_7;

            if (!(*(&((x87_r6_3 < x87_r7_7 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_7) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_7 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_6 = a1[0x28];
            else
                x87_r7_6 = a1[0x27];
        }
        else
            x87_r7_6 = a1[0x26];

        long double x87_r7_9 = sub_4d0950(a1[0x1b]) * x87_r7_6;
        void* var_70 = nullptr;
        int32_t var_18_1 = 0;
        int32_t* var_a4_1 = &var_70;
        result = 1;
        void* var_c0_1 = &var_88;
        double var_78;
        double var_78_1 = var_78 - (x87_r7_9 + x87_r7_9);
        void var_68;
        memcpy(&var_68, &var_88, 0x18);
        char var_b8 = 0xff;
        void* var_c4 = &var_a0;
        int32_t var_b4_1 = 0;
        int32_t var_bc_1 = 1;
        int32_t var_b0_1 = 0;
        int32_t var_ac_1 = 1;
        int32_t var_a8;
        __builtin_strncpy(&var_a8, "DCBA", 4);
        int32_t* i = a1;

        if (a1)
        {
            do
            {
                int32_t ecx_1 = 0;
                ecx_1 = i[7];
                result = (*((ecx_1 << 2) + &g_a9a0e0))(i, &var_c4);

                if (i != a1)
                {
                    i = *i;

                    if (!i)
                        break;

                    if (!*i)
                        break;
                }
                else
                {
                    void* esi_2 = i[0x52];

                    if (!esi_2)
                        break;

                    i = *(esi_2 + 8);

                    if (!*i)
                        break;
                }
            } while (i);

            if (var_18_1)
            {
                void* eax_3 = var_70;
                a2[2] = eax_3;
                a2[3] = a1;
                long double x87_r6_11 =
                    a1[0x21] * a1[0x66] + a1[0x20] * a1[0x65] + a1[0x1f] * a1[0x64];
                long double x87_r6_15 =
                    a1[0x24] * a1[0x66] + a1[0x23] * a1[0x65] + a1[0x22] * a1[0x64];
                *(a2 + 0x10) = a1[0x1e] * a1[0x66] + a1[0x1d] * a1[0x65]
                    + a1[0x1c] * a1[0x64] + *(eax_3 + 0x20);
                *(a2 + 0x18) = x87_r6_11 + *(eax_3 + 0x28);
                *(a2 + 0x20) = x87_r6_15 + *(eax_3 + 0x30);
                result = a1[0x67];
                a2[0xa] = result;
            }
        }
    }

    return result;
}
