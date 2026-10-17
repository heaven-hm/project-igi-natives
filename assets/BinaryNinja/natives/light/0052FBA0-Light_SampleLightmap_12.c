// Original IGI.EXE function: Light_SampleLightmap_12 (VA 0x0052FBA0; static CFG gate PASS, CFG score 1.000).
#include "Light_SampleLightmap_12.h"
int32_t Light_SampleLightmap_12(void* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    int32_t context_val = 0;

    if (param_2 + 1 >= *(context + 0x4abc))
    {
        int32_t data_2 = param_4 + ((param_3 + (param_2 << 2)) << 2);
        *(data_2 * 0x30 + context + 0xc58) = 0;
        return data_2;
    }

    int32_t dest_val = param_3;
    int32_t entity_3;

    if (dest_val <= 0)
        entity_3 = param_4;
    else
    {
        entity_3 = param_4;
        int32_t data_6 = (entity_3 + ((dest_val + (param_2 << 2)) << 2)) * 0x30;

        if (*(data_6 + context + 0xba8))
        {
            int32_t i = 0;
            context_val = 0x10;
            double* entity_6 = param_2 * 0x300 + context + 0x1188;

            do
            {
                if (entity_6[4])
                {
                    long double fpu_val_7_1 = *entity_6;
                    long double f0_1 = *(data_6 + context + 0xb88);
                    fpu_val_7_1 - f0_1;

                    if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t item_4_1 = 0;
                        long double fpu_val_7_3 = *(data_6 + context + 0xba0) + *(data_6 + context + 0xb88);
                        long double f1_1 = *entity_6;
                        fpu_val_7_3 - f1_1;

                        if (!(*(&((fpu_val_7_3 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_3, f1_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t data_13 = i & 0x80000001;
                            bool flag_0_1 = !data_13;

                            if (data_13 < 0)
                                flag_0_1 = ((data_13 - 1) | 0xfffffffe) == 0xffffffff;

                            if (flag_0_1)
                                context_val |= 0x20;
                            else
                                *(&context_val + 1) |= 1;
                        }
                    }
                }

                i += 1;
                entity_6 = &entity_6[6];
            } while (i < 4);

            entity_3 = param_4;
            dest_val = param_3;
        }
    }

    if (entity_3 > 0)
    {
        int32_t data_20 = (entity_3 + ((dest_val + (param_2 << 2)) << 2)) * 0x30;

        if (*(data_20 + context + 0xc38))
        {
            context_val |= 4;
            int32_t i_1 = 0;
            double* entity_9 = param_2 * 0x300 + context + 0xfd0;

            do
            {
                if (entity_9[5])
                {
                    long double fpu_val_7_4 = *entity_9;
                    long double f2_1 = *(data_20 + context + 0xc10);
                    fpu_val_7_4 - f2_1;

                    if (!(*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t item_4_2 = 0;
                        long double fpu_val_7_6 = *(data_20 + context + 0xc30) + *(data_20 + context + 0xc10);
                        long double f4_1 = *entity_9;
                        fpu_val_7_6 - f4_1;

                        if (!(*(&((fpu_val_7_6 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_6, f4_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_6 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t data_27 = i_1 & 0x80000001;
                            bool flag_1_1 = !data_27;

                            if (data_27 < 0)
                                flag_1_1 = ((data_27 - 1) | 0xfffffffe) == 0xffffffff;

                            if (flag_1_1)
                                context_val |= 0x80;
                            else
                                *(&context_val + 1) |= 1;
                        }
                    }
                }

                i_1 += 1;
                entity_9 = &entity_9[0x18];
            } while (i_1 < 4);

            entity_3 = param_4;
            dest_val = param_3;
        }
    }

    if (dest_val < 3)
    {
        int32_t data_34 = (entity_3 + ((dest_val + (param_2 << 2)) << 2)) * 0x30;

        if (*(data_34 + context + 0xd28))
        {
            context_val |= 8;
            int32_t i_2 = 0;
            double* entity_12 = param_2 * 0x300 + context + 0xf48;

            do
            {
                if (entity_12[4])
                {
                    long double fpu_val_7_7 = *entity_12;
                    long double f3_1 = *(data_34 + context + 0xd08);
                    fpu_val_7_7 - f3_1;

                    if (!(*(&((fpu_val_7_7 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_7, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_7 == f3_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t item_4_3 = 0;
                        long double fpu_val_7_9 = *(data_34 + context + 0xd20) + *(data_34 + context + 0xd08);
                        long double f7_1 = *entity_12;
                        fpu_val_7_9 - f7_1;

                        if (!(*(&((fpu_val_7_9 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_9, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_9 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t data_41 = i_2 & 0x80000001;
                            bool flag_2_1 = !data_41;

                            if (data_41 < 0)
                                flag_2_1 = ((data_41 - 1) | 0xfffffffe) == 0xffffffff;

                            if (flag_2_1)
                                context_val |= 0x40;
                            else
                                context_val |= 0x80;
                        }
                    }
                }

                i_2 += 1;
                entity_12 = &entity_12[6];
            } while (i_2 < 4);

            entity_3 = param_4;
            dest_val = param_3;
        }
    }

    if (entity_3 < 3)
    {
        int32_t data_48 = (entity_3 + ((dest_val + (param_2 << 2)) << 2)) * 0x30;

        if (*(data_48 + context + 0xc98))
        {
            context_val |= 2;
            int32_t i_3 = 0;
            double* entity_15 = param_2 * 0x300 + context + 0xf40;

            do
            {
                if (entity_15[5])
                {
                    long double fpu_val_7_10 = *entity_15;
                    long double f6_1 = *(data_48 + context + 0xc70);
                    fpu_val_7_10 - f6_1;

                    if (!(*(&((fpu_val_7_10 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_10, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_10 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        int32_t item_4_4 = 0;
                        long double fpu_val_7_12 = *(data_48 + context + 0xc90) + *(data_48 + context + 0xc70);
                        long double f8_1 = *entity_15;
                        fpu_val_7_12 - f8_1;

                        if (!(*(&((fpu_val_7_12 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_12, f8_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_12 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t data_55 = i_3 & 0x80000001;
                            bool flag_3_1 = !data_55;

                            if (data_55 < 0)
                                flag_3_1 = ((data_55 - 1) | 0xfffffffe) == 0xffffffff;

                            context_val = flag_3_1 ? context_val | 0x40 : context_val | 0x20;
                        }
                    }
                }

                i_3 += 1;
                entity_15 = &entity_15[0x18];
            } while (i_3 < 4);

            entity_3 = param_4;
            dest_val = param_3;
        }
    }

    int32_t data_61 = (entity_3 + ((dest_val + (param_2 << 2)) << 2)) * 0x30;
    *(data_61 + context + 0xc58) = context_val;
    return data_61;
}
