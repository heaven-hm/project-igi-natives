// IGI native provenance: AnimSpline_InvokeCouldnTGetSurfaceDes - 0x0050AB50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050AB50-AnimSpline_InvokeCouldnTGetSurfaceDes.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_InvokeCouldnTGetSurfaceDes.h"

int32_t AnimSpline_InvokeCouldnTGetSurfaceDes(void* arg1)

{
    int32_t* 5ca114_2 = g_5ca114;
    (*(*5ca114_2 + 0x8c))(5ca114_2, 0, 0);
    int32_t* 5ca114_1 = g_5ca114;
    (*(*5ca114_1 + 0x8c))(5ca114_1, 1, 0);
    int32_t a7c130_1 = g_a7c130;
    int32_t base_val = 0;

    if (a7c130_1 > 0)
    {
        int32_t* a7c12c_1 = g_a7c12c;
        int32_t* a7c12c_2 = a7c12c_1;

        do
        {
            int32_t a7c128_1 = g_a7c128;
            int32_t* eax_2 = *a7c12c_2 * g_a7c138 + a7c128_1;

            if (*eax_2 == arg1)
            {
                int32_t* a7c13c_1 = g_a7c13c;
                int32_t eax_3 = *(a7c13c_1 + eax_2);
                g_a7c130 = a7c130_1 - 1;

                if (eax_3 != a7c130_1 - 1)
                {
                    int32_t ebx_1 = a7c12c_1[eax_3];
                    int32_t ecx_4 = a7c12c_1[a7c130_1 - 1] * g_a7c138 + a7c128_1;
                    int32_t edx_1 = *(a7c13c_1 + ecx_4);
                    a7c12c_1[eax_3] = a7c12c_1[edx_1];
                    *(g_a7c12c + (edx_1 << 2)) = ebx_1;
                    *(g_a7c13c + ecx_4) = eax_3;
                }

                break;
            }

            base_val += 1;
            a7c12c_2 = &a7c12c_2[1];
        } while (base_val < a7c130_1);
    }

    int32_t result = *(arg1 + 0x20);

    if (result)
    {
        g_a7ceb4 -= 1;
        int32_t eax_5 = Physics_CouldnTGetSurfaceDes(*(arg1 + 0x20));
        int32_t a7ceb4_1 = g_a7ceb4;
        int32_t ecx_6 = g_a7ceb8 - eax_5;
        g_a7ceb8 = ecx_6;
        g_5ca124 = a7ceb4_1;
        g_5ca128 = ecx_6;
        int32_t performanceCount_1;
        QueryPerformanceCounter(&performanceCount_1);
        int32_t* eax_6 = *(arg1 + 0x20);
        (*(*eax_6 + 8))(eax_6);
        int32_t performanceCount;
        QueryPerformanceCounter(&performanceCount);
        int32_t performanceCount_2 = performanceCount;
        int32_t performanceCount_3 = performanceCount_1;
        int32_t edx_5 = data_a7cec0;
        int32_t eax_7 = performanceCount_2 - performanceCount_3;
        int32_t eax_8 = data_a7cec4;
        data_a7cec0 = edx_5 + eax_7;
        int32_t var_c;
        int32_t var_4;
        result = eax_8 + var_c - var_4;
        data_a7cec4 = result;
        *(arg1 + 0x20) = 0;
    }

    return result;
}
