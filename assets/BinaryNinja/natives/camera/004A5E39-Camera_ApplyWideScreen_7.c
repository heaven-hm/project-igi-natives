// Original IGI.EXE function: Camera_ApplyWideScreen_7 (VA 0x004A5E39; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_7.h"
int32_t Camera_ApplyWideScreen_7(int32_t* a1 @ flagP)

{
    int32_t* esp_4 = a1[-6];
    a1[-1] = 0xffffffff;
    TEB* fsbase;
    fsbase->NtTib.ExceptionList = a1[-4];
    *esp_4;
    esp_4[1];
    esp_4[2];
    *a1;
    return 0;
}
