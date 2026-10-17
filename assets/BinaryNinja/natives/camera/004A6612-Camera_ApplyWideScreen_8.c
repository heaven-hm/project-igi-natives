// Original IGI.EXE function: Camera_ApplyWideScreen_8 (VA 0x004A6612; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_8.h"
HMODULE Camera_ApplyWideScreen_8(int32_t* a1)

{
    *a1 = 0;
    HMODULE result = GetModuleHandleA(nullptr);

    if (result->unused == 0x5a4d)
    {
        int32_t objC1 = *(result + 0x3c);

        if (objC1)
        {
            result += objC1;
            *a1 = *(result + 0x1a);
            result = *(result + 0x1b);
            *(a1 + 1) = result;
        }
    }

    return result;
}
