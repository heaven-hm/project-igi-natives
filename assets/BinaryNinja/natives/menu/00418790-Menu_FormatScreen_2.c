// Original IGI.EXE function: Menu_FormatScreen_2 (VA 0x00418790; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen_2.h"
int32_t Menu_FormatScreen_2(void* a1)

{
    int32_t ctxB = *(a1 + 0x27e4);
    void* dstD = *(a1 + 0x30);
    int32_t valA = Menu_HandleInput_13();
    int32_t objC = 0;
    objC = *(dstD + 0x1c);
    int32_t valA4 = *(((valA * 0x180 + objC) << 2) + &g_a96ae0);

    if (valA4)
        valA4(dstD);

    int32_t result = Config_SaveGraphicOptions_2();
    *(a1 + 0x27e4) = result;

    if (result == ctxB)
        return result;

    return Menu_FormatScreen(a1, 1);
}
