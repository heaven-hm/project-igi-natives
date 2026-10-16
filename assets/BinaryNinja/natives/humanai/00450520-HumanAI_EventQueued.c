#include "HumanAI_EventQueued.h"
int32_t* HumanAI_EventQueued(void* a1, int32_t* a2)

{
    int32_t* result = *(a1 + 0x810);

    if (!*result || !result)
        return 0;

    Camera_ApplyHandiCam_33(result);
    result[1] = 0;
    *result = 0;
    result[2] = *a2;
    result[3] = a2[1];
    int32_t srcS = a2[4];

    if (srcS)
        memcpy(&result[4], srcS, 0x18);

    void* valA1 = a2[6];

    if (!valA1)
        result[0xb] = 0;
    else
        result[0xb] = QTask_LinkEventHandler_2(valA1);

    void* flagP1 = a2[5];

    if (!flagP1)
        result[0xa] = 0;
    else
        result[0xa] = QTask_LinkEventHandler_2(flagP1);

    *(a1 + 0x8e0) += 1;
    return result;
}
