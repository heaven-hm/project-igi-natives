#include "0046E7A0-AIStationaryGunHolder_Setup.h"
/* 0x0046e7a0 AIStationaryGunHolder_Setup full linked: callers=0 callees=5 */
int32_t* sub_46e7a0(void* a1)

{
    sub_4f1340(a1 + 0x25f4);
    sub_4f1340(a1 + 0x2644);
    int32_t* eax_1 = *(a1 + 0xe8);

    if (eax_1)
        QTask_FindType(eax_1);

    sub_4c7560(*(a1 + 0x68), a1);
    return sub_489b90(a1 + 0x168);
}
