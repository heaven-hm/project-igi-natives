// IGI native provenance: Sound_ProcessLOCALdebugfnt - 0x004E7960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7960-Sound_ProcessLOCALdebugfnt.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_ProcessLOCALdebugfnt.h"

int32_t Sound_ProcessLOCALdebugfnt()

{
    if (g_5488d8)
        Display_ClearSurfaces_13(0xa5eb80, 1);

    if (g_a5ea75)
        DebugText_Update();

    char 5488d8_1 = g_5488d8;

    if (!5488d8_1)
        return 5488d8_1;

    /* tailcall */
    return AnimSound_LoadParameters();
}
