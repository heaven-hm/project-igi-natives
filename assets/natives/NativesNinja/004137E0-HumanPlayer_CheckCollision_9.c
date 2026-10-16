#include "004137E0-HumanPlayer_CheckCollision_9.h"
/* 0x004137e0 HumanPlayer_CheckCollision_9 full linked: callers=25 callees=9 */
void* HumanPlayer_CheckCollision_9(struct human_player* player, float mode)

{
    uint8_t pad4ec[0x4] = player->pad4ec;
    int32_t ebp = 0;
    int32_t ebx = 0;
    int32_t esi = 0xffffffff;
    int32_t edi = 0xffffffff;
    float var_8 = 0f;
    float var_10 = 0.400000006f;
    float var_c = 0.400000006f;
    player->collision_mode = mode;

    if (!mode)
    {
        player->collision_flag = 0;
        return Collision_Reset(player, 0f);
    }

    struct collision_set* a = Table_GetAt(&player->stance_data, 0);

    if (a)
    {
        void* entry_d;
        int32_t entry_c;
        int32_t entry_b;
        a = HumanPlayer_LoadParameters_13(a, entry_b, entry_c, entry_d);

        if (mode - 1 <= 9)
        {
            switch (mode)
            {
                case 1:
                case 9:
                {
                    esi = *(a + 0x67c);
                    edi = *(a + 0x694);
                    ebx = 1;
                    ebp = 1;
                    break;
                }
                case 2:
                {
                    esi = *(a + 0x680);
                    edi = *(a + 0x698);
                    ebx = 1;
                    ebp = 1;
                    break;
                }
                case 3:
                {
                    esi = *(a + 0x680);
                    edi = *(a + 0x69c);
                    ebx = 1;
                    ebp = 1;
                    break;
                }
                case 4:
                {
                    esi = *(a + 0x67c);
                    edi = *(a + 0x6a0);
                    ebx = 1;
                    ebp = 1;
                    break;
                }
                case 5:
                {
                    esi = *(a + 0x67c);
                    edi = *(a + 0x6a4);
                    ebx = 1;
                    ebp = 1;
                    break;
                }
                case 6:
                {
                    esi = *(a + 0x684);
                    edi = *(a + 0x6a8);
                    var_10 = 0f;
                    var_c = 0f;
                    long double st0_1;
                    st0_1 = sub_4b4770(Level_SetMission_5());
                    var_8 = sub_4d2d50() * st0_1 * 0.174999997f * 30f;
                    break;
                }
                case 7:
                {
                    esi = *(a + 0x690);
                    edi = *(a + 0x6ac);
                    var_10 = 0f;
                    var_c = 0f;
                    break;
                }
                case 8:
                {
                    int32_t stance = player->stance;

                    if (!stance)
                    {
                        esi = *(a + 0x684);
                        edi = *(a + 0x6a8);
                        var_10 = 0f;
                    }
                    else if (stance == 1)
                    {
                        esi = *(a + 0x688);
                        edi = *(a + 0x6a8);
                        var_10 = 0f;
                    }
                    else if (stance != 2)
                        var_10 = 0f;
                    else
                    {
                        esi = *(a + 0x68c);
                        edi = *(a + 0x6a8);
                        var_10 = 0f;
                    }

                    var_c = 0f;
                    break;
                }
                case 0xa:
                {
                    esi = *(a + 0x67c);
                    edi = *(a + 0x694);
                    ebx = 1;
                    var_10 = 0f;
                    ebp = 1;
                    var_c = 0f;
                    break;
                }
            }

            if (esi != 0xffffffff)
            {
                a = sub_489f20(player, esi, ebx, var_10);
                long double x87_r7_6 = var_8;
                long double temp2_1 = 0f;
                x87_r7_6 - temp2_1;
                a = (x87_r7_6 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe;

                if (!(*(&a + 1) & 0x40))
                    a = sub_4d65b0(pad4ec + 0x68, 0, var_8);
            }

            if (edi != 0xffffffff)
                return sub_489ed0(player, edi, ebp, var_c);
        }
    }

    return a;
}
