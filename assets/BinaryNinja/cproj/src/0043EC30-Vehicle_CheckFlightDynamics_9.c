#include "gi_platform.h"
#include "0043EC30-Vehicle_CheckFlightDynamics_9.h"
float* Vehicle_CheckFlightDynamics_9(float a1)

{
    float* result = Script_ParseEnumReal32_29(a1);

    if (result)
        return result;

    float v_4_1 = a1;
    char v_8;
    return Script_FormatString_28(a1, 44.6008873.0f, 0.949999988.0f, 0.949999988.0f, Level_StartMission_4(), 0xc,
        &v_8);
}
