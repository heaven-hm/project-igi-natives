#include "004AF810-Warning_Show.h"
/* 0x004af810 Warning_Show full linked: callers=78 callees=2 */
int32_t Warning_Show(char* a1)

// Sig: void Warning_Show(char* format, ...)
// Note: Shows a warning dialog - printf-style variadic like ErrorShow (retail:
// push str."QTasktype \"%s\"..."; push eax; call -> add esp,8). Param: format =
// printf-style string + substitution args.
{
    int32_t result = g_936274;

    if (!result)
        return result;

    Game_DataSymbolLoad(0xa84640, "Warning:\n\n");
    int32_t edi_1 = 0xa84640;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    void arg_8;
    String_VFormat(~i + 0xa8463f, a1, &arg_8);
    return g_936274(0xa84640);
}
