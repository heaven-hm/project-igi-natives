#include "Camera_ApplyBandFilter_7.h"
int32_t Camera_ApplyBandFilter_7()

{
    int32_t v_8 = 0xffffffff;
    int32_t v_c = 0x534318;
    int32_t v_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t saved_dst;
    int32_t* v_1c = &saved_dst;
    int32_t v_8_1 = 0;
    int32_t v_20 = 1;
    int32_t v_8_2 = 0xffffffff;
    fsbase->NtTib.ExceptionList = ExceptionList;
    return 1;
}
