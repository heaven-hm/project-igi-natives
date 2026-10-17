// IGI native provenance: WeaponGun_ProcessStep_4782D0 - 0x004782D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004782D0-WeaponGun_ProcessStep_4782D0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_ProcessStep_4782D0.h"

int32_t WeaponGun_ProcessStep_4782D0(float arg1)

{
    int32_t context_val = *(arg1 + 0xf0);

    if (!context_val)
        return QTask_FindType(arg1);

    long double x87_r7_1 = *(arg1 + 0x11c) * 0.985000014f;
    *(arg1 + 0xf0) = context_val - 1;
    *(arg1 + 0x11c) = x87_r7_1;
    long double x87_r6_1 = *(arg1 + 0x120) * 0.985000014f;
    *(arg1 + 0x120) = x87_r6_1;
    long double x87_r6_4 = (*(arg1 + 0x124) - 44.6008873f) * 0.985000014f;
    float var_2c = x87_r6_4;
    *(arg1 + 0x124) = x87_r6_4;
    *(arg1 + 0x20) = x87_r7_1 + *(arg1 + 0x20);
    *(arg1 + 0x28) = x87_r6_1 + *(arg1 + 0x28);
    *(arg1 + 0x30) = var_2c + *(arg1 + 0x30);
    long double x87_r7_10 = *(arg1 + 0x78) * *(arg1 + 0x10c) + *(arg1 + 0x74) * *(arg1 + 0x100)
        + *(arg1 + 0xf4) * *(arg1 + 0x70);
    float var_28 = x87_r7_10;
    long double x87_r7_14 = *(arg1 + 0x110) * *(arg1 + 0x78) + *(arg1 + 0xf8) * *(arg1 + 0x70)
        + *(arg1 + 0x104) * *(arg1 + 0x74);
    float var_24 = x87_r7_14;
    long double x87_r7_18 = *(arg1 + 0x114) * *(arg1 + 0x78) + *(arg1 + 0xfc) * *(arg1 + 0x70)
        + *(arg1 + 0x108) * *(arg1 + 0x74);
    float var_20 = x87_r7_18;
    long double x87_r7_22 = *(arg1 + 0x84) * *(arg1 + 0x10c) + *(arg1 + 0x7c) * *(arg1 + 0xf4)
        + *(arg1 + 0x80) * *(arg1 + 0x100);
    float var_1c = x87_r7_22;
    long double x87_r7_26 = *(arg1 + 0x104) * *(arg1 + 0x80) + *(arg1 + 0x110) * *(arg1 + 0x84)
        + *(arg1 + 0xf8) * *(arg1 + 0x7c);
    float var_18 = x87_r7_26;
    long double x87_r7_30 = *(arg1 + 0x108) * *(arg1 + 0x80) + *(arg1 + 0x114) * *(arg1 + 0x84)
        + *(arg1 + 0xfc) * *(arg1 + 0x7c);
    float var_14 = x87_r7_30;
    long double x87_r7_34 = *(arg1 + 0x90) * *(arg1 + 0x10c) + *(arg1 + 0x100) * *(arg1 + 0x8c)
        + *(arg1 + 0xf4) * *(arg1 + 0x88);
    float var_10 = x87_r7_34;
    long double x87_r7_38 = *(arg1 + 0x104) * *(arg1 + 0x8c) + *(arg1 + 0x110) * *(arg1 + 0x90)
        + *(arg1 + 0xf8) * *(arg1 + 0x88);
    float var_c = x87_r7_38;
    int32_t result = *(arg1 + 0x118) + *(arg1 + 0x94) + 1;
    int32_t result_1 = result;
    long double x87_r7_42 = *(arg1 + 0x108) * *(arg1 + 0x8c) + *(arg1 + 0x114) * *(arg1 + 0x90)
        + *(arg1 + 0xfc) * *(arg1 + 0x88);
    float var_8 = x87_r7_42;
    __builtin_memcpy(arg1 + 0x70, &var_28, 0x28);
    return result;
}
