#include "AI_CheckVisibility_3.h"
int32_t AI_CheckVisibility_3(void* a1)

{
    long double fpu7 = *(a1 + 0x34);
    long double fpu6 = *(a1 + 0x40);
    long double fpu5 = *(a1 + 0x4c);
    double v_18 = *(a1 + 0x70) * fpu5 + *(a1 + 0x64) * fpu6 + *(a1 + 0x58) * fpu7;
    double v_10 = *(a1 + 0x74) * fpu5 + *(a1 + 0x68) * fpu6 + *(a1 + 0x5c) * fpu7;
    double* v_24 = &v_18;
    double v_8 = *(a1 + 0x78) * fpu5 + *(a1 + 0x6c) * fpu6 + *(a1 + 0x60) * fpu7;
    memcpy(&v_18, &v_18, 0x18);
    v_18 = 0;
    *(&v_18 + 4) = 0;

    if (!Sys_PopStack_11(v_24))
        Sys_FreeMemory_11(&v_18);

    int32_t __saved_esi_2 = *(&v_10 + 4);
    Sys_ResolveSymbol_9(v_10);
    long double x87_r7_2 = v_8;
    long double f0 = 0.0;
    x87_r7_2 - f0;
    return (x87_r7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0) ? 1 : 0) << 0xa
        | (x87_r7_2 == f0 ? 1 : 0) << 0xe;
}
