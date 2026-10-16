#include "gi_platform.h"
#include "0047E9A0-Weapon_ComputeAccuracy_9.h"
struct status_msg* Weapon_ComputeAccuracy_9(int32_t* a1, int32_t* a2, uint32_t a3, uint32_t a4)

{
    int32_t kind;
    kind = g_5c1144;
    struct status_msg* result = QTask_HandleInput(Script_FormatString(), kind, 0);
    int32_t* v_10 = a1;
    result->head[0x10] = a3;
    result->head[0xf] = a4;
    memcpy(&result->head[8], a1, 0x18);
    uint32_t v_c = a3;
    int32_t i = 0;

    if (*AI_CombatTarget_18() > 0)
    {
        int32_t srcS1 = 8;
        int32_t* valA10;

        do
        {
            int32_t tmpD1 = 0;
            tmpD1 = *(*(AI_CombatTarget_18() + srcS1) + 0x1c);
            uint32_t valA6 = Weapon_ReloadClip_9();
            ((int(*)())(uintptr_t)(*(((tmpD1 + valA6 * 0x180) << 2) + &g_a96ae0)))(*(AI_CombatTarget_18() + srcS1), &v_10);
            i += 1;
            srcS1 += 4;
            valA10 = AI_CombatTarget_18();
        } while (i < *valA10);
    }

    if (a2 && *a2)
    {
        uint32_t valA12 = Weapon_CheckAmmo_8();
        int32_t tmpD3 = 0;
        tmpD3 = (*(int32_t*)(uintptr_t)(*a2 + 0x1c));

        if (*(((valA12 * 0x180 + tmpD3) << 2) + &g_a96ae0))
        {
            int32_t valA16 = g_5c1148;
            v_10 = a2;
            int32_t srcS3 = *a2;
            int32_t v_8_1 = valA16 + 0x18;
            int32_t v_c_1 = 0;
            int32_t v_4_1 = 0x45000000;
            uint32_t valA19 = Weapon_CheckAmmo_8();
            int32_t tmpD4 = 0;
            tmpD4 = *(srcS3 + 0x1c);
            ((int(*)())(uintptr_t)(*(((valA19 * 0x180 + tmpD4) << 2) + &g_a96ae0)))(srcS3, &v_10);
        }
    }

    return result;
}
