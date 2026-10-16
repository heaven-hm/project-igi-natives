#include "004FBF90-Script_EvaluateCondition_28.h"
/* 0x004fbf90 Script_EvaluateCondition_28 full linked: callers=1 callees=3 */
int32_t sub_4fbf90(void* a1, float a2, float a3, float a4)

{
    int32_t var_c = 0;
    void* ecx = *(a1 + 0x1b4);
    int32_t var_8 = 0;
    int32_t var_4 = 0;
    float var_18 = 0f;
    int32_t var_14 = 0;
    long double x87_r7_2 = -((a2 * *(ecx + 8)));
    long double x87_r6_3 = x87_r7_2 * *(a1 + 0x8c);
    var_18 = x87_r7_2 * *(a1 + 0x88);
    float var_14_1 = x87_r6_3;
    float var_10 = x87_r7_2 * *(a1 + 0x90);
    sub_4ecf50(a1 + 0xf0, &var_18);
    int32_t result = sub_4ec6a0(a1 + 0xf0, a1 + 0x70);
    float ecx_3 = *(a1 + 0x128);
    long double x87_r7_7 = *(a1 + 0x124) * a4;
    *(a1 + 0x120) = *(a1 + 0x120) * a4;
    *(a1 + 0x124) = x87_r7_7;
    *(a1 + 0x128) = ecx_3 * a4;
    float ecx_6 = *(a1 + 0x110);
    long double x87_r7_13 = *(a1 + 0x10c) * a3;
    *(a1 + 0x108) = *(a1 + 0x108) * a3;
    *(a1 + 0x10c) = x87_r7_13;
    *(a1 + 0x110) = ecx_6 * a3;
    sub_4ecdb0(a1 + 0xf0);
    return result;
}
