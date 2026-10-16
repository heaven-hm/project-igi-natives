#include "gi_platform.h"
#include "004015D0-QTask_AllocateEvent.h"
int32_t* QTask_AllocateEvent(int32_t* a1)

{
    int32_t* result = a1;

    if (result[5])
        result = Camera_ApplyHandiCam_33(result);

    return result;
}
