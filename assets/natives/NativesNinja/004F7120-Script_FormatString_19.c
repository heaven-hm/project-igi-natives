#include "004F7120-Script_FormatString_19.h"
/* 0x004f7120 Script_FormatString_19 full linked: callers=1 callees=0 */
void* sub_4f7120(void* a1, int32_t a2)

{
    int32_t edx = *(a1 + 0x2ca8);

    if (edx)
    {
        if (edx - 1 != a2)
        {
            int32_t esi_2 = *(a1 + (a2 << 2) + 0x2b4c);
            *(a1 + (a2 << 2) + 0x2b4c) = *(a1 + (edx << 2) + 0x2b48);
            *(a1 + (*(a1 + 0x2ca8) << 2) + 0x2b48) = esi_2;
        }

        *(a1 + 0x2ca8) -= 1;
    }

    return a1;
}
