#include "gi_platform.h"
#include "00466360-ComputerStartup_Process.h"
int32_t ComputerStartup_Process(void* a1)

{
    Heap_FreeEntry((*(int32_t*)(uintptr_t)(a1 + 0x8c)));
    int32_t* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x88));
    return ((int(*)())(uintptr_t)(*(*valA1 + 8)))(valA1);
}
