#include "00450E70-AI_UpdateSensors.h"
/* 0x00450e70 AI_UpdateSensors full linked: callers=1 callees=4 */
int32_t sub_450e70(void* a1, int32_t* a2)

{
    sub_450ee0(a1);
    a2[1] = 0;
    *a2 = 0;
    sub_4af910(a1 + 0x8fc, a2);
    a2[3] = (sub_4b4770(Level_SetMission_5()) + 1f) * 0.200000003f * 30f;
    return a2[5](a1, a2);
}
