#include "00459380-AI_CheckVisibility_12.h"
/* 0x00459380 AI_CheckVisibility_12 full linked: callers=0 callees=2 */
void* sub_459380(void* a1, void* a2)

{
    *(a2 + 0x696) = 1;
    *(a2 + 0x33d) = 0;
    *(a2 + 0xd14) = 0;
    sub_489e70(a2, *(a1 + 0x10), 0f);
    void* result = sub_48a330(a2);
    *(a1 + 0x14) = sub_45c370;
    return result;
}
