#include "gi_platform.h"
#include "004AF8F0-Camera_SetFieldOfView_33.h"
void* Camera_SetFieldOfView_33(void* a1, void** a2)

{
    a2[1] = (*(int32_t*)(uintptr_t)(a1 + 8));
    *a2 = a1 + 4;
    *(*(int32_t*)(uintptr_t)(a1 + 8)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 8)) = a2;
    return a1;
}
