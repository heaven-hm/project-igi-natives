#include "0040CB90-HumanPlayer_ApplyPhysics_5.h"
/* 0x0040cb90 HumanPlayer_ApplyPhysics_5 full linked: callers=0 callees=14 */
void* HumanPlayer_ApplyPhysics_5(void* a1, struct human_player* a2)

{
    struct human_player* player = a2;
    double var_58;
    float var_28;
    Menu_FormatScreen_23(sub_4636e0(player), &var_58, &var_28);
    float var_18;
    float var_14;
    double var_38 = var_18 * -2048.0 - var_14 * 1433.5999999999999;
    float var_c;
    float var_8;
    double var_30 = var_c * -2048.0 - var_8 * 1433.5999999999999;
    float var_24;
    float var_20;
    var_58 = var_58 + var_24 * -2048.0 - var_20 * 1433.5999999999999;
    double var_50;
    double var_50_1 = var_50 + var_38;
    double var_48;
    double var_48_1 = var_48 + var_30;
    sub_4631a0(player, &var_58);
    float var_60;
    float var_5c;
    sub_4b3c50(&var_28, &var_5c, &var_60, &a2);
    sub_463220(player, a2);
    HumanPlayer_CheckCollision_9(player, 0f);
    sub_489ea0(player, 0xbd, 0, 0f);
    Human_ViewCam(player, 3);
    sub_464720(player->pad4ec);
    sub_464700(player->pad4ec);
    sub_4635f0(player);
    sub_463570(player);
    sub_4632d0(player);
    void* result = sub_463590(player);
    *(a1 + 0x14) = HumanPlayer_PlayFootstep_5;
    return result;
}
