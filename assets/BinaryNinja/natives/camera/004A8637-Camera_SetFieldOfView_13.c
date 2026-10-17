// Original IGI.EXE function: Camera_SetFieldOfView_13 (VA 0x004A8637; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_13.h"
int32_t Camera_SetFieldOfView_13(int32_t context)

{
    int32_t entity_val = 0;

    for (int32_t* i = &g_544290; i < &g_544368; )
    {
        if (*i == context)
            return *((entity_val << 3) + &g_544294);

        i = &i[2];
        entity_val += 1;
    }

    return 0;
}
