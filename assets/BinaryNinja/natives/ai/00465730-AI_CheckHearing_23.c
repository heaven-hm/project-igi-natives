// Original IGI.EXE function: AI_CheckHearing_23 (VA 0x00465730; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_23.h"
int32_t AI_CheckHearing_23(void* context)

{
    char result = *(context + 0xd9);

    if (!result)
        return result;

    double item_18;
    AI_FireWeapon_23(&item_18, context);
    long double fpu_val_7_1 = *(context + 0x1f0);
    long double fpu_val_6_1 = *(context + 0x1f4);
    long double fpu_val_5_1 = *(context + 0x1f8);
    float entity_1 = *(context + 0xa0);
    float item_20_1 =
        fpu_val_5_1 * *(context + 0x8c) + fpu_val_6_1 * *(context + 0x88) + fpu_val_7_1 * *(context + 0x84);
    long double fpu_val_7_3 =
        fpu_val_5_1 * *(context + 0x98) + fpu_val_6_1 * *(context + 0x94) + fpu_val_7_1 * *(context + 0x90);
    item_18 =
        fpu_val_5_1 * *(context + 0x80) + fpu_val_6_1 * *(context + 0x7c) + fpu_val_7_1 * *(context + 0x78) + item_18;
    double item_10;
    double item_10_1 = item_20_1 + item_10;
    double item_8;
    double item_8_1 = fpu_val_7_3 + item_8;
    return WorldObject_CommitTransform(Level_StartMission_4(), context, &item_18, entity_1);
}
