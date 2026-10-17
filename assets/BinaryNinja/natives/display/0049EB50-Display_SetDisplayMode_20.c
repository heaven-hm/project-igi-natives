// Original IGI.EXE function: Display_SetDisplayMode_20 (VA 0x0049EB50; static CFG gate FAIL, CFG score 0.667).
#include "Display_SetDisplayMode_20.h"
int32_t Display_SetDisplayMode_20(void* context, int32_t* param_2)

{
    void* flagP = context;
    int32_t result = *(flagP + 0x28);

    if (!result)
    {
        int32_t* data_val = *(flagP + 0x30);
        context = nullptr;
        int32_t* data_1 = *data_val;
        result = (*(*data_1 + 0xc))(data_1, 0x20, &context, 0);

        if (!result)
        {
            result = *(flagP + 0x2c);
            int32_t source_1 = *(flagP + 0x14);
            void* dest_1 = context + result * 0x28;
            int32_t data_3 = *(flagP + 0x10);
            context = dest_1;
            int32_t entity_4 = data_3 * 0x28;
            int32_t source_2;
            int32_t dest_2;
            dest_2 = memcpy(dest_1, source_1, entity_4 & 0xfffffffc);
            memcpy(dest_2, source_2, entity_4 & 3);
            int32_t* source_3 = param_2;

            if (source_3 && *source_3)
            {
                void* temp_2 = *(flagP + 0x1c);
                int32_t* context_1 = param_2;

                while (true)
                {
                    int32_t data_4 = 0;
                    data_4 = *(temp_2 + 0x14);
                    void* data_6 = data_4 * 0x28;
                    void* dest_4 = data_6 + *(flagP + 0x14);
                    int16_t entity_9 = *(temp_2 + 0x12);

                    if (entity_9 != 0xffff)
                        context_1 = *source_3 + entity_9 * 0x2c + 0x3c;

                    int32_t source_5 = 0;

                    if (*(temp_2 + 0x16) > 0)
                    {
                        data_6 = data_6 + context + 0x24;
                        void* entity_13 = dest_4 + 0x24;
                        int32_t dest_5;

                        do
                        {
                            long double fpu_val_7_2 = *(entity_13 - 4) * context_1[4];
                            dest_5 = 0;
                            source_5 += 1;
                            data_6 += 0x28;
                            entity_13 += 0x28;
                            *(data_6 - 0x2c) = fpu_val_7_2;
                            *(data_6 - 0x28) = *(entity_13 - 0x28) * context_1[5];
                            dest_5 = *(temp_2 + 0x16);
                        } while (source_5 < dest_5);
                    }

                    int16_t data_7 = *(temp_2 + 0xe);

                    if (data_7 == 0xffff)
                        break;

                    source_3 = param_2;
                    temp_2 = temp_2 + data_7 + 0x20;
                }
            }

            int32_t* data_9 = **(flagP + 0x30);
            result = (*(*data_9 + 0x10))(data_9);
            *(flagP + 0x28) = 1;
        }
    }

    return result;
}
