// Original IGI.EXE function: FX_Font4Fnt (VA 0x00485FB0; static CFG gate PASS, CFG score 1.000).
#include "FX_Font4Fnt.h"
void* FX_Font4Fnt(int32_t a1, int32_t a2)

{
    void* valA = FX_FragmentSimulate_6(a1, a2);

    if (!valA)
        return 0;

    if (!*(valA + 0x1c6))
        return Menu_HandleInput_3(*(g_bc2360 + 0x120), "font1.fnt");

    return Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
}
