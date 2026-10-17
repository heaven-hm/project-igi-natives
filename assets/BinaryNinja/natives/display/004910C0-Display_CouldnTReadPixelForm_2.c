// Original IGI.EXE function: Display_CouldnTReadPixelForm_2 (VA 0x004910C0; static CFG gate PASS, CFG score 0.952).
#include "Display_CouldnTReadPixelForm_2.h"
int32_t Display_CouldnTReadPixelForm_2(void* context)

{
    int32_t item_47c;
    memset(&item_47c, 0, 0x7c);
    int32_t* data_val = g_5ca100;
    int32_t item_434 = 0x20;
    int32_t data_1 = (*(*data_val + 0x54))(data_val, &item_434);
    void item_400;

    if (data_1)
    {
        Game_DataSymbolLoad(&item_400, "Couldn't read pixel format");
        int32_t item_4a8 = DDERR_GENERIC(data_1);
        void* item_4ac = &item_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    item_47c = 0x7c;
    int32_t item_478 = 0x80f;
    int32_t item_414 = 0x1800;
    void* data_3 = *(context + 0x154);
    int32_t item_470 = *(data_3 + 4);
    int32_t entity_1 = *(data_3 + 8);

    if (entity_1 < 0)
        entity_1 = -(entity_1);

    int32_t item_474 = entity_1;
    int32_t item_458 = *(context + 0x164);
    int32_t item_428;
    uint32_t item_46c = (*(data_3 + 4) * item_428) >> 3;
    int32_t* data_7 = g_5ca10c;
    int32_t* item_490;
    int32_t data_8 = (*(*data_7 + 0x18))(data_7, &item_47c, &item_490, 0);

    if (!data_8)
    {
        void* data_10 = *(context + 0x154);
        int32_t item_48c = 0;
        int32_t item_488 = 0;
        int32_t item_484 = *(data_10 + 4);
        int32_t data_11 = *(data_10 + 8);

        if (data_11 < 0)
            data_11 = -(data_11);

        int32_t item_480 = data_11;
        int32_t* data_12 = g_5ca100;
        (*(*data_12 + 0x14))(data_12, 0, item_490, &item_48c, 0x8000200, 0);
        int32_t* data_13 = item_490;
        return (*(*data_13 + 8))(data_13);
    }

    Game_DataSymbolLoad(&item_400, "Couldn't create texture surface");
    int32_t item_4a8_2 = DDERR_GENERIC(data_8);
    void* item_4ac_1 = &item_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
