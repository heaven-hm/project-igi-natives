// IGI native provenance: DisplayRender_ExecutePipeline_49D0B0 - 0x0049D0B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049D0B0-DisplayRender_ExecutePipeline_49D0B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ExecutePipeline_49D0B0.h"

int32_t DisplayRender_ExecutePipeline_49D0B0(double* arg1)

{
    void* bcade8_1 = g_bcade8;
    int32_t 7205b0_1 = g_7205b0;
    arg1[4];
    void* dest_ptr = *(arg1 + 0x24);

    if (*(bcade8_1 + 4) != 7205b0_1)
    {
        *(bcade8_1 + 4) = 7205b0_1;
        (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
    }

    void* bcad7c_1 = g_bcad7c;
    int32_t 7ac09c_1 = g_7ac09c;

    if (*(bcad7c_1 + 4) != 7ac09c_1)
    {
        *(bcad7c_1 + 4) = 7ac09c_1;
        (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
    }

    void* bcadac_1 = g_bcadac;
    int32_t 7234b8_1 = g_7234b8;

    if (*(bcadac_1 + 4) != 7234b8_1)
    {
        *(bcadac_1 + 4) = 7234b8_1;
        (*(g_bcadac + (g_7234b8 << 2) + 0x14))(0);
    }

    void* bcadc4_1 = g_bcadc4;
    int32_t bcacec_1 = g_bcacec;

    if (*(bcadc4_1 + 4) != bcacec_1)
    {
        *(bcadc4_1 + 4) = bcacec_1;
        (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(0);
    }

    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    int32_t* 5ca114_1 = g_5ca114;
    int32_t edx_4 = *5ca114_1;

    if (!(*(dest_ptr + 0x18) & 1))
    {
        (*(edx_4 + 0x50))(5ca114_1, 0x89, 1);
        int32_t* 5ca114_7 = g_5ca114;
        (*(*5ca114_7 + 0x94))(5ca114_7, 0, 1, 4);
        int32_t* 5ca114_8 = g_5ca114;
        (*(*5ca114_8 + 0x50))(5ca114_8, 0x1b, 1);
        int32_t* 5ca114_9 = g_5ca114;
        (*(*5ca114_9 + 0x50))(5ca114_9, 0x13, 5);
        int32_t* 5ca114_10 = g_5ca114;
        (*(*5ca114_10 + 0x50))(5ca114_10, 0x14, 6);
        void* eax_5 = *(arg1 + 0x1c);
        double var_58 = *(*(*(eax_5 + 0xc) + 0xc) + 0x30) + *arg1;
        double var_50_1 = *(*(*(eax_5 + 0xc) + 0xc) + 0x34) + arg1[1];
        double var_48_1 = *(*(*(eax_5 + 0xc) + 0xc) + 0x38) + arg1[2];
        Display_CreateSurface_18(&var_58, *(*(*(eax_5 + 0xc) + 0xc) + 0x3c));
    }
    else
    {
        (*(edx_4 + 0x50))(5ca114_1, 0x89, 0);
        int32_t* 5ca114_2 = g_5ca114;
        (*(*5ca114_2 + 0x94))(5ca114_2, 0, 1, 2);
        int32_t* 5ca114_3 = g_5ca114;
        (*(*5ca114_3 + 0x50))(5ca114_3, 0x1b, 1);
        int32_t* 5ca114_4 = g_5ca114;
        (*(*5ca114_4 + 0x50))(5ca114_4, 0x13, 2);
        int32_t* 5ca114_5 = g_5ca114;
        (*(*5ca114_5 + 0x50))(5ca114_5, 0x14, 2);
        int32_t* 5ca114_6 = g_5ca114;
        (*(*5ca114_6 + 0x50))(5ca114_6, 0x1c, 0);
    }

    int32_t* 5ca114_11 = g_5ca114;
    (*(*5ca114_11 + 0x50))(5ca114_11, 0xf, 1);
    int32_t* 5ca114_12 = g_5ca114;
    (*(*5ca114_12 + 0x50))(5ca114_12, 0x18, 1);
    int32_t* 5ca114_13 = g_5ca114;
    (*(*5ca114_13 + 0x50))(5ca114_13, 0x19, 5);
    int32_t* 5ca114_14 = g_5ca114;
    (*(*5ca114_14 + 0x50))(5ca114_14, 0xe, 0);
    int32_t* 5ca114_15 = g_5ca114;
    int32_t edx_15 = 0;
    edx_15 = *(dest_ptr + 0x1b);
    (*(*5ca114_15 + 0x50))(5ca114_15, 0x3c, -((edx_15 + 1)) << 0x18);
    float var_88 = arg1[1] - g_bcab10;
    float var_84 = arg1[2] - g_bcab18;
    float var_8c = g_bcabec * (*arg1 - g_bcab08);
    int32_t var_5c = 0;
    float var_88_1 = g_bcabec * var_88;
    float var_84_1 = g_bcabec * var_84;
    long double x87_r7_14 = g_bcabec;
    float var_80 = x87_r7_14;
    long double x87_r6_6 = 0f;
    float var_7c = x87_r6_6;
    float var_78 = x87_r6_6;
    float var_74 = x87_r6_6;
    float var_70 = x87_r7_14;
    float var_6c = x87_r6_6;
    float var_68 = x87_r6_6;
    float var_64 = x87_r6_6;
    float var_60 = x87_r7_14;
    void var_40;
    Display_SetGammaRamp_7(&var_40, &var_80, &var_8c);
    int32_t* 5ca114_16 = g_5ca114;
    (*(*5ca114_16 + 0x2c))(5ca114_16, 1, &var_40);
    int32_t eax_8;
    int32_t* ebp_1;
    void* esi_1;
    void* edi_1;
    eax_8 = Display_CheckCapabilities_19(arg1[4], arg1[5]);
    int16_t eax_9 = *(edi_1 + 0x10);

    if (eax_9 != 0xffff)
    {
        int32_t* 5ca114_22 = g_5ca114;
        (*(*5ca114_22 + 0x8c))(5ca114_22, 0, *(*(*(*(esi_1 + 0x1c) + 0x10) + (eax_9 << 2)) + 0x20));
        int32_t edx_20 = 0;
        edx_20 = *(edi_1 + 0xc);
        int32_t* 5ca114_17 = g_5ca114;
        int32_t edx_22 = 0;
        edx_22 = *(edi_1 + 0x14);
        int32_t edx_23 = 0;
        edx_23 = *(edi_1 + 0x12);
        return (*(*5ca114_17 + 0x80))(5ca114_17, *ebp_1, g_bcad90, edx_23 + eax_8, edx_22,
            edi_1 + 0x1c, edx_20, 0);
    }

    int32_t* 5ca114_18 = g_5ca114;
    (*(*5ca114_18 + 0x94))(5ca114_18, 0, 1, 3);
    int32_t* 5ca114_19 = g_5ca114;
    (*(*5ca114_19 + 0x8c))(5ca114_19, 0, 0);
    int32_t edx_28 = 0;
    edx_28 = *(edi_1 + 0xc);
    int32_t* 5ca114_20 = g_5ca114;
    int32_t edx_30 = 0;
    edx_30 = *(edi_1 + 0x14);
    int32_t edx_31 = 0;
    edx_31 = *(edi_1 + 0x12);
    (*(*5ca114_20 + 0x80))(5ca114_20, *ebp_1, g_bcad90, edx_31 + eax_8, edx_30, edi_1 + 0x1c,
        edx_28, 0);
    int32_t* 5ca114_21 = g_5ca114;
    return (*(*5ca114_21 + 0x94))(5ca114_21, 0, 1, 4);
}
