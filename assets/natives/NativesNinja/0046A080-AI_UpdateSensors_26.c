#include "0046A080-AI_UpdateSensors_26.h"
/* 0x0046a080 AI_UpdateSensors_26 full linked: callers=1 callees=0 */
void* sub_46a080(void* a1, int32_t a2, int32_t a3)

{
    *(a1 + 0x7c) = a3;
    *(a1 + 0x78) = a2;
    return a1;
}
