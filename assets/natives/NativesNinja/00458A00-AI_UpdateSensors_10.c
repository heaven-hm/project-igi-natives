#include "00458A00-AI_UpdateSensors_10.h"
/* 0x00458a00 AI_UpdateSensors_10 full linked: callers=0 callees=1 */
int32_t sub_458a00(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_458a30;
    return result;
}
