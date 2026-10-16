#include "004768A0-Grenade_Action.h"
/* 0x004768a0 Grenade_Action full linked: callers=0 callees=8 */
int32_t* sub_4768a0(int32_t* a1 @ 0x8)

{
    void* eax_1 = *(a1[1] + 0x6e0);

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        *(a1[1] + 0x6e0) = 0;
    }

    int32_t* eax_2 = sub_4fe730(*a1, "Grenade - Explosion falloff (meters)");
    int32_t* ebx = eax_2;

    if (!ebx)
        ebx = sub_4fe650(*a1, "Grenade - Explosion falloff (meters)", eax_2);

    int32_t* edi = sub_4fe730(*a1, "Grenade - Explosion radius (meters)");

    if (!edi)
        edi = sub_4fe650(*a1, "Grenade - Explosion radius (meters)", 0x40a00000);

    int32_t* eax_8 = sub_4fe730(*a1, "Grenade - Explosion damage factor");

    if (!eax_8)
        eax_8 = sub_4fe650(*a1, "Grenade - Explosion damage factor", 0x3f800000);

    int32_t edx_2 = ebx[0x49];
    int32_t ecx_4 = edi[0x49];
    int32_t edx_3 = eax_8[0x49];
    *(a1[1] + 0x6e0) = Mem_Alloc(0xc, 4);
    int32_t* result = *(a1[1] + 0x6e0);
    *result = edx_3;
    result[1] = ecx_4;
    result[2] = edx_2;
    return result;
}
