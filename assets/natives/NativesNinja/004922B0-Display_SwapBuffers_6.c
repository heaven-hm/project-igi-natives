#include "004922B0-Display_SwapBuffers_6.h"
/* 0x004922b0 Display_SwapBuffers_6 full linked: callers=0 callees=5 */
int32_t __stdcall sub_4922b0(char* a1, int32_t* a2 @ 0xc, int32_t* a3)

{
    if (*a3 == 1)
    {
        char* eax_1 = a3[2];
        char* edi_1 = a1;
        char* eax_2;
        int32_t eax_3;

        if (eax_1)
        {
            eax_2 = sub_4a5bb0(edi_1, eax_1);
            eax_3 = -(eax_2);
        }

        if (!eax_1 || -((eax_3 - eax_3)))
        {
            int32_t i = 0xffffffff;
            void* edx_2 = a3[5] + *a3[6] * 0x668;

            while (i)
            {
                bool cond:0_1 = 0 != *edi_1;
                edi_1 = &edi_1[1];
                i -= 1;

                if (!cond:0_1)
                    break;
            }

            int32_t ecx_2 = ~i;
            int32_t esi_2;
            int32_t edi_4;
            edi_4 = memcpy(edx_2 + 0x4f8, edi_1 - ecx_2, ecx_2 & 0xfffffffc);
            memcpy(edi_4, esi_2, ecx_2 & 3);
            memcpy(edx_2 + 0x578, a2, 0xec);
            memcpy(edx_2, &a3[9], 0x4f8);
            *(edx_2 + 0x664) = *a2 >> 0x13 & 1;
            int32_t* eax_12 = a3[6];
            *eax_12 += 1;

            if (a3[2])
                return 0;
        }
    }

    return 1;
}
