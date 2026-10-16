#include "00418FE0-menu_high.h"
/* 0x00418fe0 menu_high full linked: callers=3 callees=2 */
int32_t menu_high(void* a1, int32_t a2)

{
    int32_t result = 0;
    int32_t edx = *(a1 + 0xbc);

    if (edx > 0)
    {
        int32_t* ecx_1 = a1 + 0x3c;

        while (*ecx_1 != a2)
        {
            result += 1;
            ecx_1 = &ecx_1[1];

            if (result >= edx)
                return result;
        }

        if (*(a1 + 0xc0) != result)
        {
            Menu_LeaveMenus_2(a1, result);
            return sub_4e7180("menu_high", 0, 0);
        }
    }

    return result;
}
