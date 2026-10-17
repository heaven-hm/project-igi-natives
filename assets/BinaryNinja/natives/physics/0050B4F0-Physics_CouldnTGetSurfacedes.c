// Original IGI.EXE function: Physics_CouldnTGetSurfacedes (VA 0x0050B4F0; static CFG gate PASS, CFG score 0.936).
#include "Physics_CouldnTGetSurfacedes.h"
int32_t Physics_CouldnTGetSurfacedes(int32_t* context, int32_t param_2, int32_t param_3, int32_t* param_4, int32_t* param_5, int32_t* param_6)

{
    int32_t entity_val = *context;
    int32_t item_b4 = 0x7c;
    int32_t data_1 = (*(entity_val + 0x58))(context, &item_b4);
    void item_530;

    if (data_1)
    {
        Game_DataSymbolLoad(&item_530, "Couldn't get surfacedesc");
        int32_t item_54c = DDERR_GENERIC(data_1);
        void* item_550 = &item_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t item_130;
    memset(&item_130, 0, 0x7c);
    int32_t* data_3 = g_5ca10c;
    item_130 = 0x7c;
    int32_t context_val = param_2;
    int32_t item_128 = param_3;
    int32_t item_12c = 0x1007;
    int32_t item_124 = context_val;
    int32_t item_c8 = 0x1800;
    void item_e8;
    void item_6c;
    memcpy(&item_e8, &item_6c, 0x20);
    int32_t* item_8;
    int32_t data_4 = (*(*data_3 + 0x18))(data_3, &item_130, &item_8, 0);

    if (data_4)
    {
        Game_DataSymbolLoad(&item_530, "Couldn't create surface");
        int32_t item_54c_2 = DDERR_GENERIC(data_4);
        void* item_550_1 = &item_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* data_6 = item_8;
    int32_t data_7 = (*(*data_6 + 0x64))(data_6, 0, &item_130, 1, 0);

    if (data_7)
    {
        Game_DataSymbolLoad(&item_530, "Couldn't lock surface");
        int32_t item_54c_3 = DDERR_GENERIC(data_7);
        void* item_550_3 = &item_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t item_50;
    char item_34;
    char entity_5;

    if (!item_50)
    {
        item_34 = 0;
        entity_5 = 0;
    }
    else
    {
        int32_t eflags_1;
        char data_10;
        data_10 = __bsf_gprv_memv(item_50);
        item_34 = data_10;
        int32_t eflags_2;
        char data_12;
        data_12 = __bsr_gprv_memv(item_50);
        entity_5 = data_12 - data_10 + 1;
    }

    int32_t item_5c;
    int32_t eflags_3;
    char data_13;
    data_13 = __bsf_gprv_memv(item_5c);
    int32_t item_58;
    int32_t eflags_4;
    char data_15;
    data_15 = __bsf_gprv_memv(item_58);
    int32_t item_54;
    int32_t eflags_5;
    char data_16;
    data_16 = __bsf_gprv_memv(item_54);
    int32_t eflags_6;
    char data_18;
    data_18 = __bsr_gprv_memv(item_5c);
    int32_t eflags_7;
    char data_19;
    data_19 = __bsr_gprv_memv(item_58);
    int32_t eflags_8;
    char data_21;
    data_21 = __bsr_gprv_memv(item_54);
    char item_68;

    if (!(item_68 & 0x40))
    {
        Error_Show("Invalid texture format");

        while (true)
            /* nop */

        return;
    }

    int32_t item_60;
    int32_t item_120;
    int32_t* item_10c;

    if (item_60 == 0x20)
    {
        int32_t* source_5 = param_5;

        if (item_5c != 0xff0000 || item_58 != 0xff00 || item_54 != 0xff || source_5 != context_val || param_6 != param_3
            || item_120 != context_val << 2)
        {
            int32_t* data_43 = param_6;
            int32_t dest_4 = 0;
            int32_t item_c_2 = 0;

            if (data_43 > 0)
            {
                int32_t* item_24_1 = param_4;

                do
                {
                    int32_t* item_20_1 = item_24_1;
                    void* dest_6 = dest_4 * item_120 + item_10c;

                    if (source_5 > 0)
                    {
                        int32_t* item_14_1 = source_5;
                        bool flag_8_1;

                        do
                        {
                            dest_6 += 4;
                            int32_t data_35 = *item_20_1;
                            uint32_t source_13 =
                                data_35 >> ((data_16 - data_21 + 7) & 0x1f) << (data_16 & 0x1f)
                                | (data_35 & 0xff0000) >> ((data_13 - data_18 + 0x17) & 0x1f)
                                << (data_13 & 0x1f) | (data_35 & 0xff00)
                                >> ((data_15 - data_19 + 0xf) & 0x1f) << (data_15 & 0x1f);
                            *(dest_6 - 4) = source_13 | (data_35 & 0xff000000) >> ((0x20 - entity_5) & 0x1f)
                                << (item_34 & 0x1f);
                            flag_8_1 = item_14_1 != 1;
                            item_20_1 = &item_20_1[1];
                            item_14_1 -= 1;
                        } while (flag_8_1);
                        context_val = param_2;
                        source_5 = param_5;
                    }

                    int32_t entity_27;
                    int32_t dest_7;

                    if (source_5 < context_val)
                        dest_7 = __memfill_u32(dest_6, *(dest_6 - 4), context_val - source_5);
                    dest_4 = item_c_2 + 1;
                    data_43 = param_6;
                    item_c_2 = dest_4;
                    item_24_1 = &item_24_1[source_5];
                } while (dest_4 < data_43);
            }

            int32_t* dest_9 = data_43;
            int32_t* item_c_3 = dest_9;

            if (data_43 < param_3)
            {
                int32_t* data_46 = &param_4[(data_43 - 1) * source_5];

                do
                {
                    param_6 = data_46;
                    void* dest_11 = dest_9 * item_120 + item_10c;

                    if (source_5 > 0)
                    {
                        int32_t* item_14_2 = source_5;
                        bool flag_12_1;

                        do
                        {
                            dest_11 += 4;
                            int32_t data_48 = *param_6;
                            uint32_t source_22 =
                                data_48 >> ((data_16 - data_21 + 7) & 0x1f) << (data_16 & 0x1f)
                                | (data_48 & 0xff0000) >> ((data_13 - data_18 + 0x17) & 0x1f)
                                << (data_13 & 0x1f) | (data_48 & 0xff00)
                                >> ((data_15 - data_19 + 0xf) & 0x1f) << (data_15 & 0x1f);
                            *(dest_11 - 4) = source_22 | (data_48 & 0xff000000)
                                >> ((0x20 - entity_5) & 0x1f) << (item_34 & 0x1f);
                            flag_12_1 = item_14_2 != 1;
                            param_6 = &param_6[1];
                            item_14_2 -= 1;
                        } while (flag_12_1);
                        context_val = param_2;
                        source_5 = param_5;
                    }

                    int32_t entity_44;
                    int32_t dest_12;

                    if (source_5 < context_val)
                        dest_12 = __memfill_u32(dest_11, *(dest_11 - 4), context_val - source_5);
                    dest_9 = item_c_3 + 1;
                    item_c_3 = dest_9;
                } while (dest_9 < param_3);
            }
        }
        else
        {
            int32_t entity_11 = (context_val * param_3) << 2;
            int32_t source_7;
            int32_t dest_3;
            dest_3 = memcpy(item_10c, param_4, entity_11 & 0xfffffffc);
            memcpy(dest_3, source_7, entity_11 & 3);
        }
    }
    else if (item_60 != 0x10)
    {
        Error_Show("Invalid texture format");

        while (true)
            /* nop */
    }
    else
    {
        int32_t* entity_45 = param_6;
        int32_t* source_26 = param_5;
        int32_t item_c_4 = 0;

        if (entity_45 > 0)
        {
            int32_t* item_20_2 = param_4;

            do
            {
                int32_t* item_24_2 = item_20_2;
                void* dest_16 = item_c_4 * item_120 + item_10c;

                if (source_26 > 0)
                {
                    int32_t* item_14_3 = source_26;
                    bool flag_6_1;

                    do
                    {
                        dest_16 += 2;
                        int32_t data_59 = *item_24_2;
                        uint16_t source_31 =
                            data_59 >> ((data_16 - data_21 + 7) & 0x1f) << (data_16 & 0x1f)
                            | (data_59 & 0xff0000) >> ((data_13 - data_18 + 0x17) & 0x1f)
                            << (data_13 & 0x1f);
                        uint16_t source_33 = source_31 | (data_59 & 0xff00)
                            >> ((data_15 - data_19 + 0xf) & 0x1f) << (data_15 & 0x1f)
                            | (data_59 & 0xff000000) >> ((0x20 - entity_5) & 0x1f) << (item_34 & 0x1f);
                        *(dest_16 - 2) = source_33;
                        flag_6_1 = item_14_3 != 1;
                        item_24_2 = &item_24_2[1];
                        item_14_3 -= 1;
                    } while (flag_6_1);
                    context_val = param_2;
                    source_26 = param_5;
                    entity_45 = param_6;
                }

                int16_t data_64 = *(dest_16 - 2);

                if (source_26 < context_val)
                {
                    int32_t entity_55 = context_val;
                    context_val = data_64;
                    int32_t context_25 = context_val << 0x10;
                    void* entity_56 = entity_55 - source_26;
                    context_25 = data_64;
                    context_val = param_2;
                    int32_t entity_58;
                    int32_t dest_17;
                    dest_17 = __memfill_u32(dest_16, context_25, entity_56 >> 1);
                    int32_t entity_60;
                    int32_t dest_18;
                    dest_18 = __memfill_u16(dest_17, context_25, entity_58 + entity_58);
                    entity_45 = param_6;
                }

                item_c_4 += 1;
                item_20_2 = &item_20_2[source_26];
            } while (item_c_4 < entity_45);
        }

        int32_t* dest_21 = entity_45;
        int32_t* item_c_5 = dest_21;

        if (entity_45 < param_3)
        {
            int32_t* entity_63 = &param_4[(entity_45 - 1) * source_26];

            do
            {
                void* dest_23 = dest_21 * item_120 + item_10c;
                param_6 = entity_63;

                if (source_26 > 0)
                {
                    int32_t* item_14_4 = source_26;
                    bool flag_10_1;

                    do
                    {
                        dest_23 += 2;
                        int32_t data_73 = *param_6;
                        uint16_t source_40 =
                            data_73 >> ((data_16 - data_21 + 7) & 0x1f) << (data_16 & 0x1f)
                            | (data_73 & 0xff0000) >> ((data_13 - data_18 + 0x17) & 0x1f)
                            << (data_13 & 0x1f);
                        uint16_t source_42 = source_40 | (data_73 & 0xff00)
                            >> ((data_15 - data_19 + 0xf) & 0x1f) << (data_15 & 0x1f)
                            | (data_73 & 0xff000000) >> ((0x20 - entity_5) & 0x1f) << (item_34 & 0x1f);
                        *(dest_23 - 2) = source_42;
                        flag_10_1 = item_14_4 != 1;
                        param_6 = &param_6[1];
                        item_14_4 -= 1;
                    } while (flag_10_1);
                    context_val = param_2;
                    source_26 = param_5;
                }

                int16_t data_78 = *(dest_23 - 2);

                if (source_26 < context_val)
                {
                    int32_t entity_74 = context_val;
                    context_val = data_78;
                    int32_t context_34 = context_val << 0x10;
                    void* entity_75 = entity_74 - source_26;
                    context_34 = data_78;
                    context_val = param_2;
                    int32_t entity_77;
                    int32_t dest_24;
                    dest_24 = __memfill_u32(dest_23, context_34, entity_75 >> 1);
                    int32_t entity_79;
                    int32_t dest_25;
                    dest_25 = __memfill_u16(dest_24, context_34, entity_77 + entity_77);
                }

                dest_21 = item_c_5 + 1;
                item_c_5 = dest_21;
            } while (dest_21 < param_3);
        }
    }
    int32_t* data_81 = item_8;
    int32_t data_82 = (*(*data_81 + 0x80))(data_81, 0);

    if (!data_82)
    {
        int32_t data_85 = (*(*context + 0x14))(context, 0, item_8, 0, 0x1000000, 0);

        if (!data_85)
        {
            int32_t* data_87 = item_8;
            return (*(*data_87 + 8))(data_87);
        }

        Game_DataSymbolLoad(&item_530, "Couldn't blit surface");
        int32_t item_54c_6 = DDERR_GENERIC(data_85);
        void* item_550_5 = &item_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */
    }
    else
    {
        Game_DataSymbolLoad(&item_530, "Couldn't unlock surface");
        int32_t item_54c_4 = DDERR_GENERIC(data_82);
        void* item_550_4 = &item_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */
    }
}
