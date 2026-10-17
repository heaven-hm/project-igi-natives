// Original IGI.EXE function: HumanPlayer_CheckCollision_9 (VA 0x004137E0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_CheckCollision_9.h"
void** HumanPlayer_CheckCollision_9(void* context, float param_2)

{
    void* entity_val = *(context + 0x4ec);
    int32_t flagP = 0;
    int32_t context_val = 0;
    int32_t source_val = 0xffffffff;
    int32_t dest_val = 0xffffffff;
    float item_8 = 0.0f;
    float item_10 = 0.400000006f;
    float item_c = 0.400000006f;
    *(context + 0xd58) = param_2;

    if (!param_2)
    {
        *(context + 0xd5c) = 0;
        return Collision_Reset(context, 0.0f);
    }

    void* result;
    int32_t entity_2;
    result = Table_GetAt(context + 0x4c4, 0);

    if (result)
    {
        int32_t temp_val;
        result = HumanPlayer_LoadParameters_13(result, temp_val, entity_2, result);

        if (param_2 - 1 <= 9)
        {
            switch (param_2)
            {
                case 1:
                case 9:
                {
                    source_val = *(result + 0x67c);
                    dest_val = *(result + 0x694);
                    context_val = 1;
                    flagP = 1;
                    break;
                }
                case 2:
                {
                    source_val = *(result + 0x680);
                    dest_val = *(result + 0x698);
                    context_val = 1;
                    flagP = 1;
                    break;
                }
                case 3:
                {
                    source_val = *(result + 0x680);
                    dest_val = *(result + 0x69c);
                    context_val = 1;
                    flagP = 1;
                    break;
                }
                case 4:
                {
                    source_val = *(result + 0x67c);
                    dest_val = *(result + 0x6a0);
                    context_val = 1;
                    flagP = 1;
                    break;
                }
                case 5:
                {
                    source_val = *(result + 0x67c);
                    dest_val = *(result + 0x6a4);
                    context_val = 1;
                    flagP = 1;
                    break;
                }
                case 6:
                {
                    source_val = *(result + 0x684);
                    dest_val = *(result + 0x6a8);
                    item_10 = 0.0f;
                    item_c = 0.0f;
                    long double fp0_1;
                    fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
                    item_8 = Render_DrawBoneMesh_5() * fp0_1 * 0.174999997f * 30.0f;
                    break;
                }
                case 7:
                {
                    source_val = *(result + 0x690);
                    dest_val = *(result + 0x6ac);
                    item_10 = 0.0f;
                    item_c = 0.0f;
                    break;
                }
                case 8:
                {
                    int32_t entity_5 = *(context + 0x4e8);

                    if (!entity_5)
                    {
                        source_val = *(result + 0x684);
                        dest_val = *(result + 0x6a8);
                        item_10 = 0.0f;
                    }
                    else if (entity_5 == 1)
                    {
                        source_val = *(result + 0x688);
                        dest_val = *(result + 0x6a8);
                        item_10 = 0.0f;
                    }
                    else if (entity_5 != 2)
                        item_10 = 0.0f;
                    else
                    {
                        source_val = *(result + 0x68c);
                        dest_val = *(result + 0x6a8);
                        item_10 = 0.0f;
                    }

                    item_c = 0.0f;
                    break;
                }
                case 0xa:
                {
                    source_val = *(result + 0x67c);
                    dest_val = *(result + 0x694);
                    context_val = 1;
                    item_10 = 0.0f;
                    flagP = 1;
                    item_c = 0.0f;
                    break;
                }
            }

            if (source_val != 0xffffffff)
            {
                result = FX_FireBallUpdate_15(context, source_val, context_val, item_10);
                long double fpu_val_7_6 = item_8;
                long double f2_1 = 0.0f;
                fpu_val_7_6 - f2_1;
                result = (fpu_val_7_6 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_6, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == f2_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    result = Render_BindTexture_10(entity_val + 0x68, 0, item_8);
            }

            if (dest_val != 0xffffffff)
                return FX_TrailUpdate_14(context, dest_val, flagP, item_c);
        }
    }

    return result;
}
