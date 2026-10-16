#include "004252E0-Menu_DrawWidget_15.h"
/* 0x004252e0 Menu_DrawWidget_15 full linked: callers=1 callees=2 */
int32_t* Menu_DrawWidget_15(void* a1)

{
    int32_t* result;

    if (!*(a1 + 0xa8))
    {
        result = *(a1 + 0x120);

        if (result)
        {
            if (*result)
            {
                *(a1 + 0xb2) = 1;
                return result;
            }

            *(a1 + 0xb2) = 0;
        }
    }
    else
    {
        result = sub_4e6fa0(a1 + 0xb8);
        *(a1 + 0xb2) = result;

        if (result)
            return sub_4e6d60(a1 + 0xb8);
    }

    return result;
}
