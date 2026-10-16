#include "00453DE0-AI_MoveToNode_5.h"
/* 0x00453de0 AI_MoveToNode_5 full linked: callers=0 callees=4 */
void* sub_453de0(void* a1, float a2)

{
    float esi = a2;
    *(esi + 0x33d) = 0;
    *(esi + 0x696) = 0;
    a2 = sub_4d6520(esi + 0x68, 0f);
    sub_489e70(esi, *(a1 + 0x10), 0f);
    int32_t eax_1 = *(a1 + 0xc);
    void* result = eax_1 - 1;

    if (eax_1 == 1)
        result = sub_4d65b0(esi + 0x68, 0, sub_4d64e0(esi + 0x68, 0) * a2);

    *(a1 + 0x14) = sub_453e50;
    return result;
}
