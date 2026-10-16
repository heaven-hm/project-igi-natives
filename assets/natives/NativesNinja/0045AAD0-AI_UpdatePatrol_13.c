#include "0045AAD0-AI_UpdatePatrol_13.h"
/* 0x0045aad0 AI_UpdatePatrol_13 full linked: callers=0 callees=1 */
int32_t sub_45aad0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45ab00;
    return result;
}
