// Original IGI.EXE function: SplineObjSegment_Action (VA 0x004E3FC0; static CFG gate PASS, CFG score 1.000).
#include "SplineObjSegment_Action.h"
void* SplineObjSegment_Action(float context, int32_t* param_2)

{
    float dest_val = context;
    void* result_2 = 1;
    void* result = *(dest_val + 0x6c);

    if (result)
    {
        uint32_t data_1 = SoundSys_AttachLipsync_2();
        int32_t entity_1 = 0;
        entity_1 = *(dest_val + 0x1c);
        int32_t data_5 = *(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_5)
            data_5(dest_val, &result_2);

        result = result_2;

        if (result)
        {
            int32_t data_6 = *(dest_val + 0x20);
            int32_t temp_1 = *(dest_val + 0x28);
            int32_t item_14_1 = *(dest_val + 0x24);
            int32_t item_c_1 = *(dest_val + 0x2c);
            void* result_1 = nullptr;
            int32_t* item_40_1 = *(*(*(*(*(dest_val + 0x6c) + (*(dest_val + 0xa4) << 2)) + 0xc) + 0xc) + 0x2c);

            while (true)
            {
                int32_t item_58_2 = 0;
                int32_t item_5c_1 = 1;
                void* data_11 = Display_SetDisplayMode_18(dest_val, *(dest_val + 0xa4), result_1, nullptr);
                int32_t i = 0;

                if (*item_40_1 > 0)
                {
                    do
                    {
                        int32_t entity_6 = item_40_1[4];
                        int32_t data_13 = 0;
                        data_13 = *(entity_6 + (i << 3));
                        long double fpu_val_7_3 = param_2[1] * 0.5f / param_2[3];
                        void* entity_7 = entity_6 + (i << 3);
                        int32_t data_14 = 0;
                        data_14 = *(entity_7 + 2);
                        float* temp_6 = data_11 + data_13 * 0xc;
                        float* data_16 = data_11 + data_14 * 0xc;
                        int32_t data_17 = 0;
                        data_17 = *(entity_7 + 4);
                        double* data_18 = param_2[2];
                        float* entity_9 = data_11 + data_17 * 0xc;
                        SoundSys_SetFrequency_3(*param_2, (*temp_6 + data_6 - *data_18 + param_2[3]) * fpu_val_7_3,
                            (temp_6[1] + temp_1 - data_18[1] + param_2[3]) * fpu_val_7_3,
                            (*data_16 + data_6 - *data_18 + param_2[3]) * fpu_val_7_3,
                            (data_16[1] + temp_1 - data_18[1] + param_2[3]) * fpu_val_7_3,
                            (*entity_9 + data_6 - *data_18 + param_2[3]) * fpu_val_7_3,
                            (entity_9[1] + temp_1 - data_18[1] + param_2[3]) * fpu_val_7_3);
                        i += 1;
                    } while (i < *item_40_1);
                }

                result = result_1 + 1;
                result_1 = result;
                item_40_1 = &item_40_1[8];

                if (result >= 2)
                    break;

                dest_val = context;
            }
        }
    }

    return result;
}
