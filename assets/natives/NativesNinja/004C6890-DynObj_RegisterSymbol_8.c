#include "004C6890-DynObj_RegisterSymbol_8.h"
/* 0x004c6890 DynObj_RegisterSymbol_8 full linked: callers=13 callees=0 */
void* sub_4c6890(void* a1, void* a2, int32_t a3)

{
    if (a3 == 0xffffffff)
    {
        void* ecx = *(a1 + 0xd18);

        if (!ecx)
        {
            *(a1 + 0xd18) = a2;
            *(a2 + 0x58) = 0;
            *(*(a1 + 0xd18) + 0x54) = 0;
            return a1;
        }

        *(ecx + 0x54) = a2;
        void* ecx_1 = *(a1 + 0xd18);
        *(*(ecx_1 + 0x54) + 0x58) = ecx_1;
        void* ecx_3 = *(*(a1 + 0xd18) + 0x54);
        *(a1 + 0xd18) = ecx_3;
        *(ecx_3 + 0x54) = 0;
        return a1;
    }

    void* edx_3 = *(a1 + (a3 << 2) + 0xd1c);

    if (!edx_3)
    {
        *(a1 + (a3 << 2) + 0xd1c) = a2;
        *(a2 + 0x58) = 0;
        void* eax_1 = *(a1 + (a3 << 2) + 0xd1c);
        *(eax_1 + 0x54) = 0;
        return eax_1;
    }

    *(edx_3 + 0x54) = a2;
    void* edx_4 = *(a1 + (a3 << 2) + 0xd1c);
    *(*(edx_4 + 0x54) + 0x58) = edx_4;
    void* edx_6 = *(*(a1 + (a3 << 2) + 0xd1c) + 0x54);
    *(a1 + (a3 << 2) + 0xd1c) = edx_6;
    *(edx_6 + 0x54) = 0;
    return a3;
}
