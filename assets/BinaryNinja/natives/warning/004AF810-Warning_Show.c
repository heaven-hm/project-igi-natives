// IGI native provenance: Warning_Show - 0x004AF810 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AF810-Warning_Show.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Warning_Show.h"
int32_t Warning_Show(char* context)

// Sig: void Warning_Show(char* format, ...)
// Note: Shows a warning dialog - printf-style variadic like ErrorShow (retail:
// push str."QTasktype \"%s\"..."; push data_val; call -> add stack_ptr,8). Param: format =
// printf-style string + substitution args.
{
    int32_t result = g_936274;

    if (!result)
        return result;

    Game_DataSymbolLoad(0xa84640, "Warning:\n\n");
    int32_t dest_1 = 0xa84640;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_1;
        dest_1 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    void arg_8;
    String_VFormat(~i + 0xa8463f, context, &arg_8);
    return g_936274(0xa84640);
}
