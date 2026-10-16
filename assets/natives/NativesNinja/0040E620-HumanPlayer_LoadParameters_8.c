#include "0040E620-HumanPlayer_LoadParameters_8.h"
/* 0x0040e620 HumanPlayer_LoadParameters_8 full linked: callers=0 callees=6 */
char HumanPlayer_LoadParameters_8(void* a1, float a2)

{
    FallLanding(a2);
    char result = *(a1 + 8);

    if (result & 4)
    {
        __builtin_memset(a2 + 0x664, 0, 0x18);

        if (result & 1)
        {
            void* eax = Table_GetAt(a2 + 0x4c4, 0);

            if (eax)
            {
                sub_4f2390(eax);
                sub_4f2070(a2 + 0x4c4, nullptr, nullptr);
                void* ecx_1 = *(a2 + 0xcfc);
                *(a2 + 0xd04) = *(a2 + 0xd08);
                *(a2 + 0xd08) = 1;
                int32_t eax_2 = *(ecx_1 + 4);
                *(a2 + 0xd0c) = eax_2;
                eax_2(a2 + 0xcf8, a2);
            }

            result = sub_4f2290(a2);
            *(a1 + 0x14) = sub_45c740;
        }
    }

    return result;
}
