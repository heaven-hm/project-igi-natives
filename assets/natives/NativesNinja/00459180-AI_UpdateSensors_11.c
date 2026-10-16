#include "00459180-AI_UpdateSensors_11.h"
/* 0x00459180 AI_UpdateSensors_11 full linked: callers=0 callees=2 */
void* sub_459180(void* a1, int32_t a2)

{
    void* result = Table_GetAt(a2 + 0x4c4, 0);
    int32_t ecx = *(a1 + 8);

    if (!(ecx & 4))
    {
        void* edx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t eax_1 = *(edx_1 + 0x74);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, a2);
    }

    if (ecx & 0x10000)
    {
        void* ecx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1f;
        int32_t eax_4 = *(ecx_2 + 0x7c);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, a2);
    }

    if (ecx & 0x20000)
    {
        void* eax_6 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x22;
        int32_t eax_7 = *(eax_6 + 0x88);
        *(a1 + 0x14) = eax_7;
        return eax_7(a1, a2);
    }

    if (!(ecx & 1))
        return result;

    sub_4f2350(result, 1);
    void* edx_3 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0x1a;
    int32_t eax_9 = *(edx_3 + 0x68);
    *(a1 + 0x14) = eax_9;
    return eax_9(a1, a2);
}
