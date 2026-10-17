// Original IGI.EXE function: ComputerLog_Setup (VA 0x00468BC0; static CFG gate PASS, CFG score 1.000).
#include "ComputerLog_Setup.h"
void* ComputerLog_Setup(float context)

{
    int32_t item_10 = g_c28b44;
    int32_t entity_val = g_c28b48;
    int32_t item_8 = entity_val;
    int32_t item_3c = entity_val;
    int32_t item_40 = entity_val;
    Sys_CloseFileStream_14(0.0f, 0.0f, item_10, item_8, 0.0f, 0.0f, 0.0f, 0x40040000, 0xffffffff, 0x44079eb8);
    Qhash_Init(1);
    int32_t i = 0;
    item_10 = item_10 * 0.14999999999999999;
    item_8 = item_8 * 0.10000000000000001;
    int32_t dest_val = item_8;

    if (g_5bdd6c > 0)
    {
        while (i < 0xf)
        {
            void* data_3 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font1.fnt");
            int32_t item_30_1 = 0x78;
            float data_6 = AI_TakeCover_26(item_10, dest_val, 0x44029eb8, 0x190,
                *(((g_5bdd6c - *(context + 0x20) - i) << 2) + &g_5bdc98), data_3, 1) + 2;
            float data_7 = data_6;
            float item_50_1 = item_10 + 0x64;
            float item_5c_1 = item_10 + 0x64;
            Sys_ExecuteBytecode_15(item_10, data_7, 0x44029eb8, item_10 + 0x64, data_7, 0x44029eb8, 48.0f, 96.0f, 48.0f,
                0.0f, 16.0f, 0.0f, 0, 0x40040000, 0xffffffff);
            dest_val = data_6 + 2;
            i += 1;

            if (i >= g_5bdd6c)
                break;
        }
    }

    void* result = Qhash_Reset();
    int32_t* i_2 = *(context + 8);

    if (*i_2)
    {
        int32_t* i_1 = i_2;

        if (i_1)
        {
            int32_t entity_5 = g_afa7e0;

            do
            {
                int32_t* temp_3 = *i_1;
                void* data_12;

                if (!temp_3)
                    data_12 = nullptr;
                else
                {
                    int32_t data_9 = *temp_3;
                    int32_t data_10 = -(data_9);
                    data_12 = (data_10 - data_10) & temp_3;
                }

                *((entity_5 << 2) + &g_afa6e0) = data_12;
                g_afa7e0 = entity_5 + 1;
                int32_t data_13 = StatusScreen_GetEvent();
                int32_t data_14 = 0;
                data_14 = i_1[7];
                result = *(((data_13 * 0x180 + data_14) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1);

                entity_5 = g_afa7e0 - 1;
                g_afa7e0 = entity_5;
                i_1 = *((entity_5 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
