// Original IGI.EXE function: FX_DebrisSpawn_27 (VA 0x0048FFA0; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_27.h"
int32_t* FX_DebrisSpawn_27()

{
    int32_t* entity_1 = g_5c8e14;

    if (entity_1)
    {
        int32_t* data_1 = g_5c8e1c;

        if (data_1)
        {
            (*(*data_1 + 0x20))(data_1);
            int32_t* data_2 = g_5c8e1c;
            (*(*data_2 + 8))(data_2);
            entity_1 = g_5c8e14;
            g_5c8e1c = 0;
        }

        (*(*entity_1 + 8))(entity_1);
        g_5c8e14 = 0;
    }

    return FX_UnableToRemoveWinpro(sub_48fed0);
}
