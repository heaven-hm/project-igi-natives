// Original IGI.EXE function: ComputerStartup_Process (VA 0x00466360; static CFG gate PASS, CFG score 1.000).
#include "ComputerStartup_Process.h"
int32_t ComputerStartup_Process(void* context)

{
    Heap_FreeEntry(*(context + 0x8c));
    int32_t* data_1 = *(context + 0x88);
    return (*(*data_1 + 8))(data_1);
}
