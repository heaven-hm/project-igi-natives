#include "0042E940-Car_Process.h"
/* 0x0042e940 Car_Process full linked: callers=0 callees=14 */
int32_t* Car_Process(void* a1)

{
    sub_4f4640(a1);

    if (!*(a1 + 0x2ed5))
        sub_4c7560(Level_StartMission_4(), a1);

    sub_4c17c0(Level_InitTextures_4(), a1);
    void* eax_4 = *(a1 + 0x74c);

    if (eax_4)
        sub_4c1830(eax_4);

    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_6 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_10 = *(((eax_6 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_10)
            eax_10(a1);
    }

    sub_4f1340(a1 + 0x928);
    sub_4f1340(a1 + 0x978);
    sub_4f1340(a1 + 0x9c8);
    sub_4c17c0(Level_InitSprites_4(), a1);
    return sub_489b90(a1 + 0xa90);
}
