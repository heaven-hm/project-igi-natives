#include "Sys_PopStack_24.h"
int32_t Sys_PopStack_24(int32_t* a1, char** a2)

{
    if (!Sys_CloseFileStream_31(a1, &a1[2]))
        return 0;

    return Sys_ResolveSymbol_24(a1, a2, 0, 0);
}
