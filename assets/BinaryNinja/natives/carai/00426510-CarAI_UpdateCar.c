#include "CarAI_UpdateCar.h"
int32_t CarAI_UpdateCar(void* a1, int32_t a2, int32_t a3, int32_t a4, float a5)

{
    long double fpu7 = a5;
    long double f0 = 0f;
    fpu7 - f0;
    int32_t v_14;
    int32_t* v_18 = &v_14;
    int32_t v_1c = a2;
    v_14 = a4;
    int32_t v_10 = a3;
    long double x87_r7_1;

    x87_r7_1 = !(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40) ? a5 : -1f;

    float v_8 = x87_r7_1;
    void* srcS = *(a1 + 0x4c);
    uint32_t valA3 = Script_ParseEnumReal32_15();
    int32_t valA4 = 0;
    valA4 = *(srcS + 0x1c);
    return (*(((valA3 * 0x180 + valA4) << 2) + &g_a96ae0))(srcS, &v_1c);
}
