#include "00507E90-Physics_ApplyImpulse_6.h"
/* 0x00507e90 Physics_ApplyImpulse_6 full linked: callers=1 callees=2 */
int32_t sub_507e90(int32_t* a1, int32_t a2)

{
    *a1 = a2;
    __builtin_memset(&a1[1], 0, 0x1c);
    __builtin_memset(&a1[8], 0, 0x40);
    return 0;
}
