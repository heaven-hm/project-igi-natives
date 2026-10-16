#include "004609A0-Human_Cleanup_10.h"
/* 0x004609a0 Human_Cleanup_10 full linked: callers=0 callees=2 */
int32_t sub_4609a0(void* a1, int32_t a2)

{
    char result = *(a1 + 0xcf6);

    if (!result)
        return result;

    *(a1 + 0xcf6) = 0;
    return (*(((sub_4cea20() * 0x180 + sub_4d9610()) << 2) + &g_a96ae0))(a1, a2);
}
