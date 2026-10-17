// IGI native provenance: ScrollListBox_Update - 0x0041C310 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041C310-ScrollListBox_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ScrollListBox_Update.h"
void* ScrollListBox_Update(void* context)

{
    Menu_HandleInput_7(context);
    g_57bbb0 = context;

    if (Script_FormatString_6(context + 0x12b0))
        Script_SpawnNewTask_7(context + 0x12b0, context);

    g_57bbb0 = 0;
    int32_t i = 0;

    if (*(context + 0x1254) > 0)
    {
        int32_t* dest_1 = context + 0x98;

        do
        {
            *dest_1 = Menu_LocalSS(*(context + 0x44), &dest_1[-0x10]);
            i += 1;
            dest_1 = &dest_1[0x12];
        } while (i < *(context + 0x1254));
    }

    char data_5 = Script_FormatString_6(context + 0x1300);
    int32_t i_1;
    int32_t data_6;
    int32_t entity_2;

    if (data_5)
    {
        Script_SpawnNewTask_7(context + 0x1300, context);
        entity_2 = *(context + 0x1254);
🚫🚫🚫        i_1 = /* i_1 = (unimplemented  {fistp qword [stack_ptr+0xc], fp0}).d */;
        /* unimplemented  {fistp qword [stack_ptr+0xc], fp0} */
        data_6 = 0;
    }

    if (!data_5 || entity_2 <= 0)
    {
    label_41c3c1:
        entity_2 = *(context + 0x1254);
        *(context + 0x129c) = 0;
        int32_t data_7;

        if (!entity_2)
            data_7 = 0;
        else
            data_7 = *(context + 0x54);

        *(context + 0x12a0) = data_7;
    }
    else
    {
        int32_t* temp_1 = context + 0x54;

        while (i_1 != *temp_1)
        {
            data_6 += 1;
            temp_1 = &temp_1[0x12];

            if (data_6 >= entity_2)
                goto label_41c3c1;
        }

        *(context + 0x129c) = data_6;
        *(context + 0x12a0) = i_1;
    }

    int32_t flagP = *(context + 0x2c);
    int32_t f0 = (flagP - 4) / *(context + 0x13f0);
    bool temp_4 = f0 < entity_2;
    *(context + 0x12a9) = temp_4;
    int32_t dest_5;

    if (!temp_4)
        dest_5 = 0;
    else
    {
        void* temp_5 = *(context + 0x13f4);
        int32_t dest_4 = *(temp_5 + 0x28);
        int32_t item_20_1 = 0;
        Menu_UpdateLanguage_10(temp_5, *(context + 0x28) + *(context + 0x20) - dest_4, *(context + 0x24), flagP,
            entity_2 - f0 + 1);
        dest_5 = dest_4 + 2;
    }

    *(*(context + 0x13f8) + 0x20) = *(context + 0x20);
    *(*(context + 0x13f8) + 0x24) = *(context + 0x24);
    *(*(context + 0x13f8) + 0x2c) = *(context + 0x2c);
    void* result = *(context + 0x13f8);
    *(result + 0x28) = *(context + 0x28) - dest_5;
    *(context + 0x12aa) = 0;
    *(context + 0x12a4) = 0xffffffff;
    int32_t* i_2 = *(context + 8);

    if (*i_2 && i_2)
    {
        int32_t entity_10 = g_afa7e0;

        do
        {
            int32_t* temp_10 = *i_2;
            void* data_17;

            if (!temp_10)
                data_17 = nullptr;
            else
            {
                int32_t data_14 = *temp_10;
                int32_t data_15 = -(data_14);
                data_17 = (data_15 - data_15) & temp_10;
            }

            *((entity_10 << 2) + &g_afa6e0) = data_17;
            g_afa7e0 = entity_10 + 1;
            int32_t data_18 = Menu_HandleInput_13();
            int32_t temp_11 = 0;
            temp_11 = i_2[7];
            result = *(((data_18 * 0x180 + temp_11) << 2) + &g_a96ae0);

            if (result)
                result = result(i_2);

            entity_10 = g_afa7e0 - 1;
            g_afa7e0 = entity_10;
            i_2 = *((entity_10 << 2) + &g_afa6e0);
        } while (i_2);
    }

    return result;
}
