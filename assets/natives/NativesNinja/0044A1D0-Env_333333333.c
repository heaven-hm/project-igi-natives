#include "0044A1D0-Env_333333333.h"
/* 0x0044a1d0 Env_333333333 full linked: callers=1 callees=8 */
struct status_msg* sub_44a1d0(uint32_t a1, int32_t* a2, double* a3, float* a4, void* a5)

{
    int32_t* kind = a1;
    void* ecx = *kind;
    kind = g_57c240;
    void* esi = *(*(ecx + 0xc) + 0xc);
    struct status_msg* eax_1 = QTask_HandleInput(sub_4f0ee0(), kind, 0);
    g_57c244 = 0;
    int32_t* esi_1 = *(esi + 0x2c);
    struct status_msg* result = *esi_1;

    if (!result)
        return result;

    eax_1->head[0x1b] = *a2;
    eax_1->head[0x1c] = a2[1];
    eax_1->head[0x1d] = a2[2];
    long double x87_r7_1 = eax_1->head[0x1d];
    long double x87_r6_1 = eax_1->head[0x1c];
    long double x87_r5_1 = eax_1->head[0x1b];
    long double x87_r7_3 =
        10f / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1);
    long double x87_r6_4 = eax_1->head[0x1b] * x87_r7_3;
    float var_20_1 = x87_r6_4;
    eax_1->head[0x1b] = x87_r6_4;
    long double x87_r6_6 = eax_1->head[0x1c] * x87_r7_3;
    float var_1c_1 = x87_r6_6;
    eax_1->head[0x1c] = x87_r6_6;
    long double x87_r7_4 = x87_r7_3 * eax_1->head[0x1d];
    eax_1->head[0x1d] = x87_r7_4;
    float var_14_1 = x87_r7_4 * a4[7] + var_1c_1 * a4[4] + var_20_1 * a4[1];
    long double x87_r7_6 = var_20_1 * a4[2] + x87_r7_4 * a4[8];
    long double x87_r6_20 = var_1c_1 * a4[5];
    eax_1->head[0x1b] = x87_r7_4 * a4[6] + var_1c_1 * a4[3] + var_20_1 * *a4;
    eax_1->head[0x1c] = var_14_1;
    eax_1->head[0x1d] = x87_r7_6 + x87_r6_20;
    double* edx_4 = a3;
    memcpy(&eax_1->head[0x1e], edx_4, 0x18);
    memcpy(&eax_1->head[0x24], a4, 0x28);
    eax_1->head[0x1a] = a1;
    eax_1->sprite[8] = 0x1e;
    eax_1->sprite[9] = 0;
    eax_1->sprite[0xa] = 0;
    eax_1->sprite[0xb] = 0;
    g_57c270 = *(a5 + 8) - *edx_4;
    g_57c274 = *(a5 + 0x10) - edx_4[1];
    long double x87_r7_13 = *(a5 + 0x18) - edx_4[2];
    g_57c278 = x87_r7_13;
    float var_14_2 = g_57c278 * a4[7] + g_57c274 * a4[4] + g_57c270 * a4[1];
    long double x87_r7_23 = g_57c270 * a4[2] + g_57c278 * a4[8];
    long double x87_r6_32 = g_57c274 * a4[5];
    g_57c270 = x87_r7_13 * a4[6] + g_57c274 * a4[3] + g_57c270 * *a4;
    g_57c274 = var_14_2;
    g_57c278 = x87_r7_23 + x87_r6_32;
    g_57c250 = *(a5 + 8) - *edx_4;
    g_57c254 = *(a5 + 0x10) - edx_4[1];
    long double x87_r7_30 = *(a5 + 0x18) - edx_4[2];
    g_57c258 = x87_r7_30;
    float var_14_3 = g_57c258 * a4[7] + g_57c254 * a4[4] + g_57c250 * a4[1];
    long double x87_r7_40 = g_57c250 * a4[2] + g_57c258 * a4[8];
    long double x87_r6_44 = g_57c254 * a4[5];
    g_57c250 = x87_r7_30 * a4[6] + g_57c254 * a4[3] + g_57c250 * *a4;
    g_57c254 = var_14_3;
    g_57c258 = x87_r7_40 + x87_r6_44;
    long double x87_r7_45 =
        *(a5 + 0x40) * a4[6] + *(a5 + 0x3c) * a4[3] + *a4 * *(a5 + 0x38);
    long double x87_r7_52 = a4[2] * *(a5 + 0x38) + *(a5 + 0x40) * a4[8];
    long double x87_r6_56 = *(a5 + 0x3c) * a4[5];
    g_57c264 = *(a5 + 0x40) * a4[7] + *(a5 + 0x3c) * a4[4] + *(a5 + 0x38) * a4[1];
    g_57c260 = x87_r7_45;
    g_57c27c = &eax_1->sprite[0xc];
    int32_t* ecx_12 = esi_1;
    g_57c23c = 0x41200000;
    g_57c228 = "333?333?333?";
    g_57c25c = eax_1;
    g_57c268 = x87_r7_52 + x87_r6_56;
    g_57c26c = &eax_1->head[0x5df0];
    eax_1->sprite[4] = 0;
    eax_1->sprite[5] = 0;
    eax_1->sprite[6] = 0;
    eax_1->sprite[7] = 0;
    a1 = 0;

    if (*ecx_12 > 0)
    {
        while (true)
        {
            int32_t eax_8 = ecx_12[4];
            int32_t edi_3 = ecx_12[5];
            int32_t ecx_13 = 0;
            ecx_13 = *(eax_8 + (a1 << 3));
            void* eax_9 = eax_8 + (a1 << 3);
            int32_t esi_8 = 0;
            esi_8 = *(eax_9 + 2);
            float* ecx_15 = (ecx_13 << 4) + edi_3;
            float* esi_10 = (esi_8 << 4) + edi_3;
            int32_t edi_4 = 0;
            edi_4 = *(eax_9 + 4);
            float* edi_6 = (edi_4 << 4) + esi_1[5];
            long double x87_r7_55 = *edi_6 - *ecx_15;
            long double x87_r6_58 = edi_6[1] - ecx_15[1];
            long double x87_r5_12 = edi_6[2] - ecx_15[2];
            float var_18_5 = *esi_10 - *ecx_15;
            float var_14_5 = esi_10[1] - ecx_15[1];
            long double x87_r4_11 = esi_10[2] - ecx_15[2];
            long double x87_r7_60 = (x87_r4_11 * x87_r6_58 - var_14_5 * x87_r5_12) * *a2
                + (x87_r7_55 * var_14_5 - var_18_5 * x87_r6_58) * a2[2] +
                -((x87_r4_11 * x87_r7_55 - var_18_5 * x87_r5_12)) * a2[1];
            long double temp1_1 = 0f;
            x87_r7_60 - temp1_1;

            if (*(&((x87_r7_60 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_60, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_60 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                sub_44a670(ecx_15, esi_10, edi_6);
                edx_4 = a3;
            }

            uint32_t eax_14 = a1 + 1;
            a1 = eax_14;

            if (eax_14 >= *esi_1)
                break;

            ecx_12 = esi_1;
        }
    }

    uint32_t eax_15;
    eax_15 = eax_1->sprite[4];
    *(&eax_15 + 1) = eax_1->sprite[5];
    *(&eax_15 + 2) = eax_1->sprite[6];
    *(&eax_15 + 3) = eax_1->sprite[7];
    *(eax_1 + 0x2b040) = sub_49a450(Level_StartMission_4(), nullptr, edx_4, a4,
        &eax_1->head[0x5df0], eax_15, 0, 1, 0, nullptr, 0);
    return sub_44a630(a3);
}
