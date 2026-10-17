// Original IGI.EXE function: IntroScreen_Setup (VA 0x00415450; static CFG gate PASS, CFG score 1.000).
#include "IntroScreen_Setup.h"
void* IntroScreen_Setup(void* a1)

{
    int32_t valA = *(a1 + 0x30);

    if (valA)
        Resource_Flush(valA);

    void* result = *(a1 + 0x2c);

    if (result)
        result = Display_CreateSurface(result);

    return result;
}
