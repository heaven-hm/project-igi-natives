#include "004647A0-AI_UpdateSensors_22.h"
/* 0x004647a0 AI_UpdateSensors_22 full linked: callers=2 callees=0 */
void* sub_4647a0(void* a1, float a2, int32_t a3)

{
    *(a1 + 0x1d0) = a2;
    *(a1 + 0x1dc) = a3;
    *(a1 + 0x1cc) = a2;
    *(a1 + 0x1d8) = a3;
    return a1;
}
