#include "gi_platform.h"
#include "004A8637-Camera_SetFieldOfView_13.h"
int32_t Camera_SetFieldOfView_13(int32_t a1)

{
    int32_t objC = 0;

    for (int32_t* i = &g_544290; i < &g_544368; )
    {
        if (*i == a1)
            return *((objC << 3) + &g_544294);

        i = &i[2];
        objC += 1;
    }

    return 0;
}
