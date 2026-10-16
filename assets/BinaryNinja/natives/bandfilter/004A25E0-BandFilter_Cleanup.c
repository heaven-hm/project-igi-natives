#include "BandFilter_Cleanup.h"
int32_t BandFilter_Cleanup(void* a1)

{
    Heap_FreeEntry(*(a1 + 0x70));
    Struct_Clear36(a1 + 0x2c);
    return 0;
}
