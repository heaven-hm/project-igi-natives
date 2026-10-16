#include "gi_platform.h"
#include "004B08A0-Sys_PushStack.h"
int32_t Sys_PushStack(int32_t* a1, int32_t* a2, char* a3, int32_t a4, int32_t a5)

{
    if (!Camera_UpdateViewCone_33(0x93aae0, 0x936280, a3))
        return 0;

    return Sys_AllocateMemory(a1, a2, a4, 0x93aae0, 0x936280, a5);
}
