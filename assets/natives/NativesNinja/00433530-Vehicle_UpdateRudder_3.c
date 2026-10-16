#include "00433530-Vehicle_UpdateRudder_3.h"
/* 0x00433530 Vehicle_UpdateRudder_3 full linked: callers=3 callees=1 */
float Vehicle_UpdateRudder_3(float a1) __location("eax")

{
    float result = a1;
    int32_t edx = *(result + 0x1b4);
    *(result + 0x82c) = *(result + 0x830);
    char ecx = *(result + 0x831);
    *(result + 0x82d) = ecx;
    *(result + 0x832) = ecx;
    *(result + 0x833) = ecx;
    *(result + 0x744) = 0;
    *(result + 0x82e) = 0;
    *(result + 0x82f) = 0;

    if (edx)
        result = Vehicle_DeployGear_3(result);

    return result;
}
