#include "004AF8F0-Camera_SetFieldOfView_33.h"
/* 0x004af8f0 Camera_SetFieldOfView_33 full linked: callers=67 callees=0 */
void* sub_4af8f0(void* a1, void** a2)

{
    a2[1] = *(a1 + 8);
    *a2 = a1 + 4;
    **(a1 + 8) = a2;
    *(a1 + 8) = a2;
    return a1;
}
