// Original IGI.EXE function: FlatSky_Action (VA 0x0051EC30; static CFG gate PASS, CFG score 1.000).
#include "FlatSky_Action.h"
int32_t FlatSky_Action(void* a1)

{
    int32_t result = *(a1 + 0x44);

    if (result)
    {
        result = Struct_Clear36(a1 + 0x20);
        *(a1 + 0x44) = 0;
    }

    return result;
}
