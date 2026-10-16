#include "00497A00-Display_CouldnTSetViewport.h"
/* 0x00497a00 Display_CouldnTSetViewport full linked: callers=1 callees=25 */
int32_t sub_497a00(void** a1)

{
    void* eax = *a1;
    float var_484 = 1f / *(eax + 0x40);
    int32_t eax_1 = *(eax + 0x60);
    float var_488 = -1f / *(eax + 0x44);
    void* var_4c0;
    void var_400;
    long double x87_r6_2;
    long double x87_r7_4;
    int32_t var_4a0;

    if (!eax_1)
    {
        var_4a0 = 0;
        int32_t var_49c = 0;
        int32_t var_498 = g_c28b44;
        int32_t var_48c = g_bcacf0;
        int32_t* eax_4 = g_5ca114;
        int32_t var_490 = g_bcabf0;
        int32_t var_494 = g_c28b48;
        int32_t eax_5 = (*(*eax_4 + 0x34))(eax_4, &var_4a0);

        if (!eax_5)
        {
            x87_r7_4 = g_bcadd8;
            x87_r6_2 = g_bcadb8 / (g_bcadb8 - x87_r7_4);
        }
        else
        {
            Game_DataSymbolLoad(&var_400, "Couldn't set viewport");
            int32_t var_4bc = sub_492be0(eax_5);
            var_4c0 = &var_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }
    else if (eax_1 == 1)
    {
        var_4a0 = 0;
        int32_t var_49c_1 = 0;
        int32_t var_498_1 = g_c28b44;
        int32_t var_494_1 = g_c28b48;
        int32_t* eax_8 = g_5ca114;
        int32_t var_48c_1 = g_bcad8c;
        int32_t var_490_1 = g_bcadb4;
        int32_t eax_9 = (*(*eax_8 + 0x34))(eax_8, &var_4a0);

        if (!eax_9)
        {
            x87_r7_4 = g_bcada0;
            x87_r6_2 = g_bcadc8 / (g_bcadc8 - x87_r7_4);
        }
        else
        {
            Game_DataSymbolLoad(&var_400, "Couldn't set viewport");
            int32_t var_4bc_1 = sub_492be0(eax_9);
            var_4c0 = &var_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }
    else if (eax_1 != 2)
    {
        Error_Show("Invalid layer");

        while (true)
            /* nop */
    }
    else
    {
        var_4a0 = 0;
        int32_t var_49c_2 = 0;
        int32_t var_498_2 = g_c28b44;
        int32_t var_494_2 = g_c28b48;
        int32_t* eax_12 = g_5ca114;
        int32_t var_48c_2 = g_bcad9c;
        int32_t var_490_2 = g_bcade4;
        int32_t eax_13 = (*(*eax_12 + 0x34))(eax_12, &var_4a0);

        if (!eax_13)
        {
            x87_r7_4 = g_bcadb0;
            x87_r6_2 = g_bcada8 / (g_bcada8 - x87_r7_4);
        }
        else
        {
            Game_DataSymbolLoad(&var_400, "Couldn't set viewport");
            int32_t var_4bc_2 = sub_492be0(eax_13);
            var_4c0 = &var_400;
            Error_Show("%s\n\nDirectX error message: %s");

            while (true)
                /* nop */
        }
    }
    float var_480;
    __builtin_memset(&var_480, 0, 0x40);
    float var_458 = x87_r6_2;
    float var_448 = -((x87_r6_2 * x87_r7_4));
    void* edi_1 = *a1 + 0x64;
    var_480 = var_484;
    float var_46c = var_488;
    int32_t var_454 = 0x3f800000;
    memcpy(edi_1, &var_480, 0x40);
    int32_t* eax_16 = g_5ca114;
    int32_t eax_17 = (*(*eax_16 + 0x2c))(eax_16, 3, &var_480);

    if (eax_17)
    {
        Game_DataSymbolLoad(&var_400, "Couldn't set projection matrix");
        int32_t var_4bc_4 = sub_492be0(eax_17);
        var_4c0 = &var_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    void var_440;
    sub_4950f0(&var_440, *a1, nullptr);
    int32_t* eax_19 = g_5ca114;
    int32_t result = (*(*eax_19 + 0x2c))(eax_19, 2, &var_440);

    if (!result)
        return result;

    Game_DataSymbolLoad(&var_400, "Couldn't set view matrix");
    int32_t var_4bc_5 = sub_492be0(result);
    var_4c0 = &var_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
