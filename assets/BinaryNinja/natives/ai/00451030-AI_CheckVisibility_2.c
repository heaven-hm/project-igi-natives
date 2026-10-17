// Original IGI.EXE function: AI_CheckVisibility_2 (VA 0x00451030; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_2.h"
int32_t* AI_CheckVisibility_2(void* context)

{
    int32_t* result = *(context + 0x1508);

    if (!*result)
        return nullptr;

    Camera_ApplyHandiCam_33(result);
    return result;
}
