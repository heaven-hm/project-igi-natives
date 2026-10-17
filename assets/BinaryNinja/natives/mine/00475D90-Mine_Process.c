// Original IGI.EXE function: Mine_Process (VA 0x00475D90; static CFG gate PASS, CFG score 1.000).
#include "Mine_Process.h"
int32_t Mine_Process(void* a1, int32_t a2)

{
    int32_t result = (*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0))(a1, a2);
    *(a1 + 0x23c) = *(a1 + 0x240) * 30f;
    return result;
}
