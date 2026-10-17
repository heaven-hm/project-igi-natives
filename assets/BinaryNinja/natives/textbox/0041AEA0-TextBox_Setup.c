// Original IGI.EXE function: TextBox_Setup (VA 0x0041AEA0; static CFG gate PASS, CFG score 1.000).
#include "TextBox_Setup.h"
int32_t TextBox_Setup(int32_t a1)

{
    int32_t srcS = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(srcS + 0x44)) - 8) * 0.125f;
    long double f0 = 0f;
    x87_r7_1 - f0;

    a1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    if (*(srcS + 0x21a0))
    {
        void* tmpD1 = *(srcS + 0x98);

        if (tmpD1)
        {
            int32_t* objC3 = *(srcS + 0x94);

            if (objC3)
            {
                char* valA8 = *(srcS + *(srcS + 0x219c) * 0x108 + 0x1a0);

                if (valA8)
                {
                    int32_t v_24_1 = *(srcS + 0x2c) - 8;
                    int32_t v_2c_1 = 0x3f800000;
                    Menu_LeaveMenus_7((g_c28b44 >> 1) + *(srcS + 0x20) - 0x13c,
                        (g_c28b48 >> 1) + *(srcS + 0x24) - 0xec, *(srcS + 0x28) - 8, valA8, tmpD1,
                        objC3, a1);
                }
            }
        }
    }

    Menu_DrawWidget_14(srcS, 0.5f, a1, 0);
    return (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(srcS);
}
