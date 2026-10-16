#include "AI_UpdateSensors_26.h"
void* AI_UpdateSensors_26(void* a1, int32_t a2, int32_t a3)

{
    *(a1 + 0x7c) = a3;
    *(a1 + 0x78) = a2;
    return a1;
}
