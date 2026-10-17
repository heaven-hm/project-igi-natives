// Original IGI.EXE function: Sync_Setup (VA 0x00508E40; static CFG gate PASS, CFG score 0.889).
#include "Sync_Setup.h"
int32_t Sync_Setup(int32_t* context)

{
    int32_t* context_val = context;
    int32_t data_val = context_val[8];
    int32_t* source_val;

    if (!data_val)
    {
        context = &context_val[0x19b];
        source_val = &context_val[0x19b];
    }
    else
    {
        source_val = &context_val[0xd2];
        context = source_val;
    }

    int32_t i = 0;
    context_val[8] = data_val ^ 1;
    int32_t data_2 = *source_val;

    if (data_2 <= 0)
    {
        *source_val = 0;
        return data_2;
    }

    int32_t* source_1 = &source_val[2];
    int32_t data_8;

    do
    {
        int32_t* data_3 = context_val[0x264];
        int32_t entity_2 = data_3[2] + ((*source_1 * *data_3 + source_1[-1]) << 1);
        void item_28;
        memset(&item_28, 0, 0x28);
        int32_t item_24_1 = Display_CreateSurface_4();
        int32_t item_4_1 = 0;
        int32_t item_8_1 = entity_2;
        int32_t item_14_1 = *source_1;
        int32_t item_1c_1 = *context_val[0x264] << 2;
        int32_t item_18_1 = source_1[-1];
        int32_t item_10_1 = source_1[1];
        int32_t item_c_1 = source_1[2];
        data_8 = Display_RestoreDevice_4(&item_28);
        i += 1;
        source_1 = &source_1[4];
    } while (i < *context);

    *context = 0;
    return data_8;
}
