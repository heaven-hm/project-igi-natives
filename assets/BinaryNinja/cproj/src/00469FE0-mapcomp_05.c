#include "gi_platform.h"
#include "00469FE0-mapcomp_05.h"
int32_t mapcomp_05(void* a1, float a2)

{
    long double fpu7 = a2;
    long double f0 = (*(int32_t*)(uintptr_t)(a1 + 0x70));
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = a2;
    AI_UpdateSensors_26(a1, Sys_AllocateMemory_14(Level_SetMission_5()) * 0.0500000007.0f + 0.949999988.0f,
        Sys_FreeMemory_14(Level_SetMission_5(), 0x4b) + 0xf);
    int32_t v_20 = 0x3f800000;
    int32_t v_1c_1 = 0x3f800000;
    int32_t v_18_1 = 0;
    Sound_EventTrigger("mapcomp_05", 1, &v_20);
    return Sound_EventTrigger("mapcomp_03", 1, &v_20);
}
