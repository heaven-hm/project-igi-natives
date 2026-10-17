// IGI native provenance: Config_Moveleft - 0x00406280 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00406280-Config_Moveleft.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_Moveleft.h"
int32_t Config_Moveleft(int32_t context, int32_t* param_2, void** param_3)

{
    int32_t result = context;

    if (param_3)
        *param_3 = &"MoveLeft"[result * 4];

    if (param_2)
    {
        result *= 9;
        *param_2 = *((result << 2) + &g_536578);
    }

    return result;
}
