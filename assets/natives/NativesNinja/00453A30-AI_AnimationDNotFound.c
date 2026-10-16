#include "00453A30-AI_AnimationDNotFound.h"
/* 0x00453a30 AI_AnimationDNotFound full linked: callers=0 callees=5 */
int32_t sub_453a30(void* a1, void* a2)

{
    int32_t eax = *(a2 + 0xcfc);
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;

    if (eax == 0xffffffff)
    {
        int32_t eax_6 = sub_489e70(a2, *(a1 + 0x10), 0f);
        *(a1 + 0x14) = sub_453ae0;
        return eax_6;
    }

    if (sub_4d74f0(a2 + 0x68, 0, eax))
    {
        int32_t eax_3 = sub_4d61d0(a2 + 0x68, 0, *(a2 + 0xcfc), 0, 0f);
        *(a1 + 0x14) = sub_453ae0;
        return eax_3;
    }

    int32_t var_c_1 = *(a2 + 0xcfc);
    Warning_Show("Animation #%d not found");
    int32_t eax_5 = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_453ae0;
    return eax_5;
}
