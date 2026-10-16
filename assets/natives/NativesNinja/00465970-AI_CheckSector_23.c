#include "00465970-AI_CheckSector_23.h"
/* 0x00465970 AI_CheckSector_23 full linked: callers=7 callees=0 */
void* sub_465970(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    *(a1 + 0x1b4) = 0x3f800000;
    *(a1 + 0x1b8) = a2;
    *(a1 + 0x1bc) = a3;
    *(a1 + 0x1c0) = 1.0 / a4;
    return a1;
}
