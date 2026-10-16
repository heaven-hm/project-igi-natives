#include "gi_platform.h"
#include "004A8C37-Camera_ResetMatrix_15.h"
long double Camera_ResetMatrix_15(void* a1 , int80_t a2 , long double a3 )

{
    (*(int32_t*)(uintptr_t)(a1 - 0x9e)) = a2;
    long double fpu0 = (*(int32_t*)(uintptr_t)(a1 - 0x9e));

    if ((*(int32_t*)(uintptr_t)(a1 - 0x97)) & 0x40)
    {
        long double x87_r0_1 = a3;
        a3 = fpu0;
        (*(int32_t*)(uintptr_t)(a1 - 0x9e)) = x87_r0_1;
        fpu0 = (*(int32_t*)(uintptr_t)(a1 - 0x9e));
    }

    if (!((*(int32_t*)(uintptr_t)(a1 - 0x97)) & 0x40) || !((*(int32_t*)(uintptr_t)(a1 - 0x97)) & 0x40))
        (*(int32_t*)(uintptr_t)(a1 - 0x90)) = 1;
    else
        (*(int32_t*)(uintptr_t)(a1 - 0x90)) = 7;

    return a3 + fpu0;
}
