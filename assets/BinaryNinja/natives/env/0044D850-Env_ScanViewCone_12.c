// Original IGI.EXE function: Env_ScanViewCone_12 (VA 0x0044D850; static CFG gate FAIL, CFG score 0.667).
#include "Env_ScanViewCone_12.h"
int32_t* Env_ScanViewCone_12(int32_t a1)

{
    int32_t* result = **&g_5bda60;

    if (*result)
        memcpy(a1, &result[4], 0x18);

    return result;
}
