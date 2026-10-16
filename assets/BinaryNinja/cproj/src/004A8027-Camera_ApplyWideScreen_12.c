#include "gi_platform.h"
#include "004A8027-Camera_ApplyWideScreen_12.h"
long double Camera_ApplyWideScreen_12(int32_t a1, int32_t a2, int32_t a3 )

{
    double arg_c;
    double arg_14;

    if (!Camera_UpdateViewCone_12(a1, &arg_14, a3))
    {
        int32_t v_24;
        int32_t v_24_1 = v_24 & 0xfffffffe;
        char v_5c;
        Camera_ApplyPostProcess_12(&v_5c, &a3, a1, a2, &arg_c, &arg_14);
        /* no return */
    }

    int32_t valA1 = Camera_ApplyLineFilter_13(a1);

    if (g_546af0 || !valA1)
    {
        Camera_UpdateTransform_13(valA1);
        int16_t x87control;
        Camera_UpdateTransform_14(x87control, a3, 0xffff);
        return arg_14;
    }

    int32_t v_64_2 = a1;
    int32_t v_68_2 = a1;
    v_68_2 = arg_14;
    int32_t v_70_1 = a1;
    v_70_1 = 0;
    int32_t v_78 = a1;
    v_78 = arg_c;
    return Camera_ResetMatrix_12(valA1, a2, v_78, a1, v_70_1, a1, v_68_2, a3);
}
