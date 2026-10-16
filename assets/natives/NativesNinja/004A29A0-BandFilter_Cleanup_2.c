#include "004A29A0-BandFilter_Cleanup_2.h"
/* 0x004a29a0 BandFilter_Cleanup_2 full linked: callers=0 callees=2 */
int32_t sub_4a29a0(void* a1)

{
    sub_4b66a0(a1 + 0x34);
    return Heap_FreeEntry(*(a1 + 0x30));
}
