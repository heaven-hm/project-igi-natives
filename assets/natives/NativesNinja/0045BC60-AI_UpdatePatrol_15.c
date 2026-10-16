#include "0045BC60-AI_UpdatePatrol_15.h"
/* 0x0045bc60 AI_UpdatePatrol_15 full linked: callers=0 callees=1 */
int32_t sub_45bc60(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_458eb0;
    return result;
}
