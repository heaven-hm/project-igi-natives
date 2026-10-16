#include "BandFilter_Cleanup_2.h"
int32_t BandFilter_Cleanup_2(void* a1)

{
    Sys_ReadFileBlock_17(a1 + 0x34);
    return Heap_FreeEntry(*(a1 + 0x30));
}
