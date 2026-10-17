// Original IGI.EXE function: Sector_Cleanup (VA 0x004DBCC0; static CFG gate FAIL, CFG score 0.800).
#include "Sector_Cleanup.h"
int32_t Sector_Cleanup(int32_t* a1, int32_t* a2)

{
    int32_t result = a1[0x52];

    if (result)
    {
        void v_a0;
        memcpy(&v_a0, *a2, 0x18);
        void v_88;
        memcpy(&v_88, &v_a0, 0x18);
        long double x87_r7_1;

        if (!a2[1])
            x87_r7_1 = 0f;
        else
            x87_r7_1 = 409.600006f;

        double v_90;
        double v_90_1 = x87_r7_1 + v_90;
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

        long double x87_r7_9 = Render_ComputeNormals(a1[0x1b]) * x87_r7_6;
        void* v_70 = nullptr;
        int32_t v_18_1 = 0;
        int32_t* v_a4_1 = &v_70;
        result = 1;
        void* v_c0_1 = &v_88;
        double v_78;
        double v_78_1 = v_78 - (x87_r7_9 + x87_r7_9);
        void v_68;
        memcpy(&v_68, &v_88, 0x18);
        char v_b8 = 0xff;
        void* v_c4 = &v_a0;
        int32_t v_b4_1 = 0;
        int32_t v_bc_1 = 1;
        int32_t v_b0_1 = 0;
        int32_t v_ac_1 = 1;
        int32_t v_a8;
        __builtin_strncpy(&v_a8, "DCBA", 4);
        int32_t* i = a1;

        if (a1)
        {
            do
            {
                int32_t objC1 = 0;
                objC1 = i[7];
                result = (*((objC1 << 2) + &g_a9a0e0))(i, &v_c4);

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
                    void* srcS2 = i[0x52];

                    if (!srcS2)
                        break;

                    i = *(srcS2 + 8);

                    if (!*i)
                        break;
                }
            } while (i);

            if (v_18_1)
            {
                void* valA3 = v_70;
                a2[2] = valA3;
                a2[3] = a1;
                long double x87_r6_11 =
                    a1[0x21] * a1[0x66] + a1[0x20] * a1[0x65] + a1[0x1f] * a1[0x64];
                long double x87_r6_15 =
                    a1[0x24] * a1[0x66] + a1[0x23] * a1[0x65] + a1[0x22] * a1[0x64];
                *(a2 + 0x10) = a1[0x1e] * a1[0x66] + a1[0x1d] * a1[0x65]
                    + a1[0x1c] * a1[0x64] + *(valA3 + 0x20);
                *(a2 + 0x18) = x87_r6_11 + *(valA3 + 0x28);
                *(a2 + 0x20) = x87_r6_15 + *(valA3 + 0x30);
                result = a1[0x67];
                a2[0xa] = result;
            }
        }
    }

    return result;
}
