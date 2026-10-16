#include "00455BA0-AI_SelectTarget_7.h"
/* 0x00455ba0 AI_SelectTarget_7 full linked: callers=0 callees=2 */
int32_t sub_455ba0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    sub_4d6520(a2 + 0x68, 0f);
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_455be0;
    return result;
}
