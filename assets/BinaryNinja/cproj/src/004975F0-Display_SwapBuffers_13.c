#include "gi_platform.h"
#include "004975F0-Display_SwapBuffers_13.h"
int32_t Display_SwapBuffers_13(void* a1)

{
    Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(a1 + 0x48)));
    void* objC = (*(int32_t*)(uintptr_t)(a1 + 0x44));
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = 0;
    int32_t result = Sys_ExecuteBytecode_2(objC);
    (*(int32_t*)(uintptr_t)(a1 + 0x44)) = 0;
    return result;
}
