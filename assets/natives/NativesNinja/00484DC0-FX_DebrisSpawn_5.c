#include "00484DC0-FX_DebrisSpawn_5.h"
/* 0x00484dc0 FX_DebrisSpawn_5 full linked: callers=1 callees=1 */
int32_t* sub_484dc0(void* a1)

{
    int32_t esi = 0;
    char* i;

    for (i = &g_5c118d; i < 0x5c158d; )
    {
        if (!*i)
        {
            int32_t* eax_1 = QTask_LinkEventHandler_2(a1);
            *((esi << 3) + &g_5c1188) = eax_1;
            *((esi << 3) + &g_5c118d) = 1;
            return eax_1;
        }

        i = &i[8];
        esi += 1;
    }

    return i;
}
