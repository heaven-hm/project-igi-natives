#include "004E53C0-DynCubeObj_OnEvent.h"
/* 0x004e53c0 DynCubeObj_OnEvent full linked: callers=1 callees=4 */
int32_t* sub_4e53c0(int32_t a1, int32_t a2, int32_t a3, double* a4, float a5)

{
    int32_t eax_2;
    int32_t edx;
    edx = HIGHD(a1 * a1);
    eax_2 = LOWD(a1 * a1);
    int32_t edi_1 = (eax_2 + (edx & 7)) >> 3;
    int32_t* result = Mem_Alloc(edi_1 + 0xf, 4);
    result[2] = a1;
    int32_t ecx = g_b019e8;
    int32_t** eax_7 = *(g_b019e4 + (ecx << 2)) * g_b019f0 + g_b019e0;
    *(g_b019f4 + eax_7) = ecx;
    g_b019e8 += 1;
    *result = eax_7;
    *eax_7 = result;
    int32_t eflags;
    int32_t eax_8;
    eax_8 = __bsf_gprv_memv(a1);
    result[1] = eax_8;

    if (edi_1 > 0)
        __builtin_memset(__builtin_memset(&result[3], 0, edi_1 & 0xfffffffc), 0, edi_1 & 3);

    double* var_c = a4;
    double var_44 = *a4 - a5;
    char edx_7 = g_a5e408;
    int32_t var_34 = 0;
    double var_3c = a4[1] - a5;
    long double x87_r7_5 = a5 + *a4;
    int32_t var_30 = 0xc1d00000;
    int32_t var_1c = 0;
    int32_t var_18 = 0x41d00000;
    int32_t* result_1 = result;
    int32_t var_10 = a1;
    double var_2c = x87_r7_5;
    float var_8 = a5;
    double var_24 = a5 + a4[1];
    sub_4c7770(a2, edx_7, &result_1, &var_44, &var_2c, 0x20000000, a3);
    return result;
}
