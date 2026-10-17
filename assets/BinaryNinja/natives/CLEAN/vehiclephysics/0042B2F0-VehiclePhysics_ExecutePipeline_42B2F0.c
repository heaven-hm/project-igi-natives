// IGI native provenance: VehiclePhysics_ExecutePipeline_42B2F0 - 0x0042B2F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042B2F0-VehiclePhysics_ExecutePipeline_42B2F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_ExecutePipeline_42B2F0.h"

int32_t* VehiclePhysics_ExecutePipeline_42B2F0(int32_t* arg1)

{
    int32_t* result = arg1;
    **result = 0xbf800000;

    if (!(0x80 & g_c28c7f) && !(g_c28cff & 0x80))
    {
        if (data_c28c8b & 0x80)
            **result = 0;

        if (g_c28c64 & 0x80)
            **result = 0x3dcccccd;

        if (g_c28c65 & 0x80)
            **result = 0x3e4ccccd;

        if (g_c28c66 & 0x80)
            **result = 0x3e99999a;

        if (g_c28c67 & 0x80)
            **result = 0x3ecccccd;

        if (g_c28c68 & 0x80)
            **result = 0x3f000000;

        if (g_c28c69 & 0x80)
            **result = 0x3f19999a;

        if (g_c28c6a & 0x80)
            __builtin_strncpy(*result, "333?", 4);

        if (g_c28c6b & 0x80)
            **result = 0x3f4ccccd;

        if (g_c28c6c & 0x80)
            __builtin_strncpy(*result, "fff?", 4);

        if (g_c28c6d & 0x80)
            **result = 0x3f800000;
    }

    *(*result + 4) = 0xc0000000;

    if (0x80 & g_c28c7f || g_c28cff & 0x80)
    {
        if (data_c28c8b & 0x80 && !(data_c28d8b & 0x80))
            *(*result + 4) = 0xbf800000;

        if (g_c28c64 & 0x80 && !(data_c28d64 & 0x80))
            *(*result + 4) = 0x3f800000;

        if (g_c28c65 & 0x80 && !(data_c28d65 & 0x80))
            *(*result + 4) = 0x40000000;

        if (g_c28c66 & 0x80 && !(data_c28d66 & 0x80))
            *(*result + 4) = 0x40400000;

        if (g_c28c67 & 0x80 && !(data_c28d67 & 0x80))
            *(*result + 4) = 0x40800000;

        if (g_c28c68 & 0x80 && !(data_c28d68 & 0x80))
            *(*result + 4) = 0x40a00000;

        if (g_c28c69 & 0x80 && !(data_c28d69 & 0x80))
            *(*result + 4) = 0x40c00000;

        if (g_c28c6a & 0x80 && !(data_c28d6a & 0x80))
            *(*result + 4) = 0x40e00000;

        if (g_c28c6b & 0x80 && !(data_c28d6b & 0x80))
            *(*result + 4) = 0x41000000;

        if (g_c28c6c & 0x80 && !(data_c28d6c & 0x80))
            *(*result + 4) = 0x41100000;

        if (g_c28c6d & 0x80 && !(data_c28d6d & 0x80))
        {
            result = *result;
            result[1] = 0;
        }
    }

    return result;
}
