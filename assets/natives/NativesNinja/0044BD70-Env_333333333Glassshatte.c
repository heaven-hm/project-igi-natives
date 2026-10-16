#include "0044BD70-Env_333333333Glassshatte.h"
/* 0x0044bd70 Env_333333333Glassshatte full linked: callers=2 callees=8 */
struct status_msg* sub_44bd70(uint32_t a1, float* a2, double* a3, double* a4, float a5 @ 0x18)

{
    int32_t* kind = a1;
    void* ecx = *kind;
    kind = g_57c240;
    void* esi = *(*(ecx + 0xc) + 0xc);
    struct status_msg* eax_1 = QTask_HandleInput(sub_4f0ee0(), kind, 0);
    g_57c244 = 1;
    int32_t* esi_1 = *(esi + 0x2c);
    struct status_msg* edx_1 = eax_1;
    struct status_msg* result = *esi_1;
    struct status_msg* var_24 = edx_1;

    if (!result)
        return result;

    edx_1->head[0x1b] = *a3 - *a4;
    edx_1->head[0x1c] = a3[1] - a4[1];
    long double x87_r7_6 = a3[2] - a4[2];
    edx_1->head[0x1d] = x87_r7_6;
    long double x87_r6_1 = edx_1->head[0x1c];
    long double x87_r5_1 = edx_1->head[0x1b];
    float var_30_1 = sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_6 * x87_r7_6);
    long double x87_r7_8 = 0f;
    long double temp1_1 = var_30_1;
    x87_r7_8 - temp1_1;
    long double x87_r7_9;

    if (*(&((x87_r7_8 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_10 = 1f;
        long double temp2_1 = var_30_1;
        x87_r7_10 - temp2_1;

        x87_r7_9 = !(*(&((x87_r7_10 < temp2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_10, temp2_1) ? 1 : 0) << 0xa | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe)
            + 1) & 1) ? var_30_1 : 1f;
    }
    else
        x87_r7_9 = 0f;

    long double x87_r7_11 = x87_r7_9 * a5;
    long double x87_r6_4 = x87_r7_11 / var_30_1;
    long double x87_r5_4 = x87_r6_4 * edx_1->head[0x1b];
    float var_28_1 = x87_r5_4;
    edx_1->head[0x1b] = x87_r5_4;
    long double x87_r5_6 = x87_r6_4 * edx_1->head[0x1c];
    float var_30_2 = x87_r5_6;
    edx_1->head[0x1c] = x87_r5_6;
    long double x87_r6_5 = x87_r6_4 * edx_1->head[0x1d];
    edx_1->head[0x1d] = x87_r6_5;
    float var_1c_1 = var_28_1 * a2[1] + x87_r6_5 * a2[7] + var_30_2 * a2[4];
    long double x87_r6_7 = x87_r6_5 * a2[8] + var_30_2 * a2[5];
    long double x87_r5_18 = var_28_1 * a2[2];
    edx_1->head[0x1b] = var_28_1 * *a2 + x87_r6_5 * a2[6] + var_30_2 * a2[3];
    edx_1->head[0x1c] = var_1c_1;
    edx_1->head[0x1d] = x87_r6_7 + x87_r5_18;
    memcpy(&edx_1->head[0x1e], a3, 0x18);
    memcpy(&edx_1->head[0x24], a2, 0x28);
    edx_1->head[0x1a] = a1;
    double* eax_6 = a3;
    edx_1->sprite[8] = 0x1e;
    edx_1->sprite[9] = 0;
    edx_1->sprite[0xa] = 0;
    edx_1->sprite[0xb] = 0;
    g_57c270 = *a4 - *eax_6;
    g_57c274 = a4[1] - eax_6[1];
    g_57c278 = a4[2] - eax_6[2];
    void* __offset(status_msg, 0x177c0) esi_4 = &edx_1->head[0x5df0];
    int32_t var_28_2 = 0;
    float var_1c_2 = g_57c270 * a2[1] + g_57c278 * a2[7] + g_57c274 * a2[4];
    long double x87_r6_25 = g_57c270 * a2[2] + g_57c278 * a2[8];
    long double x87_r5_30 = g_57c274 * a2[5];
    g_57c270 = g_57c270 * *a2 + g_57c278 * a2[6] + g_57c274 * a2[3];
    g_57c274 = var_1c_2;
    g_57c26c = esi_4;
    g_57c228 = "333?333?333?GlassShatter";
    g_57c25c = edx_1;
    g_57c23c = x87_r7_11;
    g_57c278 = x87_r6_25 + x87_r5_30;
    g_57c27c = &edx_1->sprite[0xc];
    int32_t* ecx_8 = esi_1;
    edx_1->sprite[4] = 0;
    edx_1->sprite[5] = 0;
    edx_1->sprite[6] = 0;
    edx_1->sprite[7] = 0;

    if (*ecx_8 > 0)
    {
        while (true)
        {
            int32_t eax_7 = ecx_8[4];
            int32_t edi_3 = ecx_8[5];
            int32_t ecx_9 = 0;
            ecx_9 = *(eax_7 + (var_28_2 << 3));
            void* eax_8 = eax_7 + (var_28_2 << 3);
            int32_t esi_6 = 0;
            esi_6 = *(eax_8 + 2);
            float* ecx_11 = (ecx_9 << 4) + edi_3;
            float* esi_8 = (esi_6 << 4) + edi_3;
            int32_t edi_4 = 0;
            edi_4 = *(eax_8 + 4);
            float* edi_6 = (edi_4 << 4) + esi_1[5];
            long double x87_r7_13 = *edi_6 - *ecx_11;
            long double x87_r6_28 = edi_6[1] - ecx_11[1];
            long double x87_r5_32 = edi_6[2] - ecx_11[2];
            float var_20_3 = *esi_8 - *ecx_11;
            float var_1c_3 = esi_8[1] - ecx_11[1];
            long double x87_r4_19 = esi_8[2] - ecx_11[2];
            long double x87_r5_40 =
                (a3[2] - a4[2]) * (x87_r7_13 * var_1c_3 - var_20_3 * x87_r6_28)
                + (a3[1] - a4[1]) * -((x87_r4_19 * x87_r7_13 - var_20_3 * x87_r5_32));
            long double x87_r6_33 =
                x87_r5_40 + (*a3 - *a4) * (x87_r4_19 * x87_r6_28 - var_1c_3 * x87_r5_32);
            long double temp3_1 = 0f;
            x87_r6_33 - temp3_1;

            if (*(&((x87_r6_33 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_33, temp3_1) ? 1 : 0) << 0xa
                | (x87_r6_33 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                sub_44a670(ecx_11, esi_8, edi_6);
                edx_1 = var_24;
            }

            int32_t eax_18 = var_28_2 + 1;
            var_28_2 = eax_18;

            if (eax_18 >= *esi_1)
                break;

            ecx_8 = esi_1;
        }

        eax_6 = a3;
    }

    uint32_t edx_2;
    edx_2 = edx_1->sprite[4];
    *(&edx_2 + 1) = edx_1->sprite[5];
    *(&edx_2 + 2) = edx_1->sprite[6];
    *(&edx_2 + 3) = edx_1->sprite[7];
    *(var_24 + 0x2b040) =
        sub_49a450(Level_StartMission_4(), nullptr, eax_6, a2, esi_4, edx_2, 0, 1, 0, nullptr, 0);
    return sub_44a630(a3);
}
