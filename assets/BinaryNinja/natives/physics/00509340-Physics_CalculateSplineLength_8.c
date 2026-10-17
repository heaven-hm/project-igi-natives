// Original IGI.EXE function: Physics_CalculateSplineLength_8 (VA 0x00509340; static CFG gate PASS, CFG score 1.000).
#include "Physics_CalculateSplineLength_8.h"
int32_t Physics_CalculateSplineLength_8(void* context)

{
    int32_t context_val = 0;
    int32_t result = *(context + 0x58);

    if (result > 0)
    {
        do
        {
            int32_t i = 0;

            if (result > 0)
            {
                do
                {
                    int32_t* data_val = Physics_InterpolateWaypoint_8(context, context_val, i);
                    *data_val = 0xffffffff;
                    data_val[1] = 0xbf800000;
                    i += 1;
                } while (i < *(context + 0x58));
            }

            result = *(context + 0x58);
            context_val += 1;
        } while (context_val < result);
    }

    return result;
}
