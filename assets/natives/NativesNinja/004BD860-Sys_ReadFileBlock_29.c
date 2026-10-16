#include "004BD860-Sys_ReadFileBlock_29.h"
/* 0x004bd860 Sys_ReadFileBlock_29 full linked: callers=0 callees=1 */
int32_t sub_4bd860(void* a1)

{
    sub_4bccc0(a1, nullptr, nullptr, nullptr);
    int32_t result = *(a1 + 0x14) + 1;
    *(a1 + 0x14) = result;
    return result;
}
