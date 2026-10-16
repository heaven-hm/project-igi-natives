#include "00454100-AI_SelectTarget_5.h"
/* 0x00454100 AI_SelectTarget_5 full linked: callers=0 callees=2 */
void* sub_454100(void* a1, int32_t a2)

{
    void* result = Table_GetAt(a2 + 0x4c4, 0);
    int32_t ebx = *(a1 + 8);

    if (!(ebx & 4))
    {
        void* edx = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 8;
        int32_t eax_1 = *(edx + 0x20);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (ebx & 0x10000)
    {
        void* ecx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 9;
        int32_t eax_4 = *(ecx_2 + 0x24);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    if (ebx & 0x20000)
    {
        void* eax_6 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xa;
        int32_t eax_7 = *(eax_6 + 0x28);
        *(a1 + 0x14) = eax_7;
        return eax_7(a1, a2);
    }

    if (!(ebx & 1))
        return result;

    sub_4f2350(result, 1);

    if (!(ebx & 0x200000))
    {
        int32_t* ecx_4 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0;
        int32_t eax_12 = *ecx_4;
        *(a1 + 0x14) = eax_12;
        return eax_12(a1, a2);
    }

    void* edx_2 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 5;
    int32_t eax_9 = *(edx_2 + 0x14);
    *(a1 + 0x14) = eax_9;
    return eax_9(a1, a2);
}
