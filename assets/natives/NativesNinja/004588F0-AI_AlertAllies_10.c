#include "004588F0-AI_AlertAllies_10.h"
/* 0x004588f0 AI_AlertAllies_10 full linked: callers=0 callees=1 */
int32_t sub_4588f0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_458dd0;
    return result;
}
