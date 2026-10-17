// Original IGI.EXE function: BandFilter_Cleanup (VA 0x004A25E0; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_Cleanup.h"
int32_t BandFilter_Cleanup(void* context)

{
    Heap_FreeEntry(*(context + 0x70));
    Struct_Clear36(context + 0x2c);
    return 0;
}
