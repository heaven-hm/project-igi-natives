#include "004632D0-AI_UpdateSensors_19.h"
/* 0x004632d0 AI_UpdateSensors_19 full linked: callers=7 callees=1 */
int32_t* sub_4632d0(void* a1)

{
    *(a1 + 0x2f4) &= 0xfffffffb;
    int32_t* result = sub_463640(a1, nullptr);
    *(a1 + 0x6f8) = 0;
    *(a1 + 0x728) = 0;
    *(a1 + 0x72c) = 0;
    *(a1 + 0x730) = 0;
    return result;
}
