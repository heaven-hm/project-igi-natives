#include "004C7560-DynObj_RegisterSymbol_9.h"
/* 0x004c7560 DynObj_RegisterSymbol_9 full linked: callers=60 callees=2 */
void* sub_4c7560(int32_t a1, void* a2)

{
    int32_t ebx = a1;
    void* ebp = a2;
    void* esi = *(ebp + 0x50);
    int32_t edi = 0;
    *(ebx + (*(esi + 0x34) << 2) + 0xe8) = 0;
    sub_4c6ce0(esi, ebp);
    sub_4c75f0(ebx, esi);
    int32_t ecx = 0;
    a2 = 0xfe;
    void* result;

    while (true)
    {
        int32_t eax_1 = *(esi + 0x34);
        int32_t edx_4 = 0;
        edx_4 = *(ebp + 0x1c);
        int16_t ebx_1 = 0;
        ebx_1 = *(((edx_4 + edi) << 2) + &g_a96ae0);
        *(ebx + ((ecx + eax_1 * 0xfe) << 1) + 0x118) -= ebx_1;
        ecx += 1;
        edi += 0x180;
        result = a2 - 1;
        bool cond:0_1 = a2 != 1;
        a2 = result;

        if (!cond:0_1)
            break;

        ebx = a1;
    }

    *(ebp + 0x50) = 0;
    return result;
}
