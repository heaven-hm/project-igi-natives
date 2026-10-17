// IGI native provenance: Computer_Setup - 0x0046BD50 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046BD50-Computer_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Computer_Setup.h"
int32_t Computer_Setup(void* context)

{
    void* context_val = *(context + 0x14);
    AI_FireWeapon_23(context + 0xf0, *(context_val + 0x4ec));
    AI_TakeCover_23(context + 0x108, *(context_val + 0x4ec));
    float item_58 = *(context + 0x118) * 532.47998f - *(context + 0x11c) * 40.9599991f;
    float item_54 = *(context + 0x124) * 532.47998f - *(context + 0x128) * 40.9599991f;
    *(context + 0x20) = *(context + 0x10c) * 532.47998f - *(context + 0x110) * 40.9599991f + *(context + 0xf0);
    *(context + 0x28) = item_58 + *(context + 0xf8);
    *(context + 0x30) = item_54 + *(context + 0x100);
    float item_50;
    Sys_CloseFileStream_12(&item_50, 1.57079637f);
    float item_44;
    float item_38;
    float item_28 = item_44 * *(context + 0x10c) + item_50 * *(context + 0x108) + item_38 * *(context + 0x110);
    float item_4c;
    float item_40;
    float item_34;
    float item_24 = item_40 * *(context + 0x10c) + item_4c * *(context + 0x108) + item_34 * *(context + 0x110);
    float item_48;
    float item_3c;
    float item_30;
    float item_20 = item_3c * *(context + 0x10c) + item_48 * *(context + 0x108) + item_30 * *(context + 0x110);
    int32_t result = *(context + 0x12c);
    int32_t item_2c;
    int32_t item_4 = result + item_2c + 1;
    float item_1c = item_44 * *(context + 0x118) + item_38 * *(context + 0x11c) + item_50 * *(context + 0x114);
    float item_18 = item_40 * *(context + 0x118) + item_34 * *(context + 0x11c) + item_4c * *(context + 0x114);
    float item_14 = item_3c * *(context + 0x118) + item_30 * *(context + 0x11c) + item_48 * *(context + 0x114);
    float item_10 = item_38 * *(context + 0x128) + item_50 * *(context + 0x120) + item_44 * *(context + 0x124);
    float item_c = item_34 * *(context + 0x128) + item_4c * *(context + 0x120) + item_40 * *(context + 0x124);
    float item_8 = item_30 * *(context + 0x128) + item_48 * *(context + 0x120) + item_3c * *(context + 0x124);
    memcpy(context + 0x70, &item_28, 0x28);
    return result;
}
