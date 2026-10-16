#include "gi_platform.h"
#include "004E53C0-DynCubeObj_OnEvent.h"
int32_t* DynCubeObj_OnEvent(int32_t a1, int32_t a2, int32_t a3, double* a4, float a5)

{
    int32_t valA2;
    int32_t tmpD;
    tmpD = HIGHD(a1 * a1);
    valA2 = LOWD(a1 * a1);
    int32_t dstD1 = (valA2 + (tmpD & 7)) >> 3;
    int32_t* result = Mem_Alloc(dstD1 + 0xf, 4);
    result[2] = a1;
    int32_t objC = g_b019e8;
    int32_t** valA7 = *(g_b019e4 + (objC << 2)) * g_b019f0 + g_b019e0;
    *(g_b019f4 + valA7) = objC;
    g_b019e8 += 1;
    *result = valA7;
    *valA7 = result;
    int32_t eflags;
    int32_t valA8;
    valA8 = __bsf_gprv_memv(a1);
    result[1] = valA8;

    if (dstD1 > 0)
        __builtin_memset(__builtin_memset(&result[3], 0, dstD1 & 0xfffffffc), 0, dstD1 & 3);

    double* v_c = a4;
    double v_44 = *a4 - a5;
    char tmpD7 = g_a5e408;
    int32_t v_34 = 0;
    double v_3c = a4[1] - a5;
    long double x87_r7_5 = a5 + *a4;
    int32_t v_30 = 0xc1d00000;
    int32_t v_1c = 0;
    int32_t v_18 = 0x41d00000;
    int32_t* result_1 = result;
    int32_t v_10 = a1;
    double v_2c = x87_r7_5;
    float v_8 = a5;
    double v_24 = a5 + a4[1];
    DynObj_CreateMagicObject_9(a2, tmpD7, &result_1, &v_44, &v_2c, 0x20000000, a3);
    return result;
}
