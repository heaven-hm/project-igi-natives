#include "004B7710-Sys_ResolveSymbol_20.h"
/* 0x004b7710 Sys_ResolveSymbol_20 full linked: callers=1 callees=0 */
void* sub_4b7710(void* a1, int32_t a2, int32_t a3)

{
    void* result = a1;
    result = *(*(result + 4) * a3 + result + a2 + 0x10);
    return result;
}
