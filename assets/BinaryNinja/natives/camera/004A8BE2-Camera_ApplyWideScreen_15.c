// Original IGI.EXE function: Camera_ApplyWideScreen_15 (VA 0x004A8BE2; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_15.h"
long double Camera_ApplyWideScreen_15(void* context , long double param_2 )

{
    *(context - 0x9e) = param_2;
    long double result = *(context - 0x9e);

    if (!(*(context - 0x97) & 0x40))
    {
        *(context - 0x90) = 1;
        return result + g_5443c4;
    }

    *(context - 0x90) = 7;
    return result;
}
