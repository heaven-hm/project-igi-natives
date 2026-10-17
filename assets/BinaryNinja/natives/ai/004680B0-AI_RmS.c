// Original IGI.EXE function: AI_RmS (VA 0x004680B0; static CFG gate PASS, CFG score 1.000).
#include "AI_RmS.h"
int32_t AI_RmS(int32_t* context)

{
    double* data_val = context[3];
    double* entity_val = *context;
    float item_120 = *data_val - *entity_val;
    float item_11c = data_val[1] - entity_val[1];
    float item_118 = data_val[2] - entity_val[2];
    float* data_1 = context[1];
    float item_114 = item_118 * data_1[6] + item_11c * data_1[3] + item_120 * *data_1;
    long double fpu_val_7_16 = item_118 * data_1[8] + item_11c * data_1[5];
    long double fpu_val_6_11 = item_120 * data_1[2];
    float item_11c_1 = item_118 * data_1[7] + item_11c * data_1[4] + item_120 * data_1[1];
    item_120 = item_114;
    float item_118_1 = fpu_val_7_16 + fpu_val_6_11;
    float item_108;
    AI_UpdateSensors_24(&item_108, &item_120, context);
    int16_t result;
    float item_104;
    void item_100;

    if (AI_SelectTarget_27() != 1)
    {
        result = AI_SelectTarget_27();

        if (result > 1)
        {
            void* temp_5 = context[0xa];
            int32_t i = 0xffffffff;
            void* dest_2 = temp_5;
            result = 0;

            while (i)
            {
                bool flag_1_1 = 0 != *dest_2;
                dest_2 += 1;
                i -= 1;

                if (!flag_1_1)
                    break;
            }

            if (~i != 1)
            {
                int32_t data_10;
                void* entity_8;
                int32_t temp_6;
                data_10 = Sys_CheckHeap_16(temp_5);
                char* source_2;

                if (!data_10)
                {
                    int32_t item_12c_4 = context[0xa];
                    Game_DataSymbolLoad(&item_100, "RM: %s");
                    source_2 = &item_100;
                }
                else
                {
                    int32_t data_11 = context[0xa];
                    int32_t item_130_3 = data_11;
                    source_2 = Resource_Load(data_11, temp_6, entity_8, nullptr);
                }

                void* data_14 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
                item_114 = item_104;
                int32_t temp_7 = item_114;
                int32_t item_138_2 = 0x80;
                item_114 = item_108;
                return AI_TakeCover_26(item_114, temp_7, 0x44051eb8, 0x80, source_2, data_14, 0);
            }
        }
    }
    else
    {
        void* temp_1 = context[9];
        int32_t i_1 = 0xffffffff;
        void* dest_1 = temp_1;
        result = 0;

        while (i_1)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 += 1;
            i_1 -= 1;

            if (!flag_0_1)
                break;
        }

        if (~i_1 != 1)
        {
            int32_t data_4;
            void* entity_4;
            data_4 = Sys_CheckHeap_16(temp_1);
            int32_t* source_1;

            if (!data_4)
            {
                int32_t item_12c_2 = context[9];
                Game_DataSymbolLoad(&item_100, "RM: %s");
                source_1 = &item_100;
            }
            else
            {
                int32_t temp_2 = context[9];
                int32_t item_130_1 = temp_2;
                source_1 = Resource_Load(data_4, temp_2, entity_4, nullptr);
            }

            void* data_8 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
            item_114 = item_104;
            int32_t item_138_1 = 0x80;
            int32_t item_144_1 = item_114;
            item_114 = item_108;
            return AI_TakeCover_26(item_114, item_144_1, 0x44051eb8, 0x80, source_1, data_8, 0);
        }
    }
    return result;
}
