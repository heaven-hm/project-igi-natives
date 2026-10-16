#include "00465700-AI_CheckVisibility_23.h"
/* 0x00465700 AI_CheckVisibility_23 full linked: callers=1 callees=1 */
int32_t sub_465700(void* a1)

{
    char result = *(a1 + 0xda);

    if (result)
    {
        result = sub_4d38c0(a1 + 0x78, a1 + 0x68);
        *(a1 + 0xda) = 0;
    }

    return result;
}
