#include "00482580-FX_DebrisSpawn_2.h"
/* 0x00482580 FX_DebrisSpawn_2 full linked: callers=2 callees=2 */
int32_t sub_482580(void* a1)

{
    int32_t* eax = *(a1 + 0x68);

    if (eax)
    {
        void* esi_1 = *eax;
        int16_t eax_1 = HumanPlayer_LoadParameters_12();
        int32_t ecx;
        ecx = *(esi_1 + 0x1c);

        if (TaskType_IsDerivedFrom(ecx, eax_1))
        {
            int32_t* eax_3 = *(esi_1 + 0xde8);

            if (eax_3 && *eax_3)
                return 1;
        }
    }

    return 0;
}
