// IGI native provenance: Vehicle_CheckFlightDynamics_9 - 0x0043EC30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043EC30-Vehicle_CheckFlightDynamics_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_CheckFlightDynamics_9.h"
float* Vehicle_CheckFlightDynamics_9(float context)

{
    float* result = Script_ParseEnumReal32_29(context);

    if (result)
        return result;

    float item_4_1 = context;
    void item_8;
    return Script_FormatString_28(context, 44.6008873f, 0.949999988f, 0.949999988f, Level_StartMission_4(), 0xc,
        &item_8);
}
