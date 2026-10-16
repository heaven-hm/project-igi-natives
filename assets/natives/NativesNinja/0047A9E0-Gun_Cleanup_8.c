#include "0047A9E0-Gun_Cleanup_8.h"
/* 0x0047a9e0 Gun_Cleanup_8 full linked: callers=0 callees=2 */
int32_t sub_47a9e0(void* a1, int32_t a2)

{
    char result = *(a1 + 0xf1);

    if (!result)
    {
        result = *(a1 + 0xf4);

        if (result)
        {
            result = *(a1 + 0xf0);

            if (!result)
            {
                result =
                    (*(((sub_4cea10() * 0x180 + sub_4c48c0()) << 2) + &g_a96ae0))(a1, a2);
                *(a1 + 0xf0) = 1;
            }
        }
    }

    return result;
}
