#include "00509610-AIGraph_Setup.h"
/* 0x00509610 AIGraph_Setup full linked: callers=0 callees=2 */
int32_t sub_509610(void* a1)

{
    void* eax = *(a1 + 0xb8);

    if (eax)
    {
        sub_4b0d10(eax);
        *(a1 + 0xb8) = 0;
    }

    return (*((sub_4f9210() << 2) + &g_a976e0))(a1);
}
