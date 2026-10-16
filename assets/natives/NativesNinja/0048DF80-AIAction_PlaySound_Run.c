#include "0048DF80-AIAction_PlaySound_Run.h"
/* 0x0048df80 AIAction_PlaySound_Run full linked: callers=0 callees=6 */
int32_t* sub_48df80(void* a1, int32_t* a2)

{
    char* eax_1 = a2[0xa] + 8;

    if (eax_1[0x20])
    {
        sub_4e6b00(*(a1 + 0x14), eax_1);
        return sub_450ff0(a1, a2);
    }

    struct status_msg* eax_5 = sub_4e6b00(sub_4f0ee0(), eax_1);

    if (eax_5)
        sub_4e6c30(eax_5, a1 + 0x20);

    return sub_450ff0(a1, a2);
}
