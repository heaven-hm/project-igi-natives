// Original IGI.EXE function: Light_ComputeDirectionalLight_12 (VA 0x0052DD90; static CFG gate PASS, CFG score 0.933).
#include "Light_ComputeDirectionalLight_12.h"
int32_t Light_ComputeDirectionalLight_12(void* context)

{
    float context_val = *(context + 0xc);
    memset(&g_a84584, 0, 0x50);
    int32_t item_c = 0;
    int32_t item_8 = 0;
    int32_t item_4 = 0x3f800000;
    g_a8457c = 0;
    g_a84580 = 0;
    Light_RenderLensflare_12(context_val, context_val + 0x4a6c, &item_c);
    long double fpu7 = *(context_val + 0x4a94);
    memcpy(context_val + 0x4870, &g_bcab08, 0x18);
    long double fpu_val_7_1 = *(context_val + 0x4880) - fpu7;
    long double f3 = 0.0;
    fpu_val_7_1 - f3;
    *(context_val + 0x4a48) = g_bcaaf8;
    *(context_val + 0x4a4c) = g_bcaafc;
    *(context_val + 0x4a50) = g_bcab00;

    if (*(&((fpu_val_7_1 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f3) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        fpu_val_7_1 = 0.0;

    int32_t entity_2 = *(context_val + 0x4aac);
    int32_t data_3 = *(context_val + 0x4aa8);
    *(context_val + 0x4a78) = fpu_val_7_1;
    int32_t item_10 = 0;
    int32_t item_10_1 = 0;
    *(context_val + 0x4a8c) = (COMBINE(0, data_3) % entity_2) * *(context_val + 0x4a84) / entity_2;
    Light_CalculateAttenuation_11(context_val);
    Render_ComputeNormals_12(context_val + 0x4acc, context_val + 0x4ad0);
    void* source_val = *(context_val + 0x4ab4);
    int32_t item_10_2 = 0;
    long double fpu_val_7_6 = *(context_val + 0x4a9c);
    void* item_14_3 = source_val;
    int32_t item_10_3 = 0;
    long double fpu6 = item_14_3;
    long double fpu_val_5_1 = *(context_val + 0x4870) - *(context_val + 0x4840);
    *(context_val + 0x4abc) = 0;
    item_14_3 = fpu_val_5_1 / fpu_val_7_6 * fpu6;
    void* dest_1 = item_14_3;
    void* item_1c = dest_1;
    item_14_3 = (*(context_val + 0x4878) - *(context_val + 0x4848)) / fpu_val_7_6 * fpu6;
    void* entity_4 = item_14_3;
    context = entity_4;

    if (source_val - 1 < dest_1)
    {
        item_1c = source_val - 1;
        dest_1 = source_val - 1;
    }

    if (source_val - 1 < entity_4)
    {
        context = source_val - 1;
        entity_4 = source_val - 1;
    }

    int32_t item_10_4 = 0;
    int32_t temp_6 = (entity_4 + (dest_1 << 3)) * 0x30;
    int32_t item_14_4 = *(temp_6 + context_val + 0x60);
    long double fpu_val_7_8 = item_14_4;
    item_14_4 = (*(context_val + 0x4870) - *(temp_6 + context_val + 0x40)) / fpu_val_7_8 * -2.0;
    int32_t temp_10 = 0xffffffff - (item_14_4 << 1);
    item_14_4 = (*(context_val + 0x4878) - *(temp_6 + context_val + 0x48)) / fpu_val_7_8 * -2.0;
    int32_t data_11 = 0;
    data_11 = temp_10 >= 0;
    int32_t temp_11 = 0;
    void* data_14 = ((data_11 - 1) & temp_10) + dest_1;
    temp_11 = 0xffffffff - (item_14_4 << 1) >= 0;
    void* temp_14 = ((temp_11 - 1) & (0xffffffff - (item_14_4 << 1))) + entity_4;
    int32_t temp_15 = 0;
    temp_15 = data_14 <= 0;
    int32_t data_15 = 0;
    data_15 = temp_14 <= 0;
    void* data_18 = ((data_15 - 1) & temp_14) + (((temp_15 - 1) & data_14) << 3);
    *(context_val + 0x10) = *(data_18 * 0x30 + context_val + 0x40);
    *(context_val + 0x14) = *(data_18 * 0x30 + context_val + 0x44);
    *(context_val + 0x18) = *(data_18 * 0x30 + context_val + 0x48);
    int32_t dest_6 = 0;
    int32_t item_20 = 0;
    *(context_val + 0x1c) = *(data_18 * 0x30 + context_val + 0x4c);

    if (source_val > 0)
    {
        int32_t* item_14_5 = context_val + 0x54;

        do
        {
            int32_t item_24_1 = 0;

            if (source_val > 0)
            {
                int32_t* source_1 = item_14_5;
                bool flag_9_1;

                do
                {
                    source_1[5] = 1;

                    if (dest_6 != item_1c || item_24_1 != entity_4)
                    {
                        void* data_26 = item_1c + temp_10;
                        double* item_38_3;

                        if (dest_6 == data_26)
                        {
                            if (item_24_1 == entity_4)
                            {
                                int32_t data_27 = *source_1;

                                if (temp_10 <= 0)
                                    data_27 |= 0x10;
                                else
                                    data_27 |= 8;

                                *source_1 = data_27;

                                if (0xffffffff - (item_14_4 << 1) <= 0)
                                    data_27 |= 4;
                                else
                                    data_27 |= 2;

                                *source_1 = data_27;
                                source_1[6] = context_val + 0x10;
                                item_38_3 = &source_1[-5];
                                goto label_52e077;
                            }

                            dest_6 = item_20;
                        }

                        if (dest_6 != item_1c)
                            goto label_52e0db;

                        if (item_24_1 != entity_4 + 0xffffffff - (item_14_4 << 1))
                        {
                            dest_6 = item_20;
                        label_52e0db:

                            if (dest_6 != data_26 || item_24_1 != entity_4 + 0xffffffff - (item_14_4 << 1))
                                source_1[5] = 0;
                            else
                            {
                                int32_t data_37 = *source_1;

                                if (temp_10 <= 0)
                                    data_37 |= 0x10;
                                else
                                    data_37 |= 8;

                                *source_1 = data_37;

                                if (0xffffffff - (item_14_4 << 1) <= 0)
                                    data_37 |= 2;
                                else
                                    data_37 |= 4;

                                *source_1 = data_37;
                                source_1[6] = context_val + 0x10;
                                Light_ApplyLightmap_13(context_val, &source_1[-5]);
                                entity_4 = context;
                            }
                        }
                        else
                        {
                            int32_t data_30 = *source_1;

                            if (temp_10 <= 0)
                                data_30 |= 8;
                            else
                                data_30 |= 0x10;

                            *source_1 = data_30;

                            if (0xffffffff - (item_14_4 << 1) <= 0)
                            {
                                data_30 |= 2;
                                *source_1 = data_30;
                                source_1[6] = context_val + 0x10;
                                item_38_3 = &source_1[-5];
                            }
                            else
                            {
                                data_30 |= 4;
                                *source_1 = data_30;
                                source_1[6] = context_val + 0x10;
                                item_38_3 = &source_1[-5];
                            }

                        label_52e077:
                            Light_ApplyLightmap_13(context_val, item_38_3);
                            entity_4 = context;
                            dest_6 = item_20;
                        }
                    }
                    else
                    {
                        int32_t data_24 = *source_1;

                        if (temp_10 <= 0)
                            data_24 |= 8;
                        else
                            data_24 |= 0x10;

                        *source_1 = data_24;

                        if (0xffffffff - (item_14_4 << 1) <= 0)
                            data_24 |= 4;
                        else
                            data_24 |= 2;

                        *source_1 = data_24;
                        source_1[6] = context_val + 0x10;
                        Light_ApplyLightmap_13(context_val, &source_1[-5]);
                        entity_4 = context;
                    }

                    source_1 = &source_1[0xc];
                    flag_9_1 = item_24_1 + 1 < *(context_val + 0x4ab4);
                    item_24_1 += 1;
                } while (flag_9_1);
            }

            source_val = *(context_val + 0x4ab4);
            dest_6 += 1;
            item_20 = dest_6;
            item_14_5 = &item_14_5[0x60];
        } while (dest_6 < source_val);
    }

    return Light_ApplyLightmap_12(0xffffffff - (item_14_4 << 1), context_val);
}
