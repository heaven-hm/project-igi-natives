#include "gi_platform.h"
#include "00433530-Vehicle_UpdateRudder_3.h"
float Vehicle_UpdateRudder_3(float a1) __location("valA")

{
    float result = a1;
    int32_t tmpD = *(result + 0x1b4);
    *(result + 0x82c) = *(result + 0x830);
    char objC = *(result + 0x831);
    *(result + 0x82d) = objC;
    *(result + 0x832) = objC;
    *(result + 0x833) = objC;
    *(result + 0x744) = 0;
    *(result + 0x82e) = 0;
    *(result + 0x82f) = 0;

    if (tmpD)
        result = Vehicle_DeployGear_3(result);

    return result;
}
