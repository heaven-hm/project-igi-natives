#include "gi_platform.h"
#include "004A5E39-Camera_ApplyWideScreen_7.h"
int32_t Camera_ApplyWideScreen_7(int32_t* a1 )

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
