#include "gi_platform.h"
#include "00531E10-Sprite3D_LoadParameters.h"
int32_t Sprite3D_LoadParameters(float a1)

{
    float srcS = a1;
    int32_t objC = (*(int32_t*)(uintptr_t)(srcS + 0x6c));
    float v_8 = (*(int32_t*)(uintptr_t)(srcS + 0x68));
    int32_t v_4 = objC;
    float v_18;
    Display_RestoreDevice_15(&v_18, &a1, srcS + 0x20);
    long double fpu7 = a1;
    long double f0 = 0.0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x41)
        return result;

    float v_10;
    Display_SetGammaRamp_15(&v_10, &v_8, a1);
    float v_14;
    float v_c;
    float v_28_1 = v_c + v_14;
    float v_24_1 = v_10 + v_18;
    float v_20_1 = v_18 - v_10;
    float v_1c_1 = v_14 - v_c;
    uint32_t valA1 = Display_OpenDevice_18(a1);
    return Sys_FreeMemory_15((*(int32_t*)(uintptr_t)(srcS + 0x80)), v_20_1, v_1c_1, v_24_1, v_1c_1, v_20_1, v_28_1,
        v_24_1, v_28_1, 255.0f, 255.0f, 255.0f, (*(int32_t*)(uintptr_t)(srcS + 0x7c)), (*(int32_t*)(uintptr_t)(srcS + 0x84)), valA1);
}
