// Original IGI.EXE function: FX_Font4Fnt (VA 0x00485FB0; static CFG gate PASS, CFG score 1.000).
#include "FX_Font4Fnt.h"
void* FX_Font4Fnt(int32_t context, int32_t param_2)

{
    void* data_val = FX_FragmentSimulate_6(context, param_2);

    if (!data_val)
        return 0;

    if (!*(data_val + 0x1c6))
        return Menu_HandleInput_3(*(g_bc2360 + 0x120), "font1.fnt");

    return Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
}
