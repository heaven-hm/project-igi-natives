// Original IGI.EXE function: Menu_PlayMusic_12 (VA 0x00423810; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_12.h"
int32_t __convention("regparm") Menu_PlayMusic_12(int32_t a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t v_4 = a3;
    int32_t valA = Config_SetResolution();
    int32_t* srcS = Config_SetGamma();
    Config_Moveleft(a4, &v_4, nullptr);
    int32_t result = 0;

    if (valA > 0)
    {
        do
        {
            if (*srcS == v_4)
                return result;

            srcS = &srcS[3];
            result += 1;
        } while (result < valA);
    }

    return 0xffffffff;
}
