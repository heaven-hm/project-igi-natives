#include "AI_MoveToNode_4.h"
void* AI_MoveToNode_4(int32_t* a1, int32_t a2, int32_t a3)

{
    a1[4] -= 1;
    AI_CheckHearing_4(a1, a2, a3, 0);
    void* result = a1[4];

    if (result)
        return result;

    Camera_ApplyHandiCam_33(a1);
    a1[1] = 0;
    *a1 = 0;
    return Camera_SetFieldOfView_33(&g_58a9e8, a1);
}
