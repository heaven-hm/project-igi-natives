#include "Physics_CalculateSplineLength_8.h"
int32_t Physics_CalculateSplineLength_8(void* a1)

{
    int32_t ctxB = 0;
    int32_t result = *(a1 + 0x58);

    if (result > 0)
    {
        do
        {
            int32_t i = 0;

            if (result > 0)
            {
                do
                {
                    int32_t* valA = Physics_InterpolateWaypoint_8(a1, ctxB, i);
                    *valA = 0xffffffff;
                    valA[1] = 0xbf800000;
                    i += 1;
                } while (i < *(a1 + 0x58));
            }

            result = *(a1 + 0x58);
            ctxB += 1;
        } while (ctxB < result);
    }

    return result;
}
