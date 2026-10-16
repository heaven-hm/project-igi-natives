#include "004FE120-Script_SpawnNewTask_31.h"
/* 0x004fe120 Script_SpawnNewTask_31 full linked: callers=11 callees=2 */
int32_t sub_4fe120(void* a1, int32_t a2, int32_t* a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int16_t a8, int32_t a9)

{
    int32_t eax = *(a1 + 0xf0);

    if (eax < *(a1 + 0xf8))
    {
        void* eax_1 = *(*(a1 + 0x6c) + (eax << 2));
        memcpy(eax_1, a2, 0x18);
        memcpy(eax_1 + 0x40, a2, 0x18);
        *(eax_1 + 0x18) = *a3;
        *(eax_1 + 0x1c) = a3[1];
        *(eax_1 + 0x20) = a3[2];
        *(eax_1 + 0x24) = g_a7a4dc;
        int32_t edx_5 = (*g_a7a4dc + 1) & 0x8000000f;

        if (edx_5 < 0)
            edx_5 = ((edx_5 - 1) | 0xfffffff0) + 1;

        g_a7a4dc = edx_5;
        *(eax_1 + 0x26) = a8;
        *(eax_1 + 0x30) = a4;
        *(eax_1 + 0x38) = a6;
        *(eax_1 + 0x3c) = a7;
        *(eax_1 + 0x2c) = a5;
        *(eax_1 + 0x28) = 0;
        *(eax_1 + 0x2a) = 0;

        if (a9)
        {
            *(eax_1 + 0x34) = 1f / a9;
            int32_t eax_3 = *(a1 + 0xf0) + 1;
            *(a1 + 0xf0) = eax_3;
            return eax_3;
        }

        *(eax_1 + 0x34) = 0x3f800000;
        eax = *(a1 + 0xf0) + 1;
        *(a1 + 0xf0) = eax;
    }

    return eax;
}
