// Original IGI.EXE function: FX_DebrisSpawn_5 (VA 0x00484DC0; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_5.h"
int32_t* FX_DebrisSpawn_5(void* context)

{
    int32_t source_val = 0;
    char* i;

    for (i = &g_5c118d; i < 0x5c158d; )
    {
        if (!*i)
        {
            int32_t* data_1 = QTask_LinkEventHandler_2(context);
            *((source_val << 3) + &g_5c1188) = data_1;
            *((source_val << 3) + &g_5c118d) = 1;
            return data_1;
        }

        i = &i[8];
        source_val += 1;
    }

    return i;
}
