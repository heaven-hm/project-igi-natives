#include "0043A3C0-AlarmLight_Setup.h"
/* 0x0043a3c0 AlarmLight_Setup full linked: callers=0 callees=8 */
void* AlarmLight_Setup(void* a1)

{
    sub_4c17c0(Level_InitTextures_4(), a1);
    sub_4f1340(a1 + 0x1a4);

    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_3 = sub_4f1220();
        int32_t edx_1 = 0;
        edx_1 = *(a1 + 0x1c);
        int32_t eax_4 = *(((eax_3 * 0x180 + edx_1) << 2) + &g_a96ae0);

        if (eax_4)
            eax_4(a1);
    }

    int32_t* eax_5 = *(a1 + 0xe8);

    if (eax_5)
        QTask_FindType(eax_5);

    sub_4dcdd0(a1);
    return sub_4c7560(*(a1 + 0x68), a1);
}
