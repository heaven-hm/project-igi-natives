#include "FX_DebrisSpawn_5.h"
int32_t* FX_DebrisSpawn_5(void* a1)

{
    int32_t srcS = 0;
    char* i;

    for (i = &g_5c118d; i < 0x5c158d; )
    {
        if (!*i)
        {
            int32_t* valA1 = QTask_LinkEventHandler_2(a1);
            *((srcS << 3) + &g_5c1188) = valA1;
            *((srcS << 3) + &g_5c118d) = 1;
            return valA1;
        }

        i = &i[8];
        srcS += 1;
    }

    return i;
}
