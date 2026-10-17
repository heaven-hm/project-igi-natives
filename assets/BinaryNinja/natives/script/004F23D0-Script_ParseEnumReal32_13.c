// Original IGI.EXE function: Script_ParseEnumReal32_13 (VA 0x004F23D0; static CFG gate FAIL, CFG score 0.667).
#include "Script_ParseEnumReal32_13.h"
int32_t Script_ParseEnumReal32_13(void* a1, int32_t a2)

{
    int32_t tmpD = 0;
    tmpD = *(a1 + 0x1c);
    return (*(((*g_a76c10 * 0x180 + tmpD) << 2) + &g_a96ae0))(a1, a2);
}
