#include "00402260-Flow_LoadParameters.h"
/* 0x00402260 Flow_LoadParameters full linked: callers=0 callees=28 */
void* Flow_LoadParameters(uint32_t a1)

{
    int32_t eax = Timer_Now();
    struct frames_ctx* frames_ctx_1;

    if (g_5c8e00)
    {
    label_4024d0:
        int32_t* i = *(a1 + 8);
        int32_t eax_15;

        if (!*i || !i)
            eax_15 = g_afa7e0;
        else
        {
            eax_15 = g_afa7e0;

            do
            {
                int32_t* esi_3 = *i;
                void* ecx_22;

                if (!esi_3)
                    ecx_22 = nullptr;
                else
                {
                    int32_t ecx_19 = *esi_3;
                    int32_t ecx_20 = -(ecx_19);
                    ecx_22 = (ecx_20 - ecx_20) & esi_3;
                }

                *((eax_15 << 2) + &g_afa6e0) = ecx_22;
                int32_t eax_16 = eax_15 + 1;
                int32_t ecx_23 = 0;
                g_afa7e0 = eax_16;
                ecx_23 = i[7];
                int32_t ecx_24 = *((ecx_23 << 2) + &g_a970e0);

                if (ecx_24)
                {
                    ecx_24(i);
                    eax_16 = g_afa7e0;
                }

                i = *((eax_16 << 2) + &g_afa6dc);
                eax_15 = eax_16 - 1;
                g_afa7e0 = eax_15;
            } while (i);
        }

        struct frames_ctx* frames_ctx_9 = g_frames_ctx;
        void* ecx_25;
        ecx_25 = frames_ctx_9->pad_45[3];
        *(&ecx_25 + 1) = frames_ctx_9->pad_45[4];
        *(&ecx_25 + 2) = frames_ctx_9->pad_45[5];
        *(&ecx_25 + 3) = frames_ctx_9->pad_45[6];
        int32_t* i_1 = *(ecx_25 + 8);

        if (*i_1 && i_1)
        {
            do
            {
                int32_t* esi_4 = *i_1;
                void* edx_14;

                if (!esi_4)
                    edx_14 = nullptr;
                else
                {
                    int32_t edx_11 = *esi_4;
                    int32_t edx_12 = -(edx_11);
                    edx_14 = (edx_12 - edx_12) & esi_4;
                }

                *((eax_15 << 2) + &g_afa6e0) = edx_14;
                int32_t eax_17 = eax_15 + 1;
                int32_t edx_15 = 0;
                g_afa7e0 = eax_17;
                edx_15 = i_1[7];
                int32_t edx_16 = *((edx_15 << 2) + &g_a970e0);

                if (edx_16)
                {
                    edx_16(i_1);
                    eax_17 = g_afa7e0;
                }

                i_1 = *((eax_17 << 2) + &g_afa6dc);
                eax_15 = eax_17 - 1;
                g_afa7e0 = eax_15;
            } while (i_1);

            frames_ctx_9 = g_frames_ctx;
        }

        frames_ctx_9->unk34 += 1;

        if (!sub_491220())
        {
            int32_t* i_2 = *(a1 + 8);

            if (*i_2 && i_2)
            {
                int32_t ecx_26 = g_afa7e0;

                do
                {
                    int32_t* edx_17 = *i_2;
                    void* eax_22;

                    if (!edx_17)
                        eax_22 = nullptr;
                    else
                    {
                        int32_t eax_19 = *edx_17;
                        int32_t eax_20 = -(eax_19);
                        eax_22 = (eax_20 - eax_20) & edx_17;
                    }

                    *((ecx_26 << 2) + &g_afa6e0) = eax_22;
                    g_afa7e0 = ecx_26 + 1;
                    int32_t eax_23 = sub_4e7530();
                    int32_t ecx_28 = 0;
                    ecx_28 = i_2[7];
                    int32_t eax_27 = *(((eax_23 * 0x180 + ecx_28) << 2) + &g_a96ae0);

                    if (eax_27)
                        eax_27(i_2);

                    ecx_26 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_26;
                    i_2 = *((ecx_26 << 2) + &g_afa6e0);
                } while (i_2);
            }
        }

        struct frames_ctx* frames_ctx_4 = g_frames_ctx;
        frames_ctx_4->unk38 += 1;
        sub_4e7bb0();
        sub_4e7b80(0, 0);
        frames_ctx_1 = g_frames_ctx;
    }
    else
    {
        if (sub_4ee940())
            goto label_4024d0;

        if (sub_491220())
            goto label_4024d0;

        frames_ctx_1 = g_frames_ctx;
        uint32_t unk34 = frames_ctx_1->unk34;

        if (eax
            > 1000.0 / frames_ctx_1->limit * unk34 + frames_ctx_1->unk50 + frames_ctx_1->tick_base
            && frames_ctx_1->pad_40 <= 0xa && (frames_ctx_1->dirty || unk34 >= 3))
        {
            g_a4438c = 0;
            g_a44390 = 0;
            g_a44394 = 0;
            sub_4e7bb0();
            sub_4e7b80(0, 0);
            char var_1c_1;

            if (unk34 >= 2)
                var_1c_1 = 0;
            else
            {
                Game_TimingBegin();
                var_1c_1 = 1;
            }

            sub_4e7340(var_1c_1);
            int32_t* i_3 = *(a1 + 8);
            int32_t eax_4;

            if (!*i_3 || !i_3)
                eax_4 = g_afa7e0;
            else
            {
                eax_4 = g_afa7e0;

                do
                {
                    int32_t* esi_1 = *i_3;
                    void* ecx_6;

                    if (!esi_1)
                        ecx_6 = nullptr;
                    else
                    {
                        int32_t ecx_3 = *esi_1;
                        int32_t ecx_4 = -(ecx_3);
                        ecx_6 = (ecx_4 - ecx_4) & esi_1;
                    }

                    *((eax_4 << 2) + &g_afa6e0) = ecx_6;
                    int32_t eax_5 = eax_4 + 1;
                    int32_t ecx_7 = 0;
                    g_afa7e0 = eax_5;
                    ecx_7 = i_3[7];
                    int32_t ecx_8 = *((ecx_7 << 2) + &g_a970e0);

                    if (ecx_8)
                    {
                        ecx_8(i_3);
                        eax_5 = g_afa7e0;
                    }

                    i_3 = *((eax_5 << 2) + &g_afa6dc);
                    eax_4 = eax_5 - 1;
                    g_afa7e0 = eax_4;
                } while (i_3);
            }

            struct frames_ctx* frames_ctx_8 = g_frames_ctx;
            void* ecx_9;
            ecx_9 = frames_ctx_8->pad_45[3];
            *(&ecx_9 + 1) = frames_ctx_8->pad_45[4];
            *(&ecx_9 + 2) = frames_ctx_8->pad_45[5];
            *(&ecx_9 + 3) = frames_ctx_8->pad_45[6];
            int32_t* i_4 = *(ecx_9 + 8);

            if (*i_4 && i_4)
            {
                do
                {
                    int32_t* esi_2 = *i_4;
                    void* edx_4;

                    if (!esi_2)
                        edx_4 = nullptr;
                    else
                    {
                        int32_t edx_1 = *esi_2;
                        int32_t edx_2 = -(edx_1);
                        edx_4 = (edx_2 - edx_2) & esi_2;
                    }

                    *((eax_4 << 2) + &g_afa6e0) = edx_4;
                    int32_t eax_6 = eax_4 + 1;
                    int32_t edx_5 = 0;
                    g_afa7e0 = eax_6;
                    edx_5 = i_4[7];
                    int32_t edx_6 = *((edx_5 << 2) + &g_a970e0);

                    if (edx_6)
                    {
                        edx_6(i_4);
                        eax_6 = g_afa7e0;
                    }

                    i_4 = *((eax_6 << 2) + &g_afa6dc);
                    eax_4 = eax_6 - 1;
                    g_afa7e0 = eax_4;
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

            int32_t* i_5 = *(a1 + 8);

            if (*i_5 && i_5)
            {
                int32_t ecx_11 = g_afa7e0;

                do
                {
                    int32_t* edx_9 = *i_5;
                    void* eax_11;

                    if (!edx_9)
                        eax_11 = nullptr;
                    else
                    {
                        int32_t eax_8 = *edx_9;
                        int32_t eax_9 = -(eax_8);
                        eax_11 = (eax_9 - eax_9) & edx_9;
                    }

                    *((ecx_11 << 2) + &g_afa6e0) = eax_11;
                    g_afa7e0 = ecx_11 + 1;
                    int32_t eax_12 = sub_4e7530();
                    int32_t edx_10 = 0;
                    edx_10 = i_5[7];
                    int32_t eax_13 = *(((eax_12 * 0x180 + edx_10) << 2) + &g_a96ae0);

                    if (eax_13)
                        eax_13(i_5);

                    ecx_11 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_11;
                    i_5 = *((ecx_11 << 2) + &g_afa6e0);
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

    int32_t ecx_30;
    ecx_30 = frames_ctx_1->pad_00[0x2c];
    *(&ecx_30 + 1) = frames_ctx_1->pad_00[0x2d];
    *(&ecx_30 + 2) = frames_ctx_1->pad_00[0x2e];
    *(&ecx_30 + 3) = frames_ctx_1->pad_00[0x2f];

    if (ecx_30)
    {
        frames_ctx_1->pad_00[0x28] = ecx_30;
        frames_ctx_1->pad_00[0x29] = *(&ecx_30 + 1);
        frames_ctx_1->pad_00[0x2a] = *(&ecx_30 + 2);
        frames_ctx_1->pad_00[0x2b] = *(&ecx_30 + 3);
        struct frames_ctx* frames_ctx_10 = g_frames_ctx;
        frames_ctx_10->pad_00[0x2c] = 0;
        frames_ctx_10->pad_00[0x2d] = 0;
        frames_ctx_10->pad_00[0x2e] = 0;
        frames_ctx_10->pad_00[0x2f] = 0;

        if (ecx_30 - 1 <= 7)
            switch (ecx_30)
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
    int32_t ecx_31;
    ecx_31 = frames_ctx_1->pad_45[7];
    *(&ecx_31 + 1) = frames_ctx_1->pad_45[8];
    *(&ecx_31 + 2) = frames_ctx_1->pad_45[9];
    *(&ecx_31 + 3) = frames_ctx_1->pad_45[0xa];
    frames_ctx_1->tick_base += ecx_31;
    void* result = DEBUG_KEYSENABLEINVALID(0x43);

    if (result)
    {
        result = Config_GetActivePlayerProfileRecord();
        *(result + 0x560) = 0xe;
    }

    return result;
}
