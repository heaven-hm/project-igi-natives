// Original IGI.EXE function: Car_Run (VA 0x0042E320; static CFG gate PASS, CFG score 0.978).
#include "Car_Run.h"
uint32_t Car_Run(double* context)

{
    uint32_t result = Frames_GetUpdateCounter();

    if (*(context + 0x924) != result)
    {
        result = Frames_GetUpdateCounter();
        *(context + 0x924) = result;
        result = *(context + 0x2ed5);

        if (!result)
        {
            char data_val = Script_FormatString_6(&context[0x139]);
            int64_t item_c;

            if (data_val)
            {
                Script_SpawnNewTask_7(&context[0x139], context);
                long double fpu0;
                item_c = fpu0;
            }

            if (data_val && !item_c)
            {
                int32_t* data_7 = context[0xe9];

                if (data_7)
                {
                    QTask_FindType(data_7);
                    context[0xe9] = 0;
                }
            }
            else if (!context[0xe9])
            {
                void* data_3 = *(context + 0x1b4);

                if (data_3)
                {
                    struct status_msg* data_6 = SoundSys_SetMasterVolume_7(context, *(data_3 + 0x2d4) + 0x262);

                    if (data_6)
                        context[0xe9] = data_6;
                }
            }

🚫🚫            Menu_FormatScreen_22(context);
🚫🚫            Menu_PlayMusic_22(context);
            int32_t* i = context[1];
            int32_t data_8;

            if (!*i || !i)
                data_8 = g_afa7e0;
            else
            {
                data_8 = g_afa7e0;

                do
                {
                    int32_t* source_2 = *i;
                    void* entity_4;

                    if (!source_2)
                        entity_4 = nullptr;
                    else
                    {
                        int32_t entity_1 = *source_2;
                        int32_t entity_2 = -(entity_1);
                        entity_4 = (entity_2 - entity_2) & source_2;
                    }

                    *((data_8 << 2) + &g_afa6e0) = entity_4;
                    int32_t data_9 = data_8 + 1;
                    int32_t entity_5 = 0;
                    g_afa7e0 = data_9;
                    entity_5 = i[7];
                    int32_t entity_6 = *((entity_5 << 2) + &g_a970e0);

                    if (entity_6)
                    {
                        entity_6(i);
                        data_9 = g_afa7e0;
                    }

                    i = *((data_9 << 2) + &g_afa6dc);
                    data_8 = data_9 - 1;
                    g_afa7e0 = data_8;
                } while (i);
            }

            void* entity_12 = context[0x1d];

            if (entity_12)
            {
                int32_t* i_1 = *(entity_12 + 8);

                if (*i_1 && i_1)
                {
                    do
                    {
                        int32_t* source_3 = *i_1;
                        void* entity_10;

                        if (!source_3)
                            entity_10 = nullptr;
                        else
                        {
                            int32_t entity_7 = *source_3;
                            int32_t entity_8 = -(entity_7);
                            entity_10 = (entity_8 - entity_8) & source_3;
                        }

                        *((data_8 << 2) + &g_afa6e0) = entity_10;
                        int32_t data_10 = data_8 + 1;
                        int32_t entity_11 = 0;
                        g_afa7e0 = data_10;
                        entity_11 = i_1[7];
                        entity_12 = *((entity_11 << 2) + &g_a970e0);

                        if (entity_12)
                        {
                            entity_12(i_1);
                            data_10 = g_afa7e0;
                        }

                        i_1 = *((data_10 << 2) + &g_afa6dc);
                        data_8 = data_10 - 1;
                        g_afa7e0 = data_8;
                    } while (i_1);
                }
            }

            if (!*(context + 0x2ecc))
            {
                void* entity_14 = context[0x1d];

                if (entity_14)
                {
                    double* item_4_1 = context;
                    item_c = &context[4];
                    *(&item_c + 4) = &context[0xe];
                    int32_t* i_2 = *(entity_14 + 8);

                    if (*i_2 && i_2)
                    {
                        do
                        {
                            int32_t* temp_3 = *i_2;
                            void* entity_18;

                            if (!temp_3)
                                entity_18 = nullptr;
                            else
                            {
                                int32_t entity_15 = *temp_3;
                                int32_t entity_16 = -(entity_15);
                                entity_18 = (entity_16 - entity_16) & temp_3;
                            }

                            *((data_8 << 2) + &g_afa6e0) = entity_18;
                            g_afa7e0 = data_8 + 1;
                            uint32_t data_13 = MagicObj_GetEventId();
                            int32_t entity_19 = 0;
                            entity_19 = i_2[7];
                            int32_t data_17 = *(((data_13 * 0x180 + entity_19) << 2) + &g_a96ae0);

                            if (data_17)
                                data_17(i_2, &item_c);

                            data_8 = g_afa7e0 - 1;
                            g_afa7e0 = data_8;
                            i_2 = *((data_8 << 2) + &g_afa6e0);
                        } while (i_2);
                    }

                    int16_t data_19 = Weapon_EjectShell();

                    for (int32_t* i_3 = QTask_DeleteTask_2(context[0x1d], data_19); i_3;
                        i_3 = QTask_TriggerEvent_2(i_3, Weapon_EjectShell()))
                    {
                        int32_t entity_20 = 0;
                        entity_20 = i_3[7];
                        (*((entity_20 << 2) + &g_a970e0))(i_3);
                    }
                }
            }

            *(context + 0x2ecc) = 0;
            context[0x5da] = 0;
            return Car_ExplosionTick(context);
        }
    }

    return result;
}
