// Original IGI.EXE function: AIConfig_RegisterConfig_2 (VA 0x00407CD0; static CFG gate PASS, CFG score 1.000).
#include "AIConfig_RegisterConfig_2.h"
int32_t AIConfig_RegisterConfig_2(int32_t a1)

{
    if (a1 >= 0 && a1 < 0x180)
        return *(a1 * 0x30 + &g_af5f05);

    return 0;
}
