// Original IGI.EXE function: ControlsMenu_Cleanup (VA 0x00423DB0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_Cleanup.h"
int32_t ControlsMenu_Cleanup()

{
    void* data_val;
    int32_t entity_val;
    data_val = Config_SetGamma();
    Config_ValidatePassword();
    void* arg_4;
    void* dest_val = arg_4;
    void* i = nullptr;
    int32_t* context_1 = dest_val + 0x54;
    int32_t result;

    do
    {
        int32_t temp_val;
        int32_t data_2 = Menu_PlayMusic_12(0x1b, temp_val, entity_val, i) * 3;
        int32_t data_5 = Menu_DrawWidget_12(*(data_val + (data_2 << 2) + 4), *(data_val + (data_2 << 2) + 8));
        Config_Moveleft(i, nullptr, &arg_4);
        int32_t* data_7 = Menu_LocalSS(*(dest_val + 0x44), arg_4);
        Sys_FreeMemory_18(*context_1, data_7);
        entity_val = Menu_UpdateLanguage_12(dest_val, i, data_5);
        result = 0x1b;
        i += 1;
        context_1 = &context_1[1];
    } while (i < 0x1b);

    int32_t* i_2 = *(dest_val + 8);

    if (*i_2)
    {
        int32_t* i_1 = i_2;

        if (i_1)
        {
            int32_t entity_3 = g_afa7e0;

            do
            {
                int32_t* temp_3 = *i_1;
                void* data_11;

                if (!temp_3)
                    data_11 = nullptr;
                else
                {
                    int32_t data_8 = *temp_3;
                    int32_t data_9 = -(data_8);
                    data_11 = (data_9 - data_9) & temp_3;
                }

                *((entity_3 << 2) + &g_afa6e0) = data_11;
                g_afa7e0 = entity_3 + 1;
                int32_t data_12 = Menu_HandleInput_13();
                int32_t data_13 = 0;
                data_13 = i_1[7];
                result = *(((data_12 * 0x180 + data_13) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1);

                entity_3 = g_afa7e0 - 1;
                g_afa7e0 = entity_3;
                i_1 = *((entity_3 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
