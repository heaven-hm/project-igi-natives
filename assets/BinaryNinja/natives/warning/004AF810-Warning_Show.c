// Original IGI.EXE function: Warning_Show (VA 0x004AF810; static CFG gate PASS, CFG score 0.889).
#include "Warning_Show.h"
int32_t Warning_Show(char* a1)

// Sig: void Warning_Show(char* format, ...)
// Note: Shows a warning dialog - printf-style variadic like ErrorShow (retail:
// push str."QTasktype \"%s\"..."; push valA; call -> add esp,8). Param: format =
// printf-style string + substitution args.
{
    int32_t result = g_936274;

    if (!result)
        return result;

    Game_DataSymbolLoad(0xa84640, "Warning:\n\n");
    int32_t dstD1 = 0xa84640;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    void arg_8;
    String_VFormat(~i + 0xa8463f, a1, &arg_8);
    return g_936274(0xa84640);
}
