#include "004F7F00-RainDynCubeObj_OnEvent.h"
/* 0x004f7f00 RainDynCubeObj_OnEvent full linked: callers=0 callees=8 */
void* sub_4f7f00(void* a1)

{
    long double x87_r7_1 = *(a1 + 0x2c98) * 4096f;
    int32_t eax = *(a1 + 0x2cb0);
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    memcpy(a1 + 0x2c08, &var_18, 0x18);
    *(a1 + 0x2c7c) = x87_r7_1 * 0.142857149f;
    *(a1 + 0x2c60) = 0x42d00000;
    *(a1 + 0x2c64) = 0x42e00000;
    *(a1 + 0x2c68) = 0x42fe0000;
    *(a1 + 0x2c8c) = 0x3e20d97c;
    *(a1 + 0x2c90) = 0x45aaaaab;
    *(a1 + 0x2c80) = 0x3fc00000;
    *(a1 + 0x2c88) = 0x40000000;

    if (!eax)
        sub_4f8040(a1);

    void* var_30;

    if (eax || *(a1 + 0x2cb0))
    {
        int32_t var_28_2 = 0;
        var_30 = g_a44344;
        sub_4c6840(var_30, a1, var_28_2);
        *(a1 + 0x2cb0) = 0;
    }

    sub_4c7760(a1);
    void* ecx = g_a44344;
    int32_t var_2c_2 = 0;
    var_30 = a1;
    sub_4c6890(ecx, var_30, var_2c_2);
    *(a1 + 0x2cb0) = 1;
    g_a76c9c += 0x4290;
    sub_4f1400(a1 + 0x2cb8, a1);
    void* result = sub_4f6b00(a1);
    *(a1 + 0x2d08) = 0;
    return result;
}
