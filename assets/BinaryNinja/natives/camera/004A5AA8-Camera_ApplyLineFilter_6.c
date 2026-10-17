// Original IGI.EXE function: Camera_ApplyLineFilter_6 (VA 0x004A5AA8; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_6.h"
int32_t Camera_ApplyLineFilter_6()

{
    void* data_1 = g_543e8c;

    if (data_1)
        data_1();

    Camera_ApplyPostProcess_6(0x536008, 0x536014);
    return Camera_ApplyPostProcess_6(0x536000, 0x536004);
}
