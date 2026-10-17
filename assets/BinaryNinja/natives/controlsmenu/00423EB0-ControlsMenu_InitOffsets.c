// Original IGI.EXE function: ControlsMenu_InitOffsets (VA 0x00423EB0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_InitOffsets.h"

void* ControlsMenu_InitOffsets(void* pThis)

{
    int32_t status_1;
    int32_t status = status_1;
    void* result_val = Config_SetGamma();
    Config_ValidatePassword();
    int32_t i = 0;
    int32_t* base_ptr_1 = pThis + 0x254;
    void* result;

    do
    {
        int32_t result_val_2;
        int32_t counter_val_1;
        int32_t scratch_val_1;
        result_val_2 = Menu_LeaveMenus_12(*base_ptr_1);
        result = result_val + Menu_PlayMusic_12(result_val_2, scratch_val_1, counter_val_1, i) * 0xc;
        i += 1;
        base_ptr_1 = &base_ptr_1[1];
        *(result + 4) = result_val_2 >> 0x1e & 3;
        *(result + 8) = result_val_2 & 0x3fffffff;
    } while (i < 0x1b);

    int32_t* i_1 = *(pThis + 8);

    if (*i_1 && i_1)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* scratch_val_4 = *i_1;
            void* result_val_8;

            if (!scratch_val_4)
                result_val_8 = nullptr;
            else
            {
                int32_t result_val_5 = *scratch_val_4;
                int32_t result_val_6 = -(result_val_5);
                result_val_8 = (result_val_6 - result_val_6) & scratch_val_4;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = result_val_8;
            g_afa7e0 = afa7e0_1 + 1;
            int32_t result_val_9 = Menu_RequestScreen_14();
            int32_t counter_val_6 = 0;
            counter_val_6 = i_1[7];
            result = *(((result_val_9 * 0x180 + counter_val_6) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1);

            afa7e0_1 = g_afa7e0 - 1;
            g_afa7e0 = afa7e0_1;
            i_1 = *((afa7e0_1 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
