#include "004F96E0-Script_ParseEnumString_23.h"
/* 0x004f96e0 Script_ParseEnumString_23 full linked: callers=3 callees=1 */
int32_t sub_4f96e0(void* a1, int32_t a2)

{
    int32_t result = *(a1 + 0x6c);

    if (result)
    {
        result = sub_4f94d0(a1);
        int32_t i_1 = a2;

        if (i_1 > 0)
        {
            int32_t* ecx_1 = nullptr;
            int32_t i;

            do
            {
                *(ecx_1 + *(a1 + 0x6c)) = 0xffffffff;
                ecx_1 += result;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }

    return result;
}
