#include "Menu_HandleInput_20.h"
int32_t Menu_HandleInput_20(float a1)

{
    float srcS = a1;
    void* valA1 = *(*(srcS + 0x1b4) + 0x2d4);
    *(srcS + 0x86c) = 0x3dcccccd;
    *(srcS + 0x870) = 0x3dcccccd;
    *(srcS + 0x874) = 0x3dcccccd;
    *(srcS + 0x880) = *(valA1 + 0x134);
    int32_t tmpD = *(valA1 + 0x12c);
    *(srcS + 0x884) = tmpD;
    *(srcS + 0x888) = 0;
    int32_t objC1 = *(valA1 + 0x138);
    *(srcS + 0x87c) = 0x49fa0000;
    *(srcS + 0x88c) = objC1;
    int32_t v_4 = 0x3cb2674f;
    int32_t v_18;
    __builtin_strncpy(&v_18, "33KA33KA33KA", 0x14);
    int32_t v_20 = tmpD;
    int32_t v_1c = tmpD;
    a1 = (*(valA1 + 0x130) / *(valA1 + 0x12c) - 1f) / (*(srcS + 0x88c) * 30f);
    uint32_t tmpD3 = *(valA1 + 0x24c) + 0x18;
    void* valA2 = Level_StartMission_4();
    int32_t v_c;
    struct status_msg* valA4 = Script_FormatString_30(Script_FormatString(), valA2, tmpD3, &v_c, &v_18, &v_20,
        0x49fa0000, 0x1080000, 0, a1, 0, 0x7d0, 0);
    *(srcS + 0x868) = valA4;
    int32_t result = Script_ParseEnumReal32_31(valA4, 1);
    *(srcS + 0x878) = 0;
    return result;
}
