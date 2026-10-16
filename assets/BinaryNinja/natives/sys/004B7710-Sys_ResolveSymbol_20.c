#include "Sys_ResolveSymbol_20.h"
void* Sys_ResolveSymbol_20(void* a1, int32_t a2, int32_t a3)

{
    void* result = a1;
    result = *(*(result + 4) * a3 + result + a2 + 0x10);
    return result;
}
