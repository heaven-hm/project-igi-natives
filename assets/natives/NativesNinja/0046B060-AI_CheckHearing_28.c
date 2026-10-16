#include "0046B060-AI_CheckHearing_28.h"
/* 0x0046b060 AI_CheckHearing_28 full linked: callers=3 callees=1 */
void* sub_46b060(int32_t a1)

{
    void* result = sub_46b040();
    *(result + 0x20) = a1;
    return result;
}
