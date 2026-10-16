#include "00420240-Menu_UpdateLanguage_10.h"
/* 0x00420240 Menu_UpdateLanguage_10 full linked: callers=2 callees=0 */
void* Menu_UpdateLanguage_10(void* a1, int32_t a2, int32_t a3, int32_t a4 @ 0x14, int32_t a5)

{
    *(a1 + 0x20) = a2;
    *(a1 + 0x24) = a3;
    void* edx_1 = *(a1 + 0x9c);
    *(a1 + 0x2c) = a4;
    *(a1 + 0xac) = a4 - *(edx_1 + 0x2c) - *(*(a1 + 0x98) + 0x2c) - 6;
    *(a1 + 0x248) = a5;
    return a1;
}
