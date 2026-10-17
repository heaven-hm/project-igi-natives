// IGI native provenance: InputPort_LoadParameters - 0x004ED560 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ED560-InputPort_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "InputPort_LoadParameters.h"
int16_t* InputPort_LoadParameters(int32_t context)

{
    Display_CloseDevice();
    FX_FailedGetMouseStateS();
    Physics_InterpolateWaypoint_10();
    int32_t dest_val = 0;
    int16_t* result;

    for (int32_t* i = &g_bc20f0; i < 0xbc23b0; )
    {
        result = i[-0x14];

        if (result)
        {
            g_a5ef9c = dest_val;
            result = Physics_UpdateForces_6(i, context);
        }

        i = &i[0x2c];
        dest_val += 1;
    }

    return result;
}
