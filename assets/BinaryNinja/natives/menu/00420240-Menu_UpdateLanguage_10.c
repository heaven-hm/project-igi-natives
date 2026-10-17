// Original IGI.EXE function: Menu_UpdateLanguage_10 (VA 0x00420240; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_10.h"
void* Menu_UpdateLanguage_10(void* a1, int32_t a2, int32_t a3, int32_t a4 @ 0x14, int32_t a5)

{
    *(a1 + 0x20) = a2;
    *(a1 + 0x24) = a3;
    void* tmpD1 = *(a1 + 0x9c);
    *(a1 + 0x2c) = a4;
    *(a1 + 0xac) = a4 - *(tmpD1 + 0x2c) - *(*(a1 + 0x98) + 0x2c) - 6;
    *(a1 + 0x248) = a5;
    return a1;
}
