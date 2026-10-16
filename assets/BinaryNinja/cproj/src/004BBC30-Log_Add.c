#include "gi_platform.h"
#include "004BBC30-Log_Add.h"
int32_t Log_Add(char* a1)

// Sig: void Log_Add(char* format, ...)
// Note: Appends a formatted line to the engine log (variadic printf-style,
// giant 0x400 format buffer at esp+0x404). Only logs when log-enabled globals
// 0xA43EC8/0xA43ED4 are set. Param: format = printf-style string + substitution
// args. Gate your spammy logs behind the enable flags.
{
    int32_t result = g_a43ed4;

    if (!result)
        return result;

    char v_400;
    char arg_8;
    String_VFormat(&v_400, a1, &arg_8);
    return g_a43ed4(&v_400, g_a43ec8);
}
