#include "0052D060-Light_SetLightColor_9.h"
/* 0x0052d060 Light_SetLightColor_9 full linked: callers=1 callees=0 */
int32_t sub_52d060(void* a1)

{
    float var_44 = 0f;

    if (g_b041e8)
    {
        int32_t ecx_1 = g_b041e0;
        float* eax_3 = **&g_b041e4 * g_b041f0;
        long double st1_1;
        bool c1_1;
        st1_1 = __fpatan(*(eax_3 + ecx_1 + 4), *(eax_3 + ecx_1));
        var_44 = st1_1 + 1.57079637f;
    }

    *(g_bcade8 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    int32_t* eax_4 = g_5ca114;
    (*(*eax_4 + 0x50))(eax_4, 0x1b, 0);
    int32_t* eax_5 = g_5ca114;
    (*(*eax_5 + 0x50))(eax_5, 0x1c, 0);
    int32_t* eax_6 = g_5ca114;
    (*(*eax_6 + 0x50))(eax_6, 7, 0);
    int32_t* eax_7 = g_5ca114;
    (*(*eax_7 + 0x50))(eax_7, 0x17, 2);
    int32_t* eax_8 = g_5ca114;
    (*(*eax_8 + 0x50))(eax_8, 0xe, 0);
    int32_t* eax_9 = g_5ca114;
    (*(*eax_9 + 0x50))(eax_9, 0x16, 3);
    int32_t* eax_10 = g_5ca114;
    (*(*eax_10 + 0x50))(eax_10, 0x1d, 0);
    int32_t* eax_11 = g_5ca114;
    (*(*eax_11 + 0x50))(eax_11, 0x89, 0);
    int32_t* eax_12 = g_5ca114;
    (*(*eax_12 + 0x50))(eax_12, 0x1a, 1);
    int32_t* eax_13 = g_5ca114;
    (*(*eax_13 + 0x50))(eax_13, 0xf, 0);
    int32_t* eax_14 = g_5ca114;
    (*(*eax_14 + 0x50))(eax_14, 0x88, 1);
    int32_t* eax_15 = g_5ca114;
    (*(*eax_15 + 0x94))(eax_15, 0, 1, 3);
    int32_t* eax_16 = g_5ca114;
    (*(*eax_16 + 0x94))(eax_16, 0, 2, 2);
    int32_t* eax_17 = g_5ca114;
    (*(*eax_17 + 0x94))(eax_17, 0, 3, 0);
    int32_t* eax_18 = g_5ca114;
    (*(*eax_18 + 0x94))(eax_18, 0, 4, 1);
    int32_t* eax_19 = g_5ca114;
    (*(*eax_19 + 0x94))(eax_19, 1, 1, 1);
    long double st0;
    bool c1_2;
    bool c2;
    st0 = __fcos(var_44);
    int32_t var_18 = g_bcabec;
    int32_t* eax_21 = g_5ca114;
    int32_t var_38 = 0;
    int32_t var_34 = 0;
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    int32_t var_8 = 0;
    int32_t var_4 = 0x3f800000;
    long double x87_r7_6 = st0 * g_bcabec;
    float var_40 = x87_r7_6;
    long double st0_1;
    bool c1_3;
    bool c2_1;
    st0_1 = __fsin(var_44);
    long double x87_r6_4 = st0_1 * g_bcabec;
    float var_3c = -(x87_r6_4);
    float var_30 = x87_r6_4;
    float var_2c = x87_r7_6;
    (*(*eax_21 + 0x2c))(eax_21, 1, &var_40);
    int32_t* eax_22 = g_5ca114;
    return (*(*eax_22 + 0x80))(eax_22, 4, *(a1 + 0x50), 0, 0x141, a1 + 0x54, 0x744, 0);
}
