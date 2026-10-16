#include "00493830-Display_CouldnTCreateDynamic.h"
/* 0x00493830 Display_CouldnTCreateDynamic full linked: callers=2 callees=9 */
int32_t sub_493830()

{
    int32_t eax = g_bcad74;
    int32_t eax_1 = -(eax);
    int32_t var_410 = ((eax_1 - eax_1) & 0xfffff800) + 0x10800;
    int32_t* eax_5 = g_5ca110;
    int32_t var_414 = 0x10;
    int32_t var_40c = 0x112;
    int32_t var_408 = 0xfa0;
    int32_t eax_6 = (*(*eax_5 + 0x14))(eax_5, &var_414, &g_bcad90, 0);
    void var_400;

    if (eax_6)
    {
        Game_DataSymbolLoad(&var_400, "Couldn't create dynamic vertex buffer");
        int32_t var_42c_1 = sub_492be0(eax_6);
        void* var_430 = &var_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t edx = g_bcad74;
    int32_t* eax_8 = g_5ca110;
    int32_t edx_1 = -(edx);
    g_bcad94 = 0xfa0;
    int32_t var_410_1 = ((edx_1 - edx_1) & 0xfffff800) + 0x10800;
    var_414 = 0x10;
    int32_t var_40c_1 = 0x142;
    int32_t var_408_1 = 0x3e8;
    int32_t eax_9 = (*(*eax_8 + 0x14))(eax_8, &var_414, &g_bcad80, 0);

    if (eax_9)
    {
        Game_DataSymbolLoad(&var_400, "Couldn't create dynamic vertex buffer");
        int32_t var_42c_3 = sub_492be0(eax_9);
        void* var_430_1 = &var_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t edx_5 = g_bcad74;
    int32_t* eax_11 = g_5ca110;
    int32_t edx_6 = -(edx_5);
    g_bcad84 = 0x3e8;
    var_414 = 0x10;
    int32_t var_410_2 = ((edx_6 - edx_6) & 0xfffff800) + 0x10800;
    int32_t var_40c_2 = 0x144;
    int32_t var_408_2 = 0x3e8;
    int32_t eax_12 = (*(*eax_11 + 0x14))(eax_11, &var_414, &g_bcad00, 0);

    if (!eax_12)
    {
        int32_t* eax_14 = g_bcad00;
        g_bcad04 = 0x3e8;
        (*(*eax_14 + 4))(eax_14);
        int32_t* eax_15 = g_bcad00;
        (*(*eax_15 + 8))(eax_15);
        int32_t* eax_16 = g_bcad00;
        void var_404;
        (*(*eax_16 + 0xc))(eax_16, 0, &var_404, 0);
        int32_t* eax_17 = g_bcad00;
        (*(*eax_17 + 4))(eax_17);
        int32_t* eax_18 = g_bcad00;
        (*(*eax_18 + 8))(eax_18);
        int32_t* eax_19 = g_bcad00;
        return (*(*eax_19 + 0x10))(eax_19);
    }

    Game_DataSymbolLoad(&var_400, "Couldn't create dynamic vertex buffer");
    int32_t var_42c_5 = sub_492be0(eax_12);
    void* var_430_2 = &var_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
