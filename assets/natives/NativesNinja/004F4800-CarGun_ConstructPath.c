#include "004F4800-CarGun_ConstructPath.h"
/* 0x004f4800 CarGun_ConstructPath full linked: callers=10 callees=2 */
int32_t* sub_4f4800(uint32_t a1)

{
    struct status_msg* eax = sub_4e0930(nullptr, a1);
    *(a1 + 0xe8) = eax;
    return sub_4c4950(eax, a1, a1);
}
