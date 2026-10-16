#include "004FA7A0-Script_ExecuteLevelScript_26.h"
/* 0x004fa7a0 Script_ExecuteLevelScript_26 full linked: callers=1 callees=4 */
int32_t sub_4fa7a0(void* a1, int32_t a2, int32_t a3)

{
    int32_t eax;
    int32_t ecx;
    int32_t edx;
    sub_4fa4e0(eax, edx, ecx, a1, 0xa);
    sub_4fa620(a1, a3);
    sub_4b17c0(*(a1 + 4));
    int32_t result = sub_4b1700(*(a1 + 4), a2, a3);
    result = 1;
    return result;
}
