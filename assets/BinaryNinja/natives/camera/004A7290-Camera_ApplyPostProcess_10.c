#include "Camera_ApplyPostProcess_10.h"
int32_t* __convention("regparm") Camera_ApplyPostProcess_10(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5)

{
    int32_t v_c = a3;
    int32_t arg_c;
    int32_t v_10 = arg_c;

    if (!a4)
    {
        Camera_ResetMatrix_25(&arg_c, v_10);
        *a5 = arg_c;
        return a5;
    }

    Camera_UpdateViewCone_25(&v_c, v_10);
    *a5 = v_c;
    a5[1] = a3;
    return a5;
}
