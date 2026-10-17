// Original IGI.EXE function: Computer_Setup (VA 0x0046BD50; static CFG gate PASS, CFG score 0.917).
#include "Computer_Setup.h"
int32_t Computer_Setup(void* a1)

{
    void* ctxB = *(a1 + 0x14);
    AI_FireWeapon_23(a1 + 0xf0, *(ctxB + 0x4ec));
    AI_TakeCover_23(a1 + 0x108, *(ctxB + 0x4ec));
    float v_58 = *(a1 + 0x118) * 532.47998f - *(a1 + 0x11c) * 40.9599991f;
    float v_54 = *(a1 + 0x124) * 532.47998f - *(a1 + 0x128) * 40.9599991f;
    *(a1 + 0x20) = *(a1 + 0x10c) * 532.47998f - *(a1 + 0x110) * 40.9599991f + *(a1 + 0xf0);
    *(a1 + 0x28) = v_58 + *(a1 + 0xf8);
    *(a1 + 0x30) = v_54 + *(a1 + 0x100);
    float v_50;
    Sys_CloseFileStream_12(&v_50, 1.57079637f);
    float v_44;
    float v_38;
    float v_28 = v_44 * *(a1 + 0x10c) + v_50 * *(a1 + 0x108) + v_38 * *(a1 + 0x110);
    float v_4c;
    float v_40;
    float v_34;
    float v_24 = v_40 * *(a1 + 0x10c) + v_4c * *(a1 + 0x108) + v_34 * *(a1 + 0x110);
    float v_48;
    float v_3c;
    float v_30;
    float v_20 = v_3c * *(a1 + 0x10c) + v_48 * *(a1 + 0x108) + v_30 * *(a1 + 0x110);
    int32_t result = *(a1 + 0x12c);
    int32_t v_2c;
    int32_t v_4 = result + v_2c + 1;
    float v_1c = v_44 * *(a1 + 0x118) + v_38 * *(a1 + 0x11c) + v_50 * *(a1 + 0x114);
    float v_18 = v_40 * *(a1 + 0x118) + v_34 * *(a1 + 0x11c) + v_4c * *(a1 + 0x114);
    float v_14 = v_3c * *(a1 + 0x118) + v_30 * *(a1 + 0x11c) + v_48 * *(a1 + 0x114);
    float v_10 = v_38 * *(a1 + 0x128) + v_50 * *(a1 + 0x120) + v_44 * *(a1 + 0x124);
    float v_c = v_34 * *(a1 + 0x128) + v_4c * *(a1 + 0x120) + v_40 * *(a1 + 0x124);
    float v_8 = v_30 * *(a1 + 0x128) + v_48 * *(a1 + 0x120) + v_3c * *(a1 + 0x124);
    memcpy(a1 + 0x70, &v_28, 0x28);
    return result;
}
