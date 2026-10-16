#include "004A5702-String_VFormat.h"
/* 0x004a5702 String_VFormat full linked: callers=8 callees=2 */
int32_t String_VFormat(char* a1, char* a2, int32_t a3)

// Sig: int String_VFormat(char* buffer, const char* format, va_list args)
// Note: Bounded printf-style va_list formatter wrapper around the parser core
// at 0x004A7720. Catalogued for direct ABI-aware use; no generic NativeHelper
// wrapper is emitted. Ghidra/r2 CFG agreement: 4 basic blocks and 4 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    int32_t var_2c = a3;
    char* var_1c = a1;
    char* var_24 = a1;
    int32_t var_18 = 0x42;
    int32_t var_20 = 0x7fffffff;
    int32_t result = sub_4a7720(&var_24, a2);
    int32_t var_20_1 = var_20 - 1;

    if (var_20 - 1 < 0)
    {
        int32_t var_30_1 = 0;
        sub_4a760b(&var_24);
    }
    else
        *var_24 = 0;

    return result;
}
