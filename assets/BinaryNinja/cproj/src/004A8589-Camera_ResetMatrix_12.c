#include "gi_platform.h"
#include "004A8589-Camera_ResetMatrix_12.h"
long double Camera_ResetMatrix_12(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, double a7, int32_t a8)

{
    int32_t valA = Camera_SetFieldOfView_13(a2);
    int32_t v_20 = valA;
    int16_t x87control;

    if (!valA)
    {
        Camera_UpdateTransform_14(x87control, a8, 0xffff);
        Camera_UpdateTransform_13(a1);
        return a7;
    }

    int32_t v_1c = a3;
    int32_t v_18 = a4;
    int32_t v_14 = a5;
    int32_t v_10 = a6;
    int32_t v_24 = a1;
    int32_t v_8 = (*(int32_t*)(uintptr_t)(&a7 + 4));
    Camera_UpdateTransform_14(x87control, a8, 0xffff);
    int32_t* v_34 = &v_24;
    Camera_UpdateTransform_13(a1);
    return a7;
}
