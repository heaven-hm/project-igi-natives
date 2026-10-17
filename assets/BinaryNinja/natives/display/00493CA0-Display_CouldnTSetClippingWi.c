// Original IGI.EXE function: Display_CouldnTSetClippingWi (VA 0x00493CA0; static CFG gate PASS, CFG score 0.917).
#include "Display_CouldnTSetClippingWi.h"
int32_t Display_CouldnTSetClippingWi(void* a1)

{
    int32_t v_420;
    __builtin_memset(&v_420, 0, 0x20);
    v_420 = 2;
    int32_t v_41c = 0xf;
    int32_t v_418 = *(a1 + 0xc);
    int32_t v_404 = g_bcadc8;
    float v_414 = *(a1 + 0x14) + *(a1 + 0xc);
    int32_t v_410 = *(a1 + 0x10);
    int32_t v_408 = g_bcada0;
    int32_t* valA2 = g_5ca114;
    float v_40c = *(a1 + 0x18) + *(a1 + 0x10);
    int32_t result = (*(*valA2 + 0x6c))(valA2, &v_420);

    if (!result)
        return result;

    void v_400;
    Game_DataSymbolLoad(&v_400, "Couldn't set clipping window");
    int32_t v_438 = DDERR_GENERIC(result);
    void* v_43c = &v_400;
    char* v_440 = "%s\n\nDirectX error message: %s";
    Error_Show(v_440);

    while (true)
        /* nop */
}
