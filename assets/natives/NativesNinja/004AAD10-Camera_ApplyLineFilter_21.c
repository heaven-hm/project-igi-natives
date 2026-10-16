#include "004AAD10-Camera_ApplyLineFilter_21.h"
/* 0x004aad10 Camera_ApplyLineFilter_21 full linked: callers=4 callees=0 */
int32_t sub_4aad10(void* a1, void* a2, int32_t a3)

{
    int32_t i = a3;

    if (i)
    {
        int32_t i_2 = i;
        void* edi_1 = a1;
        void* esi_1 = edi_1;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t i_1 = -(i) + i_2;
        void* edi_2 = esi_1;
        void* esi_2 = a2;

        while (i_1)
        {
            bool cond:1_1 = *esi_2 == *edi_2;
            esi_2 += 1;
            edi_2 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        char eax_1 = *(esi_2 - 1);
        i = 0;
        char temp0_1 = *(edi_2 - 1);

        if (eax_1 > temp0_1)
            return ~i;

        if (eax_1 != temp0_1)
            return ~0xfffffffe;
    }

    return i;
}
