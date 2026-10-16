#include "AIConfig_ApplyProfile.h"
int32_t AIConfig_ApplyProfile(void* a1)

{
    __builtin_memset(a1 + 0x20, 0, 0x6e8);
    *(a1 + 0x6fc) = 1;
    *(a1 + 0x20) = 0xffffffff;
    return 0;
}
