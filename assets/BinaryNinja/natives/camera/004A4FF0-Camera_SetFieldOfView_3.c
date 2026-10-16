#include "Camera_SetFieldOfView_3.h"
void* Camera_SetFieldOfView_3(void* a1, float a2)

{
    *(a1 + 0x30) = a2;
    return a1;
}
