#include "00457CB0-AI_MoveToNode_9.h"
/* 0x00457cb0 AI_MoveToNode_9 full linked: callers=0 callees=4 */
void* sub_457cb0(void* a1, float a2)

{
    float esi = a2;
    *(esi + 0x33d) = 0;
    *(esi + 0x696) = 0;
    a2 = sub_4d6520(esi + 0x68, 0f);
    sub_489e70(esi, *(a1 + 0x10), 0f);
    void* result = *(a1 + 0xc);

    if (result >= 2 && (result <= 3 || result == 0x11))
        result = sub_4d65b0(esi + 0x68, 0, sub_4d64e0(esi + 0x68, 0) * a2);

    *(a1 + 0x14) = sub_457d30;
    return result;
}
