// IGI native provenance: Error_Show - 0x004AF7B0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AF7B0-Error_Show.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Error_Show.h"
int32_t Error_Show(char* context)

// Sig: void Error_Show(char* format, ...)
// Note: Shows a fatal-error dialog: printf-style FORMAT STRING + variadic args
// (e.g. push "Level_Load(): Couldn't load script: %s"; push scriptPath; call).
// Param: format = printf-style string, followed by substitution args. Variadic
// - proven by retail call sites (add stack_ptr,8 cleanup) and vsprintf helper
// fcn.004A5702.
{
    if (g_936268)
    {
        Game_DataSymbolLoad(0xa84640, "Fatal error:\n\n");
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
        g_936268(0xa84640);
    }

    int32_t result = g_93626c;

    if (!result)
        return result;

    /* tailcall */
    return result();
}
