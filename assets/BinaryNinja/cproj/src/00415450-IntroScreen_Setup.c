#include "gi_platform.h"
#include "00415450-IntroScreen_Setup.h"
void* IntroScreen_Setup(void* a1)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0x30));

    if (valA)
        Resource_Flush(valA);

    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x2c));

    if (result)
        result = Display_CreateSurface(result);

    return result;
}
