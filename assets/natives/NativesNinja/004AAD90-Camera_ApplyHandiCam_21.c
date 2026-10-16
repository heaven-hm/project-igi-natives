#include "004AAD90-Camera_ApplyHandiCam_21.h"
/* 0x004aad90 Camera_ApplyHandiCam_21 full linked: callers=1 callees=0 */
void* sub_4aad90(int32_t a1)

{
    void* result = g_c321f8;
    void* ecx_1 = result + g_c321f4 * 0x14;

    while (true)
    {
        if (result >= ecx_1)
            return nullptr;

        if (a1 - *(result + 0xc) < 0x100000)
            break;

        result += 0x14;
    }

    return result;
}
