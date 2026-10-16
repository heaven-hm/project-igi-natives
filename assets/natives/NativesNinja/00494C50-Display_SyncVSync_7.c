#include "00494C50-Display_SyncVSync_7.h"
/* 0x00494c50 Display_SyncVSync_7 full linked: callers=0 callees=17 */
void* sub_494c50(void* a1)

{
    int32_t* var_4b4;
    int32_t* edx;

    if (!*(a1 + 0x24))
    {
        int32_t* eax_1 = g_5ca100;
        var_4b4 = eax_1;
        edx = eax_1;
    }
    else
    {
        edx = g_5ca0fc;
        var_4b4 = edx;
    }

    int32_t var_47c;
    __builtin_memset(&var_47c, 0, 0x7c);
    int32_t var_434 = 0x20;
    int32_t eax_2 = (*(*edx + 0x54))(edx, &var_434);
    void var_400;

    if (eax_2)
    {
        Game_DataSymbolLoad(&var_400, "Couldn't read pixel format");
        int32_t var_4d8 = sub_492be0(eax_2);
        void* var_4dc = &var_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t var_428;
    uint32_t ebp_2 = (*(a1 + 0x18) * var_428) >> 3;
    Qhash_Init(1);
    void* ebx = Mem_Alloc(*(a1 + 0x1c) * ebp_2, 4);
    int32_t var_430;
    int32_t eax_8 = var_430 & 0x40;
    int32_t var_424;
    int32_t var_420;
    int32_t var_41c;

    if (eax_8 && var_428 == 0x20 && var_424 == 0xff0000 && var_420 == 0xff00 && var_41c == 0xff)
    {
        int32_t i = 0;

        if (*(a1 + 0x1c) * *(a1 + 0x18) > 0)
        {
            do
            {
                int32_t ecx_4 = 0;
                int24_t eax_9 = *(*(a1 + 0x20) + (i << 2));
                int32_t edx_3 = 0;
                edx_3 = *(&eax_9 + 1);
                ecx_4 = *(&eax_9 + 2);
                *(ebx + (i << 2)) = ((((ecx_4 - 0x100) << 8) + edx_3) << 8) + eax_9;
                i += 1;
            } while (i < *(a1 + 0x1c) * *(a1 + 0x18));
        }
    }
    else if (eax_8 && var_428 == 0x10 && var_424 == 0xf800 && var_420 == 0x7e0 && var_41c == 0x1f)
    {
        int32_t i_1 = 0;

        if (*(a1 + 0x1c) * *(a1 + 0x18) > 0)
        {
            void* edx_6 = ebx;

            do
            {
                edx_6 += 2;
                int32_t eax_14 = *(*(a1 + 0x20) + (i_1 << 2));
                i_1 += 1;
                *(edx_6 - 2) = ((((eax_14 >> 0x13 & 0x1f) << 6) + (eax_14 >> 0xa & 0x3f)) << 5)
                    + (eax_14 >> 3 & 0x1f);
            } while (i_1 < *(a1 + 0x1c) * *(a1 + 0x18));
        }
    }

    int32_t ecx_10 = *(a1 + 0x18);
    int32_t* eax_19 = g_5ca10c;
    int32_t var_474 = *(a1 + 0x1c);
    int32_t var_4cc_3 = 0;
    int32_t* var_4b0;
    int32_t* var_4d0_3 = &var_4b0;
    var_47c = 0x7c;
    int32_t var_478 = 0x180f;
    int32_t var_414 = 0x1800;
    int32_t var_470 = ecx_10;
    uint32_t var_46c = ebp_2;
    void* var_458 = ebx;
    int32_t eax_20 = (*(*eax_19 + 0x18))(eax_19, &var_47c, var_4d0_3, var_4cc_3);

    if (!eax_20)
    {
        int32_t var_4ac;
        int32_t var_4a8;
        POINT point;

        if (!*(a1 + 0x24))
        {
            var_4ac = 0;
            var_4a8 = 0;
            point = struct POINT {
                .x = 0,
                .y = 0
            };
        }
        else
        {
            GetClientRect(sub_48f0a0(), &var_4ac);
            ClientToScreen(sub_48f0a0(), &var_4ac);
            ClientToScreen(sub_48f0a0(), &point);
        }
        int32_t edx_8 = *(a1 + 0x18);
        int32_t eax_26 = *(a1 + 0x10) + var_4ac;
        int32_t esi_1 = *(a1 + 0x1c);
        int32_t ecx_14 = *(a1 + 0x14) + var_4a8;
        int32_t var_498 = ecx_14;
        int32_t var_490 = ecx_14 + esi_1;
        int32_t var_4cc_8 = 0;
        int32_t var_49c = eax_26;
        int32_t var_4d0_8 = 0;
        int32_t var_48c;
        int32_t* var_4d4_4 = &var_48c;
        int32_t* ecx_16 = var_4b0;
        int32_t var_494 = eax_26 + edx_8;
        var_48c = 0;
        int32_t var_488 = 0;
        int32_t var_484 = edx_8;
        int32_t var_480 = esi_1;
        (*(*var_4b4 + 0x14))(var_4b4, &var_49c, ecx_16, var_4d4_4, var_4d0_8, var_4cc_8);
        int32_t* eax_29 = var_4b0;
        (*(*eax_29 + 8))(eax_29);
        sub_4b0d10(ebx);
        return Qhash_Reset();
    }

    Game_DataSymbolLoad(&var_400, "Couldn't create texture surface");
    int32_t var_4d8_2 = sub_492be0(eax_20);
    void* var_4dc_1 = &var_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
