#include "Script_CallNativeHandler_16.h"
void* Script_CallNativeHandler_16(void* a1)

{
    __builtin_memset(a1 + 0x720, 0, 0x20);
    *(a1 + 0x744) = 0;
    return a1;
}
