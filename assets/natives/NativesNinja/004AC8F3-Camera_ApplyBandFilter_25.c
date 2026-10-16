#include "004AC8F3-Camera_ApplyBandFilter_25.h"
/* 0x004ac8f3 Camera_ApplyBandFilter_25 full linked: callers=4 callees=0 */
int32_t* sub_4ac8f3(int32_t* a1, int32_t a2)

{
    int32_t* edi = a1;
    int32_t i_1 = 3;
    int32_t temp0 = a2 / 0x20;
    char temp1 = a2 % 0x20;
    a2 = 0;
    int32_t i;

    do
    {
        int32_t eax_6 = *edi;
        *edi = eax_6 >> (temp1 & 0x1f) | a2;
        edi = &edi[1];
        i = i_1;
        i_1 -= 1;
        a2 = (eax_6 & ~(0xffffffff << (temp1 & 0x1f))) << ((0x20 - temp1) & 0x1f);
    } while (i != 1);
    int32_t ebx_1 = 2;
    int32_t* ecx_5 = 8;
    int32_t* result;
    int32_t* temp3_1;

    do
    {
        if (ebx_1 < temp0)
        {
            result = a1;
            *(ecx_5 + result) = 0;
        }
        else
        {
            result = *(ecx_5 - (temp0 << 2) + a1);
            *(ecx_5 + a1) = result;
        }

        ebx_1 -= 1;
        temp3_1 = ecx_5;
        ecx_5 -= 4;
    } while (temp3_1 - 4 >= 0);
    return result;
}
