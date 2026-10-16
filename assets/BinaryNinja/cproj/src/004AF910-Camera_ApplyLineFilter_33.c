#include "gi_platform.h"
#include "004AF910-Camera_ApplyLineFilter_33.h"
int32_t* Camera_ApplyLineFilter_33(int32_t* a1, int32_t* a2)

{
    int32_t tmpD = *a1;
    a2[1] = a1;
    *a2 = tmpD;
    (*(int32_t*)(uintptr_t)(*a1 + 4)) = a2;
    *a1 = a2;
    return a1;
}
