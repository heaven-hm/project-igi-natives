#include "gi_platform.h"
#include "004F9160-Graph_Process.h"
void* Graph_Process(void* a1)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x6c));

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0;
    }

    return result;
}
