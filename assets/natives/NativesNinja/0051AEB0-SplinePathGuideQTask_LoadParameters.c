#include "0051AEB0-SplinePathGuideQTask_LoadParameters.h"
/* 0x0051aeb0 SplinePathGuideQTask_LoadParameters full linked: callers=0 callees=7 */
void sub_51aeb0(float a1)

{
    if (!(*(a1 + 0x2c) & 1))
        return;

    float eax = *(a1 + 0x20);

    if (eax < 0)
        return;

    float edi_1 = sub_4f1030(eax);

    if (!edi_1)
        return;

    eax = *(a1 + 0x24);

    if (eax < 0)
        return;

    float ebx_1 = sub_4f1030(eax);

    if (!ebx_1)
        return;

    int32_t ecx_1 = *(a1 + 0x28);
    eax = *(edi_1 + (ecx_1 << 2) + 0x68);

    if (!eax)
        return;

    void* ecx_2 = *(edi_1 + (ecx_1 << 2) + 0x6c);

    if (!ecx_2 || *(edi_1 + 0x1f8) < 3)
        return;

    float edx_1 = *(a1 + 0x38);
    long double x87_r7_5 = 4096000.0 / (g_a83758 * 3600.0)
        * ((*(ecx_2 + 0x90) - *(eax + 0x90)) * edx_1 + *(eax + 0x90)) * *(a1 + 0x3c);
    long double x87_r7_8 = sub_51a0c0(eax, edx_1) * x87_r7_5 + *(a1 + 0x38);
    long double temp0_1 = 1f;
    x87_r7_8 - temp0_1;
    *(a1 + 0x38) = x87_r7_8;
    bool c1_1 = /* bool c1_1 = unknown  {fst dword [esi+0x38], st0} */;

    if (!(*(&((x87_r7_8 < temp0_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r7_8, temp0_1) ? 1 : 0) << 0xa | (x87_r7_8 == temp0_1 ? 1 : 0) << 0xe
        | 0x3800) + 1) & 0x41))
    {
        long double x87_r7_9 = x87_r7_8 - 1f;
        int32_t eax_4 = *(a1 + 0x28) + 1;
        *(a1 + 0x38) = x87_r7_9;
        long double x87_r7_10 = x87_r7_9 * *(*(edi_1 + (eax_4 << 2) + 0x64) + 0x98);
        *(a1 + 0x28) = eax_4;
        *(a1 + 0x38) = x87_r7_10 / *(*(edi_1 + (eax_4 << 2) + 0x68) + 0x98);

        if (eax_4 >= *(edi_1 + 0x1f8) - 1)
        {
            if (*(a1 + 0x30))
            {
                *(a1 + 0x38) = 0;
                *(a1 + 0x28) = 0;
            }
            else
            {
                *(a1 + 0x38) = 0x3f800000;
                *(a1 + 0x28) = *(edi_1 + 0x1f8) - 2;
                int32_t eax_8 = *(a1 + 0x2c);
                eax_8 &= 0xfe;
                *(a1 + 0x2c) = eax_8;
            }
        }
    }

    long double x87_r7_13 = *(a1 + 0x38);
    long double temp1_1 = 1f;
    x87_r7_13 - temp1_1;
    long double x87_r7_14;

    if (!(*(&((x87_r7_13 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_14 = 1f;
    else
        x87_r7_14 = *(a1 + 0x38);

    float edx_5 = *(a1 + 0x28);
    *(a1 + 0x38) = x87_r7_14;
    sub_51a4a0(edi_1, ebx_1 + 0x70, edx_5, x87_r7_14);
    void var_18;
    int32_t eax_10 = sub_51a280(&var_18, edi_1, *(a1 + 0x28), *(a1 + 0x38));
    void* eax_11 = g_a44344;
    double var_30;
    memcpy(&var_30, eax_10, 0x18);
    float var_3c = var_30 - *(ebx_1 + 0x20);
    double var_28;
    float var_38_1 = var_28 - *(ebx_1 + 0x28);
    double var_20;
    float var_34_1 = var_20 - *(ebx_1 + 0x30);
    sub_4c6940(eax_11, ebx_1, &var_30, *(ebx_1 + 0x44));
    int32_t eax_12 = 0;
    int32_t edx_7 = 0;
    eax_12 = g_54ed52;
    edx_7 = *(ebx_1 + 0x1c);
    eax = *(((eax_12 * 0x180 + edx_7) << 2) + &g_a96ae0);

    if (eax)
        eax(ebx_1, &var_3c);
}
