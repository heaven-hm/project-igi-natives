#include "00493CA0-Display_CouldnTSetClippingWi.h"
/* 0x00493ca0 Display_CouldnTSetClippingWi full linked: callers=1 callees=4 */
int32_t sub_493ca0(void* a1)

{
    int32_t var_420;
    __builtin_memset(&var_420, 0, 0x20);
    var_420 = 2;
    int32_t var_41c = 0xf;
    int32_t var_418 = *(a1 + 0xc);
    int32_t var_404 = g_bcadc8;
    float var_414 = *(a1 + 0x14) + *(a1 + 0xc);
    int32_t var_410 = *(a1 + 0x10);
    int32_t var_408 = g_bcada0;
    int32_t* eax_2 = g_5ca114;
    float var_40c = *(a1 + 0x18) + *(a1 + 0x10);
    int32_t result = (*(*eax_2 + 0x6c))(eax_2, &var_420);

    if (!result)
        return result;

    void var_400;
    Game_DataSymbolLoad(&var_400, "Couldn't set clipping window");
    int32_t var_438 = sub_492be0(result);
    void* var_43c = &var_400;
    char* var_440 = "%s\n\nDirectX error message: %s";
    Error_Show(var_440);

    while (true)
        /* nop */
}
