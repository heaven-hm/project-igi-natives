#include "00452C10-AI_MoveToNode_4.h"
/* 0x00452c10 AI_MoveToNode_4 full linked: callers=5 callees=3 */
void* sub_452c10(int32_t* a1, int32_t a2, int32_t a3)

{
    a1[4] -= 1;
    sub_452b80(a1, a2, a3, 0);
    void* result = a1[4];

    if (result)
        return result;

    sub_4af960(a1);
    a1[1] = 0;
    *a1 = 0;
    return sub_4af8f0(&g_58a9e8, a1);
}
