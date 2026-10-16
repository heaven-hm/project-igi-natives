#include "004AF990-Camera_ApplyWideScreen_33.h"
/* 0x004af990 Camera_ApplyWideScreen_33 full linked: callers=1 callees=0 */
void* sub_4af990(void* a1, void** a2)

{
    **(a1 + 4) = a2;
    a2[1] = *(a1 + 4);
    *(a1 + 4) = a2;
    *a2 = a1;
    return a1;
}
