#include "00446AC0-Door_Setup.h"
/* 0x00446ac0 Door_Setup full linked: callers=0 callees=9 */
void* sub_446ac0(void* a1)

{
    sub_4c17c0(Level_StartMission_3(), a1);
    int32_t* eax_1 = *(a1 + 0xe8);

    if (eax_1)
        QTask_FindType(eax_1);

    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_3 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_7 = *(((eax_3 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_7)
            eax_7(a1);
    }

    sub_4f1340(a1 + 0x1a0);
    sub_4f1340(a1 + 0x1f0);
    sub_4f1340(a1 + 0x240);
    return sub_4c7560(*(a1 + 0x68), a1);
}
