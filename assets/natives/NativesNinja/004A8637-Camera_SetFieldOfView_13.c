#include "004A8637-Camera_SetFieldOfView_13.h"
/* 0x004a8637 Camera_SetFieldOfView_13 full linked: callers=1 callees=0 */
int32_t sub_4a8637(int32_t a1)

{
    int32_t ecx = 0;

    for (int32_t* i = &g_544290; i < &g_544368; )
    {
        if (*i == a1)
            return *((ecx << 3) + &g_544294);

        i = &i[2];
        ecx += 1;
    }

    return 0;
}
