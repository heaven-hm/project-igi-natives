// Original IGI.EXE function: PictureBox_OnEvent (VA 0x0041B750; static CFG gate PASS, CFG score 1.000).
#include "PictureBox_OnEvent.h"
int32_t PictureBox_OnEvent(void* context)

{
    *(context + 0x954) = 0;
    g_57bba4 = context;

    if (Script_FormatString_6(context + 0x95c))
        Script_SpawnNewTask_7(context + 0x95c, context);

    g_57bba4 = 0;
    int32_t result = *(context + 0x958);
    int32_t context_val = 0;
    char* dest_1 = context + 0x54;

    if (result > 0)
    {
        do
        {
            *(dest_1 + 0x44) = Menu_DrawWidget_3(*(context + 0x44), dest_1);
            result = *(context + 0x958);
            dest_1 = &dest_1[0x48];
            context_val += 1;
        } while (context_val < result);
    }

    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_6;

            if (!temp_1)
                data_6 = nullptr;
            else
            {
                int32_t data_3 = *temp_1;
                int32_t data_4 = -(data_3);
                data_6 = (data_4 - data_4) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_6;
            g_afa7e0 = entity_1 + 1;
            int32_t data_7 = Menu_HandleInput_13();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            result = *(((data_7 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
