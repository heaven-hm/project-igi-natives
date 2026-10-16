#include "gi_platform.h"
#include "004A8BE2-Camera_ApplyWideScreen_15.h"
long double Camera_ApplyWideScreen_15(void* a1 , int80_t a2 )

{
    (*(int32_t*)(uintptr_t)(a1 - 0x9e)) = a2;
    long double result = (*(int32_t*)(uintptr_t)(a1 - 0x9e));

    if (!((*(int32_t*)(uintptr_t)(a1 - 0x97)) & 0x40))
    {
        (*(int32_t*)(uintptr_t)(a1 - 0x90)) = 1;
        return result + g_5443c4;
    }

    (*(int32_t*)(uintptr_t)(a1 - 0x90)) = 7;
    return result;
}
