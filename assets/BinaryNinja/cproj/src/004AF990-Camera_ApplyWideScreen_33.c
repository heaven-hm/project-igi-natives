#include "gi_platform.h"
#include "004AF990-Camera_ApplyWideScreen_33.h"
void* Camera_ApplyWideScreen_33(void* a1, void** a2)

{
    *(*(int32_t*)(uintptr_t)(a1 + 4)) = a2;
    a2[1] = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 4)) = a2;
    *a2 = a1;
    return a1;
}
