// IGI native provenance: DisplayRender_Invoke5 - 0x00499430 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00499430-DisplayRender_Invoke5.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke5.h"

int32_t* DisplayRender_Invoke5(int32_t arg1, int32_t* arg2)

{
    double* source_ptr = arg2[1];
    void* dest_ptr = *arg2;
    long double x87_r7 = source_ptr[2];
    long double x87_r6 = source_ptr[0x62];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = source_ptr[0x62];
    else
        x87_r7_1 = source_ptr[2];

    long double x87_r6_1 = source_ptr[6];
    long double x87_r5 = source_ptr[0x66];
    x87_r5 - x87_r6_1;
    long double x87_r6_2;

    if (!(*(&((x87_r5 < x87_r6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r5 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        x87_r6_2 = source_ptr[0x66];
    else
        x87_r6_2 = source_ptr[6];

    x87_r7_1 - x87_r6_2;
    long double x87_r7_5;

    if (*(&((x87_r7_1 < x87_r6_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, x87_r6_2) ? 1 : 0) << 0xa
        | (x87_r7_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_6 = source_ptr[6];
        long double x87_r6_5 = source_ptr[0x66];
        x87_r6_5 - x87_r7_6;

        if (!(*(&((x87_r6_5 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_6) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_5 = source_ptr[0x66];
        else
            x87_r7_5 = source_ptr[6];
    }
    else
    {
        long double x87_r7_4 = source_ptr[2];
        long double x87_r6_4 = source_ptr[0x62];
        x87_r6_4 - x87_r7_4;

        if (!(*(&((x87_r6_4 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_5 = source_ptr[0x62];
        else
            x87_r7_5 = source_ptr[2];
    }

    float var_10 = x87_r7_5 - *(arg2 + 8) - 73728f;
    int32_t ebx_2 = (Camera_ApplyBandFilter_5(source_ptr[1] * 9.1782186888072072fe-05) & 1) << 1;
    double var_24_1 = *source_ptr * 9.1782186888072072fe-05;
    int32_t ebx_3 = ebx_2 | (Camera_ApplyBandFilter_5(var_24_1) & 1);
    int32_t eax_3 = ebx_3 * 9;
    int32_t* 543c58_1 = g_543c58;

    if (543c58_1)
    {
        *(&var_24_1 + 4) = arg1;
        var_24_1 = 1;
        *(g_bcade8 + 4) = 0xffffffff;
        *(g_bcad7c + 4) = 0xffffffff;
        *(g_bcadac + 4) = 0xffffffff;
        *(g_bcadc4 + 4) = 0xffffffff;
        int32_t* 5ca114_1 = g_5ca114;
        (*(*5ca114_1 + 0x50))(5ca114_1, 0x1b, 1);
        int32_t* 5ca114_2 = g_5ca114;
        var_24_1 = 5;
        (*(*5ca114_2 + 0x50))(5ca114_2, 0x13, 5);
        int32_t* 5ca114_3 = g_5ca114;
        var_24_1 = 6;
        (*(*5ca114_3 + 0x50))(5ca114_3, 0x14, 6);
        int32_t* 5ca114_4 = g_5ca114;
        var_24_1 = 0;
        (*(*5ca114_4 + 0x50))(5ca114_4, 0x1c, 0);
        int32_t* 5ca114_5 = g_5ca114;
        var_24_1 = g_bcad78;
        (*(*5ca114_5 + 0x50))(5ca114_5, 7, var_24_1);
        int32_t* 5ca114_6 = g_5ca114;
        var_24_1 = 0;
        (*(*5ca114_6 + 0x50))(5ca114_6, 0x2f, 0);
        int32_t* 5ca114_7 = g_5ca114;
        int32_t frame_ptr = 2;
        var_24_1 = 2;
        (*(*5ca114_7 + 0x50))(5ca114_7, 0x17, 2);
        int32_t* 5ca114_8 = g_5ca114;
        var_24_1 = 0;
        (*(*5ca114_8 + 0x50))(5ca114_8, 0xe, 0);
        int32_t* 5ca114_9 = g_5ca114;
        var_24_1 = 1;
        (*(*5ca114_9 + 0x50))(5ca114_9, 0x16, 1);
        int32_t* 5ca114_10 = g_5ca114;
        var_24_1 = 0;
        (*(*5ca114_10 + 0x50))(5ca114_10, 0x1d, 0);
        int32_t* 5ca114_11 = g_5ca114;
        var_24_1 = 0;
        (*(*5ca114_11 + 0x50))(5ca114_11, 0x89, 0);
        int32_t* 5ca114_12 = g_5ca114;
        var_24_1 = 0;
        (*(*5ca114_12 + 0x50))(5ca114_12, 0x1a, 0);
        int32_t* 5ca114_13 = g_5ca114;
        var_24_1 = 0;
        (*(*5ca114_13 + 0x50))(5ca114_13, 0xf, 0);
        int32_t* 5ca114_14 = g_5ca114;
        var_24_1 = 1;
        (*(*5ca114_14 + 0x50))(5ca114_14, 0x88, 1);
        int32_t var_8_1;

        if (*(dest_ptr + 0x5650) != 1)
        {
            int32_t* 5ca114_24 = g_5ca114;
            var_24_1 = 0;
            (*(*5ca114_24 + 0x8c))(5ca114_24, 0, 0);
            int32_t* 5ca114_25 = g_5ca114;
            var_24_1 = 3;
            (*(*5ca114_25 + 0x94))(5ca114_25, 0, 1, 3);
            int32_t* 5ca114_26 = g_5ca114;
            var_24_1 = 3;
            (*(*5ca114_26 + 0x94))(5ca114_26, 0, 4, 3);
            int32_t* 5ca114_27 = g_5ca114;
            var_24_1 = 2;
            (*(*5ca114_27 + 0x94))(5ca114_27, 0, 2, 2);
            int32_t* 5ca114_28 = g_5ca114;
            var_24_1 = 0;
            (*(*5ca114_28 + 0x94))(5ca114_28, 0, 3, 0);
            int32_t* 5ca114_29 = g_5ca114;
            var_24_1 = 2;
            (*(*5ca114_29 + 0x94))(5ca114_29, 0, 5, 2);
            int32_t* 5ca114_30 = g_5ca114;
            var_24_1 = 0;
            (*(*5ca114_30 + 0x94))(5ca114_30, 0, 6, 0);
            int32_t* 5ca114_31 = g_5ca114;
            var_24_1 = 1;
            (*(*5ca114_31 + 0x94))(5ca114_31, 1, 1, 1);
            var_8_1 = 2;
        }
        else
        {
            void* eax_4 = *(dest_ptr + 0x5654);
            int32_t* 5ca114_16;
            int32_t edx_11;

            if (!eax_4)
            {
                int32_t* 5ca114_17 = g_5ca114;
                var_24_1 = 3;
                (*(*5ca114_17 + 0x94))(5ca114_17, 0, 1, 3);
                5ca114_16 = g_5ca114;
                var_24_1 = 3;
                edx_11 = *5ca114_16;
            }
            else
            {
                int32_t* 5ca114_34 = g_5ca114;
                var_24_1 = *(eax_4 + 0x20);
                (*(*5ca114_34 + 0x8c))(5ca114_34, 0, var_24_1);
                int32_t* 5ca114_15 = g_5ca114;
                var_24_1 = 4;
                (*(*5ca114_15 + 0x94))(5ca114_15, 0, 1, 4);
                5ca114_16 = g_5ca114;
                var_24_1 = 4;
                edx_11 = *5ca114_16;
            }

            (*(edx_11 + 0x94))(5ca114_16, 0, 4, var_24_1);
            int32_t* 5ca114_18 = g_5ca114;
            var_24_1 = 2;
            (*(*5ca114_18 + 0x94))(5ca114_18, 0, 2, 2);
            int32_t* 5ca114_19 = g_5ca114;
            var_24_1 = 0;
            (*(*5ca114_19 + 0x94))(5ca114_19, 0, 3, 0);
            int32_t* 5ca114_20 = g_5ca114;
            var_24_1 = 2;
            (*(*5ca114_20 + 0x94))(5ca114_20, 0, 5, 2);
            int32_t* 5ca114_21 = g_5ca114;
            var_24_1 = 0;
            (*(*5ca114_21 + 0x94))(5ca114_21, 0, 6, 0);
            int32_t* 5ca114_22 = g_5ca114;
            var_24_1 = 2;
            (*(*5ca114_22 + 0x94))(5ca114_22, 0, 0x10, 2);
            int32_t* 5ca114_23 = g_5ca114;
            var_24_1 = 1;
            (*(*5ca114_23 + 0x94))(5ca114_23, 0, 0x11, 1);
            frame_ptr = 4;
            var_8_1 = 6;
        }

        int32_t* 5ca114_32 = g_5ca114;
        var_24_1 = 1;
        (*(*5ca114_32 + 0x94))(5ca114_32, 1, 1, 1);
        int32_t* edx_19 = arg2;
        arg2 = 3;
        *(dest_ptr + 0x5688) = (*source_ptr - g_bcab08) * g_bcabec;
        *(dest_ptr + 0x568c) = (source_ptr[1] - g_bcab10) * g_bcabec;
        long double x87_r7_24 = (*(edx_19 + 8) - g_bcab18 + 73728.0f) * g_bcabec;
        *(dest_ptr + 0x5694) = 0x3f800000;
        *(dest_ptr + 0x5690) = x87_r7_24;
        bool cond:2_1;

        do
        {
            *(dest_ptr + 0x5690) = *(dest_ptr + 0x5690) - g_bcabec * 24576f;
            long double x87_r7_29 = var_10 + 24576f;
            var_10 = x87_r7_29;
            long double temp1_1 = 0f;
            x87_r7_29 - temp1_1;
            int32_t esi_1;

            if (!(*(&((x87_r7_29 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_29, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_29 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_30 = var_10;
                long double temp2_1 = 24576f;
                x87_r7_30 - temp2_1;

                if (*(&((x87_r7_30 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_30, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_30 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    esi_1 = 0;
                    float* edx_20 = dest_ptr + eax_3 * 0x24 + 0x70;
                    int32_t ecx_22 = *(dest_ptr + eax_3 * 0x24 + 0x6c);

                    if (ecx_22 > 0)
                    {
                        do
                        {
                            long double x87_r7_31 = *edx_20;
                            long double temp4_1 = var_10;
                            x87_r7_31 - temp4_1;

                            if (*(&((x87_r7_31 < temp4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_31, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r7_31 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                break;

                            edx_20 = &edx_20[1];
                            esi_1 += 1;
                        } while (esi_1 < ecx_22);

                        goto label_4998ac;
                    }
                }
            }
            else
            {
                esi_1 = *(dest_ptr + eax_3 * 0x24 + 0x6c);
            label_4998ac:

                if (esi_1)
                {
                    int32_t* 5ca114_33 = g_5ca114;
                    var_24_1 = dest_ptr + 0x5658;
                    (*(*5ca114_33 + 0x2c))(5ca114_33, 1, var_24_1);
                    int32_t* 5ca114_35 = g_5ca114;
                    var_24_1 = 0;
                    (*(*5ca114_35 + 0x7c))(5ca114_35, frame_ptr, *(dest_ptr + 0x56cc), ebx_3 * 0x1e0,
                        esi_1 * var_8_1, 0);
                }
            }
            543c58_1 = arg2 - 1;
            cond:2_1 = arg2 != 1;
            arg2 = 543c58_1;
        } while (cond:2_1);
    }

    return 543c58_1;
}
