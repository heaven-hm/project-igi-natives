// Original IGI.EXE function: Display_SyncVSync_7 (VA 0x00494C50; static CFG gate PASS, CFG score 0.941).
#include "Display_SyncVSync_7.h"
void* Display_SyncVSync_7(void* a1)

{
    int32_t* v_4b4;
    int32_t* tmpD;

    if (!*(a1 + 0x24))
    {
        int32_t* valA1 = g_5ca100;
        v_4b4 = valA1;
        tmpD = valA1;
    }
    else
    {
        tmpD = g_5ca0fc;
        v_4b4 = tmpD;
    }

    int32_t v_47c;
    __builtin_memset(&v_47c, 0, 0x7c);
    int32_t v_434 = 0x20;
    int32_t valA2 = (*(*tmpD + 0x54))(tmpD, &v_434);
    void v_400;

    if (valA2)
    {
        Game_DataSymbolLoad(&v_400, "Couldn't read pixel format");
        int32_t v_4d8 = DDERR_GENERIC(valA2);
        void* v_4dc = &v_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t v_428;
    uint32_t flagP2 = (*(a1 + 0x18) * v_428) >> 3;
    Qhash_Init(1);
    void* ctxB = Mem_Alloc(*(a1 + 0x1c) * flagP2, 4);
    int32_t v_430;
    int32_t valA8 = v_430 & 0x40;
    int32_t v_424;
    int32_t v_420;
    int32_t v_41c;

    if (valA8 && v_428 == 0x20 && v_424 == 0xff0000 && v_420 == 0xff00 && v_41c == 0xff)
    {
        int32_t i = 0;

        if (*(a1 + 0x1c) * *(a1 + 0x18) > 0)
        {
            do
            {
                int32_t objC4 = 0;
                int24_t valA9 = *(*(a1 + 0x20) + (i << 2));
                int32_t tmpD3 = 0;
                tmpD3 = *(&valA9 + 1);
                objC4 = *(&valA9 + 2);
                *(ctxB + (i << 2)) = ((((objC4 - 0x100) << 8) + tmpD3) << 8) + valA9;
                i += 1;
            } while (i < *(a1 + 0x1c) * *(a1 + 0x18));
        }
    }
    else if (valA8 && v_428 == 0x10 && v_424 == 0xf800 && v_420 == 0x7e0 && v_41c == 0x1f)
    {
        int32_t i_1 = 0;

        if (*(a1 + 0x1c) * *(a1 + 0x18) > 0)
        {
            void* tmpD6 = ctxB;

            do
            {
                tmpD6 += 2;
                int32_t valA14 = *(*(a1 + 0x20) + (i_1 << 2));
                i_1 += 1;
                *(tmpD6 - 2) = ((((valA14 >> 0x13 & 0x1f) << 6) + (valA14 >> 0xa & 0x3f)) << 5)
                    + (valA14 >> 3 & 0x1f);
            } while (i_1 < *(a1 + 0x1c) * *(a1 + 0x18));
        }
    }

    int32_t objC10 = *(a1 + 0x18);
    int32_t* valA19 = g_5ca10c;
    int32_t v_474 = *(a1 + 0x1c);
    int32_t v_4cc_3 = 0;
    int32_t* v_4b0;
    int32_t* v_4d0_3 = &v_4b0;
    v_47c = 0x7c;
    int32_t v_478 = 0x180f;
    int32_t v_414 = 0x1800;
    int32_t v_470 = objC10;
    uint32_t v_46c = flagP2;
    void* v_458 = ctxB;
    int32_t valA20 = (*(*valA19 + 0x18))(valA19, &v_47c, v_4d0_3, v_4cc_3);

    if (!valA20)
    {
        int32_t v_4ac;
        int32_t v_4a8;
        POINT point;

        if (!*(a1 + 0x24))
        {
            v_4ac = 0;
            v_4a8 = 0;
            point = struct POINT {
                .x = 0,
                .y = 0
            };
        }
        else
        {
            GetClientRect(FX_ExplosionSpawn_22(), &v_4ac);
            ClientToScreen(FX_ExplosionSpawn_22(), &v_4ac);
            ClientToScreen(FX_ExplosionSpawn_22(), &point);
        }
        int32_t tmpD8 = *(a1 + 0x18);
        int32_t valA26 = *(a1 + 0x10) + v_4ac;
        int32_t srcS1 = *(a1 + 0x1c);
        int32_t objC14 = *(a1 + 0x14) + v_4a8;
        int32_t v_498 = objC14;
        int32_t v_490 = objC14 + srcS1;
        int32_t v_4cc_8 = 0;
        int32_t v_49c = valA26;
        int32_t v_4d0_8 = 0;
        int32_t v_48c;
        int32_t* v_4d4_4 = &v_48c;
        int32_t* objC16 = v_4b0;
        int32_t v_494 = valA26 + tmpD8;
        v_48c = 0;
        int32_t v_488 = 0;
        int32_t v_484 = tmpD8;
        int32_t v_480 = srcS1;
        (*(*v_4b4 + 0x14))(v_4b4, &v_49c, objC16, v_4d4_4, v_4d0_8, v_4cc_8);
        int32_t* valA29 = v_4b0;
        (*(*valA29 + 8))(valA29);
        Sys_ExecuteBytecode_2(ctxB);
        return Qhash_Reset();
    }

    Game_DataSymbolLoad(&v_400, "Couldn't create texture surface");
    int32_t v_4d8_2 = DDERR_GENERIC(valA20);
    void* v_4dc_1 = &v_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
