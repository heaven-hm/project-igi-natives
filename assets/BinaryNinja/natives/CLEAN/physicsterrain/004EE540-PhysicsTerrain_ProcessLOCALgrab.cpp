// IGI native provenance: PhysicsTerrain_ProcessLOCALgrab - 0x004EE540 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE540-PhysicsTerrain_ProcessLOCALgrab.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_ProcessLOCALgrab.h"

int32_t PhysicsTerrain_ProcessLOCALgrab()

{
    char data_val = data_c28d17;
    char base_val = data_c28e17;

    if (0x80 & g_c28c7f && 0x80 & data_val && !(0x80 & base_val))
    {
        g_54dcbc = 0x186a0;
        g_a70c5a = 1;
    }
    else if (data_c28ca8 & 0x80 && !(data_c28da8 & 0x80))
    {
        g_54dcbc = 0x186a0;
        g_a70c5a = 1;
    }

    char result = data_c28c9a & 0x80;

    if (result && 0x80 & data_val && !(0x80 & base_val))
    {
        if (!g_a70c5b)
            g_54dcbc = 0x186a0;

        g_a70c5b = 1;
    }

    if (result && g_c28c8c & 0x80 && 0x80 & data_val && !(0x80 & base_val))
    {
        g_54dcbc = 0x186a0;
        g_a70c5b = 0;
    }

    return result;
}
