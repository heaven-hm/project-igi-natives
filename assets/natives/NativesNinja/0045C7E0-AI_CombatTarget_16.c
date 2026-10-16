#include "0045C7E0-AI_CombatTarget_16.h"
/* 0x0045c7e0 AI_CombatTarget_16 full linked: callers=0 callees=1 */
int32_t sub_45c7e0(void* a1, void* a2)

{
    int32_t result = *(a1 + 8);

    if (!(result & 4))
    {
        void* ecx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t eax_1 = *(ecx_1 + 0x74);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (result & 0x10000)
    {
        void* ecx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t eax_4 = *(ecx_2 + 0x78);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    if (result & 0x20000)
    {
        void* ecx_3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t eax_7 = *(ecx_3 + 0x80);
        *(a1 + 0x14) = eax_7;
        return eax_7(a1, a2);
    }

    if (!(result & 0xfd81fe1) && *(a2 + 0xd0c) != 0xffffffff)
        return result;

    sub_48a320(a2);
    int32_t* ecx_4 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_10 = *ecx_4;
    *(a1 + 0x14) = eax_10;
    return eax_10(a1, a2);
}
