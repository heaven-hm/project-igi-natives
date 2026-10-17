// IGI native provenance: DisplayRender_Invoke2_498290 - 0x00498290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00498290-DisplayRender_Invoke2_498290.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Invoke2_498290.h"

void* DisplayRender_Invoke2_498290(void* arg1)

{
    void* result = arg1;
    int32_t data_val = *(result + 0x18);
    int32_t bcaaa0_1 = g_bcaaa0;
    int32_t context_val;

    if (data_val >= 0)
    {
        context_val = bcaaa0_1 - *(result + 0x10);

        if (context_val >= data_val)
            context_val = data_val;
    }
    else
        context_val = 0;

    void* result_3 = *(result + 0x1c);
    void* result_2;

    if (result_3 >= 0)
    {
        result_2 = g_bcaaa4 - *(result + 0x14);

        if (result_2 >= result_3)
            result_2 = result_3;
    }
    else
        result_2 = nullptr;

    int32_t ebp_2 = *(result + 0x20);
    int32_t ebx_2 = g_bcaaa8 + ((*(result + 0x14) * bcaaa0_1 + *(result + 0x10)) << 2);

    if (result_2 > 0)
    {
        int32_t ecx_2 = context_val << 2;
        void* result_1 = result_2;

        while (true)
        {
            int32_t esi_4;
            int32_t edi_3;
            edi_3 = __builtin_memcpy(ebx_2, ebp_2, ecx_2 & 0xfffffffc);
            __builtin_memcpy(edi_3, esi_4, ecx_2 & 3);
            int32_t eax_1;
            int32_t edx_3;
            edx_3 = HIGHD(*(result + 0xc));
            eax_1 = LOWD(*(result + 0xc));
            ebx_2 += g_bcaaa0 << 2;
            ebp_2 += (eax_1 + (edx_3 & 3)) >> 2 << 2;
            result = result_1 - 1;
            bool cond:1_1 = result_1 != 1;
            result_1 = result;

            if (!cond:1_1)
                break;

            result = arg1;
        }
    }

    return result;
}
