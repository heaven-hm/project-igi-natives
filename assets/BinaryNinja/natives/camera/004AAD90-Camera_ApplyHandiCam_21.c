// Original IGI.EXE function: Camera_ApplyHandiCam_21 (VA 0x004AAD90; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_21.h"
void* Camera_ApplyHandiCam_21(int32_t context)

{
    void* result = g_c321f8;
    void* entity_1 = result + g_c321f4 * 0x14;

    while (true)
    {
        if (result >= entity_1)
            return nullptr;

        if (context - *(result + 0xc) < 0x100000)
            break;

        result += 0x14;
    }

    return result;
}
