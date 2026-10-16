#include "00423DB0-ControlsMenu_Cleanup.h"
/* 0x00423db0 ControlsMenu_Cleanup full linked: callers=0 callees=9 */
int32_t ControlsMenu_Cleanup()

{
    void* eax;
    int32_t ecx;
    eax = Config_SetGamma();
    Config_ValidatePassword();
    void* arg_4;
    void* edi = arg_4;
    void* i = nullptr;
    int32_t* ebx_1 = edi + 0x54;
    int32_t result;

    do
    {
        int32_t edx;
        int32_t eax_2 = Menu_PlayMusic_12(0x1b, edx, ecx, i) * 3;
        int32_t eax_5 = Menu_DrawWidget_12(*(eax + (eax_2 << 2) + 4), *(eax + (eax_2 << 2) + 8));
        Config_Moveleft(i, nullptr, &arg_4);
        int32_t* eax_7 = Menu_LocalSS(*(edi + 0x44), arg_4);
        sub_4b6e90(*ebx_1, eax_7);
        ecx = Menu_UpdateLanguage_12(edi, i, eax_5);
        result = 0x1b;
        i += 1;
        ebx_1 = &ebx_1[1];
    } while (i < 0x1b);

    int32_t* i_2 = *(edi + 8);

    if (*i_2)
    {
        int32_t* i_1 = i_2;

        if (i_1)
        {
            int32_t ecx_3 = g_afa7e0;

            do
            {
                int32_t* edx_3 = *i_1;
                void* eax_11;

                if (!edx_3)
                    eax_11 = nullptr;
                else
                {
                    int32_t eax_8 = *edx_3;
                    int32_t eax_9 = -(eax_8);
                    eax_11 = (eax_9 - eax_9) & edx_3;
                }

                *((ecx_3 << 2) + &g_afa6e0) = eax_11;
                g_afa7e0 = ecx_3 + 1;
                int32_t eax_12 = Menu_HandleInput_13();
                int32_t eax_13 = 0;
                eax_13 = i_1[7];
                result = *(((eax_12 * 0x180 + eax_13) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1);

                ecx_3 = g_afa7e0 - 1;
                g_afa7e0 = ecx_3;
                i_1 = *((ecx_3 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
