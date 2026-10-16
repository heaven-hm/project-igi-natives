#include "AI_CheckHearing_23.h"
int32_t AI_CheckHearing_23(void* a1)

{
    char result = *(a1 + 0xd9);

    if (!result)
        return result;

    double v_18;
    AI_FireWeapon_23(&v_18, a1);
    long double x87_r7_1 = *(a1 + 0x1f0);
    long double x87_r6_1 = *(a1 + 0x1f4);
    long double x87_r5_1 = *(a1 + 0x1f8);
    float objC1 = *(a1 + 0xa0);
    float v_20_1 =
        x87_r5_1 * *(a1 + 0x8c) + x87_r6_1 * *(a1 + 0x88) + x87_r7_1 * *(a1 + 0x84);
    long double x87_r7_3 =
        x87_r5_1 * *(a1 + 0x98) + x87_r6_1 * *(a1 + 0x94) + x87_r7_1 * *(a1 + 0x90);
    v_18 =
        x87_r5_1 * *(a1 + 0x80) + x87_r6_1 * *(a1 + 0x7c) + x87_r7_1 * *(a1 + 0x78) + v_18;
    double v_10;
    double v_10_1 = v_20_1 + v_10;
    double v_8;
    double v_8_1 = x87_r7_3 + v_8;
    return WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_18, objC1);
}
