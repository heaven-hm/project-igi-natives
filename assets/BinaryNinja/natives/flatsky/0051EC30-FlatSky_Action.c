// Original IGI.EXE function: FlatSky_Action (VA 0x0051EC30; static CFG gate PASS, CFG score 1.000).
#include "FlatSky_Action.h"
int32_t FlatSky_Action(void* context)

{
    int32_t result = *(context + 0x44);

    if (result)
    {
        result = Struct_Clear36(context + 0x20);
        *(context + 0x44) = 0;
    }

    return result;
}
