// Original IGI.EXE function: MenuItemTask_LoadParameters (VA 0x00504EF0; static CFG gate PASS, CFG score 1.000).
#include "MenuItemTask_LoadParameters.h"
void* MenuItemTask_LoadParameters(void* context)

{
    void* context_val = context;
    int32_t* i = *(context_val + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_4;

            if (!temp_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *temp_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_4;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_6 = Physics_EvaluateAreaCriteria_5();
            int32_t entity_3 = 0;
            entity_3 = i[7];
            int32_t data_10 = *(((data_6 * 0x180 + entity_3) << 2) + &g_a96ae0);

            if (data_10)
                data_10(i, 0);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    int32_t* i_1 = *(context_val + 8);
    *(context_val + 0x28) = context_val + 0x20;
    *(context_val + 0x24) = 0;
    *(context_val + 0x20) = context_val + 0x24;
    int32_t data_13;

    if (!*i_1 || !i_1)
        data_13 = g_afa7e0;
    else
    {
        data_13 = g_afa7e0;

        do
        {
            int32_t* source_val = *i_1;
            void* entity_8;

            if (!source_val)
                entity_8 = nullptr;
            else
            {
                int32_t entity_5 = *source_val;
                int32_t entity_6 = -(entity_5);
                entity_8 = (entity_6 - entity_6) & source_val;
            }

            *((data_13 << 2) + &g_afa6e0) = entity_8;
            int32_t data_14 = data_13 + 1;
            int32_t entity_9 = 0;
            g_afa7e0 = data_14;
            entity_9 = i_1[7];
            int32_t entity_10 = *((entity_9 << 2) + &g_a970e0);

            if (entity_10)
            {
                entity_10(i_1);
                data_14 = g_afa7e0;
            }

            i_1 = *((data_14 << 2) + &g_afa6dc);
            data_13 = data_14 - 1;
            g_afa7e0 = data_13;
        } while (i_1);
    }

    int32_t* i_2 = *(context_val + 8);
    void** item_28 = context_val + 0x20;

    if (*i_2 && i_2)
    {
        do
        {
            int32_t* temp_2 = *i_2;
            void* entity_14;

            if (!temp_2)
                entity_14 = nullptr;
            else
            {
                int32_t entity_11 = *temp_2;
                int32_t entity_12 = -(entity_11);
                entity_14 = (entity_12 - entity_12) & temp_2;
            }

            *((data_13 << 2) + &g_afa6e0) = entity_14;
            g_afa7e0 = data_13 + 1;
            uint32_t data_17 = EditRigidObjAttachedToBone_Action();
            int32_t data_18 = 0;
            data_18 = i_2[7];
            int32_t data_19 = *(((data_17 * 0x180 + data_18) << 2) + &g_a96ae0);

            if (data_19)
                data_19(i_2, &item_28);

            data_13 = g_afa7e0 - 1;
            g_afa7e0 = data_13;
            i_2 = *((data_13 << 2) + &g_afa6e0);
        } while (i_2);
    }

    int32_t temp_6 = *(context_val + 0x34);
    int32_t entity_15 = *(context_val + 0x30);
    int32_t entity_16 = entity_15 - *(context_val + 0x3c);
    int32_t item_4 = ~*(context_val + 0x40) & temp_6;
    int32_t data_24 = *(context_val + 0x2c);
    int32_t data_25 = data_24 - *(context_val + 0x38);
    void* item_1c = nullptr;
    int32_t item_8 = temp_6;
    void* data_26;

    if (data_25 || entity_16 || temp_6 & 0x70)
    {
        data_26 = Physics_ApplyImpulse_4(context_val);

        if (data_25 || entity_16 || !data_26)
        {
            int32_t* i_7 = *(context_val + 0x20);
            int32_t* i_3 = *i_7;
            int32_t entity_29;

            if (!i_3)
                entity_29 = g_afa7e0;
            else
            {
                int32_t dest_1 = entity_15;
                int32_t context_1 = data_24;
                entity_29 = g_afa7e0;

                do
                {
                    int32_t item_24_1 = i_7[2];
                    int32_t source_2;

                    if (item_24_1 <= context_1)
                    {
                        int32_t item_24_2 = i_7[4] + i_7[2];
                        source_2 = item_24_2;

                        if (item_24_2 >= context_1)
                            source_2 = context_1;
                    }
                    else
                        source_2 = item_24_1;

                    int32_t temp_13 = i_7[3];

                    if (temp_13 <= dest_1)
                    {
                        temp_13 = i_7[5] + i_7[3];

                        if (temp_13 >= dest_1)
                            temp_13 = dest_1;
                    }

                    if (source_2 == context_1 && temp_13 == dest_1)
                    {
                        item_1c = *(i_7[8] + 0x38);
                        int32_t* j = *(*(i_7[8] + 0x14) + 8);

                        if (*j && j)
                        {
                            do
                            {
                                int32_t* temp_17 = *j;
                                void* data_51;

                                if (!temp_17)
                                    data_51 = nullptr;
                                else
                                {
                                    int32_t data_48 = *temp_17;
                                    int32_t data_49 = -(data_48);
                                    data_51 = (data_49 - data_49) & temp_17;
                                }

                                *((entity_29 << 2) + &g_afa6e0) = data_51;
                                g_afa7e0 = entity_29 + 1;
                                uint32_t data_53 = Physics_InterpolateWaypoint_5();
                                int32_t entity_31 = 0;
                                entity_31 = j[7];
                                int32_t data_57 = *(((data_53 * 0x180 + entity_31) << 2) + &g_a96ae0);

                                if (data_57)
                                    data_57(j, &item_1c);

                                entity_29 = g_afa7e0 - 1;
                                g_afa7e0 = entity_29;
                                j = *((entity_29 << 2) + &g_afa6e0);
                            } while (j);

                            dest_1 = entity_15;
                            context_1 = data_24;
                        }
                    }

                    i_7 = i_3;
                    i_3 = *i_3;
                } while (i_3);

                context_val = context;
            }

            data_26 = item_1c;

            if (!data_26)
            {
                int32_t* i_4 = *(context_val + 8);

                if (*i_4 && i_4)
                {
                    do
                    {
                        int32_t* temp_18 = *i_4;
                        void* data_61;

                        if (!temp_18)
                            data_61 = nullptr;
                        else
                        {
                            int32_t data_58 = *temp_18;
                            int32_t data_59 = -(data_58);
                            data_61 = (data_59 - data_59) & temp_18;
                        }

                        *((entity_29 << 2) + &g_afa6e0) = data_61;
                        g_afa7e0 = entity_29 + 1;
                        uint32_t data_63 = Physics_InterpolateWaypoint_5();
                        int32_t entity_34 = 0;
                        entity_34 = i_4[7];
                        data_26 = *(((data_63 * 0x180 + entity_34) << 2) + &g_a96ae0);

                        if (data_26)
                            data_26 = data_26(i_4, &item_1c);

                        entity_29 = g_afa7e0 - 1;
                        g_afa7e0 = entity_29;
                        i_4 = *((entity_29 << 2) + &g_afa6e0);
                    } while (i_4);
                }
            }
        }
        else
        {
            item_1c = *(data_26 + 0x38);
            int32_t* i_5 = *(*(data_26 + 0x14) + 8);

            if (*i_5 && i_5)
            {
                int32_t entity_25 = g_afa7e0;
                int32_t data_46;

                do
                {
                    int32_t* temp_10 = *i_5;
                    void* data_40;

                    if (!temp_10)
                        data_40 = nullptr;
                    else
                    {
                        int32_t data_37 = *temp_10;
                        int32_t data_38 = -(data_37);
                        data_40 = (data_38 - data_38) & temp_10;
                    }

                    *((entity_25 << 2) + &g_afa6e0) = data_40;
                    g_afa7e0 = entity_25 + 1;
                    uint32_t data_42 = Physics_InterpolateWaypoint_5();
                    int32_t entity_27 = 0;
                    entity_27 = i_5[7];
                    data_46 = *(((data_42 * 0x180 + entity_27) << 2) + &g_a96ae0);

                    if (data_46)
                        data_46 = data_46(i_5, &item_1c);

                    entity_25 = g_afa7e0 - 1;
                    g_afa7e0 = entity_25;
                    i_5 = *((entity_25 << 2) + &g_afa6e0);
                } while (i_5);

                return data_46;
            }
        }
    }
    else
    {
        data_26 = Physics_ApplyImpulse_4(context_val);

        if (data_26)
        {
            item_1c = *(data_26 + 0x38);
            int32_t* i_6 = *(*(data_26 + 0x14) + 8);

            if (*i_6 && i_6)
            {
                int32_t entity_18 = g_afa7e0;
                int32_t data_36;

                do
                {
                    int32_t* temp_8 = *i_6;
                    void* data_30;

                    if (!temp_8)
                        data_30 = nullptr;
                    else
                    {
                        int32_t data_27 = *temp_8;
                        int32_t data_28 = -(data_27);
                        data_30 = (data_28 - data_28) & temp_8;
                    }

                    *((entity_18 << 2) + &g_afa6e0) = data_30;
                    g_afa7e0 = entity_18 + 1;
                    uint32_t data_32 = Physics_InterpolateWaypoint_5();
                    int32_t entity_20 = 0;
                    entity_20 = i_6[7];
                    data_36 = *(((data_32 * 0x180 + entity_20) << 2) + &g_a96ae0);

                    if (data_36)
                        data_36 = data_36(i_6, &item_1c);

                    entity_18 = g_afa7e0 - 1;
                    g_afa7e0 = entity_18;
                    i_6 = *((entity_18 << 2) + &g_afa6e0);
                } while (i_6);

                return data_36;
            }
        }
    }

    return data_26;
}
