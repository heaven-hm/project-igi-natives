#include "0043F360-Wire_Setup.h"
/* 0x0043f360 Wire_Setup full linked: callers=0 callees=5 */
void* Wire_Setup(void* a1)

{
    sub_4c17c0(Level_StartMission_3(), a1);

    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_2 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_6 = *(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_6)
            eax_6(a1);
    }

    return sub_4c7560(*(a1 + 0x68), a1);
}
