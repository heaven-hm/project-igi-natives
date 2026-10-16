#include "00466360-ComputerStartup_Process.h"
/* 0x00466360 ComputerStartup_Process full linked: callers=0 callees=1 */
int32_t sub_466360(void* a1)

{
    Heap_FreeEntry(*(a1 + 0x8c));
    int32_t* eax_1 = *(a1 + 0x88);
    return (*(*eax_1 + 8))(eax_1);
}
