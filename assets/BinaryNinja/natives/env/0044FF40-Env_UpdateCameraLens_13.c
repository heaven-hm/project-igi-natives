// Original IGI.EXE function: Env_UpdateCameraLens_13 (VA 0x0044FF40; static CFG gate PASS, CFG score 1.000).
#include "Env_UpdateCameraLens_13.h"
int32_t* Env_UpdateCameraLens_13(void* context)

{
    int32_t* result = Env_CheckAmbientArea_13(context);
    result = *(context + 0x3e4a);

    if (result)
    {
        result = *(context + 0x3e4c);

        if (result)
        {
            result = Qtask_UpdateList(result);
            *(context + 0x3e4c) = 0;
        }

        *(context + 0x3e4a) = 0;
    }

    return result;
}
