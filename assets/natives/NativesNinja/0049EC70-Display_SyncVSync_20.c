#include "0049EC70-Display_SyncVSync_20.h"
/* 0x0049ec70 Display_SyncVSync_20 full linked: callers=0 callees=12 */
int32_t* sub_49ec70(double* a1)

{
    void* esi = a1[0xa];
    sub_4d0ea0(esi, a1[0xc]);
    sub_4d0de0(esi);
    int32_t* ecx = *(a1 + 0x54);
    void* eax_1 = g_bcade8;
    void* ebp = a1[0xb];
    int32_t ecx_1 = g_7205b0;

    if (*(eax_1 + 4) != ecx_1)
    {
        *(eax_1 + 4) = ecx_1;
        (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
    }

    void* ecx_2 = g_bcad7c;
    int32_t eax_3 = g_7ac09c;

    if (*(ecx_2 + 4) != eax_3)
    {
        *(ecx_2 + 4) = eax_3;
        (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
    }

    void* eax_4 = g_bcadac;
    int32_t ecx_4 = g_7234b8;

    if (*(eax_4 + 4) != ecx_4)
    {
        *(eax_4 + 4) = ecx_4;
        (*(g_bcadac + (g_7234b8 << 2) + 0x14))(0);
    }

    void* eax_6 = g_bcadc4;
    int32_t ecx_6 = g_bcacec;

    if (*(eax_6 + 4) != ecx_6)
    {
        *(eax_6 + 4) = ecx_6;
        (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(0);
    }

    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    int32_t* eax_10 = g_5ca114;
    int32_t ecx_8 = *eax_10;

    if (!(*(ebp + 0x18) & 1))
    {
        (*(ecx_8 + 0x50))(eax_10, 0x89, 1);
        int32_t* eax_16 = g_5ca114;
        (*(*eax_16 + 0x94))(eax_16, 0, 1, 4);
        int32_t* eax_17 = g_5ca114;
        (*(*eax_17 + 0x50))(eax_17, 0x1b, 1);
        int32_t* eax_18 = g_5ca114;
        (*(*eax_18 + 0x50))(eax_18, 0x13, 5);
        int32_t* eax_19 = g_5ca114;
        (*(*eax_19 + 0x50))(eax_19, 0x14, 6);
        void* ecx_13 = a1[0xa];
        void* eax_20 = *(*(ecx_13 + 0xc) + 0xc);
        long double x87_r7_4 = a1[4] * *(eax_20 + 0x38) + *(a1 + 0x1c) * *(eax_20 + 0x34)
            + a1[3] * *(eax_20 + 0x30);
        long double x87_r6_8 = *(a1 + 0x2c) * *(eax_20 + 0x38) + a1[5] * *(eax_20 + 0x34)
            + *(a1 + 0x24) * *(eax_20 + 0x30);
        float var_1f0_1 = x87_r6_8;
        long double x87_r6_12 = a1[7] * *(eax_20 + 0x38) + *(a1 + 0x34) * *(eax_20 + 0x34)
            + a1[6] * *(eax_20 + 0x30);
        float var_1ec_1 = x87_r6_12;
        double var_1a8 = x87_r7_4 + *a1;
        double var_1a0_1 = var_1f0_1 + a1[1];
        double var_198_1 = var_1ec_1 + a1[2];
        sub_49b2d0(&var_1a8, *(*(*(ecx_13 + 0xc) + 0xc) + 0x3c));
    }
    else
    {
        (*(ecx_8 + 0x50))(eax_10, 0x89, 0);
        int32_t* eax_11 = g_5ca114;
        (*(*eax_11 + 0x94))(eax_11, 0, 1, 2);
        int32_t* eax_12 = g_5ca114;
        (*(*eax_12 + 0x50))(eax_12, 0x1b, 1);
        int32_t* eax_13 = g_5ca114;
        (*(*eax_13 + 0x50))(eax_13, 0x13, 2);
        int32_t* eax_14 = g_5ca114;
        (*(*eax_14 + 0x50))(eax_14, 0x14, 2);
        int32_t* eax_15 = g_5ca114;
        (*(*eax_15 + 0x50))(eax_15, 0x1c, 0);
    }

    int32_t* eax_22 = g_5ca114;
    (*(*eax_22 + 0x50))(eax_22, 0xf, 1);
    int32_t* eax_23 = g_5ca114;
    (*(*eax_23 + 0x50))(eax_23, 0x18, 1);
    int32_t* eax_24 = g_5ca114;
    (*(*eax_24 + 0x50))(eax_24, 0x19, 5);
    int32_t* eax_25 = g_5ca114;
    (*(*eax_25 + 0x50))(eax_25, 0xe, 0);
    int32_t* eax_26 = g_5ca114;
    int32_t edx_14 = 0;
    edx_14 = *(ebp + 0x1b);
    (*(*eax_26 + 0x50))(eax_26, 0x3c, -((edx_14 + 1)) << 0x18);
    float var_1e0 = a1[1] - g_bcab10;
    float var_1dc = a1[2] - g_bcab18;
    long double x87_r6_18 = g_bcabec * (*a1 - g_bcab08);
    float var_1d8;
    memcpy(&var_1d8, &a1[3], 0x28);
    float var_1e4 = x87_r6_18;
    float var_1e0_1 = g_bcabec * var_1e0;
    float var_1dc_1 = g_bcabec * var_1dc;
    long double x87_r7_18 = g_bcabec * a1[8];
    float var_1f0_2 = g_bcabec * *(a1 + 0x44);
    float var_1ec_2 = g_bcabec * a1[9];
    var_1d8 = var_1d8 * x87_r7_18;
    float var_1d4;
    float var_1d4_1 = var_1d4 * var_1f0_2;
    float var_1d0;
    float var_1d0_1 = var_1d0 * var_1ec_2;
    float var_1cc;
    float var_1cc_1 = var_1cc * x87_r7_18;
    float var_1c8;
    float var_1c8_1 = var_1c8 * var_1f0_2;
    float var_1c4;
    float var_1c4_1 = var_1c4 * var_1ec_2;
    float var_1c0;
    float var_1c0_1 = var_1c0 * x87_r7_18;
    float var_1bc;
    float var_1bc_1 = var_1bc * var_1f0_2;
    float var_1b8;
    float var_1b8_1 = var_1b8 * var_1ec_2;
    void var_e8;
    sub_4950f0(&var_e8, &var_1d8, &var_1e4);
    int32_t* eax_27 = g_5ca114;
    (*(*eax_27 + 0x2c))(eax_27, 1, &var_e8);
    void var_a8;

    if (!*(a1 + 0x5c))
    {
        long double x87_r7_25 = g_b81700 * g_bcabc4;
        float eax_29 = g_b81700;
        memcpy(&var_a8, &g_bcaae0, 0xa8);
        float var_1b0_1 = x87_r7_25;
        void var_190;
        memcpy(&var_190, &var_a8, 0xa8);
        float var_150 = eax_29;
        float var_14c_1 = var_1b0_1 / (sub_491d40() * g_bcabc0);
        int32_t var_130_1 = 0;
        int32_t* var_208_24 = &var_190;
        float var_144_1 = sub_491d40() * g_bcabc8 / var_150;
        Transcontext_SetActiveTransContext(var_208_24);
    }

    int16_t eax_30 = *(ebp + 0x10);

    if (eax_30 == 0xffff)
    {
        int32_t* eax_39 = g_5ca114;
        (*(*eax_39 + 0x94))(eax_39, 0, 1, 3);
        int32_t* eax_40 = g_5ca114;
        (*(*eax_40 + 0x8c))(eax_40, 0, 0);
        int32_t eax_41 = 0;
        eax_41 = *(ebp + 0xc);
        int32_t esi_8 = 0;
        int32_t eax_43 = 0;
        eax_43 = *(ebp + 0x14);
        int32_t edi_1 = 0;
        edi_1 = *(ebp + 0x12);
        int32_t* ecx_22 = g_5ca114;
        esi_8 = ecx[9];
        (*(*ecx_22 + 0x80))(ecx_22, *ecx, *ecx[0xa], esi_8 + edi_1, eax_43, ebp + 0x1c, eax_41, 0);
        int32_t* eax_46 = g_5ca114;
        (*(*eax_46 + 0x94))(eax_46, 0, 1, 4);
    }
    else
    {
        int32_t* ecx_19 = g_5ca114;
        (*(*ecx_19 + 0x8c))(ecx_19, 0, *(*(*(a1[0xa] + 0x10) + (eax_30 << 2)) + 0x20));
        int32_t eax_34 = 0;
        eax_34 = *(ebp + 0xc);
        int32_t esi_4 = 0;
        int32_t eax_36 = 0;
        eax_36 = *(ebp + 0x14);
        int32_t edi = 0;
        edi = *(ebp + 0x12);
        int32_t* ecx_20 = g_5ca114;
        esi_4 = ecx[9];
        (*(*ecx_20 + 0x80))(ecx_20, *ecx, *ecx[0xa], esi_4 + edi, eax_36, ebp + 0x1c, eax_34, 0);
    }

    if (!*(a1 + 0x5c))
        Transcontext_SetActiveTransContext(&var_a8);

    return sub_4d0e20(esi);
}
