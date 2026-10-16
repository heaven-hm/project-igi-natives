#include "0045CA50-AI_CheckHearing_16.h"
/* 0x0045ca50 AI_CheckHearing_16 full linked: callers=0 callees=1 */
int32_t sub_45ca50(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45ca80;
    return result;
}
