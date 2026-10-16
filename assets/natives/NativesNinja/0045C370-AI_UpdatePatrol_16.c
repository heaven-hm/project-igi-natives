#include "0045C370-AI_UpdatePatrol_16.h"
/* 0x0045c370 AI_UpdatePatrol_16 full linked: callers=0 callees=1 */
int32_t sub_45c370(void* a1, void* a2)

{
    int32_t ecx = *(a1 + 8);

    if (!(ecx & 4))
    {
        void* ecx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t eax_1 = *(ecx_1 + 0x74);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (ecx & 0x20000)
    {
        void* ecx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x22;
        int32_t eax_4 = *(ecx_2 + 0x88);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    int32_t result = *(a2 + 0xd14);

    if (result <= 0x13)
    {
        result += 1;
        *(a2 + 0xd14) = result;
    }
    else if (ecx & 0x10000)
    {
        void* ecx_3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1f;
        int32_t eax_7 = *(ecx_3 + 0x7c);
        *(a1 + 0x14) = eax_7;
        return eax_7(a1, a2);
    }

    if (!(ecx & 1))
        return result;

    sub_48a320(a2);
    void* eax_9 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0x1a;
    int32_t eax_10 = *(eax_9 + 0x68);
    *(a1 + 0x14) = eax_10;
    return eax_10(a1, a2);
}
