// Original IGI.EXE function: HeightMap_Setup (VA 0x00507410; static CFG gate PASS, CFG score 0.895).
#include "HeightMap_Setup.h"
int32_t HeightMap_Setup(int32_t* context)

{
    g_b97d20 = 0;
    int32_t item_b0 = 0;
    int32_t item_ac = 0xc1c00000;
    int32_t item_100 = 0x40000000 >> (context[0x2e] & 0x1f) << 1;
    int32_t* item_104;
    int32_t item_ec;

    if (!context[0x38])
    {
        int32_t data_4 = QHash_ValueGet();
        item_ec = data_4;

        if (!data_4)
            QHash_ValueSet();

        int32_t* data_5 = context[0x3f];

        if (data_5)
        {
            QTask_FindType(data_5);
            context[0x3f] = 0;
        }

        item_104 = *(context[0x1a] + 0xdd0);

        if (context[0x3e] == 0xffffffff)
        {
            int32_t data_8 = g_a7b250;
            *((data_8 << 2) + &g_a7ad10) = context;
            context[0x3e] = data_8;
            int32_t data_10 = g_a7b250 + 1;
            g_a7b250 = data_10;

            if (data_10 >= 0x100)
            {
                Error_Show("Too many texturemodfiers");

                while (true)
                    /* nop */
            }
        }
    }

    *(context[0x3e] * 0x30 + 0xba2088) = 0;
    double item_e8;
    memcpy(&item_e8, &context[0x1c], 0x18);
    double item_d8;
    double item_a8;
    void item_78;
    int32_t item_60;
    int32_t item_20;

    if (!context[0x38])
    {
        int32_t data_13 = 0;
        memcpy(&item_a8, &context[0x1c], 0x18);
        item_20 = 0;
        int32_t source_2 = 0;

        while (true)
        {
            if (source_2 < 5)
            {
                DynObj_UpdateDynTree_10(context[0x1a], &item_78, &item_a8, 1, &item_b0, 0xff, nullptr, 0x80000000);
                data_13 = item_20;
                source_2 += 1;

                if (!data_13)
                    continue;
            }
            else if (!data_13)
                break;

            item_d8 = item_60;
            int32_t item_5c;
            *(&item_d8 + 4) = item_5c;
            break;
        }
    }

    void* data_15 = context[0x1a];
    int32_t entity_6 = -(item_100);
    item_e8 = *(data_15 + 0xde0) + item_e8;
    double item_e0 = *(data_15 + 0xde4) + item_e0;
    double item_d8_1 = *(data_15 + 0xde8) + item_d8;
    long double fpu_val_7_7 = item_e8 & entity_6;
    *(context + 0x88) = fpu_val_7_7;
    long double fpu_val_6_1 = item_e0 & entity_6;
    double item_d0 = fpu_val_6_1;
    *(context + 0x90) = fpu_val_6_1;
    long double fpu_val_6_3 = item_d8_1 & entity_6;
    double item_f8_3 = fpu_val_6_3;
    *(context + 0x98) = fpu_val_6_3;
    long double fpu_val_6_4 = item_100;
    memcpy(&item_e8, &context[0x22], 0x18);
    *(context + 0xa0) = fpu_val_6_4 + fpu_val_7_7;
    *(context + 0xa8) = fpu_val_6_4 + item_d0;
    *(context + 0xb0) = fpu_val_6_4 + item_f8_3;
    long double fpu_val_6_5 = fpu_val_6_4 * 0.5;
    item_e8 = fpu_val_6_5 + item_e8;
    item_e0 = fpu_val_6_5 + item_e0;
    long double fpu_val_7_9 = fpu_val_6_5 + item_d8_1;
    double item_d8_2 = fpu_val_7_9;
    item_e8 = item_e8 - *(data_15 + 0xde0);
    item_e0 = item_e0 - *(data_15 + 0xde4);
    double item_d8_3 = fpu_val_7_9 - *(data_15 + 0xde8);
    *(context + 0x88) = *(context + 0x88) - *(data_15 + 0xde0);
    *(context + 0x90) = *(context + 0x90) - *(data_15 + 0xde4);
    *(context + 0x98) = *(context + 0x98) - *(data_15 + 0xde8);
    bool flag_1 = !*(context + 0xdf);
    *(context + 0xa0) = *(context + 0xa0) - *(data_15 + 0xde0);
    *(context + 0xa8) = *(context + 0xa8) - *(data_15 + 0xde4);
    *(context + 0xb0) = *(context + 0xb0) - *(data_15 + 0xde8);

    if (!flag_1)
        DynObj_RemoveSymbol_8(data_15, context, &item_e8, &context[0x22], &context[0x28], 4);

    DynObj_UpdateDynTree_8(context[0x1a], context, &item_e8, &context[0x22], &context[0x28]);

    if (!context[0x38])
    {
        int32_t* entity_9;

        if (context[0x2f] == 0xffffffff)
            entity_9 = item_104;
        else
        {
            int32_t data_21 = Physics_ApplyImpulse_5(context[0x39]);
            void* source_8 = context[0x2f];
            entity_9 = item_104;
            context[0x39] = data_21;

            if (entity_9[source_8 * 3])
            {
                if (*(context + 0xdf))
                    *(context + 0xde) = 1;

                void* data_28 = source_8 * 3;

                if (source_8 != context[0x30])
                {
                    context[0x39] = entity_9[data_28 + 2];
                    context[0x37] = entity_9[data_28 + 1];
                }
                else
                {
                    int32_t* data_29 = &entity_9[data_28];
                    bool flag_6_1 = entity_9[data_28 + 2] == data_21;
                    item_100 = data_29;

                    if (!flag_6_1)
                    {
                        if (*(source_8 + 0xb81920))
                            *(context + 0xde) = 0;
                        else
                        {
                            Sys_ExecuteBytecode_2(*data_29);
                            int32_t* temp_11 = item_100;
                            data_29 = temp_11;
                            *temp_11 = 0;
                        }

                        data_29[2] = data_21;
                        int32_t dest_7 = (data_21 + 1) * (data_21 + 1);
                        void* data_30 = Mem_Alloc(dest_7, 4);
                        *item_100 = data_30;
                        memset(memset(data_30, 0x40404040, dest_7 & 0xfffffffc),
                            0x40, dest_7 & 3);
                        entity_9 = item_104;
                        *(source_8 + 0xb81920) = 0;
                    }
                }
            }
            else
            {
                void* source_9 = nullptr;
                int32_t* data_22 = entity_9;

                while (*data_22)
                {
                    source_9 += 1;
                    data_22 = &data_22[3];

                    if (source_9 >= 0x100)
                        break;
                }

                if (source_9 == 0x100)
                {
                    Warning_Show("limit reached");
                    entity_9 = item_104;
                    source_9 = 0xff;
                }

                void* data_24 = &entity_9[source_9 * 3];
                item_100 = data_24;
                *(data_24 + 8) = data_21;
                int32_t dest_3 = (data_21 + 1) * (data_21 + 1);
                void* data_25 = Mem_Alloc(dest_3, 4);
                *item_100 = data_25;
                memset(memset(data_25, 0x40404040, dest_3 & 0xfffffffc), 0x40,
                    dest_3 & 3);
                entity_9 = item_104;
                *(source_9 + 0xb81920) = 0;
                context[0x2f] = source_9;
            }

            int32_t data_33;

            if (data_21 == 0x100)
                data_33 = 7;
            else if (data_21 == 0x80)
                data_33 = 6;
            else if (data_21 == 0x40)
                data_33 = 5;
            else if (data_21 == 0x20)
                data_33 = 4;
            else if (data_21 == 0x10)
                data_33 = 3;
            else if (data_21 != 8)
            {
                Error_Show("Illegal shift size");

                while (true)
                    /* nop */
            }
            else
                data_33 = 2;

            context[0x32] = 0x1e - context[0x2e] - data_33;
            context[0x33] = data_33 - 2;
        }

        if (context[0x2f] == 0xffffffff)
        {
            void* data_35 = context[0x30];

            if (data_35 != 0xffffffff)
            {
                if (!*(data_35 + 0xb81920))
                {
                    Sys_ExecuteBytecode_2(entity_9[data_35 * 3]);
                    entity_9 = item_104;
                    item_104[context[0x30] * 3] = 0;
                }

                entity_9[context[0x30] * 3] = 0;
            }
        }

        int32_t data_40 = context[0x2f];
        bool flag_4_1 = !context[0x37];
        context[0x30] = data_40;

        if (!flag_4_1)
        {
            char* data_41 = &entity_9[1];
            int32_t i_1 = 0x100;
            int32_t i;

            do
            {
                *data_41 = 0;
                data_41 = &data_41[0xc];
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
            data_40 = context[0x2f];

            if (data_40 >= 0)
                entity_9[data_40 * 3 + 1] = 1;
        }
        else if (data_40 >= 0)
            entity_9[data_40 * 3 + 1] = 0;

        char data_42 = *(context + 0xe1);
        *(context + 0xdf) = 0;

        if (data_42)
        {
            void item_90;
            memcpy(&item_90, &context[8], 0x18);
            double item_80;
            long double fpu_val_7_23 = item_80;
            double item_d0_1 = fpu_val_7_23;
            double item_f8_4 = fpu_val_7_23;
            int32_t item_108_5 = 0xc8;
            item_100 = 0x40000000 >> (context[0x2e] & 0x1f);
            bool flag_7_1;

            do
            {
                memcpy(&item_a8, &item_90, 0x18);
                long double fp0_1 = Sys_AllocateMemory_14(0xa7b138);
                item_a8 = (fp0_1 + fp0_1 - 1.0f) * item_100 + item_a8;
                long double fp0_2 = Sys_AllocateMemory_14(0xa7b138);
                double item_a0 = (fp0_2 + fp0_2 - 1.0f) * item_100 + item_a0;
                double item_98 = item_98 + 268435456.0;
                DynObj_UpdateDynTree_10(context[0x1a], &item_78, &item_a8, 1, &item_b0, 0xff, nullptr, 0x80000000);

                if (item_20)
                {
                    long double fpu_val_7_37 = item_60;
                    long double f2_1 = item_d0_1;
                    fpu_val_7_37 - f2_1;

                    if (*(&((fpu_val_7_37 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_37, f2_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_37 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        item_d0_1 = fpu_val_7_37;

                    long double f3_1 = item_f8_4;
                    fpu_val_7_37 - f3_1;

                    if (!(*(&((fpu_val_7_37 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_37, f3_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_37 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        item_f8_4 = fpu_val_7_37;
                }

                flag_7_1 = item_108_5 != 1;
                item_108_5 -= 1;
            } while (flag_7_1);
            long double fpu_val_7_40 = item_80 - item_100;
            int32_t item_104_1 = 0;
            void item_c8;
            memcpy(&item_c8, &item_90, 0x18);
            double item_b8_1 = fpu_val_7_40;
            long double fpu_val_7_41 = item_d0_1;
            long double f4_1 = item_b8_1;
            fpu_val_7_41 - f4_1;

            if (*(&((fpu_val_7_41 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_41, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_41 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double fpu_val_7_46;
                long double f5_1;

                do
                {
                    if (!item_104_1)
                    {
                        context[0x3f] = QTask_HandleInput(context, QTask_OpenEvent_2(), 0);
                        item_104_1 = 1;
                    }

                    double item_b8_2 = item_b8_1 - item_100;
                    Physics_EvaluateAreaCriteria_6(context[0x3f], context, &item_c8);
                    item_b8_1 = item_b8_2 - item_100;
                    fpu_val_7_46 = item_d0_1;
                    f5_1 = item_b8_1;
                    fpu_val_7_46 - f5_1;
                } while (*(&((fpu_val_7_46 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_46, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_46 == f5_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            long double fpu_val_7_48 = item_100 + item_80;
            memcpy(&item_c8, &item_90, 0x18);
            double item_b8_3 = fpu_val_7_48;
            long double fpu_val_7_49 = item_f8_4;
            long double f6_1 = item_b8_3;
            fpu_val_7_49 - f6_1;

            if (!(*(&((fpu_val_7_49 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_49, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_49 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_54;
                long double f7_1;

                do
                {
                    if (!item_104_1)
                    {
                        context[0x3f] = QTask_HandleInput(context, QTask_OpenEvent_2(), 0);
                        item_104_1 = 1;
                    }

                    double item_b8_4 = item_b8_3 + item_100;
                    Physics_EvaluateAreaCriteria_6(context[0x3f], context, &item_c8);
                    item_b8_3 = item_b8_4 + item_100;
                    fpu_val_7_54 = item_f8_4;
                    f7_1 = item_b8_3;
                    fpu_val_7_54 - f7_1;
                } while (!(*(&((fpu_val_7_54 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_54, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_54 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }
        }

        if (!item_ec)
            Sys_DispatchOpcode_2();
    }

    int32_t temp_21 = *(context[0x1a] + 0xdd0);
    int32_t data_64 = context[0x3e] * 0x30;
    *(data_64 + 0xba206c) = context[0x33];
    *(data_64 + 0xba2070) = 0x3f800000;
    *(data_64 + 0xba2060) = context[0x31];
    *(data_64 + 0xba2064) = context[0x32];
    *(data_64 + 0xba2088) = *(temp_21 + context[0x2f] * 0xc);
    *(data_64 + 0xba2070) = 1.0f / (1 << (*(data_64 + 0xba2064) & 0x1f)) * *(data_64 + 0xba2070);
    long double fpu_val_7_58 = 0x40000000 >> (context[0x2e] & 0x1f);
    *(data_64 + 0xba2078) = *(context + 0x20) - fpu_val_7_58;
    *(data_64 + 0xba2080) = *(context + 0x28) - fpu_val_7_58;
    int32_t result = context[0x2f] * 3;
    char entity_33 = *(temp_21 + (result << 2) + 4);
    *(context + 0xdf) = 0;
    context[0x37] = entity_33;
    g_b97d20 = 1;
    return result;
}
