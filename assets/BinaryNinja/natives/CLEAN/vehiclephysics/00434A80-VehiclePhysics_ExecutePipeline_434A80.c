// IGI native provenance: VehiclePhysics_ExecutePipeline_434A80 - 0x00434A80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00434A80-VehiclePhysics_ExecutePipeline_434A80.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ExecutePipeline_434A80.h"

void* VehiclePhysics_ExecutePipeline_434A80(void* arg1, uint32_t arg2)

{
    int32_t* context_val = arg2;

    if (!(0x80 & g_c28cff) && !(g_c28c7f & 0x80))
    {
        int32_t result_val = 0;
        int32_t ebx_1 = 0;
        result_val = g_c28d2d;
        ebx_1 = g_c28d2f;
        int32_t ebx_4 = 0;
        *(*context_val + 4) = (ebx_1 >> 7) - (result_val >> 7);
        ebx_4 = g_c28d32;
        int32_t eax_3 = 0;
        eax_3 = g_c28d2a;
        **context_val = (ebx_4 >> 7) - (eax_3 >> 7);
    }

    int32_t eax_6 = 0;
    int32_t ebx_7 = 0;
    eax_6 = data_c28c8e;
    ebx_7 = data_c28c8f;
    *(*context_val + 8) = (ebx_7 >> 7) - (eax_6 >> 7);
    *(*context_val + 0xc) = 0xbf800000;
    int16_t eax_10;
    eax_10 = data_c28c8b;

    if (0x80 & eax_10)
        *(*context_val + 0xc) = 0;

    if (g_c28c64 & 0x80)
        *(*context_val + 0xc) = 0x3f4ccccd;

    if (g_c28c65 & 0x80)
        *(*context_val + 0xc) = 0x3f59999a;

    if (g_c28c66 & 0x80)
        __builtin_strncpy(*context_val + 0xc, "fff?", 4);

    if (g_c28c67 & 0x80)
        __builtin_strncpy(*context_val + 0xc, "33s?", 4);

    eax_10 = g_c28c68;

    if (0x80 & eax_10)
        *(*context_val + 0xc) = 0x3f800000;

    if (g_c28c69 & 0x80)
        *(*context_val + 0xc) = 0x3f866666;

    if (g_c28c6a & 0x80)
        *(*context_val + 0xc) = 0x3f8ccccd;

    if (g_c28c6b & 0x80)
        *(*context_val + 0xc) = 0x3f933333;

    if (g_c28c6c & 0x80)
        *(*context_val + 0xc) = 0x3f99999a;

    if (g_c28c6d & 0x80)
        *(*context_val + 0xc) = 0x3fa00000;

    eax_10 = g_c28c93;

    if (0x80 & eax_10 && !(g_c28d93 & 0x80))
    {
        long double x87_r7_5 = *(arg1 + 0x730) - 0.01f;
        long double x87_r6_1 = 0.80000000000000004f;
        x87_r6_1 - x87_r7_5;

        if (!(*(&((x87_r6_1 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_5 = 0.80000000000000004f;

        *(*context_val + 0xc) = x87_r7_5;
    }

    if (data_c28c94 & 0x80 && !(data_c28d94 & 0x80))
    {
        long double x87_r7_8 = *(arg1 + 0x730) + 0.01f;
        long double x87_r6_2 = 1.25f;
        x87_r6_2 - x87_r7_8;

        if (*(&((x87_r6_2 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_8) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_8 = 1.25f;

        *(*context_val + 0xc) = x87_r7_8;
    }

    *(*context_val + 0x14) = 0xbf800000;

    if (0x80 & g_c28c90 && !(g_c28d90 & 0x80))
        *(*context_val + 0x14) = 0x3f800000;

    *(*context_val + 0x18) = 0xbf800000;

    if (0x80 & data_c28c84 && !(data_c28d84 & 0x80))
        *(*context_val + 0x18) = 0x3f800000;

    *(*context_val + 0x1c) = 0xbf800000;

    if (0x80 & g_c28c92)
        *(*context_val + 0x1c) = 0x3f800000;

    *(*context_val + 0x20) = 0xbf800000;

    if (0x80 & data_c28c87 && !(data_c28d87 & 0x80))
        *(*context_val + 0x20) = 0x3f800000;

    void* result = *context_val;
    *(result + 0x24) = 0xbf800000;
    result = data_c28c72;

    if (0x80 & result && !(data_c28d72 & 0x80))
        *(*context_val + 0x24) = 0x3f800000;

    return result;
}
