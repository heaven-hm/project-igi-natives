#include "gi_platform.h"
#include "004AC8D8-Camera_ApplyLineFilter_25.h"
int32_t Camera_ApplyLineFilter_25(int32_t* a1)

{
    int32_t* valA = a1;

    for (int32_t i = 0; i < 3; )
    {
        if (*valA)
            return 0;

        i += 1;
        valA = &valA[1];
    }

    return 1;
}
