#include "0040CF70-HumanPlayer_TakeDamage_5.h"
/* 0x0040cf70 HumanPlayer_TakeDamage_5 full linked: callers=0 callees=18 */
void* HumanPlayer_TakeDamage_5(void* a1, float a2)

{
    struct human_player* player = a2;
    double* eax = sub_4636e0(player);
    player->pad0[0x33d] = 0;
    HumanPlayer_CheckCollision_9(player, 0f);
    sub_489ea0(player, sub_4485d0(eax), 1, 0f);
    sub_4d2fb0(&player->pad2[0x24], &player->pad2[0x30], &player->pad0[0x68]);
    long double x87_r7_3 = player->pad0[0x80] * player->pad2[0x38]
        + player->pad0[0x7c] * player->pad2[0x34] + player->pad0[0x78] * player->pad2[0x30];
    float var_58 = x87_r7_3;
    long double x87_r7_7 = player->pad0[0x8c] * player->pad2[0x38]
        + player->pad0[0x88] * player->pad2[0x34] + player->pad0[0x84] * player->pad2[0x30];
    float var_54 = x87_r7_7;
    long double x87_r7_10 =
        player->pad0[0x98] * player->pad2[0x38] + player->pad0[0x94] * player->pad2[0x34];
    long double x87_r6_11 = player->pad0[0x90] * player->pad2[0x30];
    player->pad2[0x30] = var_58;
    player->pad2[0x31] = *(&var_58 + 1);
    player->pad2[0x32] = *(&var_58 + 2);
    player->pad2[0x33] = *(&var_58 + 3);
    player->pad2[0x34] = var_54;
    player->pad2[0x35] = *(&var_54 + 1);
    player->pad2[0x36] = *(&var_54 + 2);
    player->pad2[0x37] = *(&var_54 + 3);
    float var_50 = x87_r7_10 + x87_r6_11;
    player->pad2[0x38] = var_50;
    player->pad2[0x39] = *(&var_50 + 1);
    player->pad2[0x3a] = *(&var_50 + 2);
    player->pad2[0x3b] = *(&var_50 + 3);
    double var_40;
    float var_28;
    sub_448570(eax, &var_40, &var_28);
    float var_18;
    var_50 = var_18 * 3481.5999999999999;
    float var_c;
    double var_48 = var_c * 3481.5999999999999;
    float var_24;
    var_40 = var_40 + var_24 * 3481.5999999999999;
    double var_38;
    double var_38_1 = var_38 + var_50;
    double var_30;
    double var_30_1 = var_30 + var_48;
    sub_4631a0(player, &var_40);
    sub_463260(player);
    float var_60;
    float var_5c;
    sub_4b3c50(&var_28, &var_5c, &var_60, &a2);
    a2 = a2 + 3.14159274f;
    sub_463220(player, a2);
    HumanPlayer_UpdateAnimation_4(player);
    long double x87_r7_22 = sub_4485c0(eax) * 30f;
    *(player + 0xd64) = 0;
    var_58 = x87_r7_22;
    *(player + 0xd60) = var_58;
    Human_ViewCam(player, 3);
    HumanPlayer_CheckCollision_4(player);
    sub_463590(player);
    sub_464720(player->pad4ec);
    sub_464700(player->pad4ec);
    void* result = sub_4635f0(player);
    *(player + 0xd70) = 0;
    *(a1 + 0x14) = sub_40d580;
    return result;
}
