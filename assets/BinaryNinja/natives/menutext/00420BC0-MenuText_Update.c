// Original IGI.EXE function: MenuText_Update (VA 0x00420BC0; static CFG gate PASS, CFG score 1.000).
#include "MenuText_Update.h"
void* MenuText_Update(void* context)

{
    void* result = *(context + 0x44);
    *(context + 0x28) = 0;
    *(context + 0x2c) = 0;

    if (result && *(context + 0x114))
    {
        int32_t* data_val = Menu_LocalSS(result, context + 0x54);
        Sys_FreeMemory_18(*(context + 0x114), data_val);
        int32_t data_2 = Sys_CheckHeap_21(*(context + 0x114));
        int32_t* entity_3 = *(context + 0x114);
        *(context + 0x28) = data_2;
        result = Sys_AllocateMemory_22(entity_3);
        *(context + 0x2c) = result;
    }

    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_4 = g_afa7e0;

        do
        {
            int32_t* temp_2 = *i;
            void* data_6;

            if (!temp_2)
                data_6 = nullptr;
            else
            {
                int32_t data_3 = *temp_2;
                int32_t data_4 = -(data_3);
                data_6 = (data_4 - data_4) & temp_2;
            }

            *((entity_4 << 2) + &g_afa6e0) = data_6;
            g_afa7e0 = entity_4 + 1;
            int32_t data_7 = Menu_LeaveMenus_14();
            int32_t data_8 = 0;
            data_8 = i[7];
            result = *(((data_7 * 0x180 + data_8) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            entity_4 = g_afa7e0 - 1;
            g_afa7e0 = entity_4;
            i = *((entity_4 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
