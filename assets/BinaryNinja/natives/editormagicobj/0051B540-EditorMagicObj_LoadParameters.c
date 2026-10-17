// Original IGI.EXE function: EditorMagicObj_LoadParameters (VA 0x0051B540; static CFG gate FAIL, CFG score 0.833).
#include "EditorMagicObj_LoadParameters.h"
int32_t EditorMagicObj_LoadParameters(void* a1, void* a2)

{
    float* objC = *(a1 + 0x138);
    int32_t v_7c = 0;
    int32_t dstD = objC[1];
    int32_t srcS = objC[2];

    if (srcS != dstD)
        v_7c = 0 % (srcS - dstD) + dstD;

    float* v_8c = objC;
    float v_50;
    Sys_DispatchOpcode_12(&v_50, v_7c * *objC);
    float v_44;
    float v_38;
    float v_78 = v_38 * *(a1 + 0x110) + v_50 * *(a1 + 0x108) + v_44 * *(a1 + 0x10c);
    float v_4c;
    float v_40;
    float v_34;
    float v_74 = v_34 * *(a1 + 0x110) + v_4c * *(a1 + 0x108) + v_40 * *(a1 + 0x10c);
    float v_48;
    float v_3c;
    float v_30;
    float v_70 = v_30 * *(a1 + 0x110) + v_48 * *(a1 + 0x108) + v_3c * *(a1 + 0x10c);
    float v_6c = v_38 * *(a1 + 0x11c) + v_50 * *(a1 + 0x114) + v_44 * *(a1 + 0x118);
    float v_68 = v_34 * *(a1 + 0x11c) + v_4c * *(a1 + 0x114) + v_40 * *(a1 + 0x118);
    float v_64 = v_30 * *(a1 + 0x11c) + v_48 * *(a1 + 0x114) + v_3c * *(a1 + 0x118);
    float v_60 = v_38 * *(a1 + 0x128) + v_50 * *(a1 + 0x120) + v_44 * *(a1 + 0x124);
    int32_t v_2c;
    int32_t tmpD5 = *(a1 + 0x12c) + v_2c + 1;
    int32_t v_54 = tmpD5;
    float v_5c = v_34 * *(a1 + 0x128) + v_4c * *(a1 + 0x120) + v_40 * *(a1 + 0x124);
    float v_58 = v_30 * *(a1 + 0x128) + v_48 * *(a1 + 0x120) + v_3c * *(a1 + 0x124);
    long double x87_r7_39 = v_60 * *(a2 + 0x20);
    long double x87_r6_37 = v_78 * *(a2 + 0x18);
    memcpy(&v_50, &v_78, 0x28);
    float v_28 = x87_r7_39 + x87_r6_37 + v_6c * *(a2 + 0x1c);
    float v_24 = v_5c * *(a2 + 0x20) + v_74 * *(a2 + 0x18) + v_68 * *(a2 + 0x1c);
    float v_20 = v_58 * *(a2 + 0x20) + v_70 * *(a2 + 0x18) + v_64 * *(a2 + 0x1c);
    float v_1c = v_6c * *(a2 + 0x28) + v_60 * *(a2 + 0x2c) + v_78 * *(a2 + 0x24);
    float v_18 = v_68 * *(a2 + 0x28) + v_5c * *(a2 + 0x2c) + v_74 * *(a2 + 0x24);
    float v_14 = v_64 * *(a2 + 0x28) + v_58 * *(a2 + 0x2c) + v_70 * *(a2 + 0x24);
    float v_10 = v_60 * *(a2 + 0x38) + v_78 * *(a2 + 0x30) + v_6c * *(a2 + 0x34);
    float v_c = v_5c * *(a2 + 0x38) + v_74 * *(a2 + 0x30) + v_68 * *(a2 + 0x34);
    int32_t v_4 = *(a2 + 0x3c) + tmpD5 + 1;
    float v_8 = v_58 * *(a2 + 0x38) + v_70 * *(a2 + 0x30) + v_64 * *(a2 + 0x34);
    memcpy(a1 + 0x70, &v_28, 0x28);
    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(a1, 0);
}
