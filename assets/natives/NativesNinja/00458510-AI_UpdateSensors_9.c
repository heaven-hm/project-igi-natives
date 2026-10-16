#include "00458510-AI_UpdateSensors_9.h"
/* 0x00458510 AI_UpdateSensors_9 full linked: callers=0 callees=1 */
int32_t sub_458510(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_458dd0;
    return result;
}
