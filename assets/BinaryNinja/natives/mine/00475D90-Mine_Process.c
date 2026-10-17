// Original IGI.EXE function: Mine_Process (VA 0x00475D90; static CFG gate PASS, CFG score 1.000).
#include "Mine_Process.h"
int32_t Mine_Process(void* context, int32_t param_2)

{
    int32_t result = (*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0))(context, param_2);
    *(context + 0x23c) = *(context + 0x240) * 30.0f;
    return result;
}
