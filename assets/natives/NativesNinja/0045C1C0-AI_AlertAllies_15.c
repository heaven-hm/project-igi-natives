#include "0045C1C0-AI_AlertAllies_15.h"
/* 0x0045c1c0 AI_AlertAllies_15 full linked: callers=0 callees=1 */
int32_t sub_45c1c0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a2 + 0x664) = *(a2 + 0x688);
    int32_t result = *(a2 + 0x68c);
    *(a2 + 0x668) = result;
    *(a2 + 0x66c) = *(a2 + 0x690);
    *(a1 + 0x14) = sub_45c210;
    return result;
}
