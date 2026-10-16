#include "004596C0-AI_AnimationDNotFound_5.h"
/* 0x004596c0 AI_AnimationDNotFound_5 full linked: callers=0 callees=6 */
void* sub_4596c0(void* a1, void* a2)

{
    int32_t eax = *(a2 + 0xd0c);
    *(a2 + 0x696) = 0;

    if (eax == 0xffffffff)
        sub_489e70(a2, 2, 0f);
    else if (!sub_4d74f0(a2 + 0x68, 0, eax))
    {
        int32_t var_8_2 = *(a2 + 0xd0c);
        Warning_Show("Animation #%d not found");
        sub_489e70(a2, 2, 0f);
    }
    else
        sub_489ea0(a2, *(a2 + 0xd0c), 0, 0f);

    *(a2 + 0xd0c) = 0;
    sub_48a330(a2);
    *(a1 + 0x14) = sub_45c7e0;
    return a1;
}
