// IGI native provenance: VehiclePhysics_ExecutePipeline_432C10 - 0x00432C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00432C10-VehiclePhysics_ExecutePipeline_432C10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ExecutePipeline_432C10.h"

void* VehiclePhysics_ExecutePipeline_432C10(void* arg1, uint32_t arg2)

{
    int32_t* ecx_1 = arg2;
    *(*ecx_1 + 4) = 0;
    **ecx_1 = 0;

    if (!(0x80 & g_c28cff) && !(g_c28c7f & 0x80))
    {
        int32_t eax_2 = 0;
        int32_t ebx_1 = 0;
        eax_2 = g_c28d2d;
        ebx_1 = g_c28d2f;
        int32_t ebx_4 = 0;
        *(*ecx_1 + 4) = (ebx_1 >> 7) - (eax_2 >> 7);
        ebx_4 = g_c28d32;
        int32_t eax_5 = 0;
        eax_5 = g_c28d2a;
        **ecx_1 = (ebx_4 >> 7) - (eax_5 >> 7);
    }

    int32_t eax_8 = 0;
    int32_t ebx_7 = 0;
    eax_8 = data_c28c8e;
    ebx_7 = data_c28c8f;
    *(*ecx_1 + 8) = (ebx_7 >> 7) - (eax_8 >> 7);
    *(*ecx_1 + 0xc) = 0xbf800000;
    int16_t eax_12;
    eax_12 = g_c28c7f;

    if (!(0x80 & eax_12) && !(g_c28cff & 0x80))
    {
        if (data_c28c8b & 0x80)
            *(*ecx_1 + 0xc) = 0;

        if (g_c28c64 & 0x80)
            __builtin_strncpy(*ecx_1 + 0xc, "=\nW?", 4);

        if (g_c28c65 & 0x80)
            *(*ecx_1 + 0xc) = 0x3f6147ae;

        if (g_c28c66 & 0x80)
            *(*ecx_1 + 0xc) = 0x3f6b851f;

        if (g_c28c67 & 0x80)
            *(*ecx_1 + 0xc) = 0x3f75c28f;

        if (g_c28c68 & 0x80)
            *(*ecx_1 + 0xc) = 0x3f800000;

        if (g_c28c69 & 0x80)
            *(*ecx_1 + 0xc) = 0x3f851eb8;

        if (g_c28c6a & 0x80)
            *(*ecx_1 + 0xc) = 0x3f8a3d71;

        if (g_c28c6b & 0x80)
            *(*ecx_1 + 0xc) = 0x3f8f5c29;

        if (g_c28c6c & 0x80)
            *(*ecx_1 + 0xc) = 0x3f947ae1;

        if (g_c28c6d & 0x80)
            *(*ecx_1 + 0xc) = 0x3f99999a;

        eax_12 = g_c28c93;

        if (0x80 & eax_12 && !(g_c28d93 & 0x80))
        {
            long double x87_r7_5 = *(arg1 + 0x730) - 0.01f;
            long double x87_r6_1 = 0.80000000000000004f;
            x87_r6_1 - x87_r7_5;

            if (!(*(&((x87_r6_1 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                x87_r7_5 = 0.80000000000000004f;

            *(*ecx_1 + 0xc) = x87_r7_5;
        }

        if (data_c28c94 & 0x80 && !(data_c28d94 & 0x80))
        {
            long double x87_r7_8 = *(arg1 + 0x730) + 0.01f;
            long double x87_r6_2 = 1.25f;
            x87_r6_2 - x87_r7_8;

            if (*(&((x87_r6_2 < x87_r7_8 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_8) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_8 = 1.25f;

            *(*ecx_1 + 0xc) = x87_r7_8;
        }
    }

    void* result = *ecx_1;
    *(result + 0x10) = 0xc0000000;
    result = g_c28c80;

    if (0x80 & result)
    {
        if (data_c28c8b & 0x80 && !(data_c28d8b & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0xbf800000;
        }

        if (g_c28c64 & 0x80 && !(data_c28d64 & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0x3f800000;
        }

        if (g_c28c65 & 0x80 && !(data_c28d65 & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0x40000000;
        }

        if (g_c28c66 & 0x80 && !(data_c28d66 & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0x40400000;
        }

        if (g_c28c67 & 0x80 && !(data_c28d67 & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0x40800000;
        }

        if (g_c28c68 & 0x80 && !(data_c28d68 & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0x40a00000;
        }

        if (g_c28c69 & 0x80 && !(data_c28d69 & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0x40c00000;
        }

        if (g_c28c6a & 0x80 && !(data_c28d6a & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0x40e00000;
        }

        if (g_c28c6b & 0x80 && !(data_c28d6b & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0x41000000;
        }

        if (g_c28c6c & 0x80 && !(data_c28d6c & 0x80))
        {
            result = *ecx_1;
            *(result + 0x10) = 0x41100000;
        }

        if (g_c28c6d & 0x80 && !(data_c28d6d & 0x80))
            *(*ecx_1 + 0x10) = 0;
    }

    return result;
}
