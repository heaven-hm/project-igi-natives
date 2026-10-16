#include "Sys_DispatchOpcode_7.h"
int32_t Sys_DispatchOpcode_7(void* a1)

{
    int32_t* valA = QFile_ReadWrite(a1, "r");

    if (!valA)
        return 0;

    Sys_ReadFileBlock_4(valA);
    return 1;
}
