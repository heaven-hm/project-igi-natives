#include "Camera_SetFieldOfView_33.h"
void* Camera_SetFieldOfView_33(void* a1, void** a2)

{
    a2[1] = *(a1 + 8);
    *a2 = a1 + 4;
    **(a1 + 8) = a2;
    *(a1 + 8) = a2;
    return a1;
}
