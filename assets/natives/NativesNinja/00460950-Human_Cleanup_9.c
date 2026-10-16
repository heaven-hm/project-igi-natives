#include "00460950-Human_Cleanup_9.h"
/* 0x00460950 Human_Cleanup_9 full linked: callers=0 callees=2 */
int32_t sub_460950(void* a1, int32_t a2)

{
    char result = *(a1 + 0xcf6);

    if (result)
        return result;

    *(a1 + 0xcf6) = 1;
    return (*(((sub_4cea10() * 0x180 + sub_4d9610()) << 2) + &g_a96ae0))(a1, a2);
}
