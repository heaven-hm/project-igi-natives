// Original IGI.EXE function: GunShot_Setup (VA 0x0047B690; static CFG gate PASS, CFG score 1.000).
#include "GunShot_Setup.h"
int32_t GunShot_Setup(int32_t* context)

{
    if (context[0x25])
    {
        int32_t data_1 = context[0x1b];
        int32_t entity_1 = context[0x1c];
        int32_t* item_c = context;
        int32_t item_8_1 = data_1;
        int32_t item_4_1 = entity_1;
        int32_t i = 0;

        if (*AI_CombatTarget_18() > 0)
        {
            int32_t source_1 = 8;
            int32_t* data_9;

            do
            {
                int32_t data_4 = 0;
                data_4 = *(*(AI_CombatTarget_18() + source_1) + 0x1c);
                uint32_t data_6 = AI_UpdateSensors_17();
                (*(((data_4 + data_6 * 0x180) << 2) + &g_a96ae0))(*(AI_CombatTarget_18() + source_1), &item_c);
                i += 1;
                source_1 += 4;
                data_9 = AI_CombatTarget_18();
            } while (i < *data_9);
        }
    }

    Gun_CastRound(context);
    Weapon_EjectShell_7(context);
    int32_t result = context[0x25];

    if (!result)
    {
        result = context[0x1a];

        if (result)
        {
            result = context[0x27];

            if (!result)
                return QTask_FindType(context);
        }
    }

    return result;
}
