// Original IGI.EXE function: Display_CouldnTSetClippingWi (VA 0x00493CA0; static CFG gate PASS, CFG score 0.917).
#include "Display_CouldnTSetClippingWi.h"
int32_t Display_CouldnTSetClippingWi(void* context)

{
    int32_t item_420;
    memset(&item_420, 0, 0x20);
    item_420 = 2;
    int32_t item_41c = 0xf;
    int32_t item_418 = *(context + 0xc);
    int32_t item_404 = g_bcadc8;
    float item_414 = *(context + 0x14) + *(context + 0xc);
    int32_t item_410 = *(context + 0x10);
    int32_t item_408 = g_bcada0;
    int32_t* data_2 = g_5ca114;
    float item_40c = *(context + 0x18) + *(context + 0x10);
    int32_t result = (*(*data_2 + 0x6c))(data_2, &item_420);

    if (!result)
        return result;

    void item_400;
    Game_DataSymbolLoad(&item_400, "Couldn't set clipping window");
    int32_t item_438 = DDERR_GENERIC(result);
    void* item_43c = &item_400;
    char* item_440 = "%s\n\nDirectX error message: %s";
    Error_Show(item_440);

    while (true)
        /* nop */
}
