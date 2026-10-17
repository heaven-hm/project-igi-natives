// Original IGI.EXE function: FX_DebrisSpawn_19 (VA 0x0048DD10; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_19.h"
int32_t FX_DebrisSpawn_19(void* context)

{
    void* data_2 = Table_GetAt(*(context + 0x14) + 0x4c4, 0);
    char* item_1c = "Kneel - Reload";
    int32_t item_20 = 0xffffffff;
    void* item_24 = context;
    AI_WriteChannel(context, 1, 1.0f);
    int32_t item_8;
    Script_ParseEnumReal32_13(data_2, &item_8);
    int32_t data_3 = item_8;

    if (data_3)
    {
        data_3 = Locomotion_GetState(context, 1);

        if (data_3)
        {
            data_3 = *(context + 0x3df1);
            data_3 ^= 1;
            *(context + 0x3df1) = data_3;
            data_3 = 1;
            return data_3;
        }
    }

    data_3 = *(context + 0x3df1);
    *(context + 0x3c8c) = 0;

    if (!data_3)
    {
        int32_t data_4 = Script_SpawnNewTask_13(data_2, 1);
        data_4 = 0;
        return data_4;
    }

    *(context + 0x3c94) = 0x3f800000;
    data_3 = 0;
    return data_3;
}
