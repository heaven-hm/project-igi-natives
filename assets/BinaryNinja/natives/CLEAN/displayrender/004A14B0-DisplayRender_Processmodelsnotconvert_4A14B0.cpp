// IGI native provenance: DisplayRender_Processmodelsnotconvert_4A14B0 - 0x004A14B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A14B0-DisplayRender_Processmodelsnotconvert_4A14B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Processmodelsnotconvert_4A14B0.h"

void* DisplayRender_Processmodelsnotconvert_4A14B0(void* arg1, double* arg2)

{
    void* result = arg1;
    int32_t* context_val = *(result + 0x6c);

    if (context_val)
    {
        if (context_val[0xf])
        {
            void* ecx_3 = *(*(*context_val + 0xc) + 0xc);
            long double x87_r7_4 = *(result + 0x74) * *(ecx_3 + 0x34)
                + *(result + 0x70) * *(ecx_3 + 0x30) + *(result + 0x78) * *(ecx_3 + 0x38);
            long double x87_r6_8 = *(result + 0x80) * *(ecx_3 + 0x34)
                + *(result + 0x7c) * *(ecx_3 + 0x30) + *(result + 0x84) * *(ecx_3 + 0x38);
            long double x87_r6_12 = *(result + 0x8c) * *(ecx_3 + 0x34)
                + *(result + 0x88) * *(ecx_3 + 0x30) + *(result + 0x90) * *(ecx_3 + 0x38);
            *arg2 = x87_r7_4 + *(result + 0x20);
            arg2[1] = x87_r6_8 + *(result + 0x28);
            arg2[2] = x87_r6_12 + *(result + 0x30);
            result = *(ecx_3 + 0x3c);
            arg2[3] = result;
        }
        else
        {
            void* var_10 = &context_val[5];
            Error_Show("model %s not converted");

            while (true)
                /* nop */
        }
    }

    return result;
}
