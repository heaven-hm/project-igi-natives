#include "gi_platform.h"
#include "00418FE0-menu_high.h"
int32_t menu_high(void* a1, int32_t a2)

{
    int32_t result = 0;
    int32_t tmpD = (*(int32_t*)(uintptr_t)(a1 + 0xbc));

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

        if ((*(int32_t*)(uintptr_t)(a1 + 0xc0)) != result)
        {
            Menu_LeaveMenus_2(a1, result);
            return SoundSys_AttachLipsync_8("menu_high", 0, 0);
        }
    }

    return result;
}
