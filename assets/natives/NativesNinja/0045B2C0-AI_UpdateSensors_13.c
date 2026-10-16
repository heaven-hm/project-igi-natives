#include "0045B2C0-AI_UpdateSensors_13.h"
/* 0x0045b2c0 AI_UpdateSensors_13 full linked: callers=0 callees=1 */
int32_t sub_45b2c0(void* a1, void* a2)

{
    *(a2 + 0xd18) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45b2f0;
    return result;
}
