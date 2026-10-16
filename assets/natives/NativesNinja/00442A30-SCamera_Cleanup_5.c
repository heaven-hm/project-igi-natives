#include "00442A30-SCamera_Cleanup_5.h"
/* 0x00442a30 SCamera_Cleanup_5 full linked: callers=0 callees=2 */
void* sub_442a30(void* a1, int32_t* a2)

{
    *a2 = sub_443670();
    a2[8] = 1;
    bool ebx = *(a1 + 0x170);
    *(a2 + 0x25) = 1;
    a2[9] = !ebx;
    memcpy(&a2[2], a1 + 0x20, 0x18);
    return a1;
}
