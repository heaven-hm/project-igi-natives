// IGI native provenance: Display_CloseDevice_17 - 0x00498F10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498F10-Display_CloseDevice_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_17.h"
int32_t Display_CloseDevice_17(float context)

{
    void* source_2 = ((*(context + 0x5644) + *(context + 0x5640) * 0x18 + 0x8b) << 5) + context;
    double item_30 = (g_bcab18 - 36864.0) * 4.0690104166666664e-05 + 0.5;
    double item_10 = Camera_ApplyBandFilter_5(item_30) * 24576.0f;
    Display_SetDisplayMode_17(context);
    int32_t item_38 = *(&item_10 + 4);
    Display_SyncVSync_17(context, item_10);
    int32_t result_1 = 9;
    int32_t result;
    bool flag_0_1;

    do
    {
        int32_t i_1 = 9;
        int32_t i;

        do
        {
            if ((*(source_2 + 0x1c) & *(source_2 + 0x3c) & *(source_2 + 0x33c) & *(source_2 + 0x31c)) == 0x20)
            {
                long double fpu_val_7_6 = *(source_2 + 0x18);
                long double fpu_val_6_1 = *(source_2 + 0x318);
                fpu_val_6_1 - fpu_val_7_6;
                long double fpu_val_7_7;

                if (!(*(&((fpu_val_6_1 < fpu_val_7_6 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_1, fpu_val_7_6) ? 1 : 0) << 0xa
                        | (fpu_val_6_1 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
                    fpu_val_7_7 = *(source_2 + 0x318);
                else
                    fpu_val_7_7 = *(source_2 + 0x18);

                long double fpu_val_6_2 = *(source_2 + 0x38);
                long double fpu_val_5_1 = *(source_2 + 0x338);
                fpu_val_5_1 - fpu_val_6_2;
                long double fpu_val_6_3;

                if (!(*(&((fpu_val_5_1 < fpu_val_6_2 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_1, fpu_val_6_2) ? 1 : 0) << 0xa
                        | (fpu_val_5_1 == fpu_val_6_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    fpu_val_6_3 = *(source_2 + 0x338);
                else
                    fpu_val_6_3 = *(source_2 + 0x38);

                fpu_val_7_7 - fpu_val_6_3;
                long double fpu_val_7_11;

                if (*(&((fpu_val_7_7 < fpu_val_6_3 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, fpu_val_6_3) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == fpu_val_6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double fpu_val_7_12 = *(source_2 + 0x38);
                    long double fpu_val_6_6 = *(source_2 + 0x338);
                    fpu_val_6_6 - fpu_val_7_12;

                    if (!(*(&((fpu_val_6_6 < fpu_val_7_12 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_6, fpu_val_7_12) ? 1 : 0) << 0xa
                            | (fpu_val_6_6 == fpu_val_7_12 ? 1 : 0) << 0xe) + 1) & 1))
                        fpu_val_7_11 = *(source_2 + 0x338);
                    else
                        fpu_val_7_11 = *(source_2 + 0x38);
                }
                else
                {
                    long double fpu_val_7_10 = *(source_2 + 0x18);
                    long double fpu_val_6_5 = *(source_2 + 0x318);
                    fpu_val_6_5 - fpu_val_7_10;

                    if (!(*(&((fpu_val_6_5 < fpu_val_7_10 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_5, fpu_val_7_10) ? 1 : 0) << 0xa
                            | (fpu_val_6_5 == fpu_val_7_10 ? 1 : 0) << 0xe) + 1) & 1))
                        fpu_val_7_11 = *(source_2 + 0x318);
                    else
                        fpu_val_7_11 = *(source_2 + 0x18);
                }

                *(&item_30 + 4) = fpu_val_7_11;
                item_30 = 0x10;
                void** data_5 = Sys_AllocateMemory_19(sub_499430, 0x10);
                data_5[2] = item_10;
                *data_5 = context;
                data_5[1] = source_2;
                data_5[3] = *(&item_10 + 4);
            }

            source_2 += 0x20;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        source_2 += 0x1e0;
        result = result_1 - 1;
        flag_0_1 = result_1 != 1;
        result_1 = result;
    } while (flag_0_1);
    return result;
}
