#include "gi_platform.h"
#include "004B09C0-Sys_ResolveSymbol.h"
int32_t Sys_ResolveSymbol(int32_t* a1, int32_t* a2, int32_t* a3, char* a4, int32_t a5, int32_t a6)

{
    char v_200;
    Sys_PopStack(&v_200, a4);
    return Sys_DispatchOpcode(a1, a2, a3, &v_200, a5, a6);
}
