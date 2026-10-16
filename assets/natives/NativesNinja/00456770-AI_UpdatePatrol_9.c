#include "00456770-AI_UpdatePatrol_9.h"
/* 0x00456770 AI_UpdatePatrol_9 full linked: callers=0 callees=2 */
int32_t sub_456770(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 1;
    int32_t result =
        sub_4d61d0(a2 + 0x68, 0, *(sub_489e10(a2 + 0x254, *(a2 + 0x2e8)) + 4), 0, 0f);
    *(a1 + 0x14) = sub_4561a0;
    return result;
}
