#include "004AF7B0-Error_Show.h"
/* 0x004af7b0 Error_Show full linked: callers=274 callees=2 */
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
        g_936268(0xa84640);
    }

    int32_t result = g_93626c;

    if (!result)
        return result;

    /* tailcall */
    return result();
}
