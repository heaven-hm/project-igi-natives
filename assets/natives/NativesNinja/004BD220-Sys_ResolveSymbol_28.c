#include "004BD220-Sys_ResolveSymbol_28.h"
/* 0x004bd220 Sys_ResolveSymbol_28 full linked: callers=3 callees=5 */
void** sub_4bd220(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t* __saved_ebp_1 = a1;
    int32_t* __saved_ebp = __saved_ebp_1;
    void* ecx;
    int32_t edx;
    int32_t* eax_1 = Resource_Load(&a1, edx, ecx, &a1);

    if (eax_1 && a1 >= 0x3c && *eax_1 == 0x4c && *(eax_1 + 1) == 0x4f && *(eax_1 + 2) == 0x4f
        && *(eax_1 + 3) == 0x50 && eax_1[1] == 8)
    {
        if (eax_1[2] >= 5)
        {
            int32_t ebp = a2;

            if (!ebp)
                ebp = eax_1[0xd];

            int32_t eax_4 = a3;

            if (!eax_4)
            {
                eax_4 = eax_1[0xe];
                a3 = eax_4;
            }

            if (!ebp)
                ebp = 0x800;

            if (!eax_4)
            {
                eax_4 = 0x100;
                a3 = 0x100;
            }

            uint32_t ebp_2 = (ebp + 3) >> 2;
            void* edi = ((ebp_2 + (eax_1[5] << 1) + eax_4) << 2) + 0x46c;
            void** result = Mem_Alloc(edi, 4);
            __builtin_memset(__builtin_memset(result, 0, edi & 0xfffffffc), 0, edi & 3);
            *result = eax_1[0xb] + eax_1;
            result[1] = eax_1[0xc];
            result[9] = &result[0x11b];
            result[0x11a] = eax_1;
            void* ecx_9 = &result[0x11b + ebp_2];
            result[0xa] = ecx_9;
            result[0x9a] = 0;
            void* ecx_10 = ecx_9 + (a3 << 2);
            result[0x1a] = 0;
            result[0x18] = ecx_10;
            int32_t edi_3 = eax_1[5];
            result[6] = ebp_2;
            result[7] = a3;
            result[2] = ebp_2;
            result[0x19] = ecx_10 + (edi_3 << 2);
            result[3] = a3;

            if (eax_1[5])
            {
                result[0x16] = eax_1[3] + eax_1;
                result[0x17] = eax_1[4] + eax_1;
                result[0x14] = eax_1[5];
                result[0x15] = eax_1[6];
            }

            if (eax_1[9])
            {
                result[0x10] = eax_1[7] + eax_1;
                result[0x11] = eax_1[8] + eax_1;
                result[0xe] = eax_1[9];
                result[0xf] = eax_1[0xa];
            }

            return result;
        }

        Resource_Unload(__saved_ebp_1);
    }

    return 0;
}
