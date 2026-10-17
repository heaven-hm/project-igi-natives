// Original IGI.EXE function: Error_Show (VA 0x004AF7B0; static CFG gate PASS, CFG score 0.889).
#include "Error_Show.h"
int32_t Error_Show(char* a1)

// Sig: void Error_Show(char* format, ...)
// Note: Shows a fatal-error dialog: printf-style FORMAT STRING + variadic args
// (e.g. push "Level_Load(): Couldn't load script: %s"; push scriptPath; call).
// Param: format = printf-style string, followed by substitution args. Variadic
// - proven by retail call sites (add esp,8 cleanup) and vsprintf helper
// fcn.004A5702.
{
    if (g_936268)
    {
        Game_DataSymbolLoad(0xa84640, "Fatal error:\n\n");
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
        g_936268(0xa84640);
    }

    int32_t result = g_93626c;

    if (!result)
        return result;

    /* tailcall */
    return result();
}
