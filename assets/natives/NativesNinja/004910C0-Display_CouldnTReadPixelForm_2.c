#include "004910C0-Display_CouldnTReadPixelForm_2.h"
/* 0x004910c0 Display_CouldnTReadPixelForm_2 full linked: callers=1 callees=7 */
int32_t sub_4910c0(void* a1)

{
    int32_t var_47c;
    __builtin_memset(&var_47c, 0, 0x7c);
    int32_t* eax = g_5ca100;
    int32_t var_434 = 0x20;
    int32_t eax_1 = (*(*eax + 0x54))(eax, &var_434);
    void var_400;

    if (eax_1)
    {
        Game_DataSymbolLoad(&var_400, "Couldn't read pixel format");
        int32_t var_4a8 = sub_492be0(eax_1);
        void* var_4ac = &var_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    var_47c = 0x7c;
    int32_t var_478 = 0x80f;
    int32_t var_414 = 0x1800;
    void* eax_3 = *(a1 + 0x154);
    int32_t var_470 = *(eax_3 + 4);
    int32_t ecx_1 = *(eax_3 + 8);

    if (ecx_1 < 0)
        ecx_1 = -(ecx_1);

    int32_t var_474 = ecx_1;
    int32_t var_458 = *(a1 + 0x164);
    int32_t var_428;
    uint32_t var_46c = (*(eax_3 + 4) * var_428) >> 3;
    int32_t* eax_7 = g_5ca10c;
    int32_t* var_490;
    int32_t eax_8 = (*(*eax_7 + 0x18))(eax_7, &var_47c, &var_490, 0);

    if (!eax_8)
    {
        void* eax_10 = *(a1 + 0x154);
        int32_t var_48c = 0;
        int32_t var_488 = 0;
        int32_t var_484 = *(eax_10 + 4);
        int32_t eax_11 = *(eax_10 + 8);

        if (eax_11 < 0)
            eax_11 = -(eax_11);

        int32_t var_480 = eax_11;
        int32_t* eax_12 = g_5ca100;
        (*(*eax_12 + 0x14))(eax_12, 0, var_490, &var_48c, 0x8000200, 0);
        int32_t* eax_13 = var_490;
        return (*(*eax_13 + 8))(eax_13);
    }

    Game_DataSymbolLoad(&var_400, "Couldn't create texture surface");
    int32_t var_4a8_2 = sub_492be0(eax_8);
    void* var_4ac_1 = &var_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
