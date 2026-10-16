#include "004F3EF0-Script_FormatString_14.h"
/* 0x004f3ef0 Script_FormatString_14 full linked: callers=3 callees=3 */
void* const sub_4f3ef0(int32_t a1, int32_t a2)

{
    void* const eax_1;

    if (a2)
        eax_1 = *(a1 + 0x20154);

    if (!a2 || a2 < eax_1)
    {
        eax_1 = nullptr;
        __builtin_memset(a1 + 0x6c, 0, 0x88);
        *(a1 + 0x20154) = 0;

        if (a2 >= 0)
        {
            int32_t i_1 = a2 + 1;
            int32_t i;

            do
            {
                eax_1 = sub_4f3f60(a1);
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }
    else if (a2 > eax_1)
    {
        int32_t ecx_2;

        do
        {
            sub_4f3f60(a1);
            ecx_2 = *(a1 + 0x20154) + 1;
            *(a1 + 0x20154) = ecx_2;
        } while (a2 > ecx_2);

        return ecx_2;
    }

    return eax_1;
}
