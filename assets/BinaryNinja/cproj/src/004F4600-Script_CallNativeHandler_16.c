#include "gi_platform.h"
#include "004F4600-Script_CallNativeHandler_16.h"
void* Script_CallNativeHandler_16(void* a1)

{
    __builtin_memset(a1 + 0x720, 0, 0x20);
    (*(int32_t*)(uintptr_t)(a1 + 0x744)) = 0;
    return a1;
}
