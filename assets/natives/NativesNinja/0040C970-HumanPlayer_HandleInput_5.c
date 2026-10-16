#include "0040C970-HumanPlayer_HandleInput_5.h"
/* 0x0040c970 HumanPlayer_HandleInput_5 full linked: callers=0 callees=14 */
void* HumanPlayer_HandleInput_5(void* a1, float a2)

{
    struct human_player* player = a2;
    double* eax = sub_4636e0(player);
    double var_58;
    float var_28;
    sub_444b30(eax, &var_58, &var_28);
    double var_50;
    double var_48;
    float var_24;
    float var_18;
    float var_c;
    long double x87_r4_3 = var_c * (player->pad0[0x30] - var_48)
        + var_18 * (player->pad0[0x28] - var_50) + var_24 * (player->pad0[0x20] - var_58);
    long double temp0 = 0.0;
    x87_r4_3 - temp0;

    if (*(&((x87_r4_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_3, temp0) ? 1 : 0) << 0xa
            | (x87_r4_3 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
        sub_4b3790(&var_28, &var_28, 3.14159274f);

    int32_t ecx;
    ecx = player->pad0[0x30];
    *(&ecx + 1) = player->pad0[0x31];
    *(&ecx + 2) = player->pad0[0x32];
    *(&ecx + 3) = player->pad0[0x33];
    int32_t edx;
    edx = player->pad0[0x34];
    *(&edx + 1) = player->pad0[0x35];
    *(&edx + 2) = player->pad0[0x36];
    *(&edx + 3) = player->pad0[0x37];
    var_48 = ecx;
    double var_38 = var_18 * 2867.1999999999998;
    *(&var_48 + 4) = edx;
    var_58 = var_24 * 2867.1999999999998 + var_58;
    double var_50_1 = var_38 + var_50;
    sub_4631a0(player, &var_58);
    float var_60;
    float var_5c;
    sub_4b3c50(&var_28, &var_5c, &var_60, &a2);
    a2 = a2 + 3.14159274f;
    sub_463220(player, a2);
    HumanPlayer_CheckCollision_9(player, 0f);
    HumanPlayer_UpdateAnimation_4(player);
    sub_489ea0(player, 0xc6, 0, 0f);
    sub_464720(player->pad4ec);
    sub_464700(player->pad4ec);
    sub_4635f0(player);
    sub_463310(player, eax);
    void* result = sub_463590(player);
    player->stance_data[0xc] = 0;
    *(a1 + 0x14) = sub_40cae0;
    return result;
}
