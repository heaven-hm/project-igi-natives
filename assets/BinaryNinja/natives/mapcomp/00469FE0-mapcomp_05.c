// Original IGI.EXE function: mapcomp_05 (VA 0x00469FE0; static CFG gate PASS, CFG score 1.000).
#include "mapcomp_05.h"
int32_t mapcomp_05(void* a1, float a2)

{
    long double fpu7 = a2;
    long double f0 = *(a1 + 0x70);
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
        return result;

    *(a1 + 0x70) = a2;
    AI_UpdateSensors_26(a1, Sys_AllocateMemory_14(Level_SetMission_5()) * 0.0500000007f + 0.949999988f,
        Sys_FreeMemory_14(Level_SetMission_5(), 0x4b) + 0xf);
    int32_t v_20 = 0x3f800000;
    int32_t v_1c_1 = 0x3f800000;
    int32_t v_18_1 = 0;
    Sound_EventTrigger("mapcomp_05", 1, &v_20);
    return Sound_EventTrigger("mapcomp_03", 1, &v_20);
}
