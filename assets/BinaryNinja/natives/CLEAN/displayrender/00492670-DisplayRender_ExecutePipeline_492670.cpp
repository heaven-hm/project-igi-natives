// IGI native provenance: DisplayRender_ExecutePipeline_492670 - 0x00492670 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00492670-DisplayRender_ExecutePipeline_492670.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_ExecutePipeline_492670.h"

int32_t __stdcall DisplayRender_ExecutePipeline_492670(void* arg1, char* arg2)

{
    int32_t c10384_1 = g_c10384;

    if (c10384_1 >= 0x3e8)
        return 0;

    if (*(arg1 + 0x4c) & 0x40)
    {
        int32_t eax_1 = *(arg1 + 0x54);

        if ((eax_1 == 8 && *(&*(arg2 + 0x480) + 1) & 8)
            || (eax_1 == 0x10 && *(&*(arg2 + 0x480) + 1) & 4)
            || (eax_1 == 0x18 && *(&*(arg2 + 0x480) + 1) & 2))
        {
        label_4926f1:
            int32_t edx_4 = c10384_1 * 0x11c;
            __builtin_memset(edx_4 + 0xbcae20, 0, 0x11c);
            *(edx_4 + 0xbcae24) = *(arg1 + 0xc);
            *(edx_4 + &g_bcae28) = *(arg1 + 8);
            int32_t ecx_5 = data_5ca048;
            *(edx_4 + 0xbcae30) = *(arg1 + 0x54);
            char* eax_5 = &arg2[0x80];
            *(edx_4 + 0xbcae38) = ecx_5;
            *(edx_4 + 0xbcae2c) = 2;

            if (!eax_5)
                eax_5 = &g_script_ret_type;

            char* edi_2 = eax_5;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:1_1 = 0 != *edi_2;
                edi_2 = &edi_2[1];
                i -= 1;

                if (!cond:1_1)
                    break;
            }

            int32_t ecx_6 = ~i;
            int32_t esi_3;
            int32_t edi_5;
            edi_5 = __builtin_memcpy(edx_4 + 0xbcaebc, edi_2 - ecx_6, ecx_6 & 0xfffffffc);
            __builtin_memcpy(edi_5, esi_3, ecx_6 & 3);
            char* edi_6 = arg2;

            if (!arg2)
                edi_6 = &g_script_ret_type;

            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:3_1 = 0 != *edi_6;
                edi_6 = &edi_6[1];
                i_1 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t ecx_10 = ~i_1;
            int32_t esi_5;
            int32_t edi_9;
            edi_9 = __builtin_memcpy(edx_4 + 0xbcae3c, edi_6 - ecx_10, ecx_10 & 0xfffffffc);
            __builtin_memcpy(edi_9, esi_5, ecx_10 & 3);
            g_c10384 = c10384_1 + 1;
        }
        else if (eax_1 == 0x20 && *(&*(arg2 + 0x480) + 1) & 1)
            goto label_4926f1;
    }

    return 1;
}
