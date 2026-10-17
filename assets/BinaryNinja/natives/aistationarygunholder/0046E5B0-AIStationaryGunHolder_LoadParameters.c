// IGI native provenance: AIStationaryGunHolder_LoadParameters - 0x0046E5B0 - CFG score 97.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046E5B0-AIStationaryGunHolder_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIStationaryGunHolder_LoadParameters.h"
void* AIStationaryGunHolder_LoadParameters(float context)

{
    char context_val = *(context + 0x2698);
    int64_t item_c;

    if (Script_FormatString_6(context + 0x2644))
    {
        Script_SpawnNewTask_7(context + 0x2644, context);
        long double fpu0;
        item_c = fpu0;
        *(context + 0x2694) = item_c;
    }

    if (Script_FormatString_6(context + 0x25f4))
    {
        Script_SpawnNewTask_7(context + 0x25f4, context);
🚫🚫🚫        item_c = /* item_c = unimplemented  {fistp qword [stack_ptr+0x14], fp0} */;
        /* unimplemented  {fistp qword [stack_ptr+0x14], fp0} */
        *(context + 0x2698) = item_c;
    }

    if (*(context + 0x2698))
    {
        memcpy(context + 0xf0, context + 0x20, 0x18);
        memcpy(context + 0x108, context + 0x70, 0x28);
        *(context + 0x160) = 0;
        Car_DetectionSweep(context + 0x168, context + 0xf0, context, *(context + 0x2694));
    }
    else if (context_val)
    {
        FX_TrailUpdate_13(context + 0x168);
        FX_DebrisSpawn_13(context + 0x168, 1, 4, AI_CombatTarget_22(), 4, 8);
    }

    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t temp_2 = g_afa7e0;

        do
        {
            int32_t* source_5 = *i;
            void* data_10;

            if (!source_5)
                data_10 = nullptr;
            else
            {
                int32_t data_7 = *source_5;
                int32_t data_8 = -(data_7);
                data_10 = (data_8 - data_8) & source_5;
            }

            *((temp_2 << 2) + &g_afa6e0) = data_10;
            int32_t temp_3 = temp_2 + 1;
            int32_t data_11 = 0;
            g_afa7e0 = temp_3;
            data_11 = i[7];
            int32_t data_12 = *((data_11 << 2) + &g_a970e0);

            if (data_12)
            {
                data_12(i);
                temp_3 = g_afa7e0;
            }

            i = *((temp_3 << 2) + &g_afa6dc);
            temp_2 = temp_3 - 1;
            g_afa7e0 = temp_2;
        } while (i);
    }

    void* result = *(context + 0xe8);

    if (result)
    {
        int32_t entity_2 = 0;
        entity_2 = *(result + 0x1c);
        (*((entity_2 << 2) + &g_a970e0))(result);
        void* entity_3 = *(context + 0xe8);
        result = context + 0x70;
        item_c = context + 0x20;
        *(&item_c + 4) = result;
        float item_4_1 = context;
        int32_t* i_1 = *(entity_3 + 8);

        if (*i_1 && i_1)
        {
            int32_t entity_4 = g_afa7e0;

            do
            {
                int32_t* temp_5 = *i_1;
                void* data_16;

                if (!temp_5)
                    data_16 = nullptr;
                else
                {
                    int32_t data_13 = *temp_5;
                    int32_t data_14 = -(data_13);
                    data_16 = (data_14 - data_14) & temp_5;
                }

                *((entity_4 << 2) + &g_afa6e0) = data_16;
                g_afa7e0 = entity_4 + 1;
                uint32_t data_18 = MagicObj_GetEventId();
                int32_t data_19 = 0;
                data_19 = i_1[7];
                result = *(((data_18 * 0x180 + data_19) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1, &item_c);

                entity_4 = g_afa7e0 - 1;
                g_afa7e0 = entity_4;
                i_1 = *((entity_4 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
