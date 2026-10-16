#include "0041EC70-ListBox_LoadParameters.h"
/* 0x0041ec70 ListBox_LoadParameters full linked: callers=0 callees=3 */
int32_t ListBox_LoadParameters(void* a1)

{
    int32_t eax = 0;
    void* edi = *(a1 + 0xd4);
    int32_t ebp = *(a1 + 0xbe8);
    void* ebx = *(a1 + 0xd8);
    eax = *(edi + 0x1c);
    (*((eax << 2) + &g_a970e0))(edi);
    int32_t ecx = 0;
    ecx = *(ebx + 0x1c);
    (*((ecx << 2) + &g_a970e0))(ebx);
    int32_t ecx_1 = *(a1 + 0xbe0);

    if (ecx_1)
    {
        int32_t eax_3;

        if (!*(edi + 0x4b))
            eax_3 = *(a1 + 0x50);

        if (*(edi + 0x4b) || eax_3 == 0xffffffff)
        {
            int32_t edx_5 = *(a1 + 0xbe4) - 1;
            *(a1 + 0xbe4) = edx_5;

            if (edx_5 == 0xffffffff)
                *(a1 + 0xbe4) = ecx_1 - 1;
        }
        else if (*(ebx + 0x4b) || eax_3 == 0xfffffffe)
            *(a1 + 0xbe4) = (*(a1 + 0xbe4) + 1) % ecx_1;

        *(a1 + 0xbe8) = *(a1 + *(a1 + 0xbe4) * 0x2c + 0xe0);
    }

    int32_t eax_11 = *(a1 + 0xbe8);
    *(a1 + 0x50) = 0;

    if (ebp != eax_11)
    {
        sub_4e7180("menu_high", 0, 0);
        sub_4f16e0(a1 + 0xce8, a1);
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
