#include "00454300-AI_CheckSector_5.h"
/* 0x00454300 AI_CheckSector_5 full linked: callers=0 callees=1 */
int32_t sub_454300(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_454330;
    return result;
}
