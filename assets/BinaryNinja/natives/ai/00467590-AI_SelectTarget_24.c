// Original IGI.EXE function: AI_SelectTarget_24 (VA 0x00467590; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_24.h"
int32_t AI_SelectTarget_24(int32_t context)

{
    int32_t temp_val = g_5bdc78;

    if (!temp_val)
        return 0;

    return temp_val + context * 0xcc + 0x70;
}
