// Original IGI.EXE function: Vehicle_CheckFlightDynamics_9 (VA 0x0043EC30; static CFG gate PASS, CFG score 1.000).
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
