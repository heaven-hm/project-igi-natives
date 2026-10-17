// Original IGI.EXE function: menu_high (VA 0x00418FE0; static CFG gate PASS, CFG score 1.000).
#include "menu_high.h"
int32_t menu_high(void* a1, int32_t a2)

{
    int32_t result = 0;
    int32_t tmpD = *(a1 + 0xbc);

    if (tmpD > 0)
    {
        int32_t* objC1 = a1 + 0x3c;

        while (*objC1 != a2)
        {
            result += 1;
            objC1 = &objC1[1];

            if (result >= tmpD)
                return result;
        }

        if (*(a1 + 0xc0) != result)
        {
            Menu_LeaveMenus_2(a1, result);
            return SoundSys_AttachLipsync_8("menu_high", 0, 0);
        }
    }

    return result;
}
