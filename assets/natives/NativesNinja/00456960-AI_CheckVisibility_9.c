#include "00456960-AI_CheckVisibility_9.h"
/* 0x00456960 AI_CheckVisibility_9 full linked: callers=0 callees=5 */
int32_t sub_456960(void* a1, void* a2)

{
    int32_t eax = *(a2 + 0xd04);
    *(a2 + 0x696) = 0;

    if (eax == 0xffffffff)
    {
        int32_t eax_6 = sub_489e70(a2, 2, 0f);
        *(a2 + 0xd04) = 0;
        *(a1 + 0x14) = sub_456a10;
        return eax_6;
    }

    if (sub_4d74f0(a2 + 0x68, 0, eax))
    {
        int32_t eax_3 = sub_489ea0(a2, *(a2 + 0xd04), 0, 0f);
        *(a2 + 0xd04) = 0;
        *(a1 + 0x14) = sub_456a10;
        return eax_3;
    }

    int32_t var_c_1 = *(a2 + 0xd04);
    Warning_Show("Animation #%d not found");
    int32_t eax_5 = sub_489e70(a2, 2, 0f);
    *(a2 + 0xd04) = 0;
    *(a1 + 0x14) = sub_456a10;
    return eax_5;
}
