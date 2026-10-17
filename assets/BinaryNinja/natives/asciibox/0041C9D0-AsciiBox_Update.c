// Original IGI.EXE function: AsciiBox_Update (VA 0x0041C9D0; static CFG gate PASS, CFG score 1.000).
#include "AsciiBox_Update.h"
int32_t* AsciiBox_Update(void* context)

{
    if (*(context + 0xdc))
    {
        Qhash_Init(1);
        Sys_ExecuteBytecode_2(*(context + 0xdc));
        *(context + 0xdc) = 0;
        Qhash_Reset();
    }

    int32_t* result = *(context + 0x44);
    *(context + 0xdc) = 0;
    *(context + 0xe4) = 0;

    if (result && *(context + 0xd4))
    {
        result = QFile_ReadWrite(context + 0x94, "r");

        if (result)
        {
            int32_t data_2 = Sys_PushStack_4(result);
            Qhash_Init(1);
            *(context + 0xdc) = Mem_Alloc(data_2 + 2, 4);
            Qhash_Reset();
            Resource_Unpack(result, *(context + 0xdc) + 1, data_2);
            Sys_ReadFileBlock_4(result);
            *(*(context + 0xdc) + data_2 + 1) = 0;
            **(context + 0xdc) = 0;
            int32_t item_3c_1 = *(context + 0xd4);
            result =
                Menu_UpdateLanguage_8(*(context + 0xd8), *(context + 0xdc) + 1, *(context + 0x28) - 0x1c);
            *(context + 0xe4) = result;
        }
    }

    int32_t entity_5 = *(context + 0xdc);
    *(context + 0xe8) = 0;
    *(context + 0xe0) = entity_5 + 1;
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_7 = g_afa7e0;

        do
        {
            int32_t* temp_4 = *i;
            void* data_12;

            if (!temp_4)
                data_12 = nullptr;
            else
            {
                int32_t data_9 = *temp_4;
                int32_t data_10 = -(data_9);
                data_12 = (data_10 - data_10) & temp_4;
            }

            *((entity_7 << 2) + &g_afa6e0) = data_12;
            g_afa7e0 = entity_7 + 1;
            int32_t data_13 = Menu_LeaveMenus_14();
            int32_t data_14 = 0;
            data_14 = i[7];
            result = *(((data_13 * 0x180 + data_14) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            entity_7 = g_afa7e0 - 1;
            g_afa7e0 = entity_7;
            i = *((entity_7 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
