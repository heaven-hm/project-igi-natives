#include "0051B540-EditorMagicObj_LoadParameters.h"
/* 0x0051b540 EditorMagicObj_LoadParameters full linked: callers=0 callees=4 */
int32_t sub_51b540(void* a1, void* a2)

{
    float* ecx = *(a1 + 0x138);
    int32_t var_7c = 0;
    int32_t edi = ecx[1];
    int32_t esi = ecx[2];

    if (esi != edi)
        var_7c = 0 % (esi - edi) + edi;

    float* var_8c = ecx;
    float var_50;
    sub_4b3be0(&var_50, var_7c * *ecx);
    float var_44;
    float var_38;
    float var_78 = var_38 * *(a1 + 0x110) + var_50 * *(a1 + 0x108) + var_44 * *(a1 + 0x10c);
    float var_4c;
    float var_40;
    float var_34;
    float var_74 = var_34 * *(a1 + 0x110) + var_4c * *(a1 + 0x108) + var_40 * *(a1 + 0x10c);
    float var_48;
    float var_3c;
    float var_30;
    float var_70 = var_30 * *(a1 + 0x110) + var_48 * *(a1 + 0x108) + var_3c * *(a1 + 0x10c);
    float var_6c = var_38 * *(a1 + 0x11c) + var_50 * *(a1 + 0x114) + var_44 * *(a1 + 0x118);
    float var_68 = var_34 * *(a1 + 0x11c) + var_4c * *(a1 + 0x114) + var_40 * *(a1 + 0x118);
    float var_64 = var_30 * *(a1 + 0x11c) + var_48 * *(a1 + 0x114) + var_3c * *(a1 + 0x118);
    float var_60 = var_38 * *(a1 + 0x128) + var_50 * *(a1 + 0x120) + var_44 * *(a1 + 0x124);
    int32_t var_2c;
    int32_t edx_5 = *(a1 + 0x12c) + var_2c + 1;
    int32_t var_54 = edx_5;
    float var_5c = var_34 * *(a1 + 0x128) + var_4c * *(a1 + 0x120) + var_40 * *(a1 + 0x124);
    float var_58 = var_30 * *(a1 + 0x128) + var_48 * *(a1 + 0x120) + var_3c * *(a1 + 0x124);
    long double x87_r7_39 = var_60 * *(a2 + 0x20);
    long double x87_r6_37 = var_78 * *(a2 + 0x18);
    memcpy(&var_50, &var_78, 0x28);
    float var_28 = x87_r7_39 + x87_r6_37 + var_6c * *(a2 + 0x1c);
    float var_24 = var_5c * *(a2 + 0x20) + var_74 * *(a2 + 0x18) + var_68 * *(a2 + 0x1c);
    float var_20 = var_58 * *(a2 + 0x20) + var_70 * *(a2 + 0x18) + var_64 * *(a2 + 0x1c);
    float var_1c = var_6c * *(a2 + 0x28) + var_60 * *(a2 + 0x2c) + var_78 * *(a2 + 0x24);
    float var_18 = var_68 * *(a2 + 0x28) + var_5c * *(a2 + 0x2c) + var_74 * *(a2 + 0x24);
    float var_14 = var_64 * *(a2 + 0x28) + var_58 * *(a2 + 0x2c) + var_70 * *(a2 + 0x24);
    float var_10 = var_60 * *(a2 + 0x38) + var_78 * *(a2 + 0x30) + var_6c * *(a2 + 0x34);
    float var_c = var_5c * *(a2 + 0x38) + var_74 * *(a2 + 0x30) + var_68 * *(a2 + 0x34);
    int32_t var_4 = *(a2 + 0x3c) + edx_5 + 1;
    float var_8 = var_58 * *(a2 + 0x38) + var_70 * *(a2 + 0x30) + var_64 * *(a2 + 0x34);
    memcpy(a1 + 0x70, &var_28, 0x28);
    return (*((sub_4c48c0() << 2) + &g_a982e0))(a1, 0);
}
