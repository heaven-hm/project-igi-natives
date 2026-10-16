#include "Camera_ApplyWideScreen_33.h"
void* Camera_ApplyWideScreen_33(void* a1, void** a2)

{
    **(a1 + 4) = a2;
    a2[1] = *(a1 + 4);
    *(a1 + 4) = a2;
    *a2 = a1;
    return a1;
}
