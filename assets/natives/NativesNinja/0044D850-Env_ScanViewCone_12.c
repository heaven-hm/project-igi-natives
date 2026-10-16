#include "0044D850-Env_ScanViewCone_12.h"
/* 0x0044d850 Env_ScanViewCone_12 full linked: callers=3 callees=1 */
void AIFunction_GetEventData()

{
    int32_t* eax = **&g_5bda60;
    int32_t arg_4;

    if (*eax)
        memcpy(arg_4, &eax[4], 0x18);
}
