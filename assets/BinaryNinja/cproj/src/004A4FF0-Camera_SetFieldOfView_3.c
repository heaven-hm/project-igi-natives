#include "gi_platform.h"
#include "004A4FF0-Camera_SetFieldOfView_3.h"
void* Camera_SetFieldOfView_3(void* a1, float a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x30)) = a2;
    return a1;
}
