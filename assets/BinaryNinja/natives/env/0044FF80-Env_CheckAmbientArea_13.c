// Original IGI.EXE function: Env_CheckAmbientArea_13 (VA 0x0044FF80; static CFG gate PASS, CFG score 1.000).
#include "Env_CheckAmbientArea_13.h"
void* Env_CheckAmbientArea_13(void* a1)

{
    void* result = a1;
    int32_t* i_1 = *(result + 0xe0);

    for (int32_t* i = *i_1; i; i = *i)
    {
        Camera_ApplyHandiCam_33(i_1);
        i_1[1] = 0;
        *i_1 = 0;
        result = Camera_SetFieldOfView_33(&g_58a9c8, i_1);
        i_1 = i;
    }

    return result;
}
