// Original IGI.EXE function: Sprite3D_LoadParameters (VA 0x00531E10; static CFG gate PASS, CFG score 1.000).
#include "Sprite3D_LoadParameters.h"
int32_t Sprite3D_LoadParameters(float a1)

{
    float srcS = a1;
    int32_t objC = *(srcS + 0x6c);
    float v_8 = *(srcS + 0x68);
    int32_t v_4 = objC;
    float v_18;
    Display_RestoreDevice_15(&v_18, &a1, srcS + 0x20);
    long double fpu7 = a1;
    long double f0 = 0f;
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
    return Sys_FreeMemory_15(*(srcS + 0x80), v_20_1, v_1c_1, v_24_1, v_1c_1, v_20_1, v_28_1,
        v_24_1, v_28_1, 255f, 255f, 255f, *(srcS + 0x7c), *(srcS + 0x84), valA1);
}
