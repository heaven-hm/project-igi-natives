#include "0052CB30-PushButton_Process.h"
/* 0x0052cb30 PushButton_Process full linked: callers=1 callees=5 */
float* sub_52cb30()

{
    float* result = Mem_Alloc(0xedc, 4);
    int32_t ecx = g_bcad74;
    int32_t ecx_1 = -(ecx);
    int32_t var_10 = 0;
    int32_t var_c = 0;
    int32_t var_8 = 0;
    int32_t var_4 = 0;
    int32_t* eax = g_5ca110;
    int32_t var_c_1 = (((ecx_1 - ecx_1) & 0xfffff800) + 0x800) | 0x10000;
    var_10 = 0x10;
    int32_t var_4_1 = 0x141;
    int32_t var_8_1 = 0x42;
    (*(*eax + 0x14))(eax, &var_10, &result[0x14], 0);
    int32_t var_34 = 0x3f800000;
    int32_t var_30 = 0;
    int32_t var_2c = 0;
    int32_t var_28 = 0x3f800000;
    int32_t var_24 = 0x3f800000;
    int32_t var_20 = 0x3f800000;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0x3f800000;
    sub_52d2b0(result, &var_1c, &var_28, &var_28, &var_34, &var_34);
    sub_52d350(result, 0.392699093f);
    sub_52cfa0(result);
    sub_52cc40(result);
    g_a84568 = result;
    return result;
}
