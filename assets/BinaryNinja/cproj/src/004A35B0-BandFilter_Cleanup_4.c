#include "gi_platform.h"
#include "004A35B0-BandFilter_Cleanup_4.h"
int32_t BandFilter_Cleanup_4(void* a1)

{
    void* srcS = (*(int32_t*)(uintptr_t)(a1 + 0xc));
    int32_t v_18 = (*(int32_t*)(uintptr_t)(srcS + 0x38));
    int32_t v_14 = (*(int32_t*)(uintptr_t)(srcS + 0x3c));
    int32_t v_10 = (*(int32_t*)(uintptr_t)(srcS + 0x30));
    int32_t v_c = (*(int32_t*)(uintptr_t)(srcS + 0x34));
    Display_CheckCapabilities_13(0xbcaba0, &v_18);
    float objC3 = (*(int32_t*)(uintptr_t)(srcS + 0x30));
    float v_40 = objC3;
    Sys_CloseFileStream_14((*(int32_t*)(uintptr_t)(srcS + 0x38)), (*(int32_t*)(uintptr_t)(srcS + 0x3c)) + (*(int32_t*)(uintptr_t)(srcS + 0x34)) - (*(int32_t*)(uintptr_t)(srcS + 0x40)), objC3, (*(int32_t*)(uintptr_t)(srcS + 0x40)),
        (*(int32_t*)(uintptr_t)(srcS + 0x20)), (*(int32_t*)(uintptr_t)(srcS + 0x24)), (*(int32_t*)(uintptr_t)(srcS + 0x28)), 0, 0xffffffff, 0x3f800000);
    int32_t result = Sys_CloseFileStream_14((*(int32_t*)(uintptr_t)(srcS + 0x38)), (*(int32_t*)(uintptr_t)(srcS + 0x3c)), (*(int32_t*)(uintptr_t)(srcS + 0x30)), (*(int32_t*)(uintptr_t)(srcS + 0x40)),
        (*(int32_t*)(uintptr_t)(srcS + 0x20)), (*(int32_t*)(uintptr_t)(srcS + 0x24)), (*(int32_t*)(uintptr_t)(srcS + 0x28)), 0, 0xffffffff, 0x3f800000);
    return result;
}
