// IGI native provenance: mapcomp_05 - 0x00469FE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00469FE0-mapcomp_05.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "mapcomp_05.h"
int32_t mapcomp_05(void* context, float param_2)

{
    long double fpu7 = param_2;
    long double f0 = *(context + 0x70);
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
        return result;

    *(context + 0x70) = param_2;
    AI_UpdateSensors_26(context, Sys_AllocateMemory_14(Level_SetMission_5()) * 0.0500000007f + 0.949999988f,
        Sys_FreeMemory_14(Level_SetMission_5(), 0x4b) + 0xf);
    int32_t item_20 = 0x3f800000;
    int32_t item_1c_1 = 0x3f800000;
    int32_t item_18_1 = 0;
    Sound_EventTrigger("mapcomp_05", 1, &item_20);
    return Sound_EventTrigger("mapcomp_03", 1, &item_20);
}
