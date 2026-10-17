// Original IGI.EXE function: AI_SelectTarget_24 (VA 0x00467590; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_24.h"
int32_t AI_SelectTarget_24(int32_t a1)

{
    int32_t tmpD = g_5bdc78;

    if (!tmpD)
        return 0;

    return tmpD + a1 * 0xcc + 0x70;
}
