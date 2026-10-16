#include "004A25E0-BandFilter_Cleanup.h"
/* 0x004a25e0 BandFilter_Cleanup full linked: callers=0 callees=2 */
void BandFilter_Cleanup(struct band_filter* filter)

{
    Heap_FreeEntry(filter->entry);
    Struct_Clear36(&filter->state);
}
