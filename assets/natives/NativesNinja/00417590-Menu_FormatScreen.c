#include "00417590-Menu_FormatScreen.h"
/* 0x00417590 Menu_FormatScreen full linked: callers=3 callees=4 */
int32_t Menu_FormatScreen(void* a1, int32_t a2)

{
    if (!a2)
    {
        void* esi = *(a1 + 0x30);
        int32_t eax_10 = Menu_LeaveMenus_14();
        int32_t eax_11 = 0;
        eax_11 = *(esi + 0x1c);
        int32_t eax_12 = *(((eax_10 * 0x180 + eax_11) << 2) + &g_a96ae0);

        if (eax_12)
            eax_12(esi);
    }
    else
    {
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            int32_t ecx = g_afa7e0;

            do
            {
                int32_t* edx_1 = *i;
                void* eax_3;

                if (!edx_1)
                    eax_3 = nullptr;
                else
                {
                    int32_t eax = *edx_1;
                    int32_t eax_1 = -(eax);
                    eax_3 = (eax_1 - eax_1) & edx_1;
                }

                *((ecx << 2) + &g_afa6e0) = eax_3;
                g_afa7e0 = ecx + 1;
                int32_t eax_4 = Menu_LeaveMenus_14();
                int32_t ecx_2 = 0;
                ecx_2 = i[7];
                int32_t eax_8 = *(((eax_4 * 0x180 + ecx_2) << 2) + &g_a96ae0);

                if (eax_8)
                    eax_8(i);

                ecx = g_afa7e0 - 1;
                g_afa7e0 = ecx;
                i = *((ecx << 2) + &g_afa6e0);
            } while (i);

            void* var_10 = a1;
            return Menu_PlayMusic(*(a1 + 0x30));
        }
    }

    void* var_10_1 = a1;
    return Menu_PlayMusic(*(a1 + 0x30));
}
