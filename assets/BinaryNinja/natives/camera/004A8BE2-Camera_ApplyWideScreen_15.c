// Original IGI.EXE function: Camera_ApplyWideScreen_15 (VA 0x004A8BE2; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_15.h"
long double Camera_ApplyWideScreen_15(void* a1 @ flagP, int80_t a2 @ fp0)

{
    *(a1 - 0x9e) = a2;
    long double result = *(a1 - 0x9e);

    if (!(*(a1 - 0x97) & 0x40))
    {
        *(a1 - 0x90) = 1;
        return result + g_5443c4;
    }

    *(a1 - 0x90) = 7;
    return result;
}
