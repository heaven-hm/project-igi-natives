// Original IGI.EXE function: Menu_FormatScreen (VA 0x00417590; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen.h"
int32_t Menu_FormatScreen(void* a1, int32_t a2)

{
    if (!a2)
    {
        void* srcS = *(a1 + 0x30);
        int32_t valA10 = Menu_LeaveMenus_14();
        int32_t valA11 = 0;
        valA11 = *(srcS + 0x1c);
        int32_t valA12 = *(((valA10 * 0x180 + valA11) << 2) + &g_a96ae0);

        if (valA12)
            valA12(srcS);
    }
    else
    {
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            int32_t objC = g_afa7e0;

            do
            {
                int32_t* tmpD1 = *i;
                void* valA3;

                if (!tmpD1)
                    valA3 = nullptr;
                else
                {
                    int32_t valA = *tmpD1;
                    int32_t valA1 = -(valA);
                    valA3 = (valA1 - valA1) & tmpD1;
                }

                *((objC << 2) + &g_afa6e0) = valA3;
                g_afa7e0 = objC + 1;
                int32_t valA4 = Menu_LeaveMenus_14();
                int32_t objC2 = 0;
                objC2 = i[7];
                int32_t valA8 = *(((valA4 * 0x180 + objC2) << 2) + &g_a96ae0);

                if (valA8)
                    valA8(i);

                objC = g_afa7e0 - 1;
                g_afa7e0 = objC;
                i = *((objC << 2) + &g_afa6e0);
            } while (i);

            void* v_10 = a1;
            return Menu_PlayMusic(*(a1 + 0x30));
        }
    }

    void* v_10_1 = a1;
    return Menu_PlayMusic(*(a1 + 0x30));
}
