#include "004DD4B0-Render_ClipMesh_14.h"
/* 0x004dd4b0 Render_ClipMesh_14 full linked: callers=2 callees=1 */
int32_t* sub_4dd4b0(void* a1, float* a2, int32_t* a3, int32_t a4)

{
    int32_t edx_5 = g_a5e340;
    int32_t ebx = g_a5e348;
    int32_t* result_1 = g_a5e33c;
    int32_t edi = 0;

    if (edx_5 > 0)
    {
        int32_t* result = result_1;

        do
        {
            float* ecx_3 = *result * ebx + g_a5e338;

            if (ecx_3[6] == a1)
            {
                long double x87_r7 = *ecx_3;
                long double temp0 = *a2;
                x87_r7 - temp0;
                result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
                    | (x87_r7 == temp0 ? 1 : 0) << 0xe;
                long double x87_r7_1;

                if (!(*(&result + 1) & 1))
                    x87_r7_1 = *a2;
                else
                    x87_r7_1 = *ecx_3;

                *ecx_3 = x87_r7_1;
                long double x87_r7_2 = ecx_3[1];
                long double x87_r6 = a2[1];
                x87_r6 - x87_r7_2;
                result = (x87_r6 < x87_r7_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe;
                long double x87_r7_3;

                if (*(&result + 1) & 0x41)
                    x87_r7_3 = a2[1];
                else
                    x87_r7_3 = ecx_3[1];

                ecx_3[1] = x87_r7_3;
                long double x87_r7_4 = ecx_3[2];
                long double temp1 = *a3;
                x87_r7_4 - temp1;
                result = (x87_r7_4 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp1 ? 1 : 0) << 0xe;
                long double x87_r7_5;

                if (*(&result + 1) & 0x41)
                    x87_r7_5 = *a3;
                else
                    x87_r7_5 = ecx_3[2];

                ecx_3[2] = x87_r7_5;
                long double x87_r7_6 = ecx_3[3];
                long double x87_r6_1 = a3[1];
                x87_r6_1 - x87_r7_6;
                result = (x87_r6_1 < x87_r7_6 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, x87_r7_6) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_6 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 1))
                {
                    ecx_3[3] = a3[1];
                    return result;
                }

                ecx_3[3] = ecx_3[3];
                return result;
            }

            edi += 1;
            result = &result[1];
        } while (edi < edx_5);
    }

    int32_t* eax_3 = result_1[edx_5] * ebx + g_a5e338;
    *(g_a5e34c + eax_3) = edx_5;
    int32_t* ecx_6 = a2;
    g_a5e340 += 1;
    eax_3[6] = a1;
    eax_3[5] = a4;
    *eax_3 = *ecx_6;
    eax_3[1] = ecx_6[1];
    eax_3[2] = *a3;
    eax_3[3] = a3[1];
    eax_3[4] = g_a5e358 + 1;
    eax_3[7] = 0;
    return sub_4dd650(a1, ecx_6, a3, a4);
}
