// Original IGI.EXE function: Camera_ApplyPostProcess_4 (VA 0x004A537B; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_4.h"
int32_t Camera_ApplyPostProcess_4()

{
    g_544054 = sub_4a722a;
    g_544050 = Camera_ApplyLineFilter_11;
    g_544058 = Camera_ApplyPostProcess_10;
    g_54405c = Camera_ApplyWideScreen_10;
    g_544060 = sub_4a7278;
    g_544064 = Camera_ApplyLineFilter_11;
    return Camera_ApplyLineFilter_11;
}
