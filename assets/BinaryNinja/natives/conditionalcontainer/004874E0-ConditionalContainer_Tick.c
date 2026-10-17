// Original IGI.EXE function: ConditionalContainer_Tick (VA 0x004874E0; static CFG gate PASS, CFG score 1.000).
#include "ConditionalContainer_Tick.h"
int32_t* ConditionalContainer_Tick(int32_t* context)

{
    int32_t* dest_val = context;
    int32_t flagP = dest_val[0x44];
    int32_t* data_val = Script_FormatString_6(&dest_val[8]);
    int64_t item_c;

    if (data_val)
    {
        data_val = Script_SpawnNewTask_7(&dest_val[8], dest_val);
        long double fpu0;
        item_c = fpu0;
        data_val = item_c;
        dest_val[0x44] = data_val;
    }

    data_val = dest_val[0x44];

    if (data_val || flagP)
    {
        data_val = *(dest_val + 0x112);

        if (!data_val)
        {
            item_c = 0;
            data_val = Level_StartMission_4();
            int32_t* i = dest_val[2];
            *(&item_c + 4) = data_val;
            int32_t item_4_1 = 2;

            if (*i && i)
            {
                int32_t entity_7 = g_afa7e0;

                do
                {
                    int32_t* temp_3 = *i;
                    void* data_10;

                    if (!temp_3)
                        data_10 = nullptr;
                    else
                    {
                        int32_t data_7 = *temp_3;
                        int32_t data_8 = -(data_7);
                        data_10 = (data_8 - data_8) & temp_3;
                    }

                    *((entity_7 << 2) + &g_afa6e0) = data_10;
                    g_afa7e0 = entity_7 + 1;
                    uint32_t data_12 = DynObj_UpdateDynTree_12();
                    int32_t data_13 = 0;
                    data_13 = i[7];
                    data_val = *(((data_12 * 0x180 + data_13) << 2) + &g_a96ae0);

                    if (data_val)
                        data_val = data_val(i, &item_c);

                    entity_7 = g_afa7e0 - 1;
                    g_afa7e0 = entity_7;
                    i = *((entity_7 << 2) + &g_afa6e0);
                } while (i);
            }

            *(dest_val + 0x112) = 1;
        }

        int32_t* i_1 = dest_val[2];

        if (*i_1 && i_1)
        {
            int32_t temp_7 = g_afa7e0;

            do
            {
                int32_t* source_1 = *i_1;
                void* data_17;

                if (!source_1)
                    data_17 = nullptr;
                else
                {
                    int32_t data_14 = *source_1;
                    int32_t data_15 = -(data_14);
                    data_17 = (data_15 - data_15) & source_1;
                }

                *((temp_7 << 2) + &g_afa6e0) = data_17;
                int32_t temp_8 = temp_7 + 1;
                int32_t data_18 = 0;
                g_afa7e0 = temp_8;
                data_18 = i_1[7];
                data_val = *((data_18 << 2) + &g_a970e0);

                if (data_val)
                {
                    data_val = data_val(i_1);
                    temp_8 = g_afa7e0;
                }

                i_1 = *((temp_8 << 2) + &g_afa6dc);
                temp_7 = temp_8 - 1;
                g_afa7e0 = temp_7;
            } while (i_1);
        }
    }
    else
    {
        data_val = *(dest_val + 0x112);

        if (data_val)
        {
            data_val = Level_StartMission_4();
            int32_t* i_2 = dest_val[2];
            context = data_val;

            if (*i_2 && i_2)
            {
                int32_t entity_1 = g_afa7e0;

                do
                {
                    int32_t* temp_1 = *i_2;
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
                    uint32_t data_6 = DynObj_LinkDynamicCube_12();
                    int32_t temp_2 = 0;
                    temp_2 = i_2[7];
                    data_val = *(((data_6 * 0x180 + temp_2) << 2) + &g_a96ae0);

                    if (data_val)
                        data_val = data_val(i_2, &context);

                    entity_1 = g_afa7e0 - 1;
                    g_afa7e0 = entity_1;
                    i_2 = *((entity_1 << 2) + &g_afa6e0);
                } while (i_2);
            }

            *(dest_val + 0x112) = 0;
        }
    }

    data_val = dest_val[0x44];

    if (!data_val)
    {
    label_487706:

        if (flagP)
        {
            data_val = Script_FormatString_6(&dest_val[0x30]);

            if (data_val)
            {
                data_val = Script_SpawnNewTask_7(&dest_val[0x30], dest_val);
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
            }
        }
    }
    else if (!flagP)
    {
        data_val = Script_FormatString_6(&dest_val[0x1c]);

        if (data_val)
        {
            int32_t data_19 = Script_SpawnNewTask_7(&dest_val[0x1c], dest_val);
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            return data_19;
        }
    }
    else if (!data_val)
        goto label_487706;

    return data_val;
}
