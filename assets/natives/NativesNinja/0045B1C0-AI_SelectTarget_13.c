#include "0045B1C0-AI_SelectTarget_13.h"
/* 0x0045b1c0 AI_SelectTarget_13 full linked: callers=0 callees=2 */
void* sub_45b1c0(void* a1, int32_t a2)

{
    void* result = Table_GetAt(a2 + 0x4c4, 0);
    int32_t ebx = *(a1 + 8);

    if (!(ebx & 4))
    {
        void* edx = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t eax_1 = *(edx + 0x74);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (ebx & 0x10000)
    {
        void* ecx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t eax_4 = *(ecx_2 + 0x78);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    if (ebx & 0x20000)
    {
        void* eax_6 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t eax_7 = *(eax_6 + 0x80);
        *(a1 + 0x14) = eax_7;
        return eax_7(a1, a2);
    }

    if (!(ebx & 1))
        return result;

    sub_4f2350(result, 1);

    if (!(ebx & 0x2000000))
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
    *(a1 + 0x10) = 0xa;
    int32_t eax_9 = *(edx_2 + 0x28);
    *(a1 + 0x14) = eax_9;
    return eax_9(a1, a2);
}
