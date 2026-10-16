#include "00452080-AI_CheckHearing_3.h"
/* 0x00452080 AI_CheckHearing_3 full linked: callers=8 callees=2 */
int32_t* sub_452080(void* a1)

{
    int32_t* result = g_58a9c8;

    if (!*result)
        return 0;

    sub_4af960(result);
    result[1] = 0;
    *result = 0;
    sub_4af8f0(a1 + 0xe0, result);
    return result;
}
