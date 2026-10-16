#include "gi_platform.h"
#include "004A25E0-BandFilter_Cleanup.h"
int32_t BandFilter_Cleanup(void* a1)

{
    Heap_FreeEntry((*(int32_t*)(uintptr_t)(a1 + 0x70)));
    Struct_Clear36(a1 + 0x2c);
    return 0;
}
