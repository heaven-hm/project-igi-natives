// IGI native provenance: VehiclePhysics_ExecutePipeline_42F8A0 - 0x0042F8A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042F8A0-VehiclePhysics_ExecutePipeline_42F8A0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ExecutePipeline_42F8A0.h"

void* VehiclePhysics_ExecutePipeline_42F8A0(void* arg1, uint32_t arg2)

{
    int32_t* ecx_1 = arg2;
    **ecx_1 = 0;

    if (!(0x80 & g_c28c7f) && !(g_c28cff & 0x80))
    {
        int32_t eax_2 = 0;
        int32_t ebx_1 = 0;
        eax_2 = g_c28d2d;
        ebx_1 = g_c28d2f;
        **ecx_1 = (ebx_1 >> 7) - (eax_2 >> 7);
    }

    *(*ecx_1 + 4) = 0xbf800000;
    int16_t eax_6;
    eax_6 = data_c28c8b;

    if (0x80 & eax_6)
        *(*ecx_1 + 4) = 0;

    if (g_c28c64 & 0x80)
        *(*ecx_1 + 4) = 0xbe800000;

    if (g_c28c65 & 0x80)
        *(*ecx_1 + 4) = 0xbe000000;

    if (g_c28c66 & 0x80)
        *(*ecx_1 + 4) = 0x3e000000;

    if (g_c28c67 & 0x80)
        *(*ecx_1 + 4) = 0x3e800000;

    if (g_c28c68 & 0x80)
        *(*ecx_1 + 4) = 0x3ec00000;

    if (g_c28c69 & 0x80)
        *(*ecx_1 + 4) = 0x3f000000;

    if (g_c28c6a & 0x80)
        *(*ecx_1 + 4) = 0x3f200000;

    if (g_c28c6b & 0x80)
        *(*ecx_1 + 4) = 0x3f400000;

    if (g_c28c6c & 0x80)
        *(*ecx_1 + 4) = 0x3f600000;

    if (g_c28c6d & 0x80)
        *(*ecx_1 + 4) = 0x3f800000;

    eax_6 = g_c28c93;

    if (0x80 & eax_6 && !(g_c28d93 & 0x80))
    {
        long double x87_r7_3 = *(arg1 + 0x730) - 0.01f;
        long double x87_r6_1 = 0.0f;
        x87_r6_1 - x87_r7_3;

        if (!(*(&((x87_r6_1 < x87_r7_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_3 = 0.0f;

        *(*ecx_1 + 4) = x87_r7_3;
    }

    if (data_c28c94 & 0x80 && !(data_c28d94 & 0x80))
    {
        long double x87_r7_6 = *(arg1 + 0x730) + 0.01f;
        long double x87_r6_2 = 1.0f;
        x87_r6_2 - x87_r7_6;

        if (*(&((x87_r6_2 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_6 = 1.0f;

        *(*ecx_1 + 4) = x87_r7_6;
    }

    *(*ecx_1 + 0xc) = 0xbf800000;

    if (0x80 & g_c28c92)
        *(*ecx_1 + 0xc) = 0x3f800000;

    void* result = *ecx_1;
    *(result + 0x10) = 0xbf800000;
    result = data_c28c88;

    if (0x80 & result && !(data_c28d88 & 0x80))
        *(*ecx_1 + 0x10) = 0x3f800000;

    return result;
}
