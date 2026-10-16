#include "004A28F0-Camera_ApplyHandiCam_2.h"
/* 0x004a28f0 Camera_ApplyHandiCam_2 full linked: callers=1 callees=0 */
int32_t sub_4a28f0()

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
