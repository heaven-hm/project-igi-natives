// Original IGI.EXE function: Script_ParseEnumReal32_13 (VA 0x004F23D0; static CFG gate FAIL, CFG score 0.667).
#include "Script_ParseEnumReal32_13.h"
int32_t Script_ParseEnumReal32_13(void* context, int32_t param_2)

{
    int32_t temp_val = 0;
    temp_val = *(context + 0x1c);
    return (*(((*g_a76c10 * 0x180 + temp_val) << 2) + &g_a96ae0))(context, param_2);
}
