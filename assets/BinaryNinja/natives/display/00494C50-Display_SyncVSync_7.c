// Original IGI.EXE function: Display_SyncVSync_7 (VA 0x00494C50; static CFG gate PASS, CFG score 0.941).
#include "Display_SyncVSync_7.h"
void* Display_SyncVSync_7(void* context)

{
    int32_t* item_4b4;
    int32_t* temp_val;

    if (!*(context + 0x24))
    {
        int32_t* data_1 = g_5ca100;
        item_4b4 = data_1;
        temp_val = data_1;
    }
    else
    {
        temp_val = g_5ca0fc;
        item_4b4 = temp_val;
    }

    int32_t item_47c;
    memset(&item_47c, 0, 0x7c);
    int32_t item_434 = 0x20;
    int32_t data_2 = (*(*temp_val + 0x54))(temp_val, &item_434);
    void item_400;

    if (data_2)
    {
        Game_DataSymbolLoad(&item_400, "Couldn't read pixel format");
        int32_t item_4d8 = DDERR_GENERIC(data_2);
        void* item_4dc = &item_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t item_428;
    uint32_t flagP2 = (*(context + 0x18) * item_428) >> 3;
    Qhash_Init(1);
    void* context_val = Mem_Alloc(*(context + 0x1c) * flagP2, 4);
    int32_t item_430;
    int32_t data_8 = item_430 & 0x40;
    int32_t item_424;
    int32_t item_420;
    int32_t item_41c;

    if (data_8 && item_428 == 0x20 && item_424 == 0xff0000 && item_420 == 0xff00 && item_41c == 0xff)
    {
        int32_t i = 0;

        if (*(context + 0x1c) * *(context + 0x18) > 0)
        {
            do
            {
                int32_t entity_4 = 0;
                int24_t data_9 = *(*(context + 0x20) + (i << 2));
                int32_t temp_3 = 0;
                temp_3 = *(&data_9 + 1);
                entity_4 = *(&data_9 + 2);
                *(context_val + (i << 2)) = ((((entity_4 - 0x100) << 8) + temp_3) << 8) + data_9;
                i += 1;
            } while (i < *(context + 0x1c) * *(context + 0x18));
        }
    }
    else if (data_8 && item_428 == 0x10 && item_424 == 0xf800 && item_420 == 0x7e0 && item_41c == 0x1f)
    {
        int32_t i_1 = 0;

        if (*(context + 0x1c) * *(context + 0x18) > 0)
        {
            void* temp_6 = context_val;

            do
            {
                temp_6 += 2;
                int32_t data_14 = *(*(context + 0x20) + (i_1 << 2));
                i_1 += 1;
                *(temp_6 - 2) = ((((data_14 >> 0x13 & 0x1f) << 6) + (data_14 >> 0xa & 0x3f)) << 5)
                    + (data_14 >> 3 & 0x1f);
            } while (i_1 < *(context + 0x1c) * *(context + 0x18));
        }
    }

    int32_t entity_10 = *(context + 0x18);
    int32_t* data_19 = g_5ca10c;
    int32_t item_474 = *(context + 0x1c);
    int32_t item_4cc_3 = 0;
    int32_t* item_4b0;
    int32_t* item_4d0_3 = &item_4b0;
    item_47c = 0x7c;
    int32_t item_478 = 0x180f;
    int32_t item_414 = 0x1800;
    int32_t item_470 = entity_10;
    uint32_t item_46c = flagP2;
    void* item_458 = context_val;
    int32_t data_20 = (*(*data_19 + 0x18))(data_19, &item_47c, item_4d0_3, item_4cc_3);

    if (!data_20)
    {
        int32_t item_4ac;
        int32_t item_4a8;
        POINT point;

        if (!*(context + 0x24))
        {
            item_4ac = 0;
            item_4a8 = 0;
            point = struct POINT {
                .x = 0,
                .y = 0
            };
        }
        else
        {
            GetClientRect(FX_ExplosionSpawn_22(), &item_4ac);
            ClientToScreen(FX_ExplosionSpawn_22(), &item_4ac);
            ClientToScreen(FX_ExplosionSpawn_22(), &point);
        }
        int32_t temp_8 = *(context + 0x18);
        int32_t data_26 = *(context + 0x10) + item_4ac;
        int32_t source_1 = *(context + 0x1c);
        int32_t entity_14 = *(context + 0x14) + item_4a8;
        int32_t item_498 = entity_14;
        int32_t item_490 = entity_14 + source_1;
        int32_t item_4cc_8 = 0;
        int32_t item_49c = data_26;
        int32_t item_4d0_8 = 0;
        int32_t item_48c;
        int32_t* item_4d4_4 = &item_48c;
        int32_t* entity_16 = item_4b0;
        int32_t item_494 = data_26 + temp_8;
        item_48c = 0;
        int32_t item_488 = 0;
        int32_t item_484 = temp_8;
        int32_t item_480 = source_1;
        (*(*item_4b4 + 0x14))(item_4b4, &item_49c, entity_16, item_4d4_4, item_4d0_8, item_4cc_8);
        int32_t* data_29 = item_4b0;
        (*(*data_29 + 8))(data_29);
        Sys_ExecuteBytecode_2(context_val);
        return Qhash_Reset();
    }

    Game_DataSymbolLoad(&item_400, "Couldn't create texture surface");
    int32_t item_4d8_2 = DDERR_GENERIC(data_20);
    void* item_4dc_1 = &item_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
