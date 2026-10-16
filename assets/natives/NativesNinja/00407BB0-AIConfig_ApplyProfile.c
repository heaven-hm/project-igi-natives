#include "00407BB0-AIConfig_ApplyProfile.h"
/* 0x00407bb0 AIConfig_ApplyProfile full linked: callers=1 callees=1 */
int32_t AIConfig_ApplyProfile(void* a1)

{
    __builtin_memset(a1 + 0x20, 0, 0x6e8);
    *(a1 + 0x6fc) = 1;
    *(a1 + 0x20) = 0xffffffff;
    return 0;
}
