#include "gi_platform.h"
#include "00428AD0-Menu_HandleInput_19.h"
int32_t Menu_HandleInput_19(void* a1, double* a2)

{
    double v_18;
    double* v_28 = &v_18;
    int32_t v_8 = 0;
    int32_t v_4 = 0;
    v_18 = *a2 - (*(int32_t*)(uintptr_t)(a1 + 0x20));
    double v_10 = a2[1] - (*(int32_t*)(uintptr_t)(a1 + 0x28));
    long double fp0 = Sys_OpenFileStream_11(v_28);
    long double f0 = 122880.0;
    fp0 - f0;
    memcpy(&v_18, a2, 0x18);

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
            | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        return Menu_DrawWidget_19(a1, &v_18);

    v_8 = v_8 + 102400.0;
    long double fpu0;
    long double fpu1;
    return Menu_RequestScreen_20(fpu0, fpu1, a1, &v_18);
}
