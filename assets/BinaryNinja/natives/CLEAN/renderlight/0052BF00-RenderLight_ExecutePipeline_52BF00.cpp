// IGI native provenance: RenderLight_ExecutePipeline_52BF00 - 0x0052BF00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052BF00-RenderLight_ExecutePipeline_52BF00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_ExecutePipeline_52BF00.h"

int32_t RenderLight_ExecutePipeline_52BF00(void* arg1, int32_t* arg2)

{
    int32_t frame_ptr = 0;
    int32_t result = arg2[1];

    if (result > 0)
    {
        void* ebx_1 = nullptr;

        do
        {
            double* ecx_2 = ebx_1 + *arg2;
            long double x87_r7_1 = *ecx_2;
            long double temp0_1 = *(arg1 + 0x108);
            x87_r7_1 - temp0_1;
            int32_t edx_1;

            edx_1 = *(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_2 = *ecx_2;
            long double temp1_1 = *(arg1 + 0x120);
            x87_r7_2 - temp1_1;
            int32_t eax_2;

            eax_2 = *(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            if (edx_1 != eax_2)
            {
                long double x87_r7_3 = ecx_2[1];
                long double temp2_1 = *(arg1 + 0x110);
                x87_r7_3 - temp2_1;
                int32_t edx_2;

                edx_2 = *(&((x87_r7_3 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_4 = ecx_2[1];
                long double temp3_1 = *(arg1 + 0x128);
                x87_r7_4 - temp3_1;
                int32_t eax_4;

                eax_4 = *(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                if (edx_2 != eax_4)
                {
                    long double x87_r7_5 = ecx_2[2];
                    long double temp4_1 = *(arg1 + 0x118);
                    x87_r7_5 - temp4_1;
                    int32_t edx_3;

                    edx_3 = *(&((x87_r7_5 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    long double x87_r7_6 = ecx_2[2];
                    long double temp5_1 = *(arg1 + 0x130);
                    x87_r7_6 - temp5_1;
                    int32_t eax_6;

                    eax_6 = *(&((x87_r7_6 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_6, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                    if (edx_3 != eax_6)
                        *(arg2 + frame_ptr + 0xc) = 0;
                }
            }

            result = arg2[1];
            frame_ptr += 1;
            ebx_1 += 0x18;
        } while (frame_ptr < result);
    }

    return result;
}
