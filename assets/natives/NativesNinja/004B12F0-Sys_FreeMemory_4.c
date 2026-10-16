#include "004B12F0-Sys_FreeMemory_4.h"
/* 0x004b12f0 Sys_FreeMemory_4 full linked: callers=6 callees=6 */
int32_t sub_4b12f0(char* a1, void* a2)

{
    int32_t eax = QFile_DeviceIndex(a2);
    int32_t ebx = eax;

    if (ebx)
    {
        char* edi_1 = a1;
        sub_4b13a0(edi_1);
        int32_t eax_1 = 0;
        int32_t* ecx_1 = &g_9423c0;

        while (*ecx_1)
        {
            ecx_1 = &ecx_1[0x25];
            eax_1 += 1;

            if (ecx_1 >= 0x943640)
                return eax_1;
        }

        int32_t i = 0xffffffff;
        int32_t edx_2 = eax_1 * 0x94;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_3 = ~i;
        int32_t esi_3;
        int32_t edi_4;
        edi_4 = memcpy(edx_2 + &g_942330, edi_1 - ecx_3, ecx_3 & 0xfffffffc);
        memcpy(edi_4, esi_3, ecx_3 & 3);
        void* edi_5 = a2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_5;
            edi_5 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_7 = ~i_1;
        eax = ecx_7;
        int32_t esi_6;
        int32_t edi_8;
        edi_8 = memcpy(edx_2 + &g_942340, edi_5 - ecx_7, ecx_7 & 0xfffffffc);
        memcpy(edi_8, esi_6, eax & 3);
        *(edx_2 + &g_9423c0) = ebx;
    }

    return eax;
}
