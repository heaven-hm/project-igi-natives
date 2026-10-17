// IGI native provenance: Display_CouldnTCreateDynamic - 0x00493830 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00493830-Display_CouldnTCreateDynamic.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CouldnTCreateDynamic.h"
int32_t Display_CouldnTCreateDynamic()

{
    int32_t data_val = g_bcad74;
    int32_t data_1 = -(data_val);
    int32_t item_410 = ((data_1 - data_1) & 0xfffff800) + 0x10800;
    int32_t* data_5 = g_5ca110;
    int32_t item_414 = 0x10;
    int32_t item_40c = 0x112;
    int32_t item_408 = 0xfa0;
    int32_t data_6 = (*(*data_5 + 0x14))(data_5, &item_414, &g_bcad90, 0);
    void item_400;

    if (data_6)
    {
        Game_DataSymbolLoad(&item_400, "Couldn't create dynamic vertex buffer");
        int32_t item_42c_1 = DDERR_GENERIC(data_6);
        void* item_430 = &item_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t temp_val = g_bcad74;
    int32_t* data_8 = g_5ca110;
    int32_t temp_1 = -(temp_val);
    g_bcad94 = 0xfa0;
    int32_t item_410_1 = ((temp_1 - temp_1) & 0xfffff800) + 0x10800;
    item_414 = 0x10;
    int32_t item_40c_1 = 0x142;
    int32_t item_408_1 = 0x3e8;
    int32_t data_9 = (*(*data_8 + 0x14))(data_8, &item_414, &g_bcad80, 0);

    if (data_9)
    {
        Game_DataSymbolLoad(&item_400, "Couldn't create dynamic vertex buffer");
        int32_t item_42c_3 = DDERR_GENERIC(data_9);
        void* item_430_1 = &item_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t temp_5 = g_bcad74;
    int32_t* data_11 = g_5ca110;
    int32_t temp_6 = -(temp_5);
    g_bcad84 = 0x3e8;
    item_414 = 0x10;
    int32_t item_410_2 = ((temp_6 - temp_6) & 0xfffff800) + 0x10800;
    int32_t item_40c_2 = 0x144;
    int32_t item_408_2 = 0x3e8;
    int32_t data_12 = (*(*data_11 + 0x14))(data_11, &item_414, &g_bcad00, 0);

    if (!data_12)
    {
        int32_t* data_14 = g_bcad00;
        g_bcad04 = 0x3e8;
        (*(*data_14 + 4))(data_14);
        int32_t* data_15 = g_bcad00;
        (*(*data_15 + 8))(data_15);
        int32_t* data_16 = g_bcad00;
        void item_404;
        (*(*data_16 + 0xc))(data_16, 0, &item_404, 0);
        int32_t* data_17 = g_bcad00;
        (*(*data_17 + 4))(data_17);
        int32_t* data_18 = g_bcad00;
        (*(*data_18 + 8))(data_18);
        int32_t* data_19 = g_bcad00;
        return (*(*data_19 + 0x10))(data_19);
    }

    Game_DataSymbolLoad(&item_400, "Couldn't create dynamic vertex buffer");
    int32_t item_42c_5 = DDERR_GENERIC(data_12);
    void* item_430_2 = &item_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
