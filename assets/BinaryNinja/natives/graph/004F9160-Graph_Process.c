// Original IGI.EXE function: Graph_Process (VA 0x004F9160; static CFG gate PASS, CFG score 1.000).
#include "Graph_Process.h"
void* Graph_Process(void* context)

{
    void* result = *(context + 0x6c);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(context + 0x6c) = 0;
    }

    return result;
}
