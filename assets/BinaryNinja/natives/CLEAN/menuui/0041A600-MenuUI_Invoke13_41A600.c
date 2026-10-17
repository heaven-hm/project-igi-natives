// IGI native provenance: MenuUI_Invoke13_41A600 - 0x0041A600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041A600-MenuUI_Invoke13_41A600.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_41A600.h"

void* MenuUI_Invoke13_41A600(void* arg1)

{
    int32_t result_val = *(arg1 + 0x6c);

    if (!result_val)
    {
        int32_t edx_1 = *(arg1 + 0x60);
        int32_t ebx_1 = *(arg1 + 0x58);
        int32_t i = 0xffffffff;
        int32_t edi_1 = *(ebx_1 + edx_1 * 0x24 + 0x20);

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        *(arg1 + 0x74) = 0;
        int32_t eax_3 = *(arg1 + 0x68);
        *(arg1 + 0x6c) = 3;

        if (~i - 1 != eax_3)
            *(arg1 + 0x68) = eax_3 + 1;
        else
        {
            int32_t edx_2 = edx_1 + 1;

            if (edx_2 == *(arg1 + 0x5c))
                edx_2 = 0;

            int32_t ecx_3 = edx_2 * 9;
            int32_t ecx_4 = *(ebx_1 + (ecx_3 << 2) + 0x10);

            if (ecx_4 == 0xffffffff)
            {
                *(arg1 + 0x6c) = 0xfd;
                *(arg1 + 0x74) = 1;
            }
            else
                *(arg1 + 0x6c) = ecx_4 + 3;

            *(arg1 + 0x60) = edx_2;
            *(arg1 + 0x68) = 0;

            if (*(ebx_1 + (ecx_3 << 2) + 0x14))
                *(arg1 + 0x64) = edx_2;
        }
    }
    else
        *(arg1 + 0x6c) = result_val - 1;

    *(arg1 + 0x70) += 1;
    (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(arg1);
    void* result = Menu_FormatScreen_5(*(arg1 + 0x44));
    result = 0x80;
    0x80 & g_c28c7f && g_c28c8c & 0x80 && data_c28c7a & 0x80;
    return result;
}
