#include "gi_platform.h"
#include "004B7000-Sys_DispatchOpcode_18.h"
int32_t* Sys_DispatchOpcode_18(int32_t* a1)

{
    int32_t* result = Mem_Alloc(0x18, 4);

    if (Sys_IlfFileCorruptS(result, a1))
        return result;

    Sys_ExecuteBytecode_2(result);
    return 0;
}
