// Original IGI.EXE function: IntroScreen_Setup (VA 0x00415450; static CFG gate PASS, CFG score 1.000).
#include "IntroScreen_Setup.h"
void* IntroScreen_Setup(void* context)

{
    int32_t data_val = *(context + 0x30);

    if (data_val)
        Resource_Flush(data_val);

    void* result = *(context + 0x2c);

    if (result)
        result = Display_CreateSurface(result);

    return result;
}
