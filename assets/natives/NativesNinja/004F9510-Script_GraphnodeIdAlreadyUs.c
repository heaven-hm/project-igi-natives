#include "004F9510-Script_GraphnodeIdAlreadyUs.h"
/* 0x004f9510 Script_GraphnodeIdAlreadyUs full linked: callers=2 callees=9 */
int32_t* sub_4f9510(void* a1, int32_t a2, int32_t a3, int32_t a4, float a5, int32_t a6, int32_t a7)

{
    if (a2 >= 0x3e8)
        return 0;

    if (a2 >= *(a1 + 0x58))
        sub_4f9620(a1, a2);

    if (!sub_4f9720(a1, a2))
    {
        int32_t eax_2 = sub_4f94d0(a1);
        int32_t ecx = *(a1 + 0x6c);
        void* ebx_1 = eax_2 * a2;
        long double x87_r7 = a5;
        *(ebx_1 + ecx + 0x28) = x87_r7 + x87_r7;
        int32_t edi = a7;
        int32_t* result = ebx_1 + ecx;
        result[9] = a5;
        result[8] = a4;
        int32_t i = 0xffffffff;
        *result = a2;
        result[0xb] = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi;
            edi += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_2 = ~i;
        int32_t esi_2;
        int32_t edi_3;
        edi_3 = memcpy(&result[0xd], edi - ecx_2, ecx_2 & 0xfffffffc);
        memcpy(edi_3, esi_2, ecx_2 & 3);
        memcpy(&result[2], a3, 0x18);
        result[0x4d] = a1;
        result[0xc] = sub_4b8770(&result[0xd]);
        result[0x4e] = a6;
        int32_t eax_6 = 0;
        __builtin_memset(&result[0x4f], 0, 0x100);
        eax_6 = g_54e36f;
        int32_t eax_7 = 0;
        eax_7 = *(a1 + 0x1c);
        int32_t eax_8 = *(((eax_6 * 0x180 + eax_7) << 2) + &g_a96ae0);

        if (eax_8)
            eax_8(a1, result);

        *(a1 + 0x5c) += 1;
        return result;
    }

    Error_Show("GRAPHNODE ID ALREADY USED");

    while (true)
        /* nop */
}
