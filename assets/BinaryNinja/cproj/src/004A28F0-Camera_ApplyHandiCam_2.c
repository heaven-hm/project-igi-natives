#include "gi_platform.h"
#include "004A28F0-Camera_ApplyHandiCam_2.h"
int32_t Camera_ApplyHandiCam_2()

{
    int32_t result = g_543d54;

    if (result >= 9)
    {
        g_543d54 = 1;
        return result;
    }

    g_543d54 = result + 1;
    return result + 1;
}
