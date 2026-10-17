// Original IGI.EXE function: AI_UpdateSensors_13 (VA 0x0045B2C0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateSensors_13.h"
int32_t AI_UpdateSensors_13(void* context, void* param_2)

{
    *(param_2 + 0xd18) = 0;
    *(param_2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    *(context + 0x14) = AI_CheckSector_13;
    return result;
}
