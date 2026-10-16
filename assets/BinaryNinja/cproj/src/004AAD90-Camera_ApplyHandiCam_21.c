#include "gi_platform.h"
#include "004AAD90-Camera_ApplyHandiCam_21.h"
void* Camera_ApplyHandiCam_21(int32_t a1)

{
    void* result = g_c321f8;
    void* objC1 = result + g_c321f4 * 0x14;

    while (true)
    {
        if (result >= objC1)
            return nullptr;

        if (a1 - *(result + 0xc) < 0x100000)
            break;

        result += 0x14;
    }

    return result;
}
