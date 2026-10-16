#include "004585D0-AI_CheckVisibility_10.h"
/* 0x004585d0 AI_CheckVisibility_10 full linked: callers=0 callees=1 */
int32_t sub_4585d0(void* a1, void* a2)

{
    *(a2 + 0xd18) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45b2f0;
    return result;
}
