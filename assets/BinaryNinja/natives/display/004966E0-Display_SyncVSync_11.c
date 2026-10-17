// Original IGI.EXE function: Display_SyncVSync_11 (VA 0x004966E0; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_11.h"
int32_t __convention("regparm") Display_SyncVSync_11(int32_t a1, int32_t a2, int32_t a3, void* a4)

{
    int32_t v_4 = a3;
    a1 = g_6840e9;
    v_4 = 0;

    if (a1)
    {
        int16_t valA1 = *(*(a4 + 0xc) + 0x14);

        if (valA1 == 2 || !valA1)
        {
            int32_t valA4 = *(a4 + 0x3c);
            valA4 = valA4 != 2;
            return valA4;
        }

        int32_t* valA2 = *(a4 + 0x10);
        a1 = (*(*valA2 + 0x24))(valA2, &v_4);

        if (!a1)
        {
            a1 = v_4;

            if (!(a1 & 2))
            {
                if (a1 & 1)
                {
                    a1 = 1;
                    return a1;
                }
            }
            else if (a1 & 4)
            {
                a1 = Display_SetGammaRamp_10(a4, *(a4 + 0xc), 1);

                if (a1)
                {
                    int32_t* srcS2 = *(a4 + 0x10);
                    a1 = (*(*srcS2 + 0x30))(srcS2, 0, 0, 1);

                    if (!a1)
                    {
                        a1 = 1;
                        return a1;
                    }
                }
            }
        }
    }

    a1 = 0;
    return a1;
}
