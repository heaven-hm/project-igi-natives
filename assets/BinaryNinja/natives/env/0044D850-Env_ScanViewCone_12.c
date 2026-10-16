#include "Env_ScanViewCone_12.h"
int32_t* Env_ScanViewCone_12(int32_t a1)

{
    int32_t* result = **&g_5bda60;

    if (*result)
        memcpy(a1, &result[4], 0x18);

    return result;
}
