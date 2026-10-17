// Original IGI.EXE function: AnimCam_Update (VA 0x00529AA0; static CFG gate PASS, CFG score 1.000).
#include "AnimCam_Update.h"
int32_t AnimCam_Update(void* a1, int32_t* a2)

{
    for (int32_t i = 0; i < 0x58; )
    {
        i += 4;
        *(i + *a2 - 4) = 0xc479c000;
    }

    int32_t* v_c = a2;
    void* v_14 = a1;
    Light_ApplyLightmap_7(a1);
    int32_t* valA;
    int32_t objC2;
    int32_t tmpD;
    valA = Light_UpdateGlobalLight_7(a1, a2);
    int32_t* v_20 = a2;
    return Light_U2F(valA, tmpD, objC2, a1);
}
