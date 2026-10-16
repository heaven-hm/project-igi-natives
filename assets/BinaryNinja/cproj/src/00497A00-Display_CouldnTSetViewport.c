#include "gi_platform.h"
#include "00497A00-Display_CouldnTSetViewport.h"
int32_t Display_CouldnTSetViewport(void** a1)

{
    void* valA = *a1;
    float v_484 = 1.0f / (*(int32_t*)(uintptr_t)(valA + 0x40));
    int32_t valA1 = (*(int32_t*)(uintptr_t)(valA + 0x60));
    float v_488 = -1.0f / (*(int32_t*)(uintptr_t)(valA + 0x44));
    void* v_4c0;
    char v_400;
    long double x87_r6_2;
    long double x87_r7_4;
    int32_t v_4a0;

    if (!valA1)
    {
        v_4a0 = 0;
        int32_t v_49c = 0;
        int32_t v_498 = g_c28b44;
        int32_t v_48c = g_bcacf0;
        int32_t* valA4 = g_5ca114;
        int32_t v_490 = g_bcabf0;
        int32_t v_494 = g_c28b48;
        int32_t valA5 = ((int(*)())(uintptr_t)(*(*valA4 + 0x34)))(valA4, &v_4a0);

        if (!valA5)
        {
            x87_r7_4 = g_bcadd8;
            x87_r6_2 = g_bcadb8 / (g_bcadb8 - x87_r7_4);
        }
        else
        {
            Game_DataSymbolLoad(&v_400, "Couldn't set viewport");
            int32_t v_4bc = DDERR_GENERIC(valA5);
            v_4c0 = &v_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }
    else if (valA1 == 1)
    {
        v_4a0 = 0;
        int32_t v_49c_1 = 0;
        int32_t v_498_1 = g_c28b44;
        int32_t v_494_1 = g_c28b48;
        int32_t* valA8 = g_5ca114;
        int32_t v_48c_1 = g_bcad8c;
        int32_t v_490_1 = g_bcadb4;
        int32_t valA9 = ((int(*)())(uintptr_t)(*(*valA8 + 0x34)))(valA8, &v_4a0);

        if (!valA9)
        {
            x87_r7_4 = g_bcada0;
            x87_r6_2 = g_bcadc8 / (g_bcadc8 - x87_r7_4);
        }
        else
        {
            Game_DataSymbolLoad(&v_400, "Couldn't set viewport");
            int32_t v_4bc_1 = DDERR_GENERIC(valA9);
            v_4c0 = &v_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }
    else if (valA1 != 2)
    {
        Error_Show("Invalid layer");

        while (true)
            /* nop */
    }
    else
    {
        v_4a0 = 0;
        int32_t v_49c_2 = 0;
        int32_t v_498_2 = g_c28b44;
        int32_t v_494_2 = g_c28b48;
        int32_t* valA12 = g_5ca114;
        int32_t v_48c_2 = g_bcad9c;
        int32_t v_490_2 = g_bcade4;
        int32_t valA13 = ((int(*)())(uintptr_t)(*(*valA12 + 0x34)))(valA12, &v_4a0);

        if (!valA13)
        {
            x87_r7_4 = g_bcadb0;
            x87_r6_2 = g_bcada8 / (g_bcada8 - x87_r7_4);
        }
        else
        {
            Game_DataSymbolLoad(&v_400, "Couldn't set viewport");
            int32_t v_4bc_2 = DDERR_GENERIC(valA13);
            v_4c0 = &v_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }
    float v_480;
    __builtin_memset(&v_480, 0, 0x40);
    float v_458 = x87_r6_2;
    float v_448 = -((x87_r6_2 * x87_r7_4));
    void* dstD1 = *a1 + 0x64;
    v_480 = v_484;
    float v_46c = v_488;
    int32_t v_454 = 0x3f800000;
    memcpy(dstD1, &v_480, 0x40);
    int32_t* valA16 = g_5ca114;
    int32_t valA17 = ((int(*)())(uintptr_t)(*(*valA16 + 0x2c)))(valA16, 3, &v_480);

    if (valA17)
    {
        Game_DataSymbolLoad(&v_400, "Couldn't set projection matrix");
        int32_t v_4bc_4 = DDERR_GENERIC(valA17);
        v_4c0 = &v_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    char v_440;
    Display_SetGammaRamp_7(&v_440, *a1, nullptr);
    int32_t* valA19 = g_5ca114;
    int32_t result = ((int(*)())(uintptr_t)(*(*valA19 + 0x2c)))(valA19, 2, &v_440);

    if (!result)
        return result;

    Game_DataSymbolLoad(&v_400, "Couldn't set view matrix");
    int32_t v_4bc_5 = DDERR_GENERIC(result);
    v_4c0 = &v_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
