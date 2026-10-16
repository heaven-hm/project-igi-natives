#include "Script_ExecuteLevelScript_26.h"
int32_t Script_ExecuteLevelScript_26(void* a1, int32_t a2, int32_t a3)

{
    int32_t valA;
    int32_t objC;
    int32_t tmpD;
    Script_ParseEnumReal32_25(valA, tmpD, objC, a1, 0xa);
    Script_FormatString_25(a1, a3);
    Sys_ResolveSymbol_4(*(a1 + 4));
    int32_t result = Sys_CloseFileStream_4(*(a1 + 4), a2, a3);
    result = 1;
    return result;
}
