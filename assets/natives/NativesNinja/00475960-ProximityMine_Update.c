#include "00475960-ProximityMine_Update.h"
/* 0x00475960 ProximityMine_Update full linked: callers=0 callees=10 */
int32_t* sub_475960(int32_t* a1 @ 0x8)

{
    void* eax_1 = *(a1[1] + 0x6e4);

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        *(a1[1] + 0x6e4) = 0;
    }

    int32_t* ebp = sub_4fe730(*a1, "Proximitymine - Time before arming (seconds)");

    if (!ebp)
        ebp = sub_4fe650(*a1, "Proximitymine - Time before arming (seconds)", 0x40000000);

    int32_t* ebx = sub_4fe730(*a1, "Proximitymine - Countdown time (seconds)");

    if (!ebx)
        ebx = sub_4fe650(*a1, "Proximitymine - Countdown time (seconds)", 0x3f000000);

    int32_t* edi = sub_4fe730(*a1, "Proximitymine - Activate radius (meters)");

    if (!edi)
        edi = sub_4fe650(*a1, "Proximitymine - Activate radius (meters)", 0x3fc00000);

    int32_t* eax_10 = sub_4fe730(*a1, "Proximitymine - Explosion radius (meters)");

    if (!eax_10)
        eax_10 = sub_4fe650(*a1, "Proximitymine - Explosion radius (meters)", 0x40400000);

    int32_t ecx_4 = ebp[0x49];
    int32_t edx_3 = ebx[0x49];
    int32_t ecx_5 = edi[0x49];
    int32_t edx_4 = eax_10[0x49];
    *(a1[1] + 0x6e4) = Mem_Alloc(0x10, 4);
    int32_t* result = *(a1[1] + 0x6e4);
    *result = ecx_4;
    result[1] = edx_3;
    result[2] = ecx_5;
    result[3] = edx_4;
    return result;
}
