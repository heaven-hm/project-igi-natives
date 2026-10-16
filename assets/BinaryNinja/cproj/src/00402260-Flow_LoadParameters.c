#include "gi_platform.h"
#include "00402260-Flow_LoadParameters.h"
void* Flow_LoadParameters(uint32_t a1)

{
    int32_t valA = Timer_Now();
    struct frames_ctx* frames_ctx_1;

    if (g_5c8e00)
    {
    label_4024d0: ;
        int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));
        int32_t valA15;

        if (!*i || !i)
            valA15 = g_afa7e0;
        else
        {
            valA15 = g_afa7e0;

            do
            {
                int32_t* srcS3 = *i;
                void* objC22;

                if (!srcS3)
                    objC22 = nullptr;
                else
                {
                    int32_t objC19 = *srcS3;
                    int32_t objC20 = -(objC19);
                    objC22 = (objC20 - objC20) & srcS3;
                }

                *((valA15 << 2) + &g_afa6e0) = objC22;
                int32_t valA16 = valA15 + 1;
                int32_t objC23 = 0;
                g_afa7e0 = valA16;
                objC23 = i[7];
                int32_t objC24 = *((objC23 << 2) + &g_a970e0);

                if (objC24)
                {
                    objC24(i);
                    valA16 = g_afa7e0;
                }

                i = *((valA16 << 2) + &g_afa6dc);
                valA15 = valA16 - 1;
                g_afa7e0 = valA15;
            } while (i);
        }

        struct frames_ctx* frames_ctx_9 = g_frames_ctx;
        void* objC25;
        objC25 = frames_ctx_9->pad_45[3];
        *(&objC25 + 1) = frames_ctx_9->pad_45[4];
        *(&objC25 + 2) = frames_ctx_9->pad_45[5];
        *(&objC25 + 3) = frames_ctx_9->pad_45[6];
        int32_t* i_1 = *(objC25 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* srcS4 = *i_1;
                void* tmpD14;

                if (!srcS4)
                    tmpD14 = nullptr;
                else
                {
                    int32_t tmpD11 = *srcS4;
                    int32_t tmpD12 = -(tmpD11);
                    tmpD14 = (tmpD12 - tmpD12) & srcS4;
                }

                *((valA15 << 2) + &g_afa6e0) = tmpD14;
                int32_t valA17 = valA15 + 1;
                int32_t tmpD15 = 0;
                g_afa7e0 = valA17;
                tmpD15 = i_1[7];
                int32_t tmpD16 = *((tmpD15 << 2) + &g_a970e0);

                if (tmpD16)
                {
                    tmpD16(i_1);
                    valA17 = g_afa7e0;
                }

                i_1 = *((valA17 << 2) + &g_afa6dc);
                valA15 = valA17 - 1;
                g_afa7e0 = valA15;
            } while (i_1);

            frames_ctx_9 = g_frames_ctx;
        }

        frames_ctx_9->unk34 += 1;

        if (!Display_CheckCapabilities_2())
        {
            int32_t* i_2 = (*(int32_t*)(uintptr_t)(a1 + 8));

            if (*i_2 && i_2)
            {
                int32_t objC26 = g_afa7e0;

                do
                {
                    int32_t* tmpD17 = *i_2;
                    void* valA22;

                    if (!tmpD17)
                        valA22 = nullptr;
                    else
                    {
                        int32_t valA19 = *tmpD17;
                        int32_t valA20 = -(valA19);
                        valA22 = (valA20 - valA20) & tmpD17;
                    }

                    *((objC26 << 2) + &g_afa6e0) = valA22;
                    g_afa7e0 = objC26 + 1;
                    int32_t valA23 = StatusScreen_GetEvent();
                    int32_t objC28 = 0;
                    objC28 = i_2[7];
                    int32_t valA27 = *(((valA23 * 0x180 + objC28) << 2) + &g_a96ae0);

                    if (valA27)
                        valA27(i_2);

                    objC26 = g_afa7e0 - 1;
                    g_afa7e0 = objC26;
                    i_2 = *((objC26 << 2) + &g_afa6e0);
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

        if (valA
            > 1000.0 / frames_ctx_1->limit * unk34 + frames_ctx_1->unk50 + frames_ctx_1->tick_base
            && frames_ctx_1->pad_40 <= 0xa && (frames_ctx_1->dirty || unk34 >= 3))
        {
            g_a4438c = 0;
            g_a44390 = 0;
            g_a44394 = 0;
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
            int32_t* i_3 = (*(int32_t*)(uintptr_t)(a1 + 8));
            int32_t valA4;

            if (!*i_3 || !i_3)
                valA4 = g_afa7e0;
            else
            {
                valA4 = g_afa7e0;

                do
                {
                    int32_t* srcS1 = *i_3;
                    void* objC6;

                    if (!srcS1)
                        objC6 = nullptr;
                    else
                    {
                        int32_t objC3 = *srcS1;
                        int32_t objC4 = -(objC3);
                        objC6 = (objC4 - objC4) & srcS1;
                    }

                    *((valA4 << 2) + &g_afa6e0) = objC6;
                    int32_t valA5 = valA4 + 1;
                    int32_t objC7 = 0;
                    g_afa7e0 = valA5;
                    objC7 = i_3[7];
                    int32_t objC8 = *((objC7 << 2) + &g_a970e0);

                    if (objC8)
                    {
                        objC8(i_3);
                        valA5 = g_afa7e0;
                    }

                    i_3 = *((valA5 << 2) + &g_afa6dc);
                    valA4 = valA5 - 1;
                    g_afa7e0 = valA4;
                } while (i_3);
            }

            struct frames_ctx* frames_ctx_8 = g_frames_ctx;
            void* objC9;
            objC9 = frames_ctx_8->pad_45[3];
            *(&objC9 + 1) = frames_ctx_8->pad_45[4];
            *(&objC9 + 2) = frames_ctx_8->pad_45[5];
            *(&objC9 + 3) = frames_ctx_8->pad_45[6];
            int32_t* i_4 = *(objC9 + 8);

            if (*i_4 && i_4)
            {
                do
                {
                    int32_t* srcS2 = *i_4;
                    void* tmpD4;

                    if (!srcS2)
                        tmpD4 = nullptr;
                    else
                    {
                        int32_t tmpD1 = *srcS2;
                        int32_t tmpD2 = -(tmpD1);
                        tmpD4 = (tmpD2 - tmpD2) & srcS2;
                    }

                    *((valA4 << 2) + &g_afa6e0) = tmpD4;
                    int32_t valA6 = valA4 + 1;
                    int32_t tmpD5 = 0;
                    g_afa7e0 = valA6;
                    tmpD5 = i_4[7];
                    int32_t tmpD6 = *((tmpD5 << 2) + &g_a970e0);

                    if (tmpD6)
                    {
                        tmpD6(i_4);
                        valA6 = g_afa7e0;
                    }

                    i_4 = *((valA6 << 2) + &g_afa6dc);
                    valA4 = valA6 - 1;
                    g_afa7e0 = valA4;
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

            int32_t* i_5 = (*(int32_t*)(uintptr_t)(a1 + 8));

            if (*i_5 && i_5)
            {
                int32_t objC11 = g_afa7e0;

                do
                {
                    int32_t* tmpD9 = *i_5;
                    void* valA11;

                    if (!tmpD9)
                        valA11 = nullptr;
                    else
                    {
                        int32_t valA8 = *tmpD9;
                        int32_t valA9 = -(valA8);
                        valA11 = (valA9 - valA9) & tmpD9;
                    }

                    *((objC11 << 2) + &g_afa6e0) = valA11;
                    g_afa7e0 = objC11 + 1;
                    int32_t valA12 = StatusScreen_GetEvent();
                    int32_t tmpD10 = 0;
                    tmpD10 = i_5[7];
                    int32_t valA13 = *(((valA12 * 0x180 + tmpD10) << 2) + &g_a96ae0);

                    if (valA13)
                        valA13(i_5);

                    objC11 = g_afa7e0 - 1;
                    g_afa7e0 = objC11;
                    i_5 = *((objC11 << 2) + &g_afa6e0);
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

    int32_t objC30;
    objC30 = frames_ctx_1->pad_00[0x2c];
    *(&objC30 + 1) = frames_ctx_1->pad_00[0x2d];
    *(&objC30 + 2) = frames_ctx_1->pad_00[0x2e];
    *(&objC30 + 3) = frames_ctx_1->pad_00[0x2f];

    if (objC30)
    {
        frames_ctx_1->pad_00[0x28] = objC30;
        frames_ctx_1->pad_00[0x29] = *(&objC30 + 1);
        frames_ctx_1->pad_00[0x2a] = *(&objC30 + 2);
        frames_ctx_1->pad_00[0x2b] = *(&objC30 + 3);
        struct frames_ctx* frames_ctx_10 = g_frames_ctx;
        frames_ctx_10->pad_00[0x2c] = 0;
        frames_ctx_10->pad_00[0x2d] = 0;
        frames_ctx_10->pad_00[0x2e] = 0;
        frames_ctx_10->pad_00[0x2f] = 0;

        if (objC30 - 1 <= 7)
            switch (objC30)
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
                    Level_SetMission_4(a1);
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
    int32_t objC31;
    objC31 = frames_ctx_1->pad_45[7];
    *(&objC31 + 1) = frames_ctx_1->pad_45[8];
    *(&objC31 + 2) = frames_ctx_1->pad_45[9];
    *(&objC31 + 3) = frames_ctx_1->pad_45[0xa];
    frames_ctx_1->tick_base += objC31;
    void* result = DEBUG_KEYSENABLEINVALID(0x43);

    if (result)
    {
        result = Config_GetActivePlayerProfileRecord();
        *(result + 0x560) = 0xe;
    }

    return result;
}
