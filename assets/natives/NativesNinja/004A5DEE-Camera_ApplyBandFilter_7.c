#include "004A5DEE-Camera_ApplyBandFilter_7.h"
/* 0x004a5dee Camera_ApplyBandFilter_7 full linked: callers=1 callees=0 */
int32_t sub_4a5dee()

{
    int32_t var_8 = 0xffffffff;
    int32_t var_c = 0x534318;
    int32_t var_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t __saved_edi;
    int32_t* var_1c = &__saved_edi;
    int32_t var_8_1 = 0;
    int32_t var_20 = 1;
    int32_t var_8_2 = 0xffffffff;
    fsbase->NtTib.ExceptionList = ExceptionList;
    return 1;
}
