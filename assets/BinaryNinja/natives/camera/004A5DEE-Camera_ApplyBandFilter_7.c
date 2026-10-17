// Original IGI.EXE function: Camera_ApplyBandFilter_7 (VA 0x004A5DEE; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_7.h"
int32_t Camera_ApplyBandFilter_7()

{
    int32_t item_8 = 0xffffffff;
    int32_t item_c = 0x534318;
    int32_t item_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t saved_target;
    int32_t* item_1c = &saved_target;
    int32_t item_8_1 = 0;
    int32_t item_20 = 1;
    int32_t item_8_2 = 0xffffffff;
    fsbase->NtTib.ExceptionList = ExceptionList;
    return 1;
}
