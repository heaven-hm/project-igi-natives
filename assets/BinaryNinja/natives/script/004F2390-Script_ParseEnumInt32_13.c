// Original IGI.EXE function: Script_ParseEnumInt32_13 (VA 0x004F2390; static CFG gate FAIL, CFG score 0.667).
#include "Script_ParseEnumInt32_13.h"
void* Script_ParseEnumInt32_13(void* a1)

{
    int32_t tmpD = 0;
    void* valA1 = a1;
    tmpD = *(valA1 + 0x1c);
    (*(((*g_a76c08 * 0x180 + tmpD) << 2) + &g_a96ae0))(valA1, &a1);
    return a1;
}
