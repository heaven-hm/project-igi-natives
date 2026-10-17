// IGI native provenance: Flow_LoadParameters - 0x00402260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00402260-Flow_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Flow_LoadParameters.h"
void* Flow_LoadParameters(uint32_t context)

{
    int32_t data_val = Timer_Now();
    struct frames_ctx* frames_ctx_1;

    if (g_5c8e00)
    {
    label_4024d0:
        int32_t* i = *(context + 8);
        int32_t data_15;

        if (!*i || !i)
            data_15 = g_afa7e0;
        else
        {
            data_15 = g_afa7e0;

            do
            {
                int32_t* source_3 = *i;
                void* entity_22;

                if (!source_3)
                    entity_22 = nullptr;
                else
                {
                    int32_t entity_19 = *source_3;
                    int32_t entity_20 = -(entity_19);
                    entity_22 = (entity_20 - entity_20) & source_3;
                }

                *((data_15 << 2) + &g_afa6e0) = entity_22;
                int32_t data_16 = data_15 + 1;
                int32_t entity_23 = 0;
                g_afa7e0 = data_16;
                entity_23 = i[7];
                int32_t entity_24 = *((entity_23 << 2) + &g_a970e0);

                if (entity_24)
                {
                    entity_24(i);
                    data_16 = g_afa7e0;
                }

                i = *((data_16 << 2) + &g_afa6dc);
                data_15 = data_16 - 1;
                g_afa7e0 = data_15;
            } while (i);
        }

        struct frames_ctx* frames_ctx_9 = g_frames_ctx;
        void* entity_25;
        entity_25 = frames_ctx_9->pad_45[3];
        *(&entity_25 + 1) = frames_ctx_9->pad_45[4];
        *(&entity_25 + 2) = frames_ctx_9->pad_45[5];
        *(&entity_25 + 3) = frames_ctx_9->pad_45[6];
        int32_t* i_1 = *(entity_25 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* source_4 = *i_1;
                void* temp_14;

                if (!source_4)
                    temp_14 = nullptr;
                else
                {
                    int32_t temp_11 = *source_4;
                    int32_t temp_12 = -(temp_11);
                    temp_14 = (temp_12 - temp_12) & source_4;
                }

                *((data_15 << 2) + &g_afa6e0) = temp_14;
                int32_t data_17 = data_15 + 1;
                int32_t temp_15 = 0;
                g_afa7e0 = data_17;
                temp_15 = i_1[7];
                int32_t temp_16 = *((temp_15 << 2) + &g_a970e0);

                if (temp_16)
                {
                    temp_16(i_1);
                    data_17 = g_afa7e0;
                }

                i_1 = *((data_17 << 2) + &g_afa6dc);
                data_15 = data_17 - 1;
                g_afa7e0 = data_15;
            } while (i_1);

            frames_ctx_9 = g_frames_ctx;
        }

        frames_ctx_9->unk34 += 1;

        if (!Display_CheckCapabilities_2())
        {
            int32_t* i_2 = *(context + 8);

            if (*i_2 && i_2)
            {
                int32_t entity_26 = g_afa7e0;

                do
                {
                    int32_t* temp_17 = *i_2;
                    void* data_22;

                    if (!temp_17)
                        data_22 = nullptr;
                    else
                    {
                        int32_t data_19 = *temp_17;
                        int32_t data_20 = -(data_19);
                        data_22 = (data_20 - data_20) & temp_17;
                    }

                    *((entity_26 << 2) + &g_afa6e0) = data_22;
                    g_afa7e0 = entity_26 + 1;
                    int32_t data_23 = StatusScreen_GetEvent();
                    int32_t entity_28 = 0;
                    entity_28 = i_2[7];
                    int32_t data_27 = *(((data_23 * 0x180 + entity_28) << 2) + &g_a96ae0);

                    if (data_27)
                        data_27(i_2);

                    entity_26 = g_afa7e0 - 1;
                    g_afa7e0 = entity_26;
                    i_2 = *((entity_26 << 2) + &g_afa6e0);
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

        if (data_val
            > 1000.0 / frames_ctx_1->limit * unk34 + frames_ctx_1->unk50 + frames_ctx_1->tick_base
            && frames_ctx_1->pad_40 <= 0xa && (frames_ctx_1->dirty || unk34 >= 3))
        {
            g_a4438c = 0;
            g_a44390 = 0;
            g_a44394 = 0;
            SoundSys_PlaySoundSample_11();
            SoundSys_InitSoundSys_11(0, 0);
            char item_1c_1;

            if (unk34 >= 2)
                item_1c_1 = 0;
            else
            {
                Game_TimingBegin();
                item_1c_1 = 1;
            }

            SoundSys_PlaySoundSample_9(item_1c_1);
            int32_t* i_3 = *(context + 8);
            int32_t data_4;

            if (!*i_3 || !i_3)
                data_4 = g_afa7e0;
            else
            {
                data_4 = g_afa7e0;

                do
                {
                    int32_t* source_1 = *i_3;
                    void* entity_6;

                    if (!source_1)
                        entity_6 = nullptr;
                    else
                    {
                        int32_t entity_3 = *source_1;
                        int32_t entity_4 = -(entity_3);
                        entity_6 = (entity_4 - entity_4) & source_1;
                    }

                    *((data_4 << 2) + &g_afa6e0) = entity_6;
                    int32_t data_5 = data_4 + 1;
                    int32_t entity_7 = 0;
                    g_afa7e0 = data_5;
                    entity_7 = i_3[7];
                    int32_t entity_8 = *((entity_7 << 2) + &g_a970e0);

                    if (entity_8)
                    {
                        entity_8(i_3);
                        data_5 = g_afa7e0;
                    }

                    i_3 = *((data_5 << 2) + &g_afa6dc);
                    data_4 = data_5 - 1;
                    g_afa7e0 = data_4;
                } while (i_3);
            }

            struct frames_ctx* frames_ctx_8 = g_frames_ctx;
            void* entity_9;
            entity_9 = frames_ctx_8->pad_45[3];
            *(&entity_9 + 1) = frames_ctx_8->pad_45[4];
            *(&entity_9 + 2) = frames_ctx_8->pad_45[5];
            *(&entity_9 + 3) = frames_ctx_8->pad_45[6];
            int32_t* i_4 = *(entity_9 + 8);

            if (*i_4 && i_4)
            {
                do
                {
                    int32_t* source_2 = *i_4;
                    void* temp_4;

                    if (!source_2)
                        temp_4 = nullptr;
                    else
                    {
                        int32_t temp_1 = *source_2;
                        int32_t temp_2 = -(temp_1);
                        temp_4 = (temp_2 - temp_2) & source_2;
                    }

                    *((data_4 << 2) + &g_afa6e0) = temp_4;
                    int32_t data_6 = data_4 + 1;
                    int32_t temp_5 = 0;
                    g_afa7e0 = data_6;
                    temp_5 = i_4[7];
                    int32_t temp_6 = *((temp_5 << 2) + &g_a970e0);

                    if (temp_6)
                    {
                        temp_6(i_4);
                        data_6 = g_afa7e0;
                    }

                    i_4 = *((data_6 << 2) + &g_afa6dc);
                    data_4 = data_6 - 1;
                    g_afa7e0 = data_4;
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

            int32_t* i_5 = *(context + 8);

            if (*i_5 && i_5)
            {
                int32_t entity_11 = g_afa7e0;

                do
                {
                    int32_t* temp_9 = *i_5;
                    void* data_11;

                    if (!temp_9)
                        data_11 = nullptr;
                    else
                    {
                        int32_t data_8 = *temp_9;
                        int32_t data_9 = -(data_8);
                        data_11 = (data_9 - data_9) & temp_9;
                    }

                    *((entity_11 << 2) + &g_afa6e0) = data_11;
                    g_afa7e0 = entity_11 + 1;
                    int32_t data_12 = StatusScreen_GetEvent();
                    int32_t temp_10 = 0;
                    temp_10 = i_5[7];
                    int32_t data_13 = *(((data_12 * 0x180 + temp_10) << 2) + &g_a96ae0);

                    if (data_13)
                        data_13(i_5);

                    entity_11 = g_afa7e0 - 1;
                    g_afa7e0 = entity_11;
                    i_5 = *((entity_11 << 2) + &g_afa6e0);
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

    int32_t entity_30;
    entity_30 = frames_ctx_1->pad_00[0x2c];
    *(&entity_30 + 1) = frames_ctx_1->pad_00[0x2d];
    *(&entity_30 + 2) = frames_ctx_1->pad_00[0x2e];
    *(&entity_30 + 3) = frames_ctx_1->pad_00[0x2f];

    if (entity_30)
    {
        frames_ctx_1->pad_00[0x28] = entity_30;
        frames_ctx_1->pad_00[0x29] = *(&entity_30 + 1);
        frames_ctx_1->pad_00[0x2a] = *(&entity_30 + 2);
        frames_ctx_1->pad_00[0x2b] = *(&entity_30 + 3);
        struct frames_ctx* frames_ctx_10 = g_frames_ctx;
        frames_ctx_10->pad_00[0x2c] = 0;
        frames_ctx_10->pad_00[0x2d] = 0;
        frames_ctx_10->pad_00[0x2e] = 0;
        frames_ctx_10->pad_00[0x2f] = 0;

        if (entity_30 - 1 <= 7)
            switch (entity_30)
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
                    Level_SetMission_4(context);
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

    g_c28c5c = frames_ctx_1->unk34;
    int32_t entity_31;
    entity_31 = frames_ctx_1->pad_45[7];
    *(&entity_31 + 1) = frames_ctx_1->pad_45[8];
    *(&entity_31 + 2) = frames_ctx_1->pad_45[9];
    *(&entity_31 + 3) = frames_ctx_1->pad_45[0xa];
    frames_ctx_1->tick_base += entity_31;
    void* result = DEBUG_KEYSENABLEINVALID(0x43);

    if (result)
    {
        result = Config_GetActivePlayerProfileRecord();
        *(result + 0x560) = 0xe;
    }

    return result;
}
