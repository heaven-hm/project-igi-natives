#include "00465820-AI_MoveToNode_23.h"
/* 0x00465820 AI_MoveToNode_23 full linked: callers=3 callees=2 */
int32_t sub_465820(int32_t* a1, void* a2)

{
    a1[4] = 0xe147ae14;
    a1[5] = 0x40a6147a;

    if (sub_463180(a2))
    {
        __builtin_strncpy(&a1[4], "ffff", 4);
        a1[5] = 0x40966666;
    }

    *a1 = *(a2 + 0x20);
    a1[1] = *(a2 + 0x24);
    a1[2] = *(a2 + 0x28);
    int32_t result = *(a2 + 0x2c);
    a1[3] = result;
    *(a1 + 0x10) = *(a2 + 0x30) + *(a1 + 0x10);
    return result;
}
