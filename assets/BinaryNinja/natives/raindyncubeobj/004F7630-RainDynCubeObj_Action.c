// Original IGI.EXE function: RainDynCubeObj_Action (VA 0x004F7630; static CFG gate PASS, CFG score 1.000).
#include "RainDynCubeObj_Action.h"
int32_t RainDynCubeObj_Action(void* context)

{
    void* dest_val = *(context + 0xc);
    int32_t result_1 = 7;
    double* source_val = dest_val + 0x70;
    float item_44 = *(dest_val + 0x2c60) * 0.00787401572f;
    float item_40 = *(dest_val + 0x2c64) * 0.00787401572f;
    float item_3c = *(dest_val + 0x2c68) * 0.00787401572f;
    int32_t result;
    bool flag_2_1;

    do
    {
        int32_t item_50_1 = 7;
        bool flag_1_1;

        do
        {
            int32_t item_54_1 = 7;
            bool flag_0_1;

            do
            {
                if (*(source_val + 0x14))
                {
                    int32_t item_58_1 = 0;

                    if (*(dest_val + 0x2ca8) > 0)
                    {
                        double* item_48_1 = source_val;
                        float** context_1 = dest_val + 0x2b4c;
                        bool flag_3_1;

                        do
                        {
                            float* data_3 = *context_1;
                            int32_t entity_val;
                            int32_t item_6c_1 = entity_val;
                            double item_20 = *data_3 + source_val[-1];
                            long double fpu_val_7_8 = *source_val;
                            double item_18_1 = data_3[1] + fpu_val_7_8;
                            double item_10_1 = data_3[2] + source_val[1];
                            double item_38 = *data_3 + source_val[-1];
                            double item_30_1 = data_3[1] + fpu_val_7_8;
                            double item_28_1 = data_3[2] + source_val[1];
                            item_38 = data_3[6] + item_38;
                            double item_30_2 = data_3[7] + item_30_1;
                            long double fpu_val_7_17 = data_3[8] + item_28_1;
                            item_38 = item_38 - *(dest_val + 0x2c54);
                            double item_30_3 = item_30_2 - *(dest_val + 0x2c58);
                            double item_28_2 = fpu_val_7_17 - *(dest_val + 0x2c5c);
                            SoundSys_LoadSoundDef(&item_20, &item_38, &item_44, 0.0f, &item_44, data_3[9] * source_val[2]);
                            entity_val = *(dest_val + 0x2ca8);
                            context_1 = &context_1[1];
                            flag_3_1 = item_58_1 + 1 < entity_val;
                            item_58_1 += 1;
                        } while (flag_3_1);
                    }
                }

                source_val = &source_val[4];
                flag_0_1 = item_54_1 != 1;
                item_54_1 -= 1;
            } while (flag_0_1);
            flag_1_1 = item_50_1 != 1;
            item_50_1 -= 1;
        } while (flag_1_1);
        result = result_1 - 1;
        flag_2_1 = result_1 != 1;
        result_1 = result;
    } while (flag_2_1);
    return result;
}
