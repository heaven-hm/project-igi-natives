#include "0040BED0-HumanPlayer_TakeDamage_4.h"
/* 0x0040bed0 HumanPlayer_TakeDamage_4 full linked: callers=0 callees=19 */
void* HumanPlayer_TakeDamage_4(void* a1, float a2)

{
    struct human_player* player = a2;
    double* eax = sub_4636e0(player);
    HumanPlayer_CheckCollision_9(player, 0f);
    sub_489ea0(player, 0x59, 1, 0f);
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
    sub_444b30(eax, &var_40, &var_28);
    double var_38;
    double var_30;
    float var_24;
    float var_18;
    float var_c;
    long double x87_r4_3 = var_c * (player->pad0[0x30] - var_30)
        + var_18 * (player->pad0[0x28] - var_38) + var_24 * (player->pad0[0x20] - var_40);
    long double temp0 = 0.0;
    x87_r4_3 - temp0;
    long double x87_r7_15;

    if (!(*(&((x87_r4_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_3, temp0) ? 1 : 0) << 0xa
            | (x87_r4_3 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_15 = -409.60000000000002;
    else
    {
        sub_4b3790(&var_28, &var_28, 3.14159274f);
        x87_r7_15 = 409.60000000000002;
    }

    var_58 = var_28 * x87_r7_15 + var_24 * 2949.1199999999999;
    float var_1c;
    var_50 = var_1c * x87_r7_15 + var_18 * 2949.1199999999999;
    var_40 = var_58 + var_40;
    double var_38_1 = var_50 + var_38;
    float var_10;
    double var_30_1 = x87_r7_15 * var_10 + var_c * 2949.1199999999999 + var_30;
    sub_4631a0(player, &var_40);
    sub_463260(player);
    float var_60;
    float var_5c;
    sub_4b3c50(&var_28, &var_5c, &var_60, &a2);
    a2 = a2 + 3.14159274f;
    sub_463220(player, a2);
    long double x87_r7_22 = sub_447d30(eax) * 30f;
    *(player + 0xd64) = 0;
    var_58 = x87_r7_22;
    *(player + 0xd60) = var_58;
    Human_ViewCam(player, 3);
    HumanPlayer_CheckCollision_4(player);
    sub_463590(player);
    sub_464720(player->pad4ec);
    sub_464700(player->pad4ec);
    sub_4635f0(player);
    HumanPlayer_UpdateAnimation_4(player);
    *(player + 0xd70) = sub_4e6b00(player, "picklock_loop");
    *(a1 + 0x14) = sub_40c160;
    return a1;
}
