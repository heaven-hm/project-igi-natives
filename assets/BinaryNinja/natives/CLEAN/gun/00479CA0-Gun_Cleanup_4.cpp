// IGI native provenance: Gun_Cleanup_4 - 0x00479CA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00479CA0-Gun_Cleanup_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_Cleanup_4.h"
void** Gun_Cleanup_4(void* context, float* param_2)

{
    float item_c;
    WeaponType_RegisterType_2(&item_c, context, 0);
    *param_2 = item_c + 143.360001f;
    float item_8;
    param_2[1] = item_8 - 389.119995f;
    float item_4;
    param_2[2] = item_4 - 20.4799995f;
    void** result = WeaponType_RegisterType_2(&item_c, context, 1);
    long double fpu_val_7_7 = item_c - 409.600006f;
    param_2[4] = item_8;
    param_2[3] = fpu_val_7_7;
    param_2[5] = item_4 + 40.9599991f;
    return result;
}
