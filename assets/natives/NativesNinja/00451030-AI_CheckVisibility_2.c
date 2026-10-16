#include "00451030-AI_CheckVisibility_2.h"
/* 0x00451030 AI_CheckVisibility_2 full linked: callers=16 callees=1 */
int32_t* sub_451030(void* a1)

{
    int32_t* result = *(a1 + 0x1508);

    if (!*result)
        return nullptr;

    sub_4af960(result);
    return result;
}
