#include "gi_platform.h"
#include "00493830-Display_CouldnTCreateDynamic.h"
int32_t Display_CouldnTCreateDynamic()

{
    int32_t valA = g_bcad74;
    int32_t valA1 = -(valA);
    int32_t v_410 = ((valA1 - valA1) & 0xfffff800) + 0x10800;
    int32_t* valA5 = g_5ca110;
    int32_t v_414 = 0x10;
    int32_t v_40c = 0x112;
    int32_t v_408 = 0xfa0;
    int32_t valA6 = ((int(*)())(uintptr_t)(*(*valA5 + 0x14)))(valA5, &v_414, &g_bcad90, 0);
    char v_400;

    if (valA6)
    {
        Game_DataSymbolLoad(&v_400, "Couldn't create dynamic vertex buffer");
        int32_t v_42c_1 = DDERR_GENERIC(valA6);
        void* v_430 = &v_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t tmpD = g_bcad74;
    int32_t* valA8 = g_5ca110;
    int32_t tmpD1 = -(tmpD);
    g_bcad94 = 0xfa0;
    int32_t v_410_1 = ((tmpD1 - tmpD1) & 0xfffff800) + 0x10800;
    v_414 = 0x10;
    int32_t v_40c_1 = 0x142;
    int32_t v_408_1 = 0x3e8;
    int32_t valA9 = ((int(*)())(uintptr_t)(*(*valA8 + 0x14)))(valA8, &v_414, &g_bcad80, 0);

    if (valA9)
    {
        Game_DataSymbolLoad(&v_400, "Couldn't create dynamic vertex buffer");
        int32_t v_42c_3 = DDERR_GENERIC(valA9);
        void* v_430_1 = &v_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t tmpD5 = g_bcad74;
    int32_t* valA11 = g_5ca110;
    int32_t tmpD6 = -(tmpD5);
    g_bcad84 = 0x3e8;
    v_414 = 0x10;
    int32_t v_410_2 = ((tmpD6 - tmpD6) & 0xfffff800) + 0x10800;
    int32_t v_40c_2 = 0x144;
    int32_t v_408_2 = 0x3e8;
    int32_t valA12 = ((int(*)())(uintptr_t)(*(*valA11 + 0x14)))(valA11, &v_414, &g_bcad00, 0);

    if (!valA12)
    {
        int32_t* valA14 = g_bcad00;
        g_bcad04 = 0x3e8;
        ((int(*)())(uintptr_t)(*(*valA14 + 4)))(valA14);
        int32_t* valA15 = g_bcad00;
        ((int(*)())(uintptr_t)(*(*valA15 + 8)))(valA15);
        int32_t* valA16 = g_bcad00;
        char v_404;
        ((int(*)())(uintptr_t)(*(*valA16 + 0xc)))(valA16, 0, &v_404, 0);
        int32_t* valA17 = g_bcad00;
        ((int(*)())(uintptr_t)(*(*valA17 + 4)))(valA17);
        int32_t* valA18 = g_bcad00;
        ((int(*)())(uintptr_t)(*(*valA18 + 8)))(valA18);
        int32_t* valA19 = g_bcad00;
        return ((int(*)())(uintptr_t)(*(*valA19 + 0x10)))(valA19);
    }

    Game_DataSymbolLoad(&v_400, "Couldn't create dynamic vertex buffer");
    int32_t v_42c_5 = DDERR_GENERIC(valA12);
    void* v_430_2 = &v_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
