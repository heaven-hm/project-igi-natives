#include "00443990-Terminal_Setup.h"
/* 0x00443990 Terminal_Setup full linked: callers=0 callees=6 */
char* sub_443990(void* a1)

{
    sub_4c17c0(Level_StartMission_3(), a1);
    (*((sub_481340() << 2) + &g_a976e0))(a1);

    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_5 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_9 = *(((eax_5 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_9)
            eax_9(a1);
    }

    return sub_4f1340(a1 + 0x250);
}
