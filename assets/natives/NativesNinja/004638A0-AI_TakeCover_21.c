#include "004638A0-AI_TakeCover_21.h"
/* 0x004638a0 AI_TakeCover_21 full linked: callers=9 callees=6 */
struct status_msg* sub_4638a0(void* a1, int32_t a2, int32_t a3)

{
    int32_t* eax = *(a1 + 0x840);

    if (eax)
    {
        void* eax_1 = *eax;

        if (eax_1)
            sub_4e6c00(eax_1);

        Qtask_UpdateList(*(a1 + 0x840));
        *(a1 + 0x840) = 0;
    }

    uint32_t var_30 = sub_4b47c0(Level_SetMission_5(), a3);
    int32_t var_34 = a2;
    char var_20[0x20];
    Game_DataSymbolLoad(&var_20, "%s%d");
    return sub_4e6b00(a1, &var_20);
}
