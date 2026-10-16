#include "Script_ParseEnumString_25.h"
int32_t __convention("regparm") Script_ParseEnumString_25(int32_t a1, int32_t a2, int32_t a3, void* a4, char a5)

{
    int32_t v_4 = a3;
    *(&v_4 + 2) = 1;
    *(&v_4 + 3) = a5;
    Sys_ResolveSymbol_4(*(a4 + 4));
    int32_t result = Sys_CloseFileStream_4(*(a4 + 4), (&v_4 + 2), 2);
    result = 1;
    return result;
}
