#include "gi_platform.h"
#include "00497E60-Display_SetDisplayMode_15.h"
void* Display_SetDisplayMode_15(void* a1, float a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = a2;
    return a1;
}
