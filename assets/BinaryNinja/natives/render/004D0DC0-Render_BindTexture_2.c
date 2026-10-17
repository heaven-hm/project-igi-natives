// Original IGI.EXE function: Render_BindTexture_2 (VA 0x004D0DC0; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_2.h"
int32_t Render_BindTexture_2(void* context, int32_t param_2, int32_t param_3)

{
    int32_t result = *(*(context + 0xc) + 0x14);
    *(result + param_2 * 0x14 + 4) = param_3;
    return result;
}
