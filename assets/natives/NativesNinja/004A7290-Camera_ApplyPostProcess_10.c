#include "004A7290-Camera_ApplyPostProcess_10.h"
/* 0x004a7290 Camera_ApplyPostProcess_10 full linked: callers=0 callees=2 */
int32_t* __convention("regparm") sub_4a7290(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5)

{
    int32_t var_c = a3;
    int32_t arg_c;
    int32_t var_10 = arg_c;

    if (!a4)
    {
        sub_4acb45(&arg_c, var_10);
        *a5 = arg_c;
        return a5;
    }

    sub_4acb18(&var_c, var_10);
    *a5 = var_c;
    a5[1] = a3;
    return a5;
}
