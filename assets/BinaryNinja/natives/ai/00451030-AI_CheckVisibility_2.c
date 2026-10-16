#include "AI_CheckVisibility_2.h"
int32_t* AI_CheckVisibility_2(void* a1)

{
    int32_t* result = *(a1 + 0x1508);

    if (!*result)
        return nullptr;

    Camera_ApplyHandiCam_33(result);
    return result;
}
