/* LOGIC NOTE (Flow_LoadParameters @ 0x00402260)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Config
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Flow_LoadParameters.h"

void* Flow_LoadParameters(uint32_t arg1)

{
    int32_t result = Timer_Now();
    struct frames_ctx* frames_ctx_1;

    if (data_5c8e00)
    {
    label_4024d0:
        int32_t* i = *(arg1 + 8);
        int32_t result_15;

        if (!*i || !i)
            result_15 = data_afa7e0;
        else
        {
            result_15 = data_afa7e0;

            do
            {
                int32_t* src_3 = *i;
                void* ctx_22;

                if (!src_3)
                    ctx_22 = nullptr;
                else
                {
                    int32_t ctx_19 = *src_3;
                    int32_t ctx_20 = -(ctx_19);
                    ctx_22 = (ctx_20 - ctx_20) & src_3;
                }

                *((result_15 << 2) + &data_afa6e0) = ctx_22;
                int32_t result_16 = result_15 + 1;
                int32_t ctx_23 = 0;
                data_afa7e0 = result_16;
                ctx_23 = i[7];
                int32_t ctx_24 = *((ctx_23 << 2) + &data_a970e0);

                if (ctx_24)
                {
                    ctx_24(i);
                    result_16 = data_afa7e0;
                }

                i = *((result_16 << 2) + &data_afa6dc);
                result_15 = result_16 - 1;
                data_afa7e0 = result_15;
            } while (i);
        }

        struct frames_ctx* frames_ctx_9 = g_frames_ctx;
        void* ctx_25;
        ctx_25 = frames_ctx_9->pad_45[3];
        *(&ctx_25 + 1) = frames_ctx_9->pad_45[4];
        *(&ctx_25 + 2) = frames_ctx_9->pad_45[5];
        *(&ctx_25 + 3) = frames_ctx_9->pad_45[6];
        int32_t* i_1 = *(ctx_25 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* src_4 = *i_1;
                void* tmp_14;

                if (!src_4)
                    tmp_14 = nullptr;
                else
                {
                    int32_t tmp_11 = *src_4;
                    int32_t tmp_12 = -(tmp_11);
                    tmp_14 = (tmp_12 - tmp_12) & src_4;
                }

                *((result_15 << 2) + &data_afa6e0) = tmp_14;
                int32_t result_17 = result_15 + 1;
                int32_t tmp_15 = 0;
                data_afa7e0 = result_17;
                tmp_15 = i_1[7];
                int32_t tmp_16 = *((tmp_15 << 2) + &data_a970e0);

                if (tmp_16)
                {
                    tmp_16(i_1);
                    result_17 = data_afa7e0;
                }

                i_1 = *((result_17 << 2) + &data_afa6dc);
                result_15 = result_17 - 1;
                data_afa7e0 = result_15;
            } while (i_1);

            frames_ctx_9 = g_frames_ctx;
        }

        frames_ctx_9->unk34 += 1;

        if (!Display_CheckCapabilities_2())
        {
            int32_t* i_2 = *(arg1 + 8);

            if (*i_2 && i_2)
            {
                int32_t ctx_26 = data_afa7e0;

                do
                {
                    int32_t* tmp_17 = *i_2;
                    void* result_22;

                    if (!tmp_17)
                        result_22 = nullptr;
                    else
                    {
                        int32_t result_19 = *tmp_17;
                        int32_t result_20 = -(result_19);
                        result_22 = (result_20 - result_20) & tmp_17;
                    }

                    *((ctx_26 << 2) + &data_afa6e0) = result_22;
                    data_afa7e0 = ctx_26 + 1;
                    int32_t result_23 = StatusScreen_GetEvent();
                    int32_t ctx_28 = 0;
                    ctx_28 = i_2[7];
                    int32_t result_27 = *(((result_23 * 0x180 + ctx_28) << 2) + &data_a96ae0);

                    if (result_27)
                        result_27(i_2);

                    ctx_26 = data_afa7e0 - 1;
                    data_afa7e0 = ctx_26;
                    i_2 = *((ctx_26 << 2) + &data_afa6e0);
                } while (i_2);
            }
        }

        struct frames_ctx* frames_ctx_4 = g_frames_ctx;
        frames_ctx_4->unk38 += 1;
        SoundSys_PlaySoundSample_11();
        SoundSys_InitSoundSys_11(0, 0);
        frames_ctx_1 = g_frames_ctx;
    }
    else
    {
        if (SoundSys_SetFrequency_19())
            goto label_4024d0;

        if (Display_CheckCapabilities_2())
            goto label_4024d0;

        frames_ctx_1 = g_frames_ctx;
        uint32_t unk34 = frames_ctx_1->unk34;

        if (result
            > 1000.0 / frames_ctx_1->limit * unk34 + frames_ctx_1->unk50 + frames_ctx_1->tick_base
            && frames_ctx_1->pad_40 <= 0xa && (frames_ctx_1->dirty || unk34 >= 3))
        {
            data_a4438c = 0;
            data_a44390 = 0;
            data_a44394 = 0;
            SoundSys_PlaySoundSample_11();
            SoundSys_InitSoundSys_11(0, 0);
            char v_1c_1;

            if (unk34 >= 2)
                v_1c_1 = 0;
            else
            {
                Game_TimingBegin();
                v_1c_1 = 1;
            }

            SoundSys_PlaySoundSample_9(v_1c_1);
            int32_t* i_3 = *(arg1 + 8);
            int32_t result_4;

            if (!*i_3 || !i_3)
                result_4 = data_afa7e0;
            else
            {
                result_4 = data_afa7e0;

                do
                {
                    int32_t* src_1 = *i_3;
                    void* ctx_6;

                    if (!src_1)
                        ctx_6 = nullptr;
                    else
                    {
                        int32_t ctx_3 = *src_1;
                        int32_t ctx_4 = -(ctx_3);
                        ctx_6 = (ctx_4 - ctx_4) & src_1;
                    }

                    *((result_4 << 2) + &data_afa6e0) = ctx_6;
                    int32_t result_5 = result_4 + 1;
                    int32_t ctx_7 = 0;
                    data_afa7e0 = result_5;
                    ctx_7 = i_3[7];
                    int32_t ctx_8 = *((ctx_7 << 2) + &data_a970e0);

                    if (ctx_8)
                    {
                        ctx_8(i_3);
                        result_5 = data_afa7e0;
                    }

                    i_3 = *((result_5 << 2) + &data_afa6dc);
                    result_4 = result_5 - 1;
                    data_afa7e0 = result_4;
                } while (i_3);
            }

            struct frames_ctx* frames_ctx_8 = g_frames_ctx;
            void* ctx_9;
            ctx_9 = frames_ctx_8->pad_45[3];
            *(&ctx_9 + 1) = frames_ctx_8->pad_45[4];
            *(&ctx_9 + 2) = frames_ctx_8->pad_45[5];
            *(&ctx_9 + 3) = frames_ctx_8->pad_45[6];
            int32_t* i_4 = *(ctx_9 + 8);

            if (*i_4 && i_4)
            {
                do
                {
                    int32_t* src_2 = *i_4;
                    void* tmp_4;

                    if (!src_2)
                        tmp_4 = nullptr;
                    else
                    {
                        int32_t tmp_1 = *src_2;
                        int32_t tmp_2 = -(tmp_1);
                        tmp_4 = (tmp_2 - tmp_2) & src_2;
                    }

                    *((result_4 << 2) + &data_afa6e0) = tmp_4;
                    int32_t result_6 = result_4 + 1;
                    int32_t tmp_5 = 0;
                    data_afa7e0 = result_6;
                    tmp_5 = i_4[7];
                    int32_t tmp_6 = *((tmp_5 << 2) + &data_a970e0);

                    if (tmp_6)
                    {
                        tmp_6(i_4);
                        result_6 = data_afa7e0;
                    }

                    i_4 = *((result_6 << 2) + &data_afa6dc);
                    result_4 = result_6 - 1;
                    data_afa7e0 = result_4;
                } while (i_4);
            }

            if (unk34 < 2)
                Game_TimingEnd();

            struct frames_ctx* frames_ctx_2 = g_frames_ctx;
            frames_ctx_2->unk34 += 1;
            g_frames_ctx->dirty = 0;
            struct frames_ctx* frames_ctx_3 = g_frames_ctx;
            frames_ctx_3->pad_40 += 1;
            frames_ctx_1 = g_frames_ctx;
        }
        else if (!frames_ctx_1->dirty)
        {
            if (frames_ctx_1->unk38 < 2)
            {
                Game_TimingBegin();
                frames_ctx_1 = g_frames_ctx;
            }

            int32_t* i_5 = *(arg1 + 8);

            if (*i_5 && i_5)
            {
                int32_t ctx_11 = data_afa7e0;

                do
                {
                    int32_t* tmp_9 = *i_5;
                    void* result_11;

                    if (!tmp_9)
                        result_11 = nullptr;
                    else
                    {
                        int32_t result_8 = *tmp_9;
                        int32_t result_9 = -(result_8);
                        result_11 = (result_9 - result_9) & tmp_9;
                    }

                    *((ctx_11 << 2) + &data_afa6e0) = result_11;
                    data_afa7e0 = ctx_11 + 1;
                    int32_t result_12 = StatusScreen_GetEvent();
                    int32_t tmp_10 = 0;
                    tmp_10 = i_5[7];
                    int32_t result_13 = *(((result_12 * 0x180 + tmp_10) << 2) + &data_a96ae0);

                    if (result_13)
                        result_13(i_5);

                    ctx_11 = data_afa7e0 - 1;
                    data_afa7e0 = ctx_11;
                    i_5 = *((ctx_11 << 2) + &data_afa6e0);
                } while (i_5);

                frames_ctx_1 = g_frames_ctx;
            }

            if (frames_ctx_1->unk38 < 2)
            {
                Game_TimingEnd();
                frames_ctx_1 = g_frames_ctx;
            }

            frames_ctx_1->unk38 += 1;
            g_frames_ctx->dirty = 1;
            struct frames_ctx* frames_ctx_6 = g_frames_ctx;
            frames_ctx_6->pad_40[0] = 0;
            frames_ctx_6->pad_40[1] = 0;
            frames_ctx_6->pad_40[2] = 0;
            frames_ctx_6->pad_40[3] = 0;
            frames_ctx_1 = g_frames_ctx;
        }
    }

    int32_t ctx_30;
    ctx_30 = frames_ctx_1->pad_00[0x2c];
    *(&ctx_30 + 1) = frames_ctx_1->pad_00[0x2d];
    *(&ctx_30 + 2) = frames_ctx_1->pad_00[0x2e];
    *(&ctx_30 + 3) = frames_ctx_1->pad_00[0x2f];

    if (ctx_30)
    {
        frames_ctx_1->pad_00[0x28] = ctx_30;
        frames_ctx_1->pad_00[0x29] = *(&ctx_30 + 1);
        frames_ctx_1->pad_00[0x2a] = *(&ctx_30 + 2);
        frames_ctx_1->pad_00[0x2b] = *(&ctx_30 + 3);
        struct frames_ctx* frames_ctx_10 = g_frames_ctx;
        frames_ctx_10->pad_00[0x2c] = 0;
        frames_ctx_10->pad_00[0x2d] = 0;
        frames_ctx_10->pad_00[0x2e] = 0;
        frames_ctx_10->pad_00[0x2f] = 0;

        if (ctx_30 - 1 <= 7)
            switch (ctx_30)
            {
                case 1:
                {
                    return QTask_CloseEvent();
                    break;
                }
                case 2:
                {
                    WeaponType_InvalidIntroscreenMo(Game_GetScriptContext(), 0, 0);
                    break;
                }
                case 3:
                {
                    Menu_Manager(Game_GetScriptContext(), "LOCAL:menusystem\mainmenu.qsc", 1, 1, 1);
                    break;
                }
                case 4:
                {
                    Level_SetMission_4(arg1);
                    Frames_Set(0x1e);
                    break;
                }
                case 5:
                {
                    Game_Restart();
                    Frames_Set(0x1e);
                    struct frames_ctx* frames_ctx_7 = g_frames_ctx;
                    frames_ctx_7->pad_00[0x28] = 4;
                    frames_ctx_7->pad_00[0x29] = 0;
                    frames_ctx_7->pad_00[0x2a] = 0;
                    frames_ctx_7->pad_00[0x2b] = 0;
                    break;
                }
                case 6:
                {
                    QTask_FindType(Level_LoadLevel_6());
                    struct frames_ctx* frames_ctx_5 = g_frames_ctx;
                    frames_ctx_5->pad_00[0x28] = 3;
                    frames_ctx_5->pad_00[0x29] = 0;
                    frames_ctx_5->pad_00[0x2a] = 0;
                    frames_ctx_5->pad_00[0x2b] = 0;
                    Menu_Manager(Game_GetScriptContext(), "LOCAL:menusystem\mainmenu.qsc", 1, 1, 1);
                    break;
                }
                case 7:
                {
                    WeaponType_InvalidIntroscreenMo(Game_GetScriptContext(), 1, 0);
                    break;
                }
                case 8:
                {
                    WeaponType_InvalidIntroscreenMo(Game_GetScriptContext(), 0, 1);
                    break;
                }
            }

        frames_ctx_1 = g_frames_ctx;
    }

    data_c28c5c = frames_ctx_1->unk34;
    int32_t ctx_31;
    ctx_31 = frames_ctx_1->pad_45[7];
    *(&ctx_31 + 1) = frames_ctx_1->pad_45[8];
    *(&ctx_31 + 2) = frames_ctx_1->pad_45[9];
    *(&ctx_31 + 3) = frames_ctx_1->pad_45[0xa];
    frames_ctx_1->tick_base += ctx_31;
    void* result = DEBUG_KEYSENABLEINVALID(0x43);

    if (result)
    {
        result = Config_GetActivePlayerProfileRecord();
        *(result + 0x560) = 0xe;
    }

    return result;
}
