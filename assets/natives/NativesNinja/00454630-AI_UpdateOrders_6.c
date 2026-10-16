#include "00454630-AI_UpdateOrders_6.h"
/* 0x00454630 AI_UpdateOrders_6 full linked: callers=0 callees=1 */
int32_t sub_454630(void* a1, void* a2)

{
    int32_t result = *(a1 + 8);

    if (!(result & 4))
    {
        void* ecx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 8;
        int32_t eax_1 = *(ecx_1 + 0x20);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (result & 0x20000)
    {
        void* ecx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xa;
        int32_t eax_4 = *(ecx_2 + 0x28);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    if (!(result & 1))
        return result;

    sub_48a320(a2);
    int32_t* ecx_3 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_7 = *ecx_3;
    *(a1 + 0x14) = eax_7;
    return eax_7(a1, a2);
}
