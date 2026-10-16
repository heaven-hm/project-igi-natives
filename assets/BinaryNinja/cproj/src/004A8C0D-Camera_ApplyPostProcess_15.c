#include "gi_platform.h"
#include "004A8C0D-Camera_ApplyPostProcess_15.h"
long double Camera_ApplyPostProcess_15(void* a1 , long double a2 , int80_t a3 )

{
    (*(int32_t*)(uintptr_t)(a1 - 0x9e)) = a3;
    long double x87_r0_1 = (*(int32_t*)(uintptr_t)(a1 - 0x9e));

    if (!((*(int32_t*)(uintptr_t)(a1 - 0x97)) & 0x40))
        (*(int32_t*)(uintptr_t)(a1 - 0x90)) = 1;
    else
        (*(int32_t*)(uintptr_t)(a1 - 0x90)) = 7;

    return a2 + x87_r0_1;
}
