// Original IGI.EXE function: Script_ExecuteLevelScript_30 (VA 0x004FDD30; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_30.h"
void Script_ExecuteLevelScript_30(void* a1, int32_t a2)

{
    int32_t srcS = *(a1 + 0xf0);

    if (!srcS)
        return;

    if (srcS - 1 != a2)
    {
        int32_t valA1 = *(a1 + 0x6c);
        int32_t dstD1 = *(valA1 + (a2 << 2));
        *(valA1 + (a2 << 2)) = *(valA1 + (srcS << 2) - 4);
        *(*(a1 + 0x6c) + (*(a1 + 0xf0) << 2) - 4) = dstD1;
    }

    *(a1 + 0xf0) -= 1;
}
