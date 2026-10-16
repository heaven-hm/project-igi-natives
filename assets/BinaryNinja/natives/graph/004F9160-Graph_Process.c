#include "Graph_Process.h"
void* Graph_Process(void* a1)

{
    void* result = *(a1 + 0x6c);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(a1 + 0x6c) = 0;
    }

    return result;
}
