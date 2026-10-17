// Original IGI.EXE function: AI_UpdateSensors_19 (VA 0x004632D0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateSensors_19.h"
int32_t* AI_UpdateSensors_19(void* a1)

{
    *(a1 + 0x2f4) &= 0xfffffffb;
    int32_t* result = AI_UpdateSensors_20(a1, nullptr);
    *(a1 + 0x6f8) = 0;
    *(a1 + 0x728) = 0;
    *(a1 + 0x72c) = 0;
    *(a1 + 0x730) = 0;
    return result;
}
