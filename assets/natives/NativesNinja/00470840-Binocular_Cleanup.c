#include "00470840-Binocular_Cleanup.h"
/* 0x00470840 Binocular_Cleanup full linked: callers=0 callees=3 */
int32_t sub_470840(void* a1)

{
    sub_470800(a1);
    *(a1 + 0x1b0) = 0;
    *(a1 + 0x1b8) = 1;
    return (*(((sub_477bf0() + sub_4f2030() * 0x180) << 2) + &g_a96ae0))(a1);
}
