#include "gi_platform.h"
#include "004A3550-BandFilter_LoadParameters.h"
void* BandFilter_LoadParameters(void* a1)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 0x34)))
    {
        int32_t v_c = g_936014;
        void* v_4 = a1;
        char v_10;
        return BandFilter_Cleanup_3(&v_10);
    }

    void* result = Sys_AllocateMemory_19(BandFilter_Cleanup_3, 0x10, (*(int32_t*)(uintptr_t)(a1 + 0x2c)));
    int32_t objC = g_936014;
    *(result + 0xc) = a1;
    *(result + 4) = objC;
    return result;
}
