// IGI native provenance: Display_ClearSurfaces_17 - 0x00499CF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00499CF0-Display_ClearSurfaces_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces_17.h"
int32_t Display_ClearSurfaces_17(float context)

{
    float entity_val;
    float item_4 = entity_val;
    float dest_val = context;
    context = 2048.0f;
    int32_t result = *(dest_val + 0x5650);
    float* source_val = dest_val + 0x57c;

    if (result)
        context = 204.800003f;

    result = *(dest_val + 0x56ac);
    long double fpu7 = *(dest_val + 0x56a8);
    *(dest_val + 0x5648) += 3;
    long double fpu_val_7_1;

    if (!result)
    {
        fpu_val_7_1 = fpu7 - 0.0166666675f;
        long double f0_1 = 0.0f;
        fpu_val_7_1 - f0_1;
        result = (fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
            fpu_val_7_1 = 0.0f;
    }
    else
    {
        fpu_val_7_1 = fpu7 + 0.0166666675f;
        long double f1_1 = 1.0f;
        fpu_val_7_1 - f1_1;
        result = (fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            fpu_val_7_1 = 1.0f;
    }

    *(dest_val + 0x56a8) = fpu_val_7_1;
    long double fpu_val_7_4 = *(dest_val + 0x56a8);
    long double f2 = 0.0f;
    fpu_val_7_4 - f2;
    result = (fpu_val_7_4 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        result = *(dest_val + 0xe3c);
        int32_t flagP1 = 0;

        if (result > 0)
        {
            do
            {
                long double fpu_val_7_6 = source_val[2] - context;
                item_4 = fpu_val_7_6;
                source_val[2] = fpu_val_7_6;
                long double fpu_val_7_7 = item_4;
                long double f4_1 = 0.0f;
                fpu_val_7_7 - f4_1;

                if (*(&((fpu_val_7_7 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_7, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_7 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                    source_val[2] = item_4 + 24576.0f;

                if (*(dest_val + 0x5650))
                {
                    int32_t data_2 = source_val[3];
                    source_val[3] = data_2 - 1;

                    if (data_2 < 0)
                    {
                        uint32_t data_3 = Sys_FreeMemory_14(0xc311d0, 0x1e);
                        source_val[3] += data_3 + 0x1e;
                        source_val[4] = (Sys_AllocateMemory_14(0xc311d0) - 0.5f) * 136.53334f;
                        source_val[5] = (Sys_AllocateMemory_14(0xc311d0) - 0.5f) * 136.53334f;
                    }

                    long double fpu_val_7_17 = source_val[4] + *source_val;
                    *source_val = fpu_val_7_17;
                    source_val[1] = source_val[5] + source_val[1];
                    long double f6_1 = 0.0f;
                    fpu_val_7_17 - f6_1;
                    long double fpu_val_7_18 = *source_val;

                    if (!(*(&((fpu_val_7_17 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_17, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_17 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double f7_1 = 10895.3604f;
                        fpu_val_7_18 - f7_1;

                        if (!(*(&((fpu_val_7_18 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_18, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_18 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            *source_val = *source_val - 10895.3604f;
                            source_val[6] ^= 1;
                        }
                    }
                    else
                    {
                        *source_val = fpu_val_7_18 + 10895.3604f;
                        source_val[6] ^= 1;
                    }

                    long double fpu_val_7_21 = source_val[1];
                    long double f8_1 = 0.0f;
                    fpu_val_7_21 - f8_1;
                    long double fpu_val_7_22 = source_val[1];

                    if (!(*(&((fpu_val_7_21 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_21, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_21 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double f9_1 = 10895.3604f;
                        fpu_val_7_22 - f9_1;

                        if (!(*(&((fpu_val_7_22 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_22, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_22 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            source_val[1] = source_val[1] - 10895.3604f;
                            source_val[6] ^= 2;
                        }
                    }
                    else
                    {
                        source_val[1] = fpu_val_7_22 + 10895.3604f;
                        source_val[6] ^= 2;
                    }
                }

                result = *(dest_val + 0xe3c);
                source_val = &source_val[7];
                flagP1 += 1;
            } while (flagP1 < result);
        }

        long double fpu_val_7_26 = context + *(dest_val + 0x564c);
        *(dest_val + 0x564c) = fpu_val_7_26;
        long double f3_1 = 307.200012f;
        fpu_val_7_26 - f3_1;
        result = (fpu_val_7_26 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_26, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_26 == f3_1 ? 1 : 0) << 0xe;

        while (!(*(&result + 1) & 0x41))
        {
            result = *(dest_val + 0xe3c);

            if (result == 0x50)
                break;

            item_4 = Sys_AllocateMemory_14(0xc311d0) * 10895.3604f;
            long double fpu_val_7_30 = Sys_AllocateMemory_14(0xc311d0) * 10895.3604f;
            *(dest_val + result * 0x1c + 0x57c) = item_4;
            *(dest_val + result * 0x1c + 0x588) = 0;
            *(dest_val + result * 0x1c + 0x580) = fpu_val_7_30;
            *(dest_val + result * 0x1c + 0x584) = 24576.0f - context;
            *(dest_val + result * 0x1c + 0x594) = Sys_FreeMemory_14(0xc311d0, 4);
            long double fpu_val_7_34 = *(dest_val + 0x564c) - 307.200012f;
            result = *(dest_val + 0xe3c) + 1;
            *(dest_val + 0xe3c) = result;
            *(dest_val + 0x564c) = fpu_val_7_34;
            long double f5_1 = 307.200012f;
            fpu_val_7_34 - f5_1;
            result = (fpu_val_7_34 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_34, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_34 == f5_1 ? 1 : 0) << 0xe;
        }
    }

    return result;
}
