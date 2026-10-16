#include "InputPort_LoadParameters.h"
int16_t* InputPort_LoadParameters(int32_t a1)

{
    Display_CloseDevice();
    FX_FailedGetMouseStateS();
    Physics_InterpolateWaypoint_10();
    int32_t dstD = 0;
    int16_t* result;

    for (int32_t* i = &g_bc20f0; i < 0xbc23b0; )
    {
        result = i[-0x14];

        if (result)
        {
            g_a5ef9c = dstD;
            result = Physics_UpdateForces_6(i, a1);
        }

        i = &i[0x2c];
        dstD += 1;
    }

    return result;
}
