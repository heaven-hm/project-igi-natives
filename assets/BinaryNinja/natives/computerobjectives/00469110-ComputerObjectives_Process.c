// IGI native provenance: ComputerObjectives_Process - 0x00469110 - CFG score 97.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 00469110-ComputerObjectives_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerObjectives_Process.h"
void* ComputerObjectives_Process(void* context)

{
    int32_t data_val = g_c28b44;
    int32_t entity_val = g_c28b48;
    int32_t item_170 = entity_val;
    int32_t item_174 = entity_val;
    Sys_CloseFileStream_14(0.0f, 0.0f, data_val, entity_val, 0.0f, 0.0f, 0.0f, 0x40040000, 0xffffffff, 0x44079eb8);
    Qhash_Init(1);
    long double fpu_val_7_2 = data_val;
    int32_t item_154_1;

    if (!AI_MoveToNode_29())
        item_154_1 = fpu_val_7_2 * 0.10000000000000001;
    else
        item_154_1 = fpu_val_7_2 * 0.14999999999999999;

    int32_t i = 0;
    int32_t i_2 = 0;
    int32_t context_val = entity_val * 0.10000000000000001;
    int32_t* item_150_1 = context + 0x20;

    do
    {
        void* data_3;
        int32_t temp_2;
        data_3 = AI_SelectTarget_24(i);

        if (data_3)
        {
            void* dest_1 = data_3;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool flag_1_1 = 0 != *dest_1;
                dest_1 += 1;
                j -= 1;

                if (!flag_1_1)
                    break;
            }

            int32_t entity_3 = ~j;
            void* entity_4 = entity_3 - 1;

            if (entity_3 != 1)
            {
                void* data_4 = AI_MoveToNode_29();

                if (data_4)
                {
                    void* item_168_2 = entity_4;
                    void* item_16c_1 = entity_4;
                    data_4 = AI_SelectTarget_28(*item_150_1, item_154_1 - 0x22, context_val + 2);
                }

                int32_t item_168_4 = i + 1;
                char* item_170_3 = "OBJECTIVE";
                int32_t* item_16c_3 = Resource_Load(data_4, temp_2, entity_4, nullptr);
                void item_100;
                void* entity_6;
                int32_t temp_5;
                entity_6 = Game_DataSymbolLoad(&item_100, "%s %d: ");
                int32_t data_8 = *(data_3 + 0xc8);
                char* item_178_1;
                void item_140;

                if (!data_8)
                {
                    int32_t data_10 = *(data_3 + 0xc4);

                    if (!data_10)
                    {
                        char* item_16c_6 = "INCOMPLETE";
                        int32_t* item_170_6 = Resource_Load(data_10, temp_5, entity_6, nullptr);
                        void* item_174_5 = &g_53f730;
                        item_178_1 = &item_140;
                    }
                    else
                    {
                        char* item_16c_5 = "COMPLETE";
                        int32_t* item_170_5 = Resource_Load(data_10, temp_5, entity_6, nullptr);
                        void* item_174_4 = &g_53f730;
                        item_178_1 = &item_140;
                    }
                }
                else
                {
                    char* item_16c_4 = "FAILED";
                    int32_t* item_170_4 = Resource_Load(data_8, temp_5, entity_6, nullptr);
                    void* item_174_3 = &g_53f730;
                    item_178_1 = &item_140;
                }

                Game_DataSymbolLoad(item_178_1, "%s");
                void* dest_2 = &item_140;
                int32_t j_1 = 0xffffffff;

                while (j_1)
                {
                    bool flag_2_1 = 0 != *dest_2;
                    dest_2 += 1;
                    j_1 -= 1;

                    if (!flag_2_1)
                        break;
                }

                int32_t entity_7 = ~j_1;
                void* dest_4 = &item_100;
                int32_t j_2 = 0xffffffff;

                while (j_2)
                {
                    bool flag_3_1 = 0 != *dest_4;
                    dest_4 += 1;
                    j_2 -= 1;

                    if (!flag_3_1)
                        break;
                }

                int32_t source_2;
                int32_t dest_6;
                dest_6 = memcpy(dest_4 - 1, dest_2 - entity_7, entity_7 & 0xfffffffc);
                void* data_13 = g_bc2360;
                memcpy(dest_6, source_2, entity_7 & 3);
                int32_t item_174_6 = 0x78;
                int32_t data_15 = AI_TakeCover_26(item_154_1, context_val, 0x44029eb8, 0x190, &item_100,
                    Menu_HandleInput_3(*(data_13 + 0x120), "font3.fnt"), 2);
                int32_t data_16;
                void* entity_13;
                int32_t temp_7;
                data_16 = Sys_CheckHeap_16(data_3);
                char* context_1;

                if (!data_16)
                {
                    void* item_168_5 = data_3;
                    Game_DataSymbolLoad(&item_100, "RM: %s");
                    context_1 = &item_100;
                }
                else
                {
                    void* item_16c_8 = data_3;
                    context_1 = Resource_Load(data_16, temp_7, entity_13, nullptr);
                }

                int32_t item_174_7 = 0x78;
                i = i_2;
                context_val = AI_TakeCover_26(item_154_1, data_15, 0x44029eb8, 0x190, context_1,
                    Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt"), 1) + 8;
            }
        }

        i += 1;
        i_2 = i;
        item_150_1 = &item_150_1[1];
    } while (i < 6);

    Qhash_Reset();
    void* result = context;
    int32_t* i_1 = *(result + 8);

    if (*i_1 && i_1)
    {
        int32_t entity_17 = g_afa7e0;

        do
        {
            int32_t* temp_9 = *i_1;
            void* data_23;

            if (!temp_9)
                data_23 = nullptr;
            else
            {
                int32_t data_20 = *temp_9;
                int32_t data_21 = -(data_20);
                data_23 = (data_21 - data_21) & temp_9;
            }

            *((entity_17 << 2) + &g_afa6e0) = data_23;
            g_afa7e0 = entity_17 + 1;
            int32_t data_24 = StatusScreen_GetEvent();
            int32_t temp_10 = 0;
            temp_10 = i_1[7];
            result = *(((data_24 * 0x180 + temp_10) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1);

            entity_17 = g_afa7e0 - 1;
            g_afa7e0 = entity_17;
            i_1 = *((entity_17 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
