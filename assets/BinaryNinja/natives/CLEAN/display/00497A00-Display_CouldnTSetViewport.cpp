// IGI native provenance: Display_CouldnTSetViewport - 0x00497A00 - CFG score 97.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497A00-Display_CouldnTSetViewport.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CouldnTSetViewport.h"
int32_t Display_CouldnTSetViewport(void** context)

{
    void* data_val = *context;
    float item_484 = 1.0f / *(data_val + 0x40);
    int32_t data_1 = *(data_val + 0x60);
    float item_488 = -1.0f / *(data_val + 0x44);
    void* item_4c0;
    void item_400;
    long double fpu_val_6_2;
    long double fpu_val_7_4;
    int32_t item_4a0;

    if (!data_1)
    {
        item_4a0 = 0;
        int32_t item_49c = 0;
        int32_t item_498 = g_c28b44;
        int32_t item_48c = g_bcacf0;
        int32_t* data_4 = g_5ca114;
        int32_t item_490 = g_bcabf0;
        int32_t item_494 = g_c28b48;
        int32_t data_5 = (*(*data_4 + 0x34))(data_4, &item_4a0);

        if (!data_5)
        {
            fpu_val_7_4 = g_bcadd8;
            fpu_val_6_2 = g_bcadb8 / (g_bcadb8 - fpu_val_7_4);
        }
        else
        {
            Game_DataSymbolLoad(&item_400, "Couldn't set viewport");
            int32_t item_4bc = DDERR_GENERIC(data_5);
            item_4c0 = &item_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }
    else if (data_1 == 1)
    {
        item_4a0 = 0;
        int32_t item_49c_1 = 0;
        int32_t item_498_1 = g_c28b44;
        int32_t item_494_1 = g_c28b48;
        int32_t* data_8 = g_5ca114;
        int32_t item_48c_1 = g_bcad8c;
        int32_t item_490_1 = g_bcadb4;
        int32_t data_9 = (*(*data_8 + 0x34))(data_8, &item_4a0);

        if (!data_9)
        {
            fpu_val_7_4 = g_bcada0;
            fpu_val_6_2 = g_bcadc8 / (g_bcadc8 - fpu_val_7_4);
        }
        else
        {
            Game_DataSymbolLoad(&item_400, "Couldn't set viewport");
            int32_t item_4bc_1 = DDERR_GENERIC(data_9);
            item_4c0 = &item_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }
    else if (data_1 != 2)
    {
        Error_Show("Invalid layer");

        while (true)
            /* nop */
    }
    else
    {
        item_4a0 = 0;
        int32_t item_49c_2 = 0;
        int32_t item_498_2 = g_c28b44;
        int32_t item_494_2 = g_c28b48;
        int32_t* data_12 = g_5ca114;
        int32_t item_48c_2 = g_bcad9c;
        int32_t item_490_2 = g_bcade4;
        int32_t data_13 = (*(*data_12 + 0x34))(data_12, &item_4a0);

        if (!data_13)
        {
            fpu_val_7_4 = g_bcadb0;
            fpu_val_6_2 = g_bcada8 / (g_bcada8 - fpu_val_7_4);
        }
        else
        {
            Game_DataSymbolLoad(&item_400, "Couldn't set viewport");
            int32_t item_4bc_2 = DDERR_GENERIC(data_13);
            item_4c0 = &item_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }
    float item_480;
    memset(&item_480, 0, 0x40);
    float item_458 = fpu_val_6_2;
    float item_448 = -((fpu_val_6_2 * fpu_val_7_4));
    void* dest_1 = *context + 0x64;
    item_480 = item_484;
    float item_46c = item_488;
    int32_t item_454 = 0x3f800000;
    memcpy(dest_1, &item_480, 0x40);
    int32_t* data_16 = g_5ca114;
    int32_t data_17 = (*(*data_16 + 0x2c))(data_16, 3, &item_480);

    if (data_17)
    {
        Game_DataSymbolLoad(&item_400, "Couldn't set projection matrix");
        int32_t item_4bc_4 = DDERR_GENERIC(data_17);
        item_4c0 = &item_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    void item_440;
    Display_SetGammaRamp_7(&item_440, *context, nullptr);
    int32_t* data_19 = g_5ca114;
    int32_t result = (*(*data_19 + 0x2c))(data_19, 2, &item_440);

    if (!result)
        return result;

    Game_DataSymbolLoad(&item_400, "Couldn't set view matrix");
    int32_t item_4bc_5 = DDERR_GENERIC(result);
    item_4c0 = &item_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
