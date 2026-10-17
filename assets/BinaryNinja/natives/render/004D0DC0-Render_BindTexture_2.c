// Original IGI.EXE function: Render_BindTexture_2 (VA 0x004D0DC0; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_2.h"
int32_t Render_BindTexture_2(void* a1, int32_t a2, int32_t a3)

{
    int32_t result = *(*(a1 + 0xc) + 0x14);
    *(result + a2 * 0x14 + 4) = a3;
    return result;
}
