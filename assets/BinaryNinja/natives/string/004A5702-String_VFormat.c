#include "String_VFormat.h"
int32_t String_VFormat(char* a1, char* a2, int32_t a3)

// Sig: int String_VFormat(char* buffer, const char* format, va_list args)
// Note: Bounded printf-style va_list formatter wrapper around the parser core
// at 0x004A7720. Catalogued for direct ABI-aware use; no generic NativeHelper
// wrapper is emitted. Ghidra/r2 CFG agreement: 4 basic blocks and 4 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    int32_t v_2c = a3;
    char* v_1c = a1;
    char* v_24 = a1;
    int32_t v_18 = 0x42;
    int32_t v_20 = 0x7fffffff;
    int32_t result = Camera_ApplyWideScreen_11(&v_24, a2);
    int32_t v_20_1 = v_20 - 1;

    if (v_20 - 1 < 0)
    {
        int32_t v_30_1 = 0;
        Camera_ApplyHandiCam_11(&v_24);
    }
    else
        *v_24 = 0;

    return result;
}
