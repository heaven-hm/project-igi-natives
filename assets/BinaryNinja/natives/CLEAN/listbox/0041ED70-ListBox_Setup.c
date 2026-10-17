// IGI native provenance: ListBox_Setup - 0x0041ED70 - CFG score 92.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041ED70-ListBox_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ListBox_Setup.h"
int32_t ListBox_Setup(void* context)

{
    void* source_val = *(context + 0xd4);
    void* dest_val = *(context + 0xd8);
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(context + 0x44)) - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;
    float item_8c_1;

    item_8c_1 = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.0f : fpu_val_7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(context);
    int32_t temp_val = *(source_val + 0x28);
    int32_t data_8 = *(context + 0x20) + 2;
    int32_t entity_3 = *(context + 0x24) + 2;
    *(source_val + 0x20) = data_8;
    *(source_val + 0x24) = entity_3;
    int32_t data_9 = *(context + 0xbec);
    *(dest_val + 0x24) = entity_3;
    *(dest_val + 0x20) = temp_val + data_8 + data_9 + 2;
    void* source_1 = *(context + 0xd4);
    int32_t data_10 = StatusScreen_GetEvent();
    int32_t entity_4 = 0;
    entity_4 = *(source_1 + 0x1c);
    (*(((data_10 * 0x180 + entity_4) << 2) + &g_a96ae0))(source_1);
    void* source_2 = *(context + 0xd8);
    int32_t data_15 = StatusScreen_GetEvent();
    int32_t data_16 = 0;
    data_16 = *(source_2 + 0x1c);
    (*(((data_15 * 0x180 + data_16) << 2) + &g_a96ae0))(source_2);

    if (*(context + 0xbe0))
    {
        int32_t* context_3 = *(context + 0xbf4);

        if (context_3)
        {
            int32_t data_21 = Sys_PopStack_18(*(*context_3 + 8), context + *(context + 0xbe4) * 0x2c + 0xe4);
            int32_t data_22 = *(context + 0xbe4);
            char (* data_27)[0x80];

            if (data_21 <= *(context + 0xbec) - 4)
                data_27 = context + data_22 * 0x2c + 0xe4;
            else
            {
                int32_t i = 0xffffffff;
                void* dest_1 = context + data_22 * 0x2c + 0xe4;

                while (i)
                {
                    bool flag_1_1 = 0 != *dest_1;
                    dest_1 += 1;
                    i -= 1;

                    if (!flag_1_1)
                        break;
                }

                int32_t entity_9 = ~i;
                char item_80[0x80];
                int32_t source_4;
                int32_t dest_3;
                dest_3 = memcpy(&item_80, dest_1 - entity_9, entity_9 & 0xfffffffc);
                memcpy(dest_3, source_4, entity_9 & 3);
                char (* dest_4)[0x80] = &item_80;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool flag_2_1 = 0 != *dest_4;
                    dest_4 = &(*dest_4)[1];
                    i_1 -= 1;

                    if (!flag_2_1)
                        break;
                }

                int32_t entity_13 = ~i_1;
                int32_t i_5 = entity_13 - 1;

                if (entity_13 != 1)
                {
                    int32_t i_2;

                    do
                    {
                        if (Sys_PopStack_18(*(*context_3 + 8), &item_80) <= *(context + 0xbec) - 0xc)
                            break;

                        i_2 = i_5;
                        i_5 -= 1;
                        item_80[i_5] = 0;
                    } while (i_2 != 1);
                }

                void* dest_5 = &g_53b6b8;
                int32_t i_3 = 0xffffffff;

                while (i_3)
                {
                    bool flag_4_1 = 0 != *dest_5;
                    dest_5 += 1;
                    i_3 -= 1;

                    if (!flag_4_1)
                        break;
                }

                int32_t entity_17 = ~i_3;
                char (* dest_7)[0x80] = &item_80;
                int32_t i_4 = 0xffffffff;

                while (i_4)
                {
                    bool flag_5_1 = 0 != *dest_7;
                    dest_7 = &(*dest_7)[1];
                    i_4 -= 1;

                    if (!flag_5_1)
                        break;
                }

                int32_t source_6;
                int32_t dest_9;
                dest_9 = memcpy(dest_7 - 1, dest_5 - entity_17, entity_17 & 0xfffffffc);
                data_27 = &item_80;
                memcpy(dest_9, source_6, entity_17 & 3);
            }

            Sys_FreeMemory_18(context_3, data_27);
            int32_t data_28 = Sys_AllocateMemory_22(context_3);
            int32_t data_30;
            int32_t temp_12;
            temp_12 = HIGHD(*(context + 0x2c) - data_28);
            data_30 = LOWD(*(context + 0x2c) - data_28);
            int32_t dest_10 = ((data_30 - temp_12) >> 1) + *(context + 0x24) + 1;
            int32_t data_33 = Sys_CheckHeap_21(context_3);
            int32_t data_35;
            int32_t temp_14;
            temp_14 = HIGHD(*(context + 0x28) - data_33);
            data_35 = LOWD(*(context + 0x28) - data_33);
            int32_t data_37 = ((data_35 - temp_14) >> 1) + *(context + 0x20) + (g_c28b44 >> 1) - 0x140;
            int32_t entity_29 = g_c28b48 >> 1;
            context_3[5] = 0;
            context_3[7] = 0;
            context_3[1] = data_37;
            int32_t temp_19 = context_3[9] | 0x80000;
            context_3[6] = 0x43000000;
            context_3[9] = temp_19;
            context_3[2] = dest_10 + entity_29 - 0xf0;
            context_3[4] = item_8c_1;
            Sys_CloseFileStream_18(context_3);
        }
    }

    return Menu_DrawWidget_14(context, 0.5f, item_8c_1, *(context + 0x4d));
}
