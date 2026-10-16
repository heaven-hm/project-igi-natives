#include "Script_FormatString_19.h"
void* Script_FormatString_19(void* a1, int32_t a2)

{
    int32_t tmpD = *(a1 + 0x2ca8);

    if (tmpD)
    {
        if (tmpD - 1 != a2)
        {
            int32_t srcS2 = *(a1 + (a2 << 2) + 0x2b4c);
            *(a1 + (a2 << 2) + 0x2b4c) = *(a1 + (tmpD << 2) + 0x2b48);
            *(a1 + (*(a1 + 0x2ca8) << 2) + 0x2b48) = srcS2;
        }

        *(a1 + 0x2ca8) -= 1;
    }

    return a1;
}
