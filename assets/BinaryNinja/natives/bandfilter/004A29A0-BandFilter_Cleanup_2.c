// Original IGI.EXE function: BandFilter_Cleanup_2 (VA 0x004A29A0; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_Cleanup_2.h"
int32_t BandFilter_Cleanup_2(void* context)

{
    Sys_ReadFileBlock_17(context + 0x34);
    return Heap_FreeEntry(*(context + 0x30));
}
