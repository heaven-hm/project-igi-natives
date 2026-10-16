#include "BandFilter_Cleanup_C11.h"
extern void Heap_FreeEntry(void *entry);   /* 0x4b7030: shared (9 callers) */
extern void Struct_Clear36(void *state);   /* 0x4b22f0: memset 0x24 (10 callers) */
void BandFilter_Cleanup(band_filter_t *filter)
{
    Heap_FreeEntry(filter->entry);
    Struct_Clear36(&filter->state);
}
