#include "00496CE0-Display_CheckCapabilities_11.h"
/* 0x00496ce0 Display_CheckCapabilities_11 full linked: callers=1 callees=5 */
int32_t sub_496ce0(char* a1, void* a2, int32_t a3)

{
    int32_t edi = 0;
    int16_t ebx = *(*(a2 + 0xc) + 0x18);
    int32_t ecx = ebx;
    int32_t eax_3;
    int32_t edx;
    edx = HIGHD(ecx * a3);
    eax_3 = LOWD(ecx * a3);
    int32_t result = (eax_3 - edx) >> 1;

    if ((*(a2 + 0x24) * ecx) & 1)
        result += 1;
    else if (a3 & 1 && ebx & 1)
    {
        edi = 1;
        result += 1;
    }

    if (result <= 0)
        return result;

    Resource_Unpack(*(a2 + 0x18), 0x5ca674, result);
    sub_4b17c0(*(a2 + 0x18));

    if (edi)
    {
        sub_4b1730(*(a2 + 0x18), 0xffffffff, 1);
        sub_4b17c0(*(a2 + 0x18));
    }

    return sub_496280(0x5ca674, a1, a3, a2 + 0x40);
}
