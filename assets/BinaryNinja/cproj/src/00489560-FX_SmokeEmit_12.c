#include "gi_platform.h"
#include "00489560-FX_SmokeEmit_12.h"
int32_t FX_SmokeEmit_12()

{
    g_5c8b0c = 0;
    g_5c8b10 = 0;
    g_5c8b14 = 0;
    g_5c8ac0 = Mem_Alloc8(0xc0);
    int32_t objC;
    int32_t dstD;
    dstD = __memfill_u32(&g_5c8ac4, 0x1810181, 0x10);
    g_54127c = QTask_UnableToAllocateEvent(0);
    g_54127d = QTask_UnableToAllocateEvent(0);
    char result = QTask_UnableToAllocateEvent(0);
    g_54127e = result;
    return result;
}
