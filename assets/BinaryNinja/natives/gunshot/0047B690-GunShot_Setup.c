#include "GunShot_Setup.h"
int32_t GunShot_Setup(int32_t* a1)

{
    if (a1[0x25])
    {
        int32_t valA1 = a1[0x1b];
        int32_t objC1 = a1[0x1c];
        int32_t* v_c = a1;
        int32_t v_8_1 = valA1;
        int32_t v_4_1 = objC1;
        int32_t i = 0;

        if (*AI_CombatTarget_18() > 0)
        {
            int32_t srcS1 = 8;
            int32_t* valA9;

            do
            {
                int32_t valA4 = 0;
                valA4 = *(*(AI_CombatTarget_18() + srcS1) + 0x1c);
                uint32_t valA6 = AI_UpdateSensors_17();
                (*(((valA4 + valA6 * 0x180) << 2) + &g_a96ae0))(*(AI_CombatTarget_18() + srcS1), &v_c);
                i += 1;
                srcS1 += 4;
                valA9 = AI_CombatTarget_18();
            } while (i < *valA9);
        }
    }

    Gun_CastRound(a1);
    Weapon_EjectShell_7(a1);
    int32_t result = a1[0x25];

    if (!result)
    {
        result = a1[0x1a];

        if (result)
        {
            result = a1[0x27];

            if (!result)
                return QTask_FindType(a1);
        }
    }

    return result;
}
