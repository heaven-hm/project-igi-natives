// Original IGI.EXE function: TextBox_LoadParameters (VA 0x0041AE20; static CFG gate PASS, CFG score 1.000).
#include "TextBox_LoadParameters.h"
int32_t TextBox_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    if (Script_FormatString_6(a2 + 0x21f4))
    {
        Script_SpawnNewTask_7(a2 + 0x21f4, a2);
        int32_t objC1 = *(a2 + 0x21a0);
        int32_t valA1 = 0;

        if (objC1 > 0)
        {
            int32_t* tmpD1 = a2 + 0x19c;

            do
            {
                if (a1 == *tmpD1)
                {
                    *(a2 + 0x219c) = valA1;
                    break;
                }

                valA1 += 1;
                tmpD1 = &tmpD1[0x42];
            } while (valA1 < objC1);
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a2);
}
