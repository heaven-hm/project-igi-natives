#include "00476FA0-Grenade_OnEvent.h"
/* 0x00476fa0 Grenade_OnEvent full linked: callers=0 callees=2 */
struct status_msg* sub_476fa0(int32_t* a1 @ 0x8)

{
    int32_t* esi = a1;
    int32_t edi = 0;
    int32_t* edx = nullptr;
    void* ecx = *(*esi + 0x14);
    edi = *(ecx + 0x1c);
    int32_t eax_6 = *(((*g_5be3b8 * 0x180 + edi) << 2) + &g_a96ae0);

    if (eax_6)
    {
        eax_6(ecx, &a1);
        edx = a1;
    }

    return Throwable_Create(sub_4f0ee0(), esi[1], esi[2], esi[3], esi[4], esi[8], edx);
}
