// IGI native provenance: Display_SyncVSync_2 - 0x00490C40 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490C40-Display_SyncVSync_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SyncVSync_2.h"
bool Display_SyncVSync_2(void* context, int32_t param_2, int32_t param_3)

{
    int32_t item_430 = 0x400;
    void item_400;
    Sys_CloseFileStream_7(&item_400, param_2);
    char* dest_val = ".qsc";
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val = &dest_val[1];
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    void* dest_2 = &item_400;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_2;
        dest_2 += 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t source_1;
    int32_t dest_4;
    dest_4 = memcpy(dest_2 - 1, dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_4, source_1, entity_val & 3);
    *(context + 0x168) = 1;
    Display_SyncVSync_13(0x5c8fb4, 1);
    void* data_1 = *(context + 0x154);
    int32_t item_418 = 0;
    int32_t item_414 = 0;
    float item_410 = *(data_1 + 4);
    int32_t data_2 = *(data_1 + 8);

    if (data_2 < 0)
        data_2 = -(data_2);

    float item_40c = data_2;
    Display_CheckCapabilities_13(0x5c8fb4, &item_418);
    return param_3(context, &item_400);
}
