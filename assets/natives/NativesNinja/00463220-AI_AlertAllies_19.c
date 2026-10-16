#include "00463220-AI_AlertAllies_19.h"
/* 0x00463220 AI_AlertAllies_19 full linked: callers=14 callees=2 */
int32_t sub_463220(void* a1, float a2)

{
    *(a1 + 0x50c) = a2;
    *(a1 + 0x508) = a2;
    sub_4b3be0(a1 + 0x78, a2);
    return sub_4d38c0(a1 + 0x78, a1 + 0x68);
}
