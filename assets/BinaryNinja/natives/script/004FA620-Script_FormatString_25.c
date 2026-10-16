#include "Script_FormatString_25.h"
int32_t Script_FormatString_25(void* a1, int32_t a2)

{
    char v_8 = 5;
    int32_t v_7 = a2;
    Sys_ResolveSymbol_4(*(a1 + 4));
    int32_t result = Sys_CloseFileStream_4(*(a1 + 4), &v_8, 5);
    result = 1;
    return result;
}
