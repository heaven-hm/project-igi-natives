// Original IGI.EXE function: TextureModifier_LoadParameters (VA 0x005062A0; static CFG gate PASS, CFG score 0.892).
#include "TextureModifier_LoadParameters.h"
int32_t TextureModifier_LoadParameters(int32_t* context)

{
    int32_t item_a0 = 0;
    int32_t item_9c = 0xc1c00000;
    int32_t item_100 = 0x40000000 >> (context[0x2e] & 0x1f) << 1;
    int32_t* item_10c;
    int32_t item_f4;

    if (!context[0x35])
    {
        int32_t data_4 = QHash_ValueGet();
        item_f4 = data_4;

        if (!data_4)
            QHash_ValueSet();

        int32_t* data_5 = context[0x3a];

        if (data_5)
        {
            QTask_FindType(data_5);
            context[0x3a] = 0;
        }

        item_10c = *(context[0x1a] + 0xdcc);

        if (context[0x39] == 0xffffffff)
        {
            int32_t data_8 = g_a7ad08;
            *((data_8 << 2) + &g_a7a8f4) = context;
            context[0x39] = data_8;
            int32_t data_10 = g_a7ad08 + 1;
            g_a7ad08 = data_10;

            if (data_10 >= 0x100)
            {
                Error_Show("Too many texturemodfiers");

                while (true)
                    /* nop */
            }
        }
    }

    *(context[0x39] * 0x30 + 0xba50a8) = 0;
    double item_e8;
    memcpy(&item_e8, &context[0x1c], 0x18);
    double item_d8;
    double item_b8;
    double item_a8;
    void item_78;
    int32_t item_60;
    int32_t i_1;

    if (!context[0x35] && *(context + 0xd5))
    {
        int32_t i_2 = 0;
        memcpy(&item_b8, &context[0x1c], 0x18);
        item_a8 = item_a8 + 268435456.0;
        i_1 = 0;
        int32_t source_2 = 0;

        while (true)
        {
            if (source_2 < 5)
            {
                DynObj_LookupHashItem_10(context[0x1a], &item_78, &item_b8, 1, &item_a0, 0xff, nullptr, 0x80000000);
                i_2 = i_1;
                source_2 += 1;

                if (!i_2)
                    continue;
            }
            else if (!i_2)
                break;

            item_d8 = item_60;
            int32_t item_5c;
            *(&item_d8 + 4) = item_5c;
            break;
        }
    }

    void* data_14 = context[0x1a];
    int32_t entity_6 = -(item_100);
    item_e8 = *(data_14 + 0xde0) + item_e8;
    double item_e0;
    double item_e0_1 = *(data_14 + 0xde4) + item_e0;
    double item_d8_1 = *(data_14 + 0xde8) + item_d8;
    long double fpu_val_7_10 = item_e8 & entity_6;
    *(context + 0x88) = fpu_val_7_10;
    long double fpu_val_6_1 = item_e0_1 & entity_6;
    double item_80 = fpu_val_6_1;
    *(context + 0x90) = fpu_val_6_1;
    long double fpu_val_6_3 = item_d8_1 & entity_6;
    double item_f0_3 = fpu_val_6_3;
    *(context + 0x98) = fpu_val_6_3;
    long double fpu_val_6_4 = item_100;
    memcpy(&item_e8, &context[0x22], 0x18);
    *(context + 0xa0) = fpu_val_6_4 + fpu_val_7_10;
    *(context + 0xa8) = fpu_val_6_4 + item_80;
    *(context + 0xb0) = fpu_val_6_4 + item_f0_3;
    long double fpu_val_6_5 = fpu_val_6_4 * 0.5;
    item_e8 = fpu_val_6_5 + item_e8;
    double item_e0_2 = fpu_val_6_5 + item_e0_1;
    long double fpu_val_7_12 = fpu_val_6_5 + item_d8_1;
    double item_d8_2 = fpu_val_7_12;
    item_e8 = item_e8 - *(data_14 + 0xde0);
    double item_e0_3 = item_e0_2 - *(data_14 + 0xde4);
    double item_d8_3 = fpu_val_7_12 - *(data_14 + 0xde8);
    *(context + 0x88) = *(context + 0x88) - *(data_14 + 0xde0);
    *(context + 0x90) = *(context + 0x90) - *(data_14 + 0xde4);
    *(context + 0x98) = *(context + 0x98) - *(data_14 + 0xde8);
    *(context + 0xa0) = *(context + 0xa0) - *(data_14 + 0xde0);
    bool flag_1 = !*(context + 0xd3);
    *(context + 0xa8) = *(context + 0xa8) - *(data_14 + 0xde4);
    *(context + 0xb0) = *(context + 0xb0) - *(data_14 + 0xde8);

    if (!flag_1)
        DynObj_RemoveSymbol_8(data_14, context, &item_e8, &context[0x22], &context[0x28], 4);

    DynObj_UpdateDynTree_8(context[0x1a], context, &item_e8, &context[0x22], &context[0x28]);

    if (!context[0x35])
    {
        int32_t data_20 = context[0x2f];

        if (data_20 >= 0x100)
            context[0x2f] = 0xff;
        else if (data_20 < 0xffffffff)
            context[0x2f] = 0xffffffff;

        if (context[0x2f] != 0xffffffff)
        {
            int32_t data_21 = Physics_ApplyImpulse_5(context[0x36]);
            int32_t* entity_13 = item_10c;
            int32_t data_22 = context[0x2f];
            context[0x36] = data_21;
            item_100 = data_22;

            if (entity_13[data_22 * 3])
            {
                if (*(context + 0xd3))
                    *(context + 0xd2) = 1;

                if (data_22 != context[0x30])
                {
                    int32_t temp_17 = data_22 * 3;
                    context[0x36] = entity_13[temp_17 + 2];
                    context[0x34] = entity_13[temp_17 + 1];
                }
                else
                {
                    int32_t* dest_5 = &item_10c[data_22 * 3];

                    if (dest_5[2] != data_21)
                    {
                        if (*(data_22 + 0xb81a20))
                            *(context + 0xd2) = 0;
                        else
                        {
                            Sys_ExecuteBytecode_2(*dest_5);
                            *dest_5 = 0;
                        }

                        dest_5[2] = data_21;
                        int32_t data_37;
                        int32_t temp_13;
                        temp_13 = HIGHD(data_21 * data_21);
                        data_37 = LOWD(data_21 * data_21);
                        int32_t dest_7 = (data_37 + (temp_13 & 7)) >> 3;
                        void* data_39 = Mem_Alloc(dest_7, 4);
                        *dest_5 = data_39;
                        memset(memset(data_39, 0, dest_7 & 0xfffffffc), 0,
                            dest_7 & 3);
                        *(item_100 + 0xb81a20) = 0;
                    }
                }
            }
            else
            {
                int32_t data_23 = 0;
                item_100 = 0;

                while (*entity_13)
                {
                    data_23 += 1;
                    entity_13 = &entity_13[3];

                    if (data_23 >= 0x100)
                        break;
                }

                item_100 = data_23;

                if (data_23 == 0x100)
                {
                    Warning_Show("limit reached");
                    item_100 = 0xff;
                }

                int32_t* data_26 = &item_10c[item_100 * 3];
                data_26[2] = data_21;
                int32_t data_29;
                int32_t temp_7;
                temp_7 = HIGHD(data_21 * data_21);
                data_29 = LOWD(data_21 * data_21);
                int32_t dest_2 = (data_29 + (temp_7 & 7)) >> 3;
                void* data_31 = Mem_Alloc(dest_2, 4);
                *data_26 = data_31;
                memset(memset(data_31, 0, dest_2 & 0xfffffffc), 0, dest_2 & 3);
                int32_t data_33 = item_100;
                *(data_33 + 0xb81a20) = 0;
                context[0x2f] = data_33;
            }

            int32_t data_42;

            if (data_21 == 0x100)
                data_42 = 7;
            else if (data_21 == 0x80)
                data_42 = 6;
            else if (data_21 == 0x40)
                data_42 = 5;
            else if (data_21 == 0x20)
                data_42 = 4;
            else if (data_21 == 0x10)
                data_42 = 3;
            else if (data_21 != 8)
            {
                Error_Show("Illegal shift size");

                while (true)
                    /* nop */
            }
            else
                data_42 = 2;

            context[0x32] = 0x1e - context[0x2e] - data_42;
            context[0x33] = data_42 - 2;
        }

        if (context[0x2f] == 0xffffffff)
        {
            void* data_45 = context[0x30];

            if (data_45 != 0xffffffff)
            {
                if (!*(data_45 + 0xb81a20))
                {
                    Sys_ExecuteBytecode_2(item_10c[data_45 * 3]);
                    item_10c[context[0x30] * 3] = 0;
                }

                item_10c[context[0x30] * 3] = 0;
            }
        }

        int32_t data_49 = context[0x2f];
        bool flag_4_1 = !context[0x34];
        context[0x30] = data_49;

        if (!flag_4_1)
        {
            char* data_50 = &item_10c[1];
            int32_t i_3 = 0x100;
            int32_t i;

            do
            {
                *data_50 = 0;
                data_50 = &data_50[0xc];
                i = i_3;
                i_3 -= 1;
            } while (i != 1);
            data_49 = context[0x2f];

            if (data_49 >= 0)
                item_10c[data_49 * 3 + 1] = 1;
        }
        else if (data_49 >= 0)
            item_10c[data_49 * 3 + 1] = 0;

        char data_51 = *(context + 0xd5);
        *(context + 0xd3) = 0;

        if (data_51)
        {
            void item_98;
            memcpy(&item_98, &context[8], 0x18);
            double item_88;
            long double fpu_val_7_26 = item_88;
            item_100 = fpu_val_7_26;
            double item_f0_4 = fpu_val_7_26;
            int32_t item_10c_1 = 0x32;
            int32_t item_108_5 = 0x40000000 >> (context[0x2e] & 0x1f);
            item_108_5 = item_108_5;
            bool flag_6_1;

            do
            {
                memcpy(&item_b8, &item_98, 0x18);
                long double fp0_1 = Sys_AllocateMemory_14(0xa7acf8);
                item_b8 = (fp0_1 + fp0_1 - 1.0f) * item_108_5 + item_b8;
                long double fp0_2 = Sys_AllocateMemory_14(0xa7acf8);
                int32_t data_52 = context[0x1a];
                double item_b0 = (fp0_2 + fp0_2 - 1.0f) * item_108_5 + item_b0;
                item_a8 = item_a8 + 268435456.0;
                DynObj_LookupHashItem_10(data_52, &item_78, &item_b8, 1, &item_a0, 0xff, nullptr, 0x80000000);

                while (i_1)
                {
                    long double fpu_val_7_40 = item_60;
                    long double f2_1 = item_100;
                    fpu_val_7_40 - f2_1;

                    if (*(&((fpu_val_7_40 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_40, f2_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_40 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        item_100 = fpu_val_7_40;

                    long double f3_1 = item_f0_4;
                    fpu_val_7_40 - f3_1;

                    if (!(*(&((fpu_val_7_40 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_40, f3_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_40 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        item_f0_4 = fpu_val_7_40;

                    void item_70;
                    memcpy(&item_b8, &item_70, 0x18);
                    item_a8 = fpu_val_7_40 - 4096.0;
                    DynObj_LookupHashItem_10(context[0x1a], &item_78, &item_b8, 1, &item_a0, 0xff, nullptr, 0x80000000);
                }

                flag_6_1 = item_10c_1 != 1;
                item_10c_1 -= 1;
            } while (flag_6_1);
            long double fpu_val_7_43 = item_88 - item_108_5;
            int32_t item_10c_2 = 0;
            void item_d0;
            memcpy(&item_d0, &item_98, 0x18);
            double item_c0_1 = fpu_val_7_43;
            long double fpu_val_7_44 = item_100;
            long double f4_1 = item_c0_1;
            fpu_val_7_44 - f4_1;

            if (*(&((fpu_val_7_44 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_44, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_44 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double fpu_val_7_49;
                long double f5_1;

                do
                {
                    if (!item_10c_2)
                    {
                        context[0x3a] = QTask_HandleInput(context, QTask_OpenEvent_2(), 0);
                        item_10c_2 = 1;
                    }

                    double item_c0_2 = item_c0_1 - item_108_5;
                    Physics_SolveConstraints_5(context[0x3a], context, &item_d0);
                    item_c0_1 = item_c0_2 - item_108_5;
                    fpu_val_7_49 = item_100;
                    f5_1 = item_c0_1;
                    fpu_val_7_49 - f5_1;
                } while (*(&((fpu_val_7_49 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_49, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_49 == f5_1 ? 1 : 0) << 0xe) + 1) & 1);
            }

            long double fpu_val_7_51 = item_108_5 + item_88;
            memcpy(&item_d0, &item_98, 0x18);
            double item_c0_3 = fpu_val_7_51;
            long double fpu_val_7_52 = item_f0_4;
            long double f6_1 = item_c0_3;
            fpu_val_7_52 - f6_1;

            if (!(*(&((fpu_val_7_52 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_52, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_52 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_57;
                long double f7_1;

                do
                {
                    if (!item_10c_2)
                    {
                        context[0x3a] = QTask_HandleInput(context, QTask_OpenEvent_2(), 0);
                        item_10c_2 = 1;
                    }

                    double item_c0_4 = item_c0_3 + item_108_5;
                    Physics_SolveConstraints_5(context[0x3a], context, &item_d0);
                    item_c0_3 = item_c0_4 + item_108_5;
                    fpu_val_7_57 = item_f0_4;
                    f7_1 = item_c0_3;
                    fpu_val_7_57 - f7_1;
                } while (!(*(&((fpu_val_7_57 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_57, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_57 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41));
            }
        }

        if (!item_f4)
            Sys_DispatchOpcode_2();
    }

    int32_t temp_23 = *(context[0x1a] + 0xdcc);
    int32_t data_73 = context[0x39] * 0x30;
    *(data_73 + 0xba508c) = context[0x33];
    int32_t entity_38 = *(temp_23 + context[0x2f] * 0xc + 8);
    *(data_73 + 0xba5090) = (entity_38 - 1) / entity_38;
    *(data_73 + 0xba5080) = context[0x31];
    *(data_73 + 0xba5084) = context[0x32];
    *(data_73 + 0xba50a8) = *(temp_23 + context[0x2f] * 0xc);
    *(data_73 + 0xba5090) = 1.0f / (1 << (*(data_73 + 0xba5084) & 0x1f)) * *(data_73 + 0xba5090);
    long double fpu_val_7_63 = 0x40000000 >> (context[0x2e] & 0x1f);
    *(data_73 + 0xba5098) = *(context + 0x20) - fpu_val_7_63;
    *(data_73 + 0xba50a0) = *(context + 0x28) - fpu_val_7_63;
    int32_t result = context[0x2f] * 3;
    char entity_47 = *(temp_23 + (result << 2) + 4);
    *(context + 0xd3) = 0;
    context[0x34] = entity_47;
    return result;
}
