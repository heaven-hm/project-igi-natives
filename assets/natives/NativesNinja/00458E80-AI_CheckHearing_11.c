#include "00458E80-AI_CheckHearing_11.h"
/* 0x00458e80 AI_CheckHearing_11 full linked: callers=0 callees=1 */
int32_t sub_458e80(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_458eb0;
    return result;
}
