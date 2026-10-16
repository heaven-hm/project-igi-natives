#include "0049F1C0-Display_SwapBuffers_20.h"
/* 0x0049f1c0 Display_SwapBuffers_20 full linked: callers=0 callees=9 */
int32_t sub_49f1c0(double* a1)

{
    int32_t ebx;
    int32_t var_1f4 = ebx;
    int32_t ebp;
    int32_t var_1f8 = ebp;
    int32_t esi;
    int32_t var_1fc = esi;
    void* ebp_1 = a1[0xb];
    int32_t var_1b0 = *(a1 + 0x54);
    bool cond:0 = !a1[0xc];
    void* eax_2 = g_bcade8;
    int32_t edi;
    int32_t var_200 = edi;
    int32_t* esp_1 = &var_200;

    if (cond:0)
    {
        int32_t ecx_7 = g_7205b0;

        if (*(eax_2 + 4) != ecx_7)
        {
            *(eax_2 + 4) = ecx_7;
            int32_t var_204_5 = 0;
            (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
            esp_1 = &var_200;
        }

        void* eax_9 = g_bcad7c;
        int32_t ecx_9 = g_7205b8;

        if (*(eax_9 + 4) != ecx_9)
        {
            *(eax_9 + 4) = ecx_9;
            int32_t var_204_6 = 0;
            (*(g_bcad7c + (g_7205b8 << 2) + 0x14))(0);
            esp_1 = &var_200;
        }

        void* eax_11 = g_bcadac;
        int32_t ecx_10 = g_7205bc;

        if (*(eax_11 + 4) != ecx_10)
        {
            *(eax_11 + 4) = ecx_10;
            int32_t var_204_7 = 0;
            (*(g_bcadac + (g_7205bc << 2) + 0x14))(0);
            esp_1 = &var_200;
        }

        void* eax_12 = g_bcadc4;
        int32_t ecx_12 = g_bcacec;

        if (*(eax_12 + 4) != ecx_12)
        {
            *(eax_12 + 4) = ecx_12;
            int32_t var_204_8 = 0;
            (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(0);
            esp_1 = &var_1fc;
        }
    }
    else
    {
        int32_t ecx = g_723504;

        if (*(eax_2 + 4) != ecx)
        {
            *(eax_2 + 4) = ecx;
            int32_t var_204_1 = 0;
            (*(g_bcade8 + (g_723504 << 2) + 0x14))(0);
            esp_1 = &var_200;
        }

        void* eax_3 = g_bcad7c;
        int32_t ecx_2 = g_7205b8;

        if (*(eax_3 + 4) != ecx_2)
        {
            *(eax_3 + 4) = ecx_2;
            int32_t var_204_2 = 0;
            (*(g_bcad7c + (g_7205b8 << 2) + 0x14))(0);
            esp_1 = &var_200;
        }

        void* eax_5 = g_bcadac;
        int32_t ecx_4 = g_723508;

        if (*(eax_5 + 4) != ecx_4)
        {
            *(eax_5 + 4) = ecx_4;
            int32_t var_204_3 = 0;
            (*(g_bcadac + (g_723508 << 2) + 0x14))(0);
            esp_1 = &var_200;
        }

        void* eax_7 = g_bcadc4;
        int32_t ecx_5 = g_bcacec;

        if (*(eax_7 + 4) != ecx_5)
        {
            *(eax_7 + 4) = ecx_5;
            int32_t var_204_4 = 0;
            (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(0);
            esp_1 = &var_1fc;
        }
    }

❓️    void* ecx_14 = a1[0xa];
    void* eax_14 = *(*(ecx_14 + 0xc) + 0xc);
    long double x87_r7_3 =
        a1[4] * *(eax_14 + 0x38) + *(a1 + 0x1c) * *(eax_14 + 0x34) + a1[3] * *(eax_14 + 0x30);
    long double x87_r6_7 = *(a1 + 0x2c) * *(eax_14 + 0x38) + a1[5] * *(eax_14 + 0x34)
        + *(a1 + 0x24) * *(eax_14 + 0x30);
    esp_1[5] = x87_r6_7;
    long double x87_r6_11 =
        a1[7] * *(eax_14 + 0x38) + *(a1 + 0x34) * *(eax_14 + 0x34) + a1[6] * *(eax_14 + 0x30);
    esp_1[6] = x87_r6_11;
    *(esp_1 + 0x58) = x87_r7_3 + *a1;
    *(esp_1 + 0x60) = esp_1[5] + a1[1];
    *(esp_1 + 0x68) = esp_1[6] + a1[2];
    *(esp_1 - 4) = *(*(*(ecx_14 + 0xc) + 0xc) + 0x3c);
    *(esp_1 - 8) = &esp_1[0x16];
    sub_49b2d0();
    void* esp_25;

    if (!(*(ebp_1 + 0x1c) & 1))
    {
        int32_t* eax_25 = g_5ca114;
        int32_t edx_11 = *eax_25;
        int32_t* eax_26;
        int32_t ecx_19;
        void* esp_30;

        if (!a1[0xc])
        {
            *(esp_1 - 4) = 1;
            *(esp_1 - 8) = 0x89;
            *(esp_1 - 0xc) = eax_25;
            (*(edx_11 + 0x50))();
            eax_26 = g_5ca114;
            *(esp_1 - 4) = 4;
            esp_30 = esp_1 - 4;
            ecx_19 = *eax_26;
        }
        else
        {
            *(esp_1 - 4) = 0;
            *(esp_1 - 8) = 0x89;
            *(esp_1 - 0xc) = eax_25;
            (*(edx_11 + 0x50))();
            eax_26 = g_5ca114;
            *(esp_1 - 4) = 2;
            esp_30 = esp_1 - 4;
            ecx_19 = *eax_26;
        }

        *(esp_30 - 4) = 1;
        *(esp_30 - 8) = 0;
        *(esp_30 - 0xc) = eax_26;
        (*(ecx_19 + 0x94))();
        int32_t* eax_27 = g_5ca114;
        *esp_30 = 1;
        *(esp_30 - 4) = 0x1b;
        *(esp_30 - 8) = eax_27;
        (*(*eax_27 + 0x50))();
        int32_t* eax_28 = g_5ca114;
        *esp_30 = 5;
        *(esp_30 - 4) = 0x13;
        *(esp_30 - 8) = eax_28;
        (*(*eax_28 + 0x50))();
        int32_t* eax_29 = g_5ca114;
        *esp_30 = 6;
        *(esp_30 - 4) = 0x14;
        *(esp_30 - 8) = eax_29;
        (*(*eax_29 + 0x50))();
        esp_25 = esp_30 + 4;
    }
    else
    {
        int32_t* eax_19 = g_5ca114;
        *(esp_1 - 4) = 0;
        *(esp_1 - 8) = 0x89;
        *(esp_1 - 0xc) = eax_19;
        (*(*eax_19 + 0x50))();
        int32_t* eax_20 = g_5ca114;
        *(esp_1 - 4) = 2;
        *(esp_1 - 8) = 1;
        *(esp_1 - 0xc) = 0;
        int32_t edx_9 = *eax_20;
        *(esp_1 - 0x10) = eax_20;
        (*(edx_9 + 0x94))();
        int32_t* eax_21 = g_5ca114;
        *(esp_1 - 4) = 1;
        *(esp_1 - 8) = 0x1b;
        *(esp_1 - 0xc) = eax_21;
        (*(*eax_21 + 0x50))();
        int32_t* eax_22 = g_5ca114;
        *(esp_1 - 4) = 2;
        *(esp_1 - 8) = 0x13;
        *(esp_1 - 0xc) = eax_22;
        (*(*eax_22 + 0x50))();
        int32_t* eax_23 = g_5ca114;
        *(esp_1 - 4) = 2;
        *(esp_1 - 8) = 0x14;
        *(esp_1 - 0xc) = eax_23;
        (*(*eax_23 + 0x50))();
        esp_25 = esp_1;
    }

    int32_t* eax_30 = g_5ca114;
    int32_t edx_14 = 0;
    edx_14 = *(ebp_1 + 0x1f);
    int32_t ecx_21 = *eax_30;
    *(esp_25 - 4) = -((edx_14 + 1)) << 0x18;
    *(esp_25 - 8) = 0x3c;
    *(esp_25 - 0xc) = eax_30;
    (*(ecx_21 + 0x50))();
    long double x87_r7_10 = *a1 - g_bcab08;
    *(esp_25 + 0x20) = a1[1] - g_bcab10;
    *(esp_25 + 0x24) = a1[2] - g_bcab18;
    long double x87_r6_17 = g_bcabec * x87_r7_10;
    memcpy(esp_25 + 0x28, &a1[3], 0x28);
    *(esp_25 + 0x1c) = x87_r6_17;
    *(esp_25 + 0x20) = g_bcabec * *(esp_25 + 0x20);
    long double x87_r7_15 = g_bcabec * *(esp_25 + 0x24);
    *(esp_25 - 4) = esp_25 + 0x1c;
    *(esp_25 - 8) = esp_25 + 0x28;
    *(esp_25 - 0xc) = esp_25 + 0x118;
    *(esp_25 + 0x24) = x87_r7_15;
    long double x87_r7_17 = g_bcabec * a1[8];
    *(esp_25 + 0x14) = g_bcabec * *(a1 + 0x44);
    *(esp_25 + 0x18) = g_bcabec * a1[9];
    *(esp_25 + 0x28) = *(esp_25 + 0x28) * x87_r7_17;
    *(esp_25 + 0x2c) = *(esp_25 + 0x2c) * *(esp_25 + 0x14);
    *(esp_25 + 0x30) = *(esp_25 + 0x30) * *(esp_25 + 0x18);
    *(esp_25 + 0x34) = *(esp_25 + 0x34) * x87_r7_17;
    *(esp_25 + 0x38) = *(esp_25 + 0x38) * *(esp_25 + 0x14);
    *(esp_25 + 0x3c) = *(esp_25 + 0x3c) * *(esp_25 + 0x18);
    *(esp_25 + 0x40) = *(esp_25 + 0x40) * x87_r7_17;
    *(esp_25 + 0x44) = *(esp_25 + 0x44) * *(esp_25 + 0x14);
    *(esp_25 + 0x48) = *(esp_25 + 0x48) * *(esp_25 + 0x18);
    sub_4950f0();
    int32_t* eax_32 = g_5ca114;
    int32_t ecx_23 = *eax_32;
    *(esp_25 - 4) = esp_25 + 0x118;
    *(esp_25 - 8) = 1;
    *(esp_25 - 0xc) = eax_32;
    (*(ecx_23 + 0x2c))();
    int32_t* esp_61 = esp_25;

    if (!*(a1 + 0x5c))
    {
        long double x87_r7_24 = g_b81700 * g_bcabc4;
        int32_t eax_34 = g_b81700;
        memcpy(&esp_61[0x56], &g_bcaae0, 0xa8);
        esp_61[0x15] = x87_r7_24;
        memcpy(&esp_61[0x1c], &esp_61[0x56], 0xa8);
        esp_61[0x2c] = eax_34;
        long double x87_r7_26 = sub_491d40() * g_bcabc0;
        esp_61[0x2d] = esp_61[0x15] / x87_r7_26;
        esp_61[0x2e] = g_bcabc8 / esp_61[0x2c];
        long double x87_r7_31 = sub_491d40() * esp_61[0x2e];
        esp_61[0x34] = 0;
        *(esp_61 - 4) = &esp_61[0x1c];
        esp_61[0x2f] = x87_r7_31;
        Transcontext_SetActiveTransContext();
    }

    int16_t eax_35 = *(ebp_1 + 0x10);

    if (eax_35 != 0xffff)
    {
        int32_t* ecx_25 = g_5ca114;
        int32_t edx_20 = *ecx_25;
        *(esp_61 - 4) = *(*(*(a1[0xa] + 0x10) + (eax_35 << 2)) + 0x20);
        *(esp_61 - 8) = 0;
        *(esp_61 - 0xc) = ecx_25;
        (*(edx_20 + 0x8c))();
        void* esp_66 = esp_61;
        int32_t ecx_26 = a1[0xc];

        if (ecx_26)
        {
            int32_t eax_39 = 0;
            int32_t* edx_21 = g_5ca114;
            eax_39 = *(ebp_1 + 0x12);
            int32_t esi_5 = *edx_21;
            *(esp_66 - 4) = *(ecx_26 + eax_39 * 0x2c + 0x5c);
            *(esp_66 - 8) = 1;
            *(esp_66 - 0xc) = edx_21;
            (*(esi_5 + 0x8c))();
        }

❓️        int32_t ecx_28 = 0;
        *(esp_66 - 4) = 0;
        ecx_28 = *(ebp_1 + 0xc);
        int32_t esi_6 = 0;
        *(esp_66 - 8) = ecx_28;
        *(esp_66 - 0xc) = ebp_1 + 0x20;
        int32_t ecx_30 = 0;
        ecx_30 = *(ebp_1 + 0x16);
        int32_t edi_5 = 0;
        edi_5 = *(ebp_1 + 0x14);
        *(esp_66 - 0x10) = ecx_30;
        int32_t* ecx_31 = *(esp_66 + 0x50);
        int32_t* eax_41 = g_5ca114;
        esi_6 = ecx_31[0xb];
        int32_t edx_22 = *eax_41;
        *(esp_66 - 0x14) = esi_6 + edi_5;
        int32_t ecx_32 = *ecx_31;
        *(esp_66 - 0x18) = *ecx_31[0xc];
        *(esp_66 - 0x1c) = ecx_32;
        *(esp_66 - 0x20) = eax_41;
        (*(edx_22 + 0x80))();
        esp_61 = esp_66;
    }

    int32_t result = *(a1 + 0x5c);
    *esp_61;
    esp_61[1];
    esp_61[2];
    esp_61[3];

    if (result)
        return result;

    esp_61[3] = &esp_61[0x56];
    return Transcontext_SetActiveTransContext();
}
