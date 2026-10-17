// Original IGI.EXE function: ComputerStartup_Process (VA 0x00466360; static CFG gate PASS, CFG score 1.000).
#include "ComputerStartup_Process.h"
int32_t ComputerStartup_Process(void* a1)

{
    Heap_FreeEntry(*(a1 + 0x8c));
    int32_t* valA1 = *(a1 + 0x88);
    return (*(*valA1 + 8))(valA1);
}
