#include "ControlsMenu_InitOffsets.h"

void* ControlsMenu_InitOffsets(void* pThis)

{
    int32_t status_1;
    int32_t status = status_1;
    void* eax = Config_SetGamma();
    Config_ValidatePassword();
    int32_t i = 0;
    int32_t* ebx_1 = pThis + 0x254;
    void* result;

    do
    {
        int32_t eax_2;
        int32_t ecx_1;
        int32_t edx_1;
        eax_2 = Menu_LeaveMenus_12(*ebx_1);
        result = eax + Menu_PlayMusic_12(eax_2, edx_1, ecx_1, i) * 0xc;
        i += 1;
        ebx_1 = &ebx_1[1];
        *(result + 4) = eax_2 >> 0x1e & 3;
        *(result + 8) = eax_2 & 0x3fffffff;
    } while (i < 0x1b);

    int32_t* i_1 = *(pThis + 8);

    if (*i_1 && i_1)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* edx_4 = *i_1;
            void* eax_8;

            if (!edx_4)
                eax_8 = nullptr;
            else
            {
                int32_t eax_5 = *edx_4;
                int32_t eax_6 = -(eax_5);
                eax_8 = (eax_6 - eax_6) & edx_4;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = eax_8;
            g_afa7e0 = afa7e0_1 + 1;
            int32_t eax_9 = Menu_RequestScreen_14();
            int32_t ecx_6 = 0;
            ecx_6 = i_1[7];
            result = *(((eax_9 * 0x180 + ecx_6) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1);

            afa7e0_1 = g_afa7e0 - 1;
            g_afa7e0 = afa7e0_1;
            i_1 = *((afa7e0_1 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
