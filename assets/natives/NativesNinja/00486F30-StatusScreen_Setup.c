#include "00486F30-StatusScreen_Setup.h"
/* 0x00486f30 StatusScreen_Setup full linked: callers=0 callees=13 */
int32_t* sub_486f30()

{
    void* ebp = *(Level_LoadLevel_6() + 0x5c);
    void* ebx_1 = Level_LoadLevel_6() + 0x60;
    int32_t eax_2 = g_c28b44;
    void* arg_4;
    void* edi = arg_4;
    int32_t ecx = g_c28b48;
    int32_t* result = sub_497620(edi + 0x20, 1);
    int32_t* i = *(edi + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_6;

            if (!edx_1)
                eax_6 = nullptr;
            else
            {
                int32_t eax_3 = *edx_1;
                int32_t eax_4 = -(eax_3);
                eax_6 = (eax_4 - eax_4) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_6;
            g_afa7e0 = ecx_1 + 1;
            int32_t eax_7 = sub_4e7530();
            int32_t ecx_3 = 0;
            ecx_3 = i[7];
            result = *(((eax_7 * 0x180 + ecx_3) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    if (*(ebx_1 + 0x54) == ebp)
    {
        result = sub_46c060();

        if (!result)
        {
            uint32_t eax_12 = *g_540b5c;
            void* ecx_5 = **(ebp + 0x68);
            int32_t edx_3 = 0;
            arg_4 = edi;
            edx_3 = *(ecx_5 + 0x1c);
            int32_t eax_16 = *(((eax_12 * 0x180 + edx_3) << 2) + &g_a96ae0);

            if (eax_16)
                eax_16(ecx_5, &arg_4);

            result = g_bc2360;

            if (result[0x1c])
            {
                int32_t edx_11 = sub_4894b0() / 0x1e / 0x3c;
                int32_t temp1_1 = sub_4894b0() / 0x1e % 0x3c;
                char* ecx_14 = &g_541078;

                if (temp1_1 == 1)
                    ecx_14 = &g_567c74;

                char* eax_30 = &g_541078;

                if (edx_11 == 1)
                    eax_30 = &g_567c74;

                char* var_5c_3 = ecx_14;
                int32_t var_60_2 = temp1_1;
                char* var_64_1 = eax_30;
                int32_t var_68_1 = edx_11;
                void var_40;
                Game_DataSymbolLoad(&var_40, "Time Left: %d minute%s, %d second%s");
                sub_4b6e90(*(edi + 0x4dc), &var_40);
                *(*(edi + 0x4dc) + 4) = eax_2 * 0.8125f;
                *(*(edi + 0x4dc) + 8) = ecx * 0.0416666679f;
                return sub_4b6f50(*(edi + 0x4dc));
            }
        }
    }

    return result;
}
