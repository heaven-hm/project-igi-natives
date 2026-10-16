#include "004FA5A0-Script_CallNativeHandler_25.h"
/* 0x004fa5a0 Script_CallNativeHandler_25 full linked: callers=1 callees=2 */
int32_t __convention("regparm") sub_4fa5a0(int32_t a1, int32_t a2, int32_t a3, void* a4, int16_t a5)

{
    int32_t var_4 = a3;
    var_4 = 3;
    *(&var_4 + 1) = a5;
    sub_4b17c0(*(a4 + 4));
    int32_t result = sub_4b1700(*(a4 + 4), &var_4, 3);
    result = 1;
    return result;
}
