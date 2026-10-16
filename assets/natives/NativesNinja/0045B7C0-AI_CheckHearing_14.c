#include "0045B7C0-AI_CheckHearing_14.h"
/* 0x0045b7c0 AI_CheckHearing_14 full linked: callers=0 callees=1 */
int32_t sub_45b7c0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_458810;
    return result;
}
