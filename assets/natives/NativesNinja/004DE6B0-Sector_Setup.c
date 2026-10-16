#include "004DE6B0-Sector_Setup.h"
/* 0x004de6b0 Sector_Setup full linked: callers=0 callees=9 */
int32_t sub_4de6b0(uint32_t a1, int32_t* a2)

{
    sub_4c5710(a2[1], a1, 0);
    memcpy(a1 + 0x20, &a2[2], 0x18);
    memcpy(a1 + 0x70, &a2[0xe], 0x28);
    *(a1 + 0x6c) = sub_4cec10(*a2);
    struct status_msg* eax_2 = sub_4e0930(nullptr, a1);
    *(a1 + 0xe8) = eax_2;
    sub_4c4950(eax_2, a1, a1);
    memcpy(a1 + 0xf0, &a2[8], 0x18);
    memcpy(a1 + 0x108, &a2[0x18], 0x28);
    return sub_4b0b00(a1 + 0x130, 4, 0x64, 0);
}
